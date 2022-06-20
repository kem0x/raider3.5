#pragma once
#include "GameModeBase.hpp"
#include  "../Teams.h"

class GameModeDuos : public AbstractGameModeBase
{
public:
    GameModeDuos()
        : AbstractGameModeBase("FortPlaylistAthena Playlist_DefaultDuo.Playlist_DefaultDuo", false)
    {
        LOG_INFO("Initializing GameMode Duos!");
        this->Teams = new PlayerTeams(2);
    }

    void OnPlayerJoined(AFortPlayerControllerAthena*& Controller) override
    {
        this->Teams->AddPlayerToRandomTeam(Controller);
    }

private:
    PlayerTeams* Teams;
};
