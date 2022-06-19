#pragma once
#include "SDK.hpp"
#include "native.h"
#include "ue4.h"

bool Listen( FURL& InURL  )
{
    auto Driver = (UIpNetDriver*)SpawnActorTrans(UIpNetDriver::StaticClass(), {}, nullptr);
    if (!Driver)
    {
        std::cout << "Ahh" << std::endl;
        return false;
    }
    Driver->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
    Driver->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
    Driver->World = GetWorld();
                
    GetWorld()->NetDriver = Driver;
    GetWorld()->LevelCollections[0].NetDriver = HostBeacon->NetDriver;
    GetWorld()->LevelCollections[1].NetDriver = HostBeacon->NetDriver;

    FString Error;
    Native::NetDriver::InitListen(Driver, GetWorld(), InURL, true, Error);
    
    CreateThread(0, 0, MapLoadThread, 0, 0, 0);
    GetWorld()->AuthorityGameMode->GameSession->MaxPlayers = 100;
    bListening = true;
    std::cout << "\n\nListening on port " << HostBeacon->ListenPort << "\n\n";
    return true;
}
