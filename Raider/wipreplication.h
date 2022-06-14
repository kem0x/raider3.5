#pragma once
#include "ue4.h"

// #define RELEVANCY
constexpr bool DORMANCY = true;

FNetViewer::FNetViewer(UNetConnection* InConnection)
    : Connection(InConnection)
    , InViewer(InConnection->PlayerController ? InConnection->PlayerController : InConnection->OwningActor)
    , ViewTarget(InConnection->ViewTarget)
    , ViewLocation(FVector())
    , ViewDir(FVector())
{
    if (!InConnection->OwningActor)
        return;

    if (!InConnection->PlayerController || (InConnection->PlayerController == InConnection->OwningActor))
        return;

    APlayerController* ViewingController = InConnection->PlayerController;

    // Get viewer coordinates.
    ViewLocation = ViewTarget->K2_GetActorLocation();

    if (ViewingController)
    {
        FRotator ViewRotation = ViewingController->GetControlRotation();
        Native::PlayerController::GetPlayerViewPoint(ViewingController, &ViewLocation, &ViewRotation);
        ViewDir = RotToVec(ViewRotation);
    }
}

int32 IsNetReady(UChannel* Channel, bool Saturate)
{
    // If saturation allowed, ignore queued byte count.
    /* if (NumOutRec >= RELIABLE_BUFFER - 1)
    {
        return 0;
    }
    return Connection->IsNetReady(Saturate); */
    return 1;
}

void CloseChannel(UActorChannel* Channel, int index = -1)
{
    if (Channel->Actor->IsA(APlayerController::StaticClass())) // idk man
        return;
#if 0
    if (Channel->Actor)
    {
        if (index != -1)
            Channel->Connection->OpenChannels.RemoveSingle(index);
        Channel->Actor = nullptr;
    }
#else
    Native::ActorChannel::Close(Channel);
#endif
}

float GetWorldTimeSeconds(UWorld* World)
{
    static auto GameplayStatics = GetGameplayStatics();
    return GameplayStatics->STATIC_GetTimeSeconds(World);
}

namespace Replication
{
    static FORCEINLINE bool IsActorRelevantToConnection(AActor* Actor, TArray<FNetViewer>& ConnectionViewers)
    {
        if (!Actor)
            return false;

        // Native::Actor::IsNetRelevantFor = decltype(Native::Actor::IsNetRelevantFor)(Actor->Vtable[0x132]); // this offset may be wrong

        for (int32 viewerIdx = 0; viewerIdx < ConnectionViewers.Num(); viewerIdx++)
        {
            if (!ConnectionViewers[viewerIdx].InViewer || !ConnectionViewers[viewerIdx].ViewTarget)
                continue;

            // if (decltype(Native::Actor::IsNetRelevantFor)(Actor->Vtable[0x132])(Actor, ConnectionViewers[viewerIdx].InViewer, ConnectionViewers[viewerIdx].ViewTarget, ConnectionViewers[viewerIdx].ViewLocation))
            if (Native::Actor::IsNetRelevantFor(Actor, ConnectionViewers[viewerIdx].InViewer, ConnectionViewers[viewerIdx].ViewTarget, ConnectionViewers[viewerIdx].ViewLocation))
            {
                return true;
            }
        }

        return false;
    }

    AActor* GetNetOwner(const AActor* Actor)
    {
        if (Actor->IsA(APawn::StaticClass()) || Actor->IsA(APlayerController::StaticClass()))
            return (AActor*)Actor;

        if (Actor->IsA(AOnlineBeaconClient::StaticClass()))
            return ((AOnlineBeaconClient*)Actor)->BeaconOwner;

        return Actor->Owner;
    }

    static FORCEINLINE UNetConnection* IsActorOwnedByAndRelevantToConnection(const AActor* Actor, const TArray<FNetViewer>& ConnectionViewers, bool& bOutHasNullViewTarget)
    {
        const AActor* ActorOwner = GetNetOwner(Actor);

        bOutHasNullViewTarget = false;

        for (int i = 0; i < ConnectionViewers.Num(); i++)
        {
            UNetConnection* ViewerConnection = ConnectionViewers[i].Connection;

            if (ViewerConnection->ViewTarget == nullptr)
            {
                bOutHasNullViewTarget = true;
            }

            if (ActorOwner == ViewerConnection->PlayerController || (ViewerConnection->PlayerController && ActorOwner == ViewerConnection->PlayerController->Pawn))
            // || (ViewerConnection->ViewTarget && ViewerConnection->ViewTarget->IsRelevancyOwnerFor(Actor, ActorOwner, ViewerConnection->OwningActor)))
            {
                return ViewerConnection;
            }
        }

        return nullptr;
    }

    int PrepConnections(UNetDriver* NetDriver)
    {
        int32_t NumClientsToTick = NetDriver->ClientConnections.Num();

        bool bFoundReadyConnection = false;

        for (int32 ConnIdx = 0; ConnIdx < NetDriver->ClientConnections.Num(); ConnIdx++)
        {
            UNetConnection* Connection = NetDriver->ClientConnections[ConnIdx];
            if (!Connection)
                continue;
            // check(Connection->State == USOCK_Pending || Connection->State == USOCK_Open || Connection->State == USOCK_Closed);
            // checkSlow(Connection->GetUChildConnection() == NULL);

            AActor* OwningActor = Connection->OwningActor;
            if (OwningActor) // && Connection->State == USOCK_Open && (Connection->Driver->Time - Connection->LastReceiveTime < 1.5f))
            {
                // check( World == OwningActor->GetWorld() );

                bFoundReadyConnection = true;

                // the view target is what the player controller is looking at OR the owning actor itself when using beacons
                AActor* DesiredViewTarget = OwningActor;

                if (Connection->PlayerController)
                {
                    if (AActor* ViewTarget = Connection->PlayerController->GetViewTarget())
                    {
                        // if (ViewTarget->GetWorld())
                        {
                            // It is safe to use the player controller's view target.
                            DesiredViewTarget = ViewTarget;
                        }
                    }
                }

                Connection->ViewTarget = DesiredViewTarget;

                for (int32 ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
                {
                    UNetConnection* Child = Connection->Children[ChildIdx];
                    APlayerController* ChildPlayerController = Child->PlayerController;

                    if (ChildPlayerController)
                    {
                        Child->ViewTarget = ChildPlayerController->GetViewTarget();
                    }
                    else
                    {
                        Child->ViewTarget = nullptr;
                    }
                }
            }

            else
            {
                Connection->ViewTarget = nullptr;
                for (int32 ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
                {
                    Connection->Children[ChildIdx]->ViewTarget = nullptr;
                }
            }
        }

        return bFoundReadyConnection ? NumClientsToTick : 0;
    }

    UActorChannel* FindActorChannel(AActor* Actor, UNetConnection* Connection)
    {
        for (int i = 0; i < Connection->OpenChannels.Num(); i++)
        {
            auto Channel = Connection->OpenChannels[i];

            if (Channel)
            {
                if (Channel->Class == UActorChannel::StaticClass())
                {
                    if (((UActorChannel*)Channel)->Actor == Actor)
                        return ((UActorChannel*)Channel);
                }
            }
        }

        // return Connection->ActorChannels.FindRef(Actor);

        return nullptr;
    }

    void BuildConsiderList(UNetDriver* NetDriver, std::vector<FNetworkObjectInfo*>& OutConsiderList)
    {
        static auto World = NetDriver->World;

        int32 NumInitiallyDormant = 0;

        TArray<TSharedPtr<FNetworkObjectInfo>> ActorsToRemove;

        auto& List = GetNetworkObjectList(NetDriver).ActiveNetworkObjects;

        for (auto& Object : List)
        {
            auto ActorInfo = Object.Get();

            if (!ActorInfo->bPendingNetUpdate && GetWorldTimeSeconds(World) <= ActorInfo->NextUpdateTime)
                continue; // It's not time for this actor to perform an update, skip it

            AActor* Actor = ActorInfo->Actor;

            if (!Actor || Actor->RemoteRole == ENetRole::ROLE_None || Actor->bActorIsBeingDestroyed)
            {
                ActorsToRemove.Add(Object);
                continue;
            }

            if (Actor->NetDriverName != NetDriver->NetDriverName)
            {
                printf("[WARNING] Actor is in the wrong Network Actors list!\n");
                // don't ask me why epic doesn't remove from the list.
                continue;
            }

            // if ( !Actor->IsActorInitialized() )

            // 		ULevel* Level = Actor->GetLevel();
            // if (Level->HasVisibilityChangeRequestPending() || Level->bIsAssociatingLevel)

            if (Actor->NetDormancy == ENetDormancy::DORM_Initial && Actor->bNetStartup)
            {
                NumInitiallyDormant++;
                ActorsToRemove.Add(Object);
                continue;
            }

            // checkSlow( Actor->NeedsLoadForClient() ); // We have no business sending this unless the client can load
            // checkSlow(World == Actor->GetWorld());

            if (ActorInfo->LastNetReplicateTime == 0) // this means the actor has not been replicated yet
            {
                ActorInfo->LastNetReplicateTime = GetWorldTimeSeconds(World);
                ActorInfo->OptimalNetUpdateDelta = 1.0f / Actor->NetUpdateFrequency;
            }

            const float ScaleDownStartTime = 2.0f;
            const float ScaleDownTimeRange = 5.0f;

            const float LastReplicateDelta = GetWorldTimeSeconds(World) - ActorInfo->LastNetReplicateTime;

            static auto Math = (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();

            if (LastReplicateDelta > ScaleDownStartTime)
            {
                if (Actor->MinNetUpdateFrequency == 0.0f)
                {
                    Actor->MinNetUpdateFrequency = 2.0f;
                }

                // Calculate min delta (max rate actor will update), and max delta (slowest rate actor will update)
                const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency; // Don't go faster than NetUpdateFrequency
                const float MaxOptimalDelta = Math->STATIC_Max(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta); // Don't go slower than MinNetUpdateFrequency (or NetUpdateFrequency if it's slower)

                // Interpolate between MinOptimalDelta/MaxOptimalDelta based on how long it's been since this actor actually sent anything
                const float Alpha = Math->STATIC_Clamp((LastReplicateDelta - ScaleDownStartTime) / ScaleDownTimeRange, 0.0f, 1.0f);
                ActorInfo->OptimalNetUpdateDelta = Math->STATIC_Lerp(MinOptimalDelta, MaxOptimalDelta, Alpha);
            }

            if (!ActorInfo->bPendingNetUpdate)
            {
                // UE_LOG(LogNetTraffic, Log, TEXT("actor %s requesting new net update, time: %2.3f"), *Actor->GetName(), World->TimeSeconds);

                const static bool bUseAdapativeNetFrequency = true;
                const float NextUpdateDelta = bUseAdapativeNetFrequency ? ActorInfo->OptimalNetUpdateDelta : 1.0f / Actor->NetUpdateFrequency;

                const static float ServerTickTime = 1.0f;
                ActorInfo->NextUpdateTime = GetWorldTimeSeconds(World) + Math->STATIC_RandomFloat() * ServerTickTime + NextUpdateDelta;

                ActorInfo->LastNetUpdateTime = NetDriver->Time;
            }

            ActorInfo->bPendingNetUpdate = false;

            OutConsiderList.push_back(ActorInfo);

            Native::Actor::CallPreReplication(Actor, NetDriver);
        }

        for (int i = 0; i < ActorsToRemove.Num(); i++)
        {
            auto& Actor = ActorsToRemove[i];

            // REMINDER: To add this back once everything is working.

            // GetNetworkObjectList(NetDriver).ActiveNetworkObjects.Remove(Actor);
            // GetNetworkObjectList(NetDriver).AllNetworkObjects.Remove(Actor);
            // RemoveNetworkActor(Actor);
        }
    }

    void ServerReplicateActors(UNetDriver* NetDriver)
    {
        ++GetReplicationFrame(NetDriver);

        auto NumClientsToTick = PrepConnections(NetDriver);

        if (NumClientsToTick == 0)
            return;

        std::vector<FNetworkObjectInfo*> ConsiderList;
        ConsiderList.reserve(GetNetworkObjectList(NetDriver).ActiveNetworkObjects.Num());
        BuildConsiderList(NetDriver, ConsiderList);

        for (int i = 0; i < NetDriver->ClientConnections.Num(); i++)
        {
            auto Connection = NetDriver->ClientConnections[i];

            if (!Connection)
                continue;

            if (i >= NumClientsToTick)
                break; // Only tick on ready connections

            else if (Connection->ViewTarget)
            {
#ifdef RELEVANCY
                auto ConnectionViewers = GetWorld()->PersistentLevel->WorldSettings->ReplicationViewers;
                ConnectionViewers.Reset();
                ConnectionViewers.Add(FNetViewer(Connection));

                for (int32 ViewerIndex = 0; ViewerIndex < Connection->Children.Num(); ViewerIndex++)
                {
                    if (Connection->Children[ViewerIndex]->ViewTarget)
                    {
                        ConnectionViewers.Add(FNetViewer(Connection->Children[ViewerIndex]));
                    }
                }

#endif

                if (Connection->PlayerController)
                    Native::PlayerController::SendClientAdjustment(Connection->PlayerController); // Sending adjustments to children is for splitscreen

                for (int i = 0; i < ConsiderList.size(); i++)
                {
                    auto ActorInfo = ConsiderList[i];
                    AActor* Actor = ActorInfo->Actor;

                    if (!Actor || Actor->IsA(APlayerController::StaticClass()) && Actor != Connection->PlayerController) // You don't need this with relevancy implemented I think
                        continue;

                    std::cout << "Replicating: " << Actor->GetFullName() << '\n';

                    UActorChannel* Channel = FindActorChannel(Actor, Connection);

                    UNetConnection* PriorityConnection = Connection;

#ifdef RELEVANCY

                    if (!Channel)
                    {
                        // if (!IsLevelInitializedForActor(Actor, Connection))
                        //  continue;

                        if (!IsActorRelevantToConnection(Actor, ConnectionViewers))
                        {
                            continue;
                        }
                    }

#endif

                    if (Actor->bOnlyRelevantToOwner)
                    {
#ifdef RELEVANCY
                        // This actor should be owned by a particular connection, see if that connection is the one passed in
                        bool bHasNullViewTarget = false;

                        PriorityConnection = IsActorOwnedByAndRelevantToConnection(Actor, ConnectionViewers, bHasNullViewTarget);

                        if (!PriorityConnection)
                        {
                            if (!bHasNullViewTarget && Channel) // && NetDriver->Time - Channel->RelevantTime >= RelevantTimeout )
                            {
                                CloseChanel(Channel);
                            }

                            // This connection doesn't own this actor
                            continue;
                        }

#endif
                    }

                    else if constexpr (DORMANCY)
                    {
                        /*
                        // Skip Actor if dormant
                                        if ( IsActorDormant( ActorInfo, WeakConnection ) )
                                        {
                                                continue;
                                        }

                                        // See of actor wants to try and go dormant
                                        if ( ShouldActorGoDormant( Actor, ConnectionViewers, Channel, Time, bLowNetBandwidth ) )
                                        {
                                                // Channel is marked to go dormant now once all properties have been replicated (but is not dormant yet)
                                                Channel->StartBecomingDormant();
                                        }
                        */
                    }

                    /* if (Actor->NetTag != NetTag)
                    {
                        // UE_LOG(LogNetTraffic, Log, TEXT("Consider %s alwaysrelevant %d frequency %f "), *Actor->GetName(), Actor->bAlwaysRelevant, Actor->NetUpdateFrequency);

                        Actor->NetTag = NetTag;

                        OutPriorityList[FinalSortedCount] = FActorPriority(PriorityConnection, Channel, ActorInfo, ConnectionViewers, bLowNetBandwidth);
                        OutPriorityActors[FinalSortedCount] = OutPriorityList + FinalSortedCount;

                        FinalSortedCount++;
                    } */

                    if (!Channel || Channel->Actor) // my implementation of processprioritizedactors, without priority
                    {
                        bool bIsRelevant = false;

                        const bool bLevelInitializedForActor = true; // IsLevelInitializedForActor(Actor, Connection);

                        // only check visibility on already visible actors every 1.0 + 0.5R seconds
                        // bTearOff actors should never be checked
                        if (bLevelInitializedForActor)
                        {
                            if (!Actor->bTearOff && (!Channel)) // || NetDriver->Time - Channel->RelevantTime > 1.f))
                            {
#ifdef RELEVANCY
                                if (IsActorRelevantToConnection(Actor, ConnectionViewers))
                                {
                                    bIsRelevant = true;
                                }
#else
                                bIsRelevant = true;
#endif
                            }
                        }

                        const bool bIsRecentlyRelevant = bIsRelevant /* || (Channel && NetDriver->Time - Channel->RelevantTime < NetDriver->RelevantTimeout) */ || ActorInfo->bForceRelevantNextUpdate;

                        ActorInfo->bForceRelevantNextUpdate = false;

                        if (bIsRecentlyRelevant)
                        {
                            // FinalRelevantCount++;

                            static const auto Math = (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();

                            if (!Channel) // && GuidCache->SupportsObject(Actor->GetClass()) && GuidCache->SupportsObject(Actor->IsNetStartupActor() ? Actor : Actor->GetArchetype()))
                            {
                                if (bLevelInitializedForActor)
                                {
                                    // Create a new channel for this actor.
                                    Channel = (UActorChannel*)(Native::NetConnection::CreateChannel(Connection, 2, true, -1));

                                    if (Channel)
                                        Native::ActorChannel::SetChannelActor(Channel, Actor);
                                }
                                // if we couldn't replicate it for a reason that should be temporary, and this Actor is updated very infrequently, make sure we update it again soon
                                else if (Actor->NetUpdateFrequency < 1.0f)
                                {
                                    // UE_LOG(LogNetTraffic, Log, TEXT("Unable to replicate %s"), *Actor->GetName());
                                    ActorInfo->NextUpdateTime = GetWorldTimeSeconds(NetDriver->World) + 0.2f * Math->STATIC_RandomFloat();
                                }
                            }

                            if (Channel)
                            {
                                if (bIsRelevant)
                                {
                                    // Channel->RelevantTime = NetDriver->Time + 0.5f * Math->STATIC_RandomFloat();
                                }

                                if (IsNetReady(Channel, 0))
                                {
                                    if (Native::ActorChannel::ReplicateActor(Channel))
                                    {
                                        const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;
                                        const float MaxOptimalDelta = Math->STATIC_Max(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta);
                                        const float DeltaBetweenReplications = GetWorldTimeSeconds(NetDriver->World) - ActorInfo->LastNetReplicateTime;

                                        // Choose an optimal time, we choose 70% of the actual rate to allow frequency to go up if needed
                                        ActorInfo->OptimalNetUpdateDelta = Math->STATIC_Clamp(DeltaBetweenReplications * 0.7f, MinOptimalDelta, MaxOptimalDelta);
                                        ActorInfo->LastNetReplicateTime = GetWorldTimeSeconds(NetDriver->World);
                                    }
                                }
                                else
                                {
                                    Actor->ForceNetUpdate();
                                }
                            }
                        }

                        if ((!bIsRecentlyRelevant || Actor->bTearOff) && Channel)
                        {
                            // Non startup (map) actors have their channels closed immediately, which destroys them.
                            // Startup actors get to keep their channels open.

                            // Fixme: this should be a setting
                            if (!bLevelInitializedForActor || !Actor->bNetStartup)
                            {
                                // UE_LOG(LogNetTraffic, Log, TEXT("- Closing channel for no longer relevant actor %s"), *Actor->GetName());
                                // CloseChannel(Channel); // this like breaks everything idk why
                            }
                        }
                    }
                }
            }
        }

        // return FinalSortedCount;
    }
}
