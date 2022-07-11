#pragma once

#include "GUI.h"
#include "UFunctionHooks.h"
#include "Config.h"

// #define LOGGING

namespace Hooks
{
    bool LocalPlayerSpawnPlayActor(ULocalPlayer* Player, const FString& URL, FString& OutError, UWorld* World)
    {
        if (!bTraveled)
        {
            return Native::LocalPlayer::SpawnPlayActor(Player, URL, OutError, World);
        }
        return true;
    }

    void TickFlush(UNetDriver* NetDriver, float DeltaSeconds)
    {
        if (!NetDriver)
            return;

        if (NetDriver->IsA(UIpNetDriver::StaticClass()) && NetDriver->ClientConnections.Num() > 0 && NetDriver->ClientConnections[0]->InternalAck == false)
        {
            // Replication::ServerReplicateActors(NetDriver);
            if (NetDriver->ReplicationDriver)
            {
                Native::ReplicationDriver::ServerReplicateActors(NetDriver->ReplicationDriver);
            }
        }

        Native::NetDriver::TickFlush(NetDriver, DeltaSeconds);
    }

    uint8 Beacon_NotifyAcceptingConnection(AOnlineBeacon*) { return Native::World::NotifyAcceptingConnection(GetWorld()); }
    void* SeamlessTravelHandlerForWorld(UEngine* Engine, UWorld*) { return Native::Engine::SeamlessTravelHandlerForWorld(Engine, GetWorld()); }
    void* NetDebug(UObject*) { return nullptr; }
    __int64 CollectGarbage(__int64) { return 0; }
    void WelcomePlayer(UWorld*, UNetConnection* IncomingConnection) { Native::World::WelcomePlayer(GetWorld(), IncomingConnection); }
    char KickPlayer(__int64, __int64, __int64) { return 0; }
    uint64 GetNetMode(UWorld*) { return NM_ListenServer; }
    void World_NotifyControlMessage(UWorld*, UNetConnection* Connection, uint8 MessageType, void* Bunch) { Native::World::NotifyControlMessage(GetWorld(), Connection, MessageType, Bunch); }

    APlayerController* SpawnPlayActor(UWorld*, UPlayer* NewPlayer, ENetRole RemoteRole, FURL& URL, void* UniqueId, FString& Error, uint8 NetPlayerIndex)
    {
        auto PlayerController = static_cast<AFortPlayerControllerAthena*>(Native::World::SpawnPlayActor(GetWorld(), NewPlayer, RemoteRole, URL, UniqueId, Error, NetPlayerIndex));
        NewPlayer->PlayerController = PlayerController;

        Game::Mode->LoadJoiningPlayer(PlayerController);

        PlayerController->OverriddenBackpackSize = 100;
        return PlayerController;
    }

    void Beacon_NotifyControlMessage(AOnlineBeaconHost*, UNetConnection* Connection, uint8 MessageType, int64* Bunch)
    {
        switch (MessageType)
        {
        case 4: // NMT_Netspeed
            Connection->CurrentNetSpeed = 30000;
            return;
        case 5: // NMT_Login
        {
            if (GetWorld()->GameState->HasMatchStarted())
                return;

            Bunch[7] += (16 * 1024 * 1024);

            auto OnlinePlatformName = FString(L"");

            Native::NetConnection::ReceiveFString(Bunch, Connection->ClientResponse);
            Native::NetConnection::ReceiveFString(Bunch, Connection->RequestURL);
            Native::NetConnection::ReceiveUniqueIdRepl(Bunch, Connection->PlayerID);
            Native::NetConnection::ReceiveFString(Bunch, OnlinePlatformName);

            Bunch[7] -= (16 * 1024 * 1024);

            Native::World::WelcomePlayer(GetWorld(), Connection);

            return;
        }
        case 15: // NMT_PCSwap
            break;
        }

        Native::World::NotifyControlMessage(GetWorld(), Connection, MessageType, Bunch);
    }

    void PostRender(UGameViewportClient* _this, UCanvas* Canvas)
    {
        ZeroGUI::SetupCanvas(Canvas);
        GUI::Tick();

        return Native::GameViewportClient::PostRender(_this, Canvas);
    }

    void InitNetworkHooks()
    {
        DETOUR_START
        DetourAttachE(Native::World::WelcomePlayer, WelcomePlayer);
        DetourAttachE(Native::Actor::GetNetMode, GetNetMode);
        DetourAttachE(Native::World::NotifyControlMessage, World_NotifyControlMessage);
        DetourAttachE(Native::World::SpawnPlayActor, SpawnPlayActor);
        DetourAttachE(Native::OnlineBeaconHost::NotifyControlMessage, Beacon_NotifyControlMessage);
        DetourAttachE(Native::OnlineSession::KickPlayer, KickPlayer);
        DetourAttachE(Native::GameViewportClient::PostRender, PostRender);
        DetourAttachE(Native::GC::CollectGarbage, CollectGarbage);
        DETOUR_END
    }

    void ProcessEventHook(UObject* Object, UFunction* Function, void* Parameters)
    {
        if (!bPlayButton && ConfigVars::bConfigLoadedSuccessfully)
        {
            static auto PlayButtonFn = UObject::FindObject<UFunction>("BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
            if (Function == PlayButtonFn)
            {
                bPlayButton = true;
                LOG_INFO("Initializing the game.");
                Game::Start();

                LOG_INFO("Initializing Network Hooks.");
                InitNetworkHooks();
            }
        }

        if (bTraveled)
        {
#ifdef LOGGING
            auto FunctionName = Function->GetName();
            if (Function->FunctionFlags & 0x00200000 || (Function->FunctionFlags & 0x01000000 && FunctionName.find("Ack") == -1 && FunctionName.find("AdjustPos") == -1))
            {
                if (FunctionName.find("ServerUpdateCamera") == -1 && FunctionName.find("ServerMove") == -1)
                {
                    std::cout << "RPC Called: " << FunctionName << '\n';
                }
            }
#endif

            for (int i = 0; i < UFunctionHooks::toHook.size(); i++)
            {
                if (Function == UFunctionHooks::toHook[i])
                {
                    if (UFunctionHooks::toCall[i](Object, Parameters))
                    {
                        return;
                    }
                    break;
                }
            }
        }

        return ProcessEvent(Object, Function, Parameters);
    }
}
