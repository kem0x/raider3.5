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
        auto Pawn = SpawnActor<APlayerPawn_Athena_C>({ 0, 0, 10000 }, {});
        Pawn->bCanBeDamaged = false;
        auto PlayerController = (AFortPlayerControllerAthena*)GetEngine()->GameInstance->LocalPlayers[0]->PlayerController;
        PlayerController->Possess(Pawn);

        auto PlayerState = reinterpret_cast<AFortPlayerState*>(Pawn->PlayerState);
        PlayerState->CharacterParts[0] = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1");
        PlayerState->CharacterParts[1] = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01");
        PlayerState->OnRep_CharacterParts();
        PlayerController->CheatManager->God();

        PlayerController->bReadyToStartMatch = true;
        PlayerController->bHasServerFinishedLoading = true;
        PlayerController->bHasClientFinishedLoading = true;
        PlayerController->OnRep_bHasServerFinishedLoading();

        PlayerState->bHasStartedPlaying = true;
        PlayerState->bHasFinishedLoading = true;
        PlayerState->bIsReadyToContinue = true;
        PlayerState->OnRep_bHasStartedPlaying();

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

        authGameMode->StartPlay();
        gameState->bReplicatedHasBegunPlay = true;
        gameState->OnRep_ReplicatedHasBegunPlay();
        authGameMode->StartMatch();

        if (PlayerController->Pawn)
        {
            if (PlayerController->Pawn->PlayerState)
            {
                auto PlayerState = (AFortPlayerStateAthena*)PlayerController->Pawn->PlayerState;
                PlayerState->TeamIndex = EFortTeam::HumanPvP_Team10;
                PlayerState->OnRep_PlayerTeam();
                PlayerState->SquadId = 1;
                PlayerState->OnRep_SquadId();
            }
        }
    }
}