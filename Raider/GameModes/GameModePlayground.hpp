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
        : AbstractGameModeBase(PlaylistName, true, 1, true)
    {
        LOG_INFO("Initializing GameMode Playground!");
    }

    void OnPlayerJoined(AFortPlayerControllerAthena* Controller) override
    {
        this->Teams->AddPlayerToRandomTeam(Controller);
    }
    
    void Timer()
    {
        auto GameState = static_cast<AFortGameStateAthena*>(GetWorld()->GameState);
        auto Aircraft = GameState->GetAircraft(0);
        if (Aircraft) {
            Sleep(Aircraft->FlightInfo.TimeTillDropStart * 1000);
            if (GameState)
            {
                GameState->GamePhase = EAthenaGamePhase::SafeZones;
                GameState->OnRep_GamePhase(EAthenaGamePhase::Aircraft);
                GameState->SafeZonesStartTime = 3600.f;
                GameState->OnRep_Aircraft();
            }
        }
        LOG_INFO("Initialized timer.");
    }

    void InitializeGameplay()
    { 
        std::thread([this] { this->Timer(); }).detach();

        LOG_INFO("Initialized timer to gamestate.");
    }

    /*void OnPlayerKilled(AFortPlayerControllerAthena*& Controller) override
    {
    }*/
};
