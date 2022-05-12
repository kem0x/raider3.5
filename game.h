#pragma once
#include "ue4.h"

namespace Game
{
    void Start()
    {
		UKismetSystemLibrary* Kismet = reinterpret_cast<UKismetSystemLibrary*>(UKismetSystemLibrary::StaticClass());
		//Kismet->STATIC_ExecuteConsoleCommand(GetWorld(), L"open Athena_Faceoff", GetPlayerController());
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
        Pawn->ServerChoosePart(EFortCustomPartType::Head, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1"));
        Pawn->ServerChoosePart(EFortCustomPartType::Body, UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01"));
        PlayerState->OnRep_CharacterParts();

        PlayerController->bReadyToStartMatch = true;
        PlayerController->bHasServerFinishedLoading = true;
        PlayerController->bHasClientFinishedLoading = true;
        PlayerController->OnRep_bHasServerFinishedLoading();

        PlayerState->bHasStartedPlaying = true;
        PlayerState->bHasFinishedLoading = true;
        PlayerState->bIsReadyToContinue = true;
        PlayerState->OnRep_bHasStartedPlaying();

        reinterpret_cast<AFortGameStateAthena*>(GetWorld()->GameState)->GamePhase = EAthenaGamePhase::Aircraft;
        reinterpret_cast<AFortGameStateAthena*>(GetWorld()->GameState)->OnRep_GamePhase(EAthenaGamePhase::None);

        auto a = reinterpret_cast<UKismetStringLibrary*>(UKismetStringLibrary::StaticClass())->STATIC_Conv_StringToName(L"InProgress");
        reinterpret_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode)->MatchState = a;
        reinterpret_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode)->K2_OnSetMatchState(a);

        reinterpret_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode)->StartPlay();
        reinterpret_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode)->StartMatch();
    }
}