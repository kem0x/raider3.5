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

inline bool Listen()
{
    HostBeacon = SpawnActor<AFortOnlineBeaconHost>();
    HostBeacon->ListenPort = 7776;
    auto bInitBeacon = Native::OnlineBeaconHost::InitHost(HostBeacon);
    CheckNullFatal(bInitBeacon, "Failed to initialize the Beacon!");

    std::cout << "Listening!\n";

    HostBeacon->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
    HostBeacon->NetDriver->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
    HostBeacon->NetDriver->World = GetWorld();
    FString Error;
    auto InURL = FURL();
    InURL.Port = 7777;

    Native::NetDriver::InitListen(HostBeacon->NetDriver, GetWorld(), InURL, true, Error);

    if (HostBeacon->NetDriver->ReplicationDriver)
    {
        std::cout << "Initialized ReplicationDriver!\n";
        Native::ReplicationDriver::ServerReplicateActors = decltype(Native::ReplicationDriver::ServerReplicateActors)(HostBeacon->NetDriver->ReplicationDriver->Vtable[0x53]);
    }

    GetWorld()->NetDriver = HostBeacon->NetDriver;
    GetWorld()->LevelCollections[0].NetDriver = HostBeacon->NetDriver;
    GetWorld()->LevelCollections[1].NetDriver = HostBeacon->NetDriver;

	bListening = true;

    return true;
}
