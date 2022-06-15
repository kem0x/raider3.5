#pragma once
#include "ue4.h"

#define invptr (void*)0xffffffff

FNetViewer::FNetViewer(UNetConnection* InConnection)
    : Connection(InConnection)
    , InViewer(InConnection->PlayerController ? InConnection->PlayerController : InConnection->OwningActor)
    , ViewTarget(InConnection->ViewTarget)
    , ViewLocation(FVector())
    , ViewDir(FVector())
{
    if (!InConnection->OwningActor)
        return;

    // if (!InConnection->PlayerController || (InConnection->PlayerController == InConnection->OwningActor)) return;

    APlayerController* ViewingController = InConnection->PlayerController;

    // Get viewer coordinates.
    ViewLocation = ViewTarget->K2_GetActorLocation();

    if (ViewingController)
    {
        FRotator ViewRotation = ViewingController->GetControlRotation();
        // Native::PlayerController::GetPlayerViewPoint(ViewingController, &ViewLocation, &ViewRotation); // git just deleted the pattern thanks
        ViewDir = RotToVec(ViewRotation);
    }
}

namespace Replication
{
    static FORCEINLINE bool IsActorRelevantToConnection(AActor* Actor, TArray<FNetViewer>& ConnectionViewers)
    {
        // return true;
        // Native::Actor::IsNetRelevantFor = decltype(Native::Actor::IsNetRelevantFor)(Actor->Vtable[0x149]); // this offset is probably wrong

        for (int32 viewerIdx = 0; viewerIdx < ConnectionViewers.Num(); viewerIdx++)
        {
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
                        return ((UActorChannel*)Channel);
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

    void BuildConsiderList(UNetDriver* NetDriver, std::vector<AActor*>& OutConsiderList)
    {
        static auto World = NetDriver->World;

        if (!World || !&OutConsiderList || !NetDriver)
            return;

        auto& List = GetNetworkObjectList(NetDriver).ActiveNetworkObjects;

        for (auto& Object : List)
        {
            auto Actor = Object.Get()->Actor;

            if (!Actor || Actor->RemoteRole == ENetRole::ROLE_None || Actor->bActorIsBeingDestroyed)
                continue;

            if (Actor->NetDormancy == ENetDormancy::DORM_Initial && Actor->bNetStartup)
                continue;

            if (Actor->Name.ComparisonIndex != 0)
            {
                Native::Actor::CallPreReplication(Actor, NetDriver);
                OutConsiderList.push_back(Actor);
            }
        }
    }

    void ServerReplicateActors(UNetDriver* NetDriver)
    {
        ++GetReplicationFrame(NetDriver);

        auto NumClientsToTick = PrepConnections(NetDriver);

        if (NumClientsToTick == 0)
            return;

        std::vector<AActor*> ConsiderList;
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
                /*
                static auto ConnectionViewers = GetWorld()->PersistentLevel->WorldSettings->ReplicationViewers;
                ConnectionViewers.Reset();
                ConnectionViewers.Add(FNetViewer(Connection));

                for (int32 ViewerIndex = 0; ViewerIndex < Connection->Children.Num(); ViewerIndex++)
                {
                    if (Connection->Children[ViewerIndex]->ViewTarget)
                    {
                        ConnectionViewers.Add(FNetViewer(Connection->Children[ViewerIndex]));
                    }
                }
                */

                if (Connection->PlayerController)
                    Native::PlayerController::SendClientAdjustment(Connection->PlayerController); // Sending adjustments to children is for splitscreen

                for (auto Actor : ConsiderList)
                {
                    if (Actor->IsA(APlayerController::StaticClass()) && Actor != Connection->PlayerController)
                        continue;

                    auto Channel = FindChannel(Actor, Connection);

                    if (!Channel)
                    {
                        /*
                        if (!IsActorRelevantToConnection(Actor, ConnectionViewers) && !Actor->bAlwaysRelevant)
                        {
                            // If not relevant (and we don't have a channel), skip
                            continue;
                        }
                        */

                        Channel = (UActorChannel*)(Native::NetConnection::CreateChannel(Connection, 2, true, -1));
                        Native::ActorChannel::SetChannelActor(Channel, Actor);
                    }

                    if (Channel)
                    {
                        // if (IsActorRelevantToConnection(Actor, ConnectionViewers) || Actor->bAlwaysRelevant) // temporary
                        {
                            Native::ActorChannel::ReplicateActor(Channel);
                        }
                        // else // techinally we should wait like 5 seconds but whatever.
                        {
                            // todo get pattern
                            // Native::ActorChannel::Close(Channel);
                        }
                    }
                }
            }
        }
    }
}
