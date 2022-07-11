#pragma once
#include "GameModeBase.hpp"

class GameModeDuos : public AbstractGameModeBase
{
public:
    GameModeDuos()
        : AbstractGameModeBase("FortPlaylistAthena Playlist_DefaultDuo.Playlist_DefaultDuo", false, 2, false)
    {
        LOG_INFO("Initializing GameMode Duos!");
    }

    void OnPlayerJoined(AFortPlayerControllerAthena* Controller) override
    {
        this->Teams->AddPlayerToRandomTeam(Controller);
    }

    void InitializeGameplay()
    {
    }
};
