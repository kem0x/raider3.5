#pragma once
#include "ue4.h"

#define invptr (void*)0xffffffff

namespace Replication
{
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
        auto World = NetDriver->World;

        if (!World || !&OutConsiderList || !NetDriver)
            return;

        // TArray<AActor*> Actors;
        // GetGameplayStatics()->STATIC_GetAllActorsOfClass(World, AActor::StaticClass(), &Actors);

        // TArray<TSharedPtr<FNetworkObjectInfo>> Test;

        // auto ptr = (void*)Native::Engine::TSetToTArray(int64(&GetNetworkObjectList(NetDriver)), int64(&Test));

        // printf("Test: %s\n", Test[0].Get()->Actor->GetName().c_str());

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

        // Actors.FreeArray();
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

            if (Connection->PlayerController)
                Native::PlayerController::SendClientAdjustment(Connection->PlayerController);

            for (auto Actor : ConsiderList)
            {
                if (Actor->IsA(APlayerController::StaticClass()) && Actor != Connection->PlayerController)
                    continue;

                auto Channel = FindChannel(Actor, Connection);

                if (!Channel)
                {
                    Channel = (UActorChannel*)(Native::NetConnection::CreateChannel(Connection, 2, true, -1));
                    Native::ActorChannel::SetChannelActor(Channel, Actor);
                }

                if (Channel)
                {
                    Native::ActorChannel::ReplicateActor(Channel);
                }
            }
        }
    }
}