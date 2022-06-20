#pragma once

#include "GameModeBase.hpp"

class GameModeSolos : public AbstractGameModeBase
{
public:
    GameModeSolos()
        : GameModeSolos("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo")
    {
    }

    GameModeSolos(std::string SoloPlaylistName)
        : AbstractGameModeBase(SoloPlaylistName, true, true, 1)
    {
        LOG_INFO("Initializing GameMode Solo!");
    }

    void OnPlayerJoined(AFortPlayerControllerAthena*& Controller) override
    {
        this->Teams->AddPlayerToRandomTeam(Controller);
    }

    void OnPlayerKilled(AFortPlayerControllerAthena*& Controller) override
    {
        Controller->RespawnPlayerAfterDeath();
        
        auto CM = (UFortCheatManager*)Controller->CheatManager;
        CM->RespawnPlayer();
        CM->RespawnPlayerServer();
        // One of these two functions causes glider to work properly i honestly dont know which one
    }
};