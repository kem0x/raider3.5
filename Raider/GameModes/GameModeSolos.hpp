#pragma once
#include "GameModeBase.hpp"

class GameModeSolos : GameModeBase
{
public:
    GameModeSolos() : GameModeBase(nullptr, DefaultLoadout, true, true /* respawn enabled*/ )
    {
        this->teamIdx = 2;
    }

    void HandleJoiningPlayer(AFortPlayerControllerAthena* Controller) override
    {
        GameModeBase::HandleJoiningPlayer(Controller);
        
        auto PlayerState = (AFortPlayerStateAthena*)Controller->PlayerState;

        // solo initialization
        PlayerState->TeamIndex = static_cast<EFortTeam>(teamIdx);
        
        PlayerState->PlayerTeam->TeamMembers.Add(Controller);
        PlayerState->PlayerTeam->Team = static_cast<EFortTeam>(teamIdx);

        PlayerState->SquadId = (teamIdx - 2) + 1;
        PlayerState->OnRep_PlayerTeam();
        PlayerState->OnRep_SquadId();
        
        teamIdx++;
    }
    
private:
    std::vector<UFortWeaponRangedItemDefinition*> DefaultLoadout;
    int teamIdx;
};