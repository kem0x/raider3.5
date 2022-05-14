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
		
        auto PlayerController = GetPlayerController();
        PlayerController->Possess(Pawn);

        auto PlayerState = reinterpret_cast<AFortPlayerStateAthena*>(Pawn->PlayerState);
        auto HeroParts = PlayerController->StrongMyHero->CharacterParts;
		
        for (int i = 0; i < HeroParts.Num(); i++)
        {
            auto Part = HeroParts[i];

            if (!Part)
                continue;

            PlayerState->CharacterParts[i] = Part;
        }

        if (!HeroParts[0])
            PlayerState->CharacterParts[0] = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1");
		
        if (!HeroParts[1])
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

        auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);
        GameState->bGameModeWillSkipAircraft = true;
        GameState->AircraftStartTime = 99999.0f;
        GameState->WarmupCountdownEndTime = 99999.0f;

        GameState->GamePhase = EAthenaGamePhase::Aircraft;
        GameState->OnRep_GamePhase(EAthenaGamePhase::None);

        auto GameMode = reinterpret_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);
        auto State = GetStringLibrary()->STATIC_Conv_StringToName(L"InProgress");
		
        GameMode->MatchState = State;
        GameMode->K2_OnSetMatchState(State);

        GameMode->StartPlay();
        GameState->bReplicatedHasBegunPlay = true;
        GameState->OnRep_ReplicatedHasBegunPlay();
        GameMode->StartMatch();

		

        if (PlayerController->Pawn)
        {
            if (PlayerController->Pawn->PlayerState)
            {
                PlayerState->TeamIndex = EFortTeam::HumanPvP_Team2;
                PlayerState->OnRep_PlayerTeam();
                PlayerState->SquadId = 1;
                PlayerState->OnRep_SquadId();
            }
        }
    }
}