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
        auto SafeZoneCenter = FVector({150, 150, 150}); /* TODO: Array of Locations where late game could take place in. (POIs) */

        GameMode->SafeZoneIndicator->bPaused = true;

        GameMode->bSafeZoneActive = false;
        GameMode->bSafeZonePaused = true;
        
        GameMode->SafeZoneLocations.Reset();
        GameMode->SafeZoneLocations.Add(SafeZoneCenter);

        GameMode->SafeZoneIndicator->SetSafeZoneRadiusAndCenter(4000, SafeZoneCenter);
    }

    void OnPlayerJoined(AFortPlayerControllerAthena* Controller) override
    {
        this->Teams->AddPlayerToRandomTeam(Controller);
    }
};