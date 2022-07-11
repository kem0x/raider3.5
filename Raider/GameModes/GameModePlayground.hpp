#pragma once

#include "GameModeBase.hpp"

class GameModePlayground : public AbstractGameModeBase
{
public:
    GameModePlayground()
        : GameModePlayground("FortPlaylistAthena Playlist_Playground.Playlist_Playground")
    {
    }

    GameModePlayground(std::string PlaylistName)
        : AbstractGameModeBase(PlaylistName, true, 1)
    {
        LOG_INFO("Initializing GameMode Playground!");
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

    /*void OnPlayerKilled(AFortPlayerControllerAthena*& Controller) override
    {
    }*/
};