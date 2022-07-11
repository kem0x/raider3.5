#pragma once
#include "GameModeBase.hpp"

class GameModeDuos : public AbstractGameModeBase
{
public:
    GameModeDuos()
        : AbstractGameModeBase("FortPlaylistAthena Playlist_DefaultDuo.Playlist_DefaultDuo", false, 2)
    {
        LOG_INFO("Initializing GameMode Duos!");
        if (ConfigVars::bNoSafezone == true)
        {
            auto GameMode = static_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);
            GameMode->bSafeZoneActive = true;
            GameMode->bSafeZonePaused = false;
        }
    }

    void OnPlayerJoined(AFortPlayerControllerAthena* Controller) override
    {
        this->Teams->AddPlayerToRandomTeam(Controller);
    }

    void InitializeGameplay()
    {
    }
};
