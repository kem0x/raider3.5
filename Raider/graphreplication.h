#pragma once

#include "SDK.hpp"
#include "native.h"
#include "ue4.h"

/*inline EAcceptConnection::Type UWorld::NotifyAcceptingConnection()
{
    std::cout << "FNetworkNotify::NotifyAcceptingConnection()\n" << std::endl;
    return EAcceptConnection::Accept;
}

inline bool UWorld::NotifyAcceptingChannel(UChannel* Channel)
{
    std::cout << "FNetworkNotify::NotifyAcceptingChannel()\n" << std::endl;
    return Native::World::NotifyAcceptingChannel(GetWorld(), Channel);
}

inline void UWorld::NotifyAcceptedConnection(UNetConnection* Connection)
{
    std::cout << "FNetworkNotify::NotifyAcceptedConnection()\n" << std::endl;
    Native::World::NotifyAcceptedConnection(GetWorld(), Connection);
}

inline void UWorld::NotifyControlMessage(UNetConnection* Connection, uint8 MessageType, void* Bunch)
{
    std::cout << "FNetworkNotify::NotifyControlMessage()\n" << std::endl;
    Native::World::NotifyControlMessage(GetWorld(), Connection, MessageType, Bunch);
}*/

inline bool Listen(FURL& InURL)
{
    HostBeacon = SpawnActor<AFortOnlineBeaconHost>();
    HostBeacon->ListenPort = 7777;
    auto bInitBeacon = Native::OnlineBeaconHost::InitHost(HostBeacon);
    CheckNullFatal(bInitBeacon, "Failed to initialize the Beacon!");

    HostBeacon->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
    HostBeacon->NetDriver->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
    HostBeacon->NetDriver->World = GetWorld();

    GetWorld()->NetDriver = HostBeacon->NetDriver;
    GetWorld()->LevelCollections[0].NetDriver = HostBeacon->NetDriver;
    GetWorld()->LevelCollections[1].NetDriver = HostBeacon->NetDriver;
    //CheckNullFatal(bInitBeacon, "Failed to initialize the Beacon!");

    FString Error;
    InURL.Port = 7777;
    
    Native::NetDriver::InitListen(HostBeacon->NetDriver, GetWorld(), InURL, true, Error);
    
    if (HostBeacon->NetDriver->ReplicationDriver)
    {
        std::cout << "\n\n\nReplication Driver exists!\n\n\n" << std::endl;
        std::cout << "\n\n\n\nDriver Name: " << HostBeacon->NetDriver->ReplicationDriver->GetFullName() << "\n\n\n" << std::endl;
    }
    
    /*auto Driver = (UIpNetDriver*)SpawnActorTrans(UIpNetDriver::StaticClass(), {}, nullptr);
    if (!Driver)
    {
        return false;
    }
    
    Driver->World = GetWorld();
    Driver->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)

    GetWorld()->NetDriver = Driver;
    GetWorld()->LevelCollections[0].NetDriver = HostBeacon->NetDriver;
    GetWorld()->LevelCollections[1].NetDriver = HostBeacon->NetDriver;

    FString Error;
    Native::NetDriver::InitListen(Driver, GetWorld(), InURL, true, Error);*/

    //if (Error.IsValid()) return false;
    
    //CreateThread(nullptr, 0, MapLoadThread, nullptr, 0, nullptr);
    //GetWorld()->AuthorityGameMode->GameSession->MaxPlayers = 100;
    //bListening = true;
    //std::cout << "\n\nListening on port " << HostBeacon->ListenPort << "\n\n";

    return true;
}
