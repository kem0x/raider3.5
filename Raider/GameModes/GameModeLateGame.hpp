#pragma once

#include "GameModeBase.hpp"

class GameModeLateGame : public AbstractGameModeBase
{
public:
    GameModeLateGame()
        : AbstractGameModeBase("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo", false, 1)
    {
        LOG_INFO("Initializing Late Game!");
        LOG_INFO("Trying to set SafeZone radius!");

        auto GameMode = static_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);

        GameMode->bSafeZoneActive = false;
        GameMode->bSafeZonePaused = true;
    }

    void InitializeGameplay()
    {
        auto GameState = static_cast<AFortGameStateAthena*>(GetWorld()->GameState);
        auto GameMode = static_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);
        auto Aircraft = GameState->GetAircraft(0);

        auto SafeZoneCenter = FVector({150, 150, 150}); /* TODO: Array of Locations where late game could take place in. (POIs) */
        
        if (GameMode->SafeZoneIndicator)
        {
            GameMode->SafeZoneIndicator->bPaused = true;
            GameMode->SafeZoneIndicator->SetSafeZoneRadiusAndCenter(4000, SafeZoneCenter);
        } else
        {
            LOG_ERROR("SafeZoneIndicator was NULL! Can't set Radius and Center.");
        }
        
        if (Aircraft)
        {
            Aircraft->FlightInfo.FlightSpeed = 0.0f;
            Aircraft->FlightInfo.TimeTillDropStart = 0.0f;
            Aircraft->FlightInfo.FlightStartLocation = FVector_NetQuantize100(SafeZoneCenter);

            Aircraft->FlightStartTime = 0.0f;
            Aircraft->ExitLocation = SafeZoneCenter;
            GameState->OnRep_Aircraft();
        } else
        {
            LOG_ERROR("Aircraft was NULL! Can't set flight data.");
        }
    }
    
    void OnPlayerJoined(AFortPlayerControllerAthena* Controller) override
    {
        this->Teams->AddPlayerToRandomTeam(Controller);
    }
};