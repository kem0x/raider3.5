#pragma once

#include "UE4.h"
#include "GameModes/GameModes.hpp"

typedef GameModeSolos CurrentGameMode;

namespace Game
{
    inline std::unique_ptr<CurrentGameMode> Mode;

    void Start()
    {
        GetPlayerController()->SwitchLevel(L"Athena_Terrain?game=/Game/Athena/Athena_GameMode.Athena_GameMode_C");
        bTraveled = true;
    }

    void OnReadyToStartMatch()
    {
        LOG_INFO("Initializing the match for the server!");
        auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);
        auto GameMode = reinterpret_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);
        auto InProgress = GetKismetString()->STATIC_Conv_StringToName(L"InProgress");

        GameState->bGameModeWillSkipAircraft = true;
        GameState->AircraftStartTime = 9999.9f;
        GameState->WarmupCountdownEndTime = 99999.9f;

        GameState->GamePhase = EAthenaGamePhase::Warmup;
        GameState->OnRep_GamePhase(EAthenaGamePhase::None);

        GameMode->bDisableGCOnServerDuringMatch = true;
        GameMode->bAllowSpectateAfterDeath = true;

        GameMode->MatchState = InProgress;
        GameMode->K2_OnSetMatchState(InProgress);

        Mode = std::make_unique<CurrentGameMode>();

        GameMode->MinRespawnDelay = 5.0f;
        GameMode->StartPlay();

        GameState->bReplicatedHasBegunPlay = true;
        GameState->OnRep_ReplicatedHasBegunPlay();
        GameMode->StartMatch();

        // https://github.com/EpicGames/UnrealEngine/blob/46544fa5e0aa9e6740c19b44b0628b72e7bbd5ce/Engine/Source/Runtime/Engine/Private/ActorReplication.cpp#L300
        // By default the NetCullDistanceSquared is very low, I don't know why.
        GetWorld()->NetworkManager->NetCullDistanceSquared *= 3;
    }
}
