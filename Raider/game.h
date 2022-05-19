#pragma once

#include "ue4.h"

namespace Game
{
    void Start()
    {
        GetPlayerController()->SwitchLevel(L"Athena_Terrain?game=/Game/Athena/Athena_GameMode.Athena_GameMode_C");
        bTraveled = true;
    }

    void OnReadyToStartMatch()
    {
        auto world = GetWorld();
        auto gameState = reinterpret_cast<AAthena_GameState_C*>(world->GameState);

        gameState->bGameModeWillSkipAircraft = true;
        gameState->AircraftStartTime = 99999.0f;
        gameState->WarmupCountdownEndTime = 99999.0f;

        gameState->GamePhase = EAthenaGamePhase::Aircraft;
        gameState->OnRep_GamePhase(EAthenaGamePhase::None);

        auto authGameMode = reinterpret_cast<AFortGameModeAthena*>(world->AuthorityGameMode);

        auto stateF = reinterpret_cast<UKismetStringLibrary*>(UKismetStringLibrary::StaticClass())->STATIC_Conv_StringToName(L"InProgress");
        authGameMode->MatchState = stateF;
        authGameMode->K2_OnSetMatchState(stateF);
        gameState->CurrentPlaylistData = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_Playground.Playlist_Playground");
        gameState->OnRep_CurrentPlaylistData();

        authGameMode->StartPlay();
        gameState->bReplicatedHasBegunPlay = true;
        gameState->OnRep_ReplicatedHasBegunPlay();
        authGameMode->StartMatch();
    }
}