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
                PlayerState->TeamIndex = EFortTeam::HumanPvP_Team2;
                PlayerState->OnRep_PlayerTeam();
                PlayerState->SquadId = 1;
                PlayerState->OnRep_SquadId();
            }
        }

        InitInventory(PlayerController);

        auto pickName = "WID_Harvest_" + Pawn->CustomizationLoadout.Pickaxe->GetName() + "_Athena_C_T01.WID_Harvest_" + Pawn->CustomizationLoadout.Pickaxe->GetName() + "_Athena_C_T01";

        auto Def = UObject::FindObject<UFortWeaponItemDefinition>(pickName);

        if (!Def)
            Def = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");

        FFortItemEntry ItemEntry;

        if (Def)
            ItemEntry = AddItemWithUpdate(PlayerController, Def, 0);
        
        Def = UObject::FindObject<UFortWeaponItemDefinition>("WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03");

        if (Def)
        {
            ItemEntry = AddItemWithUpdate(PlayerController, Def, 1);
            EquipWeaponDefinition(Pawn, Def, ItemEntry.ItemGuid, 30);
        }

        auto CheatManager = (UFortCheatManager*)CreateCheatManager(PlayerController, true);
        CheatManager->ToggleInfiniteAmmo();
    }
}