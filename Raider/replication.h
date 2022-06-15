#pragma once
#include "ue4.h"

#define invptr (void*)0xffffffff
#define RELEVANCY

FNetViewer::FNetViewer(UNetConnection* InConnection)
    : Connection(InConnection)
      , InViewer(InConnection->PlayerController ? InConnection->PlayerController : InConnection->OwningActor)
      , ViewTarget(InConnection->ViewTarget)
      , ViewLocation(FVector())
      , ViewDir(FVector())
{
    /*
    
    if (!InConnection->OwningActor)
        return;

    if (!InConnection->PlayerController || (InConnection->PlayerController == InConnection->OwningActor)) return;

    */

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

float GetWorldTimeSeconds(UWorld* World)
{
    static auto GameplayStatics = GetGameplayStatics();
    return GameplayStatics->STATIC_GetTimeSeconds(World);
}

void CloseChannel(UActorChannel* Channel, int index = -1)
{
    #if 0
    if (Channel->Actor)
    {
        if (index != -1)
            Channel->Connection->OpenChannels.RemoveSingle(index);
        Channel->Actor = nullptr;
    }
	#else
    if (Channel && Channel->Actor)
	    Native::ActorChannel::Close(Channel);
	#endif
}

static FORCEINLINE bool IsActorDormant(FNetworkObjectInfo* ActorInfo, const UNetConnection* Connection)
{
    // If actor is already dormant on this channel, then skip replication entirely

    for (int i = 0; i < ActorInfo->DormantConnections.Num(); i++)
    {
        auto& DormantConnection = ActorInfo->DormantConnections[i];
 
		if (DormantConnection->InternalIndex == Connection->InternalIndex)
            return true;
    }
       
    return false;
}

void StartTickingChannel(UNetConnection* Connection, UChannel* Channel) { Connection->ChannelsToTick.Add(Channel); }

static FORCEINLINE bool ShouldActorGoDormant(AActor* Actor, const TArray<FNetViewer>& ConnectionViewers, UActorChannel* Channel, const float Time, const bool bLowNetBandwidth = false)
{
    if (Actor->NetDormancy <= ENetDormancy::DORM_Awake || !Channel) // || Channel->bPendingDormancy || Channel->Dormant)
    {
        // Either shouldn't go dormant, or is already dormant
        return false;
    }

    if (Actor->NetDormancy == ENetDormancy::DORM_DormantPartial)
    {
        for (int32 viewerIdx = 0; viewerIdx < ConnectionViewers.Num(); viewerIdx++)
        {
            // if (!Actor->GetNetDormancy(ConnectionViewers[viewerIdx].ViewLocation, ConnectionViewers[viewerIdx].ViewDir, ConnectionViewers[viewerIdx].InViewer, ConnectionViewers[viewerIdx].ViewTarget, Channel, Time, bLowNetBandwidth))
            if (!false) // GetNetDormancy just always returns false
            {
                return false;
            }
        }
    }

    return true;
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
            if (!ConnectionViewers[viewerIdx].InViewer || !ConnectionViewers[viewerIdx].ViewTarget) // this shouldn't be needed
                continue;
			
            // if (decltype(Native::Actor::IsNetRelevantFor)(Actor->Vtable[0x132])(Actor, ConnectionViewers[viewerIdx].InViewer, ConnectionViewers[viewerIdx].ViewTarget, ConnectionViewers[viewerIdx].ViewLocation))
            ConnectionViewers[viewerIdx].InViewer = ConnectionViewers[viewerIdx].ViewTarget; // TEMPORARY
            ConnectionViewers[viewerIdx].ViewLocation = ConnectionViewers[viewerIdx].InViewer->K2_GetActorLocation(); // TEMPORARY
			
            if (Native::Actor::IsNetRelevantFor(Actor, ConnectionViewers[viewerIdx].InViewer, ConnectionViewers[viewerIdx].ViewTarget, ConnectionViewers[viewerIdx].ViewLocation))
            {
                return true;
            }
        }

        return false;
    }

    int PrepConnections(UNetDriver* NetDriver)
    {
        int ReadyConnections = 0;

        for (int ConnIdx = 0; ConnIdx < NetDriver->ClientConnections.Num(); ConnIdx++)
        {
            UNetConnection* Connection = NetDriver->ClientConnections[ConnIdx];

            if (!Connection)
                continue;

            AActor* OwningActor = Connection->OwningActor;

            if (OwningActor)
            {
                ReadyConnections++;
                AActor* DesiredViewTarget = OwningActor;

                if (Connection->PlayerController)
                {
                    if (AActor* ViewTarget = Connection->PlayerController->GetViewTarget())
                    {
                        DesiredViewTarget = ViewTarget;
                    }
                }

                Connection->ViewTarget = DesiredViewTarget;

                for (int ChildIdx = 0; ChildIdx < Connection->Children.Num(); ++ChildIdx)
                {
                    UNetConnection* ChildConnection = Connection->Children[ChildIdx];
                    if (ChildConnection && ChildConnection->PlayerController && ChildConnection->ViewTarget)
                    {
                        ChildConnection->ViewTarget = DesiredViewTarget;
                    }
                }
            }
            else
            {
                Connection->ViewTarget = nullptr;

                for (int ChildIdx = 0; ChildIdx < Connection->Children.Num(); ++ChildIdx)
                {
                    UNetConnection* ChildConnection = Connection->Children[ChildIdx];
                    if (ChildConnection && ChildConnection->PlayerController && ChildConnection->ViewTarget)
                    {
                        ChildConnection->ViewTarget = nullptr;
                    }
                }
            }
        }

        return ReadyConnections;
    }

    UActorChannel* FindChannel(AActor* Actor, UNetConnection* Connection)
    {
        for (int i = 0; i < Connection->OpenChannels.Num(); i++)
        {
            auto Channel = Connection->OpenChannels[i];

            if (Channel && Channel->Class)
            {
                if (Channel->Class == UActorChannel::StaticClass())
                {
                    if (((UActorChannel*)Channel)->Actor == Actor)
                    {	
                        return ((UActorChannel*)Channel);
                    }
                }
            }
        }

        return NULL;
    }

    UNetConnection* GetOwningConnection(AActor* Actor)
    {
        for (auto Owner = Actor; Actor; Actor = Actor->GetOwner())
        {
            if (Actor->IsA(APlayerController::StaticClass()))
            {
                return ((APlayerController*)Actor)->NetConnection;
            }
        }
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

                /*
                for (int32 ViewerIndex = 0; ViewerIndex < Connection->Children.Num(); ViewerIndex++)
                {
                    if (Connection->Children[ViewerIndex]->ViewTarget)
                    {
                        ConnectionViewers.Add(FNetViewer(Connection->Children[ViewerIndex]));
                    }
                }
                */

                #endif

                if (Connection->PlayerController)
                    Native::PlayerController::SendClientAdjustment(Connection->PlayerController); // Sending adjustments to children is for splitscreen

                for (int i = 0; i < ConsiderList.size(); i++)
                {
                    auto ActorInfo = ConsiderList[i];
                    auto Actor = ActorInfo->Actor;
					
                    if (!Actor || Actor->IsA(APlayerController::StaticClass()) && Actor != Connection->PlayerController)
                        continue;

                    auto Channel = FindChannel(Actor, Connection);

                    if (!Channel)
                    {
                        #ifdef RELEVANCY
                        if (!Actor->bOnlyRelevantToOwner)
                        {
                            if (!IsActorRelevantToConnection(Actor, ConnectionViewers))
                            {
                                continue;
                            }
                        }
                        else if (Actor->bOnlyRelevantToOwner)
                        {
                            // This actor should be owned by a particular connection, see if that connection is the one passed in
                            bool bHasNullViewTarget = false;

                            auto PriorityConnection = IsActorOwnedByAndRelevantToConnection(Actor, ConnectionViewers, bHasNullViewTarget);

                            if (!PriorityConnection)
                            {
                                if (!bHasNullViewTarget && Channel) // && NetDriver->Time - Channel->RelevantTime >= RelevantTimeout )
                                {
                                    // CloseChannel(Channel);
                                }

                                // This connection doesn't own this actor
                                continue;
                            }
                        }
                        else if (true) // CVarSetNetDormancyEnabled.GetValueOnGameThread() != 0)
                        {
                            // Skip Actor if dormant
                            if (IsActorDormant(ActorInfo, Connection))
                            {
                                continue;
                            }

                            // See of actor wants to try and go dormant
                            if (ShouldActorGoDormant(Actor, ConnectionViewers, Channel, NetDriver->Time, false))
                            {
                                // Channel is marked to go dormant now once all properties have been replicated (but is not dormant yet)
                                Native::ActorChannel::StartBecomingDormant(Channel);
                            }
                        }
                        #endif
                        Channel = (UActorChannel*)(Native::NetConnection::CreateChannel(Connection, 2, true, -1));

                        if (Channel)
                            Native::ActorChannel::SetChannelActor(Channel, Actor);	
                    }

                    if (Channel && Channel->Actor)
                    {
                        #ifdef RELEVANCY
                        if (!Actor->bOnlyRelevantToOwner)
                        {
                            if (!IsActorRelevantToConnection(Actor, ConnectionViewers))
                            {
                                CloseChannel(Channel);
                                continue;
                            }
                        }
                        else
                        {
                            // This actor should be owned by a particular connection, see if that connection is the one passed in
                            bool bHasNullViewTarget = false;

                            auto PriorityConnection = IsActorOwnedByAndRelevantToConnection(Actor, ConnectionViewers, bHasNullViewTarget);

                            if (!PriorityConnection)
                            {
                                if (!bHasNullViewTarget && Channel) // && NetDriver->Time - Channel->RelevantTime >= RelevantTimeout )
                                {
                                    CloseChannel(Channel);
                                }

                                // This connection doesn't own this actor
                                continue;
                            }
                        }
                        #endif
                        static const auto Math = (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();

                        if (Native::ActorChannel::ReplicateActor(Channel))
                        {
                            const float MinOptimalDelta = 1.0f / Actor->NetUpdateFrequency;
                            const float MaxOptimalDelta = Math->STATIC_Max(1.0f / Actor->MinNetUpdateFrequency, MinOptimalDelta);
                            const float DeltaBetweenReplications = GetWorldTimeSeconds(NetDriver->World) - ConsiderList[i]->LastNetReplicateTime;

                            // Choose an optimal time, we choose 70% of the actual rate to allow frequency to go up if needed
                            ConsiderList[i]->OptimalNetUpdateDelta = Math->STATIC_Clamp(DeltaBetweenReplications * 0.7f, MinOptimalDelta, MaxOptimalDelta);
                            ConsiderList[i]->LastNetReplicateTime = GetWorldTimeSeconds(NetDriver->World);
                        }
                        else
                        {
                            // std::cout << "Failed to replicate: " << Actor->GetFullName() << '\n';
                        }
                    }
                }
            }
        }
    }
}