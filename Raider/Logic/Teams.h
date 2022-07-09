#pragma once
#include "SDK.hpp"
#include <vector>

class Team
{
public:
    Team(EFortTeam TeamPosition, int maxTeamSize)
    {
        this->maxTeamSize = maxTeamSize;
        this->TeamPosition = TeamPosition;
    }

    void AddPlayer(AFortPlayerController* Member)
    {
        if (this->Num() == this->maxTeamSize)
            return;
        this->Members.push_back(Member);
        InitializePlayer(Member);
    }

    void Kick()
    {
        for (auto& Member : Members)
        {
            Member->ServerKickPlayer(Member->GetGameAccountId(), FText());
        }
    }

    int Num()
    {
        return this->Members.size();
    }

    ~Team()
    {
        Members.clear();
    }

    void InitializePlayer(AFortPlayerController* Member)
    {
        LOG_INFO("({}) Initializing {} on team {}!", "Teams", Member->PlayerState->GetPlayerName().ToString(), uint32_t(TeamPosition) - 2);

        static_cast<AFortPlayerStateAthena*>(Member->PlayerState)->TeamIndex = this->TeamPosition;
        static_cast<AFortPlayerStateAthena*>(Member->PlayerState)->PlayerTeam->Team = this->TeamPosition;
        static_cast<AFortPlayerStateAthena*>(Member->PlayerState)->SquadId = (uint32_t(TeamPosition) - 2) + 1;
        for (auto& _Member : Members)
        {
            static_cast<AFortPlayerStateAthena*>(Member->PlayerState)->PlayerTeam->TeamMembers.Add(_Member);
        }

        static_cast<AFortPlayerStateAthena*>(Member->PlayerState)->OnRep_SquadId();
        static_cast<AFortPlayerStateAthena*>(Member->PlayerState)->OnRep_PlayerTeam();
    }

protected:
    int maxTeamSize;
    std::vector<AFortPlayerController*> Members;
    EFortTeam TeamPosition;
};

class PlayerTeams
{
public:
    PlayerTeams(const int maxTeamSize)
    {
        this->maxTeamSize = maxTeamSize;
    }

    EFortTeam GetNextSlot()
    {
        int availableSlot = this->Teams.size() + 2;
        return static_cast<EFortTeam>(availableSlot);
    }

    std::shared_ptr<Team> FindAvailableSpot()
    {
        if (this->maxTeamSize >= 0) {
            for (auto& Team : this->Teams)
            {
                if (Team->Num() == this->maxTeamSize)
                    continue;

                return Team;
            }

            return nullptr;
        } else {
            if (std::abs(this->maxTeamSize) > this->Teams.size()) return nullptr;
            else {
                auto Team = this->Teams[this->lastAssignedTeamIndex];
                
                if (this->lastAssignedTeamIndex == this->Teams.size() - 1) {
                    this->lastAssignedTeamIndex = 0;
                } else {
                    this->lastAssignedTeamIndex += 1;
                }
                
                return Team;
            }
        }
    }

    void AddPlayerToRandomTeam(AFortPlayerController* Member)
    {
        auto AvailableSpot = FindAvailableSpot();
        if (!AvailableSpot) {
            LOG_ERROR("({}) Couldn't find a team for {}, making a new one!", "Teams", Member->PlayerState->GetPlayerName().ToString());
            auto TeamInstance = std::make_shared<Team>(this->GetNextSlot(), this->maxTeamSize);
            this->Teams.push_back(TeamInstance);

            TeamInstance->AddPlayer(Member);
            return;
        }
            
        LOG_INFO("({}) Adding to team {} as an available spot has been found!", "Teams", Member->PlayerState->GetPlayerName().ToString());
        AvailableSpot->AddPlayer(Member);
    }

private:
    int maxTeamSize;
    int lastAssignedTeamIndex = 0;
    std::vector<std::shared_ptr<Team>> Teams;
};
