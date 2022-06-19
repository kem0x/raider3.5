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
        : AbstractGameModeBase(SoloPlaylistName, true, true)
    {
        this->teamIdx = 2;
    }

    void OnPlayerJoined(AFortPlayerControllerAthena*& Controller) override
    {
        auto PlayerState = static_cast<AFortPlayerStateAthena*>(Controller->PlayerState);

        // solo initialization
        PlayerState->TeamIndex = static_cast<EFortTeam>(teamIdx);

        PlayerState->PlayerTeam->TeamMembers.Add(Controller);
        PlayerState->PlayerTeam->Team = static_cast<EFortTeam>(teamIdx);

        PlayerState->SquadId = (teamIdx - 2) + 1;
        PlayerState->OnRep_PlayerTeam();
        PlayerState->OnRep_SquadId();

        teamIdx++;
    }

    void OnPlayerKilled(AFortPlayerControllerAthena*& Controller) override
    {
        Controller->RespawnPlayerAfterDeath();
    }

    PlayerLoadout& GetPlaylistLoadout() override
    {
        static PlayerLoadout Ret = {
            FindWID("Athena_Shields"),
            FindWID("Athena_Shields"), 
            FindWID("Athena_Shields"), 
            FindWID("Athena_Shields"),
            FindWID("Athena_Shields"),
            FindWID("Athena_Shields") 
        };

        return Ret;
    }
};