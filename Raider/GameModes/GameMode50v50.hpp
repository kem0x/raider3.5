#pragma once

#include "GameModeBase.hpp"

class GameMode50v50 : public AbstractGameModeBase
{
public:
    // -Kyiro TO-DO: Figure out why the 50v50 playlist crashes but the 5x20 doesn't
    GameMode50v50()
        : GameMode50v50("FortPlaylistAthena Playlist_5x20.Playlist_5x20")
    {
    }

    GameMode50v50(std::string SoloPlaylistName)
        : AbstractGameModeBase(SoloPlaylistName, false, -2)
    {
        LOG_INFO("Initializing GameMode 50v50!");
        
        // TO-DO: Fix this to create more buses, It currently creates way too much battle buses and crashes
        // auto GameState = static_cast<AAthena_GameState_C*>(GetWorld()->GameState);
        // GameState->AirCraftBehavior = EAirCraftBehavior::OpposingAirCraftForEachTeam;
        // GameState->OnRep_Aircraft();
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