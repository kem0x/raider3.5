#pragma once
#include "ue4.h"

namespace Replication
{
    int PrepConnections(UNetDriver* NetDriver)
    {
        int32 NumClientsToTick = NetDriver->ClientConnections.Num();

        bool bFoundReadyConnection = false;

        for (int32 ConnIdx = 0; ConnIdx < NetDriver->ClientConnections.Num(); ConnIdx++)
        {
            UNetConnection* Connection = NetDriver->ClientConnections[ConnIdx];

            AActor* OwningActor = Connection->OwningActor;
            if (OwningActor != NULL && (Connection->Driver->Time - Connection->LastReceiveTime < 1.5f))
            {
                bFoundReadyConnection = true;

                Connection->ViewTarget = Connection->PlayerController ? Connection->PlayerController->GetViewTarget() : OwningActor;

                for (int32 ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
                {
                    UNetConnection* Child = Connection->Children[ChildIdx];
                    APlayerController* ChildPlayerController = Child->PlayerController;
                    if (ChildPlayerController != NULL)
                    {
                        Child->ViewTarget = ChildPlayerController->GetViewTarget();
                    }
                    else
                    {
                        Child->ViewTarget = NULL;
                    }
                }
            }
            else
            {
                Connection->ViewTarget = NULL;
                for (int32 ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
                {
                    Connection->Children[ChildIdx]->ViewTarget = NULL;
                }
            }
        }

        return bFoundReadyConnection ? NumClientsToTick : 0;
    }

    template <typename T = UActorChannel>
    T* FindChannel(AActor* Actor, UNetConnection* Connection)
    {
        for (int i = 0; i < Connection->OpenChannels.Num(); i++)
        {
            auto Channel = Connection->OpenChannels[i];

            if (Channel && Channel->Class)
            {
                if (Channel->Class == T::StaticClass())
                {
                    if (((T*)Channel)->Actor == Actor)
                    {
                        return ((T*)Channel);
                    }
                }
            }
        }

        return nullptr;
    }

    auto GetOwner = [](AActor* Actor) -> UNetConnection*
    {
        for (auto Owner = Actor; Actor; Actor = Actor->GetOwner())
        {
            if (Actor->IsA(APlayerController::StaticClass()))
            {
                return ((APlayerController*)Actor)->NetConnection;
            }
        }

        return nullptr;
    };

    void ServerReplicateActors(UNetDriver* NetDriver, float Delta)
    {
        GetReplicationFrame(NetDriver)++;
        auto NumClientsToTick = PrepConnections(NetDriver);

        if (NumClientsToTick == 0)
            return;

        for (int i = 0; i < NetDriver->ClientConnections.Num(); i++)
        {
            auto NetConnection = NetDriver->ClientConnections[i];
            auto Controller = NetConnection->PlayerController;

            if (Controller && NetConnection->ViewTarget)
            {
                Functions::PlayerController::SendClientAdjustment(Controller);

                for (int ChildIdx = 0; ChildIdx < NetConnection->Children.Num(); ChildIdx++)
                {
                    if (NetConnection->Children[ChildIdx]->PlayerController != NULL)
                    {
                        Functions::PlayerController::SendClientAdjustment(NetConnection->Children[ChildIdx]->PlayerController);
                    }
                }

                auto Channel = FindChannel(Controller, NetConnection);

                if (Channel != NULL)
                {
                    Functions::Actor::CallPreReplication(Controller, NetConnection->Driver);
                    Functions::ActorChannel::ReplicateActor(Channel);
                }

                if (Controller->Pawn)
                {
                    Channel = FindChannel(Controller->Pawn, NetConnection);

                    if (Channel != NULL)
                    {
                        Functions::Actor::CallPreReplication(Controller->Pawn, NetConnection->Driver);
                        Functions::ActorChannel::ReplicateActor(Channel);
                    }
                }
            }
            else
            {
                continue;
            }

            //auto List = GetNetworkObjectList(NetDriver).ActiveNetworkObjects;
            SDK::TArray<AActor*> List;
            GetGameplayStatics()->STATIC_GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), &List);
            for (int j = 0; j < List.Num(); j++)
            {
                auto Actor = List[j];

                if (Actor->IsA(AController::StaticClass()) && Actor != Controller)
                    continue;

                if ((Actor->bNetStartup && Actor->NetDormancy == ENetDormancy::DORM_Initial))
                    continue;

                if (!Actor->bReplicates)
                    continue;

                if (Actor->bOnlyRelevantToOwner && GetOwner(Actor) != NetConnection)
                    continue;

                if (Actor->Name.ComparisonIndex == 0)
                    continue;

                auto Channel = FindChannel(Actor, NetConnection);

                if (!Channel)
                {
                    Channel = (UActorChannel*)(Functions::NetConnection::CreateChannel(NetConnection, 2, true, -1));

                    if (Channel)
                    {
                        Functions::ActorChannel::SetChannelActor(Channel, Actor);
                        Channel->Connection = NetConnection;
                    }
                }

                if (Channel)
                {
                    Functions::Actor::CallPreReplication(Actor, NetConnection->Driver);
                    Functions::ActorChannel::ReplicateActor(Channel);
                }

                /*if (Actor->bReplicates)
                    Actor->OnRep_ReplicatedMovement();*/
            }
        }
    }
}