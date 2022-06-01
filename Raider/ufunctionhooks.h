#pragma once

#include <functional>

#include "game.h"
#include "replication.h"
#include "ue4.h"

// #define LOGGING
#define CHEATS

//Define the hook with ufunction full name
//Return true in the lambda to prevent the original function call

namespace UFunctionHooks
{
    inline std::vector<UFunction*> toHook;
    inline std::vector<std::function<bool(UObject*, void*)>> toCall;

    #define DEFINE_PEHOOK(ufunctionName, func)                           \
        toHook.push_back(UObject::FindObject<UFunction>(ufunctionName)); \
        toCall.push_back([](UObject * Object, void* Parameters) -> bool func);

    auto Initialize()
    {
        DEFINE_PEHOOK("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility", {
            auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;
            auto Params = (UAbilitySystemComponent_ServerTryActivateAbility_Params*)Parameters;

            TryActivateAbility(AbilitySystemComponent, Params->AbilityToActivate, Params->InputPressed, &Params->PredictionKey, nullptr);

            return false;
        })

        DEFINE_PEHOOK("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData", {
            auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;
            auto Params = (UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params*)Parameters;

            TryActivateAbility(AbilitySystemComponent, Params->AbilityToActivate, Params->InputPressed, &Params->PredictionKey, &Params->TriggerEventData);

            return false;
        })

        DEFINE_PEHOOK("Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch", {
            auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;
            auto Params = (UAbilitySystemComponent_ServerAbilityRPCBatch_Params*)Parameters;

            TryActivateAbility(AbilitySystemComponent, Params->BatchInfo.AbilitySpecHandle, Params->BatchInfo.InputPressed, &Params->BatchInfo.PredictionKey, nullptr);
        
            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerPawn.ServerHandlePickup", { 
            Inventory::OnPickup((AFortPlayerControllerAthena*)((APawn*)Object)->Controller, Parameters);
            return false;
        })

#ifdef CHEATS
        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerCheat", {
            if (Object->IsA(AFortPlayerControllerAthena::StaticClass()))
            {
                auto PC = (AFortPlayerControllerAthena*)Object;
                auto Params = (AFortPlayerController_ServerCheat_Params*)Parameters;

                if (Params && PC && !PC->IsInAircraft())
                {
                    auto Pawn = (APlayerPawn_Athena_C*)PC->Pawn;
                    auto Message = Params->Msg.ToString() + ' ';

                    std::vector<std::string> Arguments;

                    while (Message.find(" ") != -1)
                    {
                        Arguments.push_back(Message.substr(0, Message.find(' ')));
                        Message.erase(0, Message.find(' ') + 1);
                    }

                    auto NumArgs = Arguments.size() - 1;

                    if (NumArgs >= 0)
                    {
                        auto& Command = Arguments[0]; // TODO: Make the string all lower case.
                        std::transform(Command.begin(), Command.end(), Command.begin(), ::tolower);

                        if (Command == "setpickaxe" && NumArgs >= 1)
                        {
                            auto& PickaxeName = Arguments[1];
                            UFortWeaponMeleeItemDefinition* PID = UObject::FindObject<UFortWeaponMeleeItemDefinition>("WID_Harvest_" + PickaxeName + "_Athena_C_T01" + ".WID_Harvest_" + PickaxeName + "_Athena_C_T01");

							// if (!PID)
                               // PID = UObject::FindObject<UFortWeaponMeleeItemDefinition>(PickaxeName + "." + PickaxeName); // UAthenaPickaxeItemDefinition

                            if (PID && (PID->IsA(UFortWeaponMeleeItemDefinition::StaticClass()) || PID->IsA(UAthenaPickaxeItemDefinition::StaticClass())))
                            {
                                bool bFound = false;
                                auto PickaxeEntry = FindItemInInventory<UFortWeaponMeleeItemDefinition>(PC, bFound);

                                if (!bFound)
                                    PickaxeEntry = FindItemInInventory<UAthenaPickaxeItemDefinition>(PC, bFound);

                                if (bFound)
                                {
                                    ChangeItem(PC, PickaxeEntry.ItemDefinition, PID, 0);
                                    ClientMessage(PC, (L"Changed pickaxe to " + toWStr(PickaxeName) + L"!").c_str());
                                }

                                else
                                    ClientMessage(PC, L"Unable to find your pickaxe!\n");
                            }
                            else
                                ClientMessage(PC, L"Requested item is not a pickaxe!\n");
                        }

                        else if (Command == "revive" && Pawn->bIsDBNO)
                        {
                            Pawn->bIsDBNO = false;
                            Pawn->OnRep_IsDBNO();

                            // PC->ClientOnPawnRevived(InstigatorPC);
                            Pawn->SetHealth(100);
                        }

                        else if (Command == "respawn" && !Pawn) // ISSUE: Player is unable to shoot.
                        {
                            InitPawn(PC);
                            PC->ActivateSlot(EFortQuickBars::Primary, 0, 0, true); // Select the pickaxe

                            bool bFound = false;
                            auto PickaxeEntry = FindItemInInventory<UFortWeaponMeleeItemDefinition>(PC, bFound);

                            if (bFound)
                                EquipInventoryItem(PC, PickaxeEntry.ItemGuid);

                            ApplyAbilities(PC->Pawn);
                        }

                        else if (Command == "togglegodmode")
                        {
                            Pawn->bCanBeDamaged = !Pawn->bCanBeDamaged;
                            std::cout << "Godmode enabled for " << Pawn->GetName() << '\n';
                        }

                        else if (Command == "giveweapon" && NumArgs >= 1)
                        {
                            auto& weaponName = Arguments[1];
                            int slot = 1;
                            int count = 1;

                            try
                            {
                                if (NumArgs >= 2)
                                    slot = std::stoi(Arguments[2]);

                                if (NumArgs >= 3)
                                    count = std::stoi(Arguments[3]);
                            }
                            catch (...)
                            {
                            }

                            auto WID = UObject::FindObject<UFortWeaponRangedItemDefinition>("FortWeaponRangedItemDefinition " + weaponName + '.' + weaponName);

                            if (WID && WID->IsA(UFortWeaponRangedItemDefinition::StaticClass()))
                            {
                                AddItemWithUpdate(PC, WID, slot, EFortQuickBars::Primary, count);
                                ClientMessage(PC, std::wstring(L"Successfully gave " + count + std::wstring(L" ") + toWStr(weaponName) + L" to slot " + std::to_wstring(slot)).c_str());
                            }
                            else
                                ClientMessage(PC, L"Requested item is not a weapon!\n");
                        }

                        else
                            ClientMessage(PC, L"Unable to handle command!");
                    }
                }
            }

            return false;
        })
#endif

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerCreateBuildingActor", {
            auto PC = (AFortPlayerControllerAthena*)Object;

            auto Params = (AFortPlayerController_ServerCreateBuildingActor_Params*)Parameters;
            auto CurrentBuildClass = Params->BuildingClassData.BuildingClass;

            static auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);

            if (PC && Params && CurrentBuildClass)
            {
                //if (auto bCanBuild = CanBuild(CurrentBuildClass, Params->BuildLoc))
                {
                    auto BuildingActor = (ABuildingSMActor*)SpawnActor(CurrentBuildClass, Params->BuildLoc, Params->BuildRot, PC, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn);
                        // SpawnBuilding(CurrentBuildClass, Params->BuildLoc, Params->BuildRot, (APlayerPawn_Athena_C*)PC->Pawn);
                    if (BuildingActor)
                    {
                        //Buildings.insert(BuildingActor); // Add as soon as possible to make sure there is no time to double build.

                        BuildingActor->DynamicBuildingPlacementType = EDynamicBuildingPlacementType::DestroyAnythingThatCollides;
                        BuildingActor->SetMirrored(Params->bMirrored);
                        BuildingActor->PlacedByPlacementTool();
                        BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PC);
                    }
                }
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerBeginEditingBuildingActor", {
            auto Params = (AFortPlayerController_ServerBeginEditingBuildingActor_Params*)Parameters;
            auto Controller = (AFortPlayerControllerAthena*)Object;
            auto Pawn = (APlayerPawn_Athena_C*)Controller->Pawn;
            bool bFound = false;
            auto EditToolEntry = FindItemInInventory<UFortEditToolItemDefinition>(Controller, bFound);

            if (Controller && Pawn && Params->BuildingActorToEdit && bFound)
            {
                auto EditTool = (AFortWeap_EditingTool*)EquipWeaponDefinition(Pawn, (UFortWeaponItemDefinition*)EditToolEntry.ItemDefinition, EditToolEntry.ItemGuid);

                if (EditTool)
                {
                    EditTool->EditActor = Params->BuildingActorToEdit;
                    EditTool->OnRep_EditActor();
                    Params->BuildingActorToEdit->EditingPlayer = (AFortPlayerStateZone*)Pawn->PlayerState;
                    Params->BuildingActorToEdit->OnRep_EditingPlayer();
                }
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerEditBuildingActor", {
            auto Params = (AFortPlayerController_ServerEditBuildingActor_Params*)Parameters;
            auto PC = (AFortPlayerControllerAthena*)Object;

            if (PC && Params)
            {
                auto BuildingActor = Params->BuildingActorToEdit;
                auto NewBuildingClass = Params->NewBuildingClass;
                auto RotationIterations = Params->RotationIterations;

                printf("RotationIterations: %i\n", RotationIterations);
				
                if (BuildingActor && NewBuildingClass)
                {
                    auto rotation = BuildingActor->K2_GetActorRotation(); //Not correct, this is not centered.

                    rotation.Yaw += rotation.Yaw * RotationIterations;

                    //  BuildingActor->K2_DestroyActor();					
                    BuildingActor->SilentDie();

                    if (auto NewBuildingActor = (ABuildingSMActor*)SpawnActor(NewBuildingClass, BuildingActor->K2_GetActorLocation(), rotation, PC))
                    {
                        NewBuildingActor->SetMirrored(Params->bMirrored);
                        NewBuildingActor->InitializeKismetSpawnedBuildingActor(NewBuildingActor, PC);
                    }
                }
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerControllerZone.ClientOnPawnDied", {
            auto Params = (AFortPlayerControllerZone_ClientOnPawnDied_Params*)Parameters;
            auto DeadPC = (AFortPlayerControllerAthena*)Object;
            auto DeadPlayerState = (AFortPlayerStateAthena*)DeadPC->PlayerState;

            if (false && DeadPC && Params) // this crashes like 9/10
            {
                auto GameState = (AAthena_GameState_C*)GetWorld()->AuthorityGameMode->GameState;
                GameState->PlayersLeft--;
                // GameState->PlayerArray.RemoveAt(DeadPC->NetPlayerIndex);

                if (DeadPC && DeadPC->Pawn)
                {
                    // TODO: Show death drone
                    DeadPC->Pawn->K2_DestroyActor();
                }

                auto KillerPawn = Params->DeathReport.KillerPawn;
                auto KillerPlayerState = (AFortPlayerStateAthena*)Params->DeathReport.KillerPlayerState;

                DeadPlayerState->OnRep_DeathInfo();

                if (KillerPlayerState && KillerPawn && KillerPlayerState != DeadPlayerState)
                {
                    KillerPlayerState->KillScore++;
                    KillerPlayerState->OnRep_Kills();
                    Spectate(DeadPC->NetConnection, KillerPlayerState);
                    DeadPC->K2_DestroyActor();
                }

                else
                {
                    TArray<AActor*> Pawns;
                    static auto GameplayStatics = (UGameplayStatics*)UGameplayStatics::StaticClass()->CreateDefaultObject();
                    GameplayStatics->STATIC_GetAllActorsOfClass(GetWorld(), APlayerPawn_Athena_C::StaticClass(), &Pawns);
                    if (Pawns.Num() != 0)
                    {
                        auto PawnToUse = (APlayerPawn_Athena_C*)Pawns[rand() % Pawns.Num()];

                        if (PawnToUse)
                        {
                            PawnToUse = (APlayerPawn_Athena_C*)Pawns[rand() % Pawns.Num()];
                            Spectate(DeadPC->NetConnection, (AFortPlayerStateAthena*)PawnToUse->PlayerState);
                        }
                    }
                }
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerEndEditingBuildingActor", {
            auto Params = (AFortPlayerController_ServerEndEditingBuildingActor_Params*)Parameters;
            auto PC = (AFortPlayerControllerAthena*)Object;

            if (!PC->IsInAircraft() && Params->BuildingActorToStopEditing)
            {
                Params->BuildingActorToStopEditing->EditingPlayer = nullptr;
                Params->BuildingActorToStopEditing->OnRep_EditingPlayer();

                auto EditTool = (AFortWeap_EditingTool*)((APlayerPawn_Athena_C*)PC->Pawn)->CurrentWeapon;

                if (EditTool)
                {
                    EditTool->bEditConfirmed = true;
                    EditTool->EditActor = nullptr;
                    EditTool->OnRep_EditActor();
                }
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerRepairBuildingActor", {
            auto Params = (AFortPlayerController_ServerRepairBuildingActor_Params*)Parameters;
            auto Controller = (AFortPlayerControllerAthena*)Object;
            auto Pawn = (APlayerPawn_Athena_C*)Controller->Pawn;

            if (Controller && Pawn && Params->BuildingActorToRepair)
            {
                Params->BuildingActorToRepair->RepairBuilding(Controller, 10); // TODO: Figure out how to get the repair amount
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerControllerAthena.ServerAttemptAircraftJump", {
            auto Params = (AFortPlayerControllerAthena_ServerAttemptAircraftJump_Params*)Parameters;
            auto PC = (AFortPlayerControllerAthena*)Object;
            auto GameState = (AAthena_GameState_C*)GetWorld()->AuthorityGameMode->GameState;

            if (PC && Params && !PC->Pawn && PC->IsInAircraft())
            {
                auto Aircraft = (AFortAthenaAircraft*)GameState->Aircrafts[0];

                if (Aircraft)
                {
                    auto ExitLocation = Aircraft->K2_GetActorLocation();

                    // ExitLocation.Z -= 500;

                    InitPawn(PC, ExitLocation);
                    ((AAthena_GameState_C*)GetWorld()->AuthorityGameMode->GameState)->Aircrafts[0]->PlayEffectsForPlayerJumped();
                    PC->ActivateSlot(EFortQuickBars::Primary, 0, 0, true); // Select the pickaxe

                    bool bFound = false;
                    auto PickaxeEntry = FindItemInInventory<UFortWeaponMeleeItemDefinition>(PC, bFound);

                    if (bFound)
                        EquipInventoryItem(PC, PickaxeEntry.ItemGuid);

                    // PC->Pawn->K2_TeleportTo(ExitLocation, Params->ClientRotation);
                }
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerPawn.ServerReviveFromDBNO", {
            auto Params = (AFortPlayerPawn_ServerReviveFromDBNO_Params*)Parameters;
            auto DBNOPawn = (APlayerPawn_Athena_C*)Object;
            auto DBNOPC = (AFortPlayerControllerAthena*)DBNOPawn->Controller;
            auto InstigatorPC = (AFortPlayerControllerAthena*)Params->EventInstigator;

            if (InstigatorPC && DBNOPawn && DBNOPC)
            {
                DBNOPawn->bIsDBNO = false;
                DBNOPawn->OnRep_IsDBNO();

                DBNOPC->ClientOnPawnRevived(InstigatorPC);
                DBNOPawn->SetHealth(100);
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerAttemptInteract", {
            auto Params = (AFortPlayerController_ServerAttemptInteract_Params*)Parameters;
            auto PC = (AFortPlayerControllerAthena*)Object;

            if (Params->ReceivingActor)
            {
                auto DBNOPawn = (APlayerPawn_Athena_C*)Params->ReceivingActor;
                auto DBNOPC = (AFortPlayerControllerAthena*)DBNOPawn->Controller;

                if (DBNOPawn && DBNOPC && DBNOPawn->IsA(APlayerPawn_Athena_C::StaticClass()))
                {
                    DBNOPawn->ReviveFromDBNO(PC);
                }
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerPlayEmoteItem", {
            if (!Object->IsA(AFortPlayerControllerAthena::StaticClass()))
                return false;

            auto CurrentPC = (AFortPlayerControllerAthena*)Object;
            auto CurrentPawn = (APlayerPawn_Athena_C*)CurrentPC->Pawn;

            auto EmoteParams = (AFortPlayerController_ServerPlayEmoteItem_Params*)Parameters;
            auto AnimInstance = (UFortAnimInstance*)CurrentPawn->Mesh->GetAnimInstance();

            if (CurrentPC && !CurrentPC->IsInAircraft() && CurrentPawn && EmoteParams->EmoteAsset && AnimInstance && !AnimInstance->bIsJumping && !AnimInstance->bIsFalling)
            {
                // ((UFortCheatManager*)CurrentPC->CheatManager)->AthenaEmote(EmoteParams->EmoteAsset->Name.ToWString().c_str());
                // CurrentPC->ServerEmote(EmoteParams->EmoteAsset->Name);
                if (EmoteParams->EmoteAsset->IsA(UAthenaDanceItemDefinition::StaticClass()))
                {
                    if (auto Montage = EmoteParams->EmoteAsset->GetAnimationHardReference(CurrentPawn->CharacterBodyType, CurrentPawn->CharacterGender))
                    {
                        auto& RepAnimMontageInfo = CurrentPawn->RepAnimMontageInfo;
                        auto& ReplayRepAnimMontageInfo = CurrentPawn->ReplayRepAnimMontageInfo;
                        auto& RepCharPartAnimMontageInfo = CurrentPawn->RepCharPartAnimMontageInfo;
                        auto& LocalAnimMontageInfo = CurrentPawn->AbilitySystemComponent->LocalAnimMontageInfo;
                        auto Ability = CurrentPawn->AbilitySystemComponent->AllReplicatedInstancedAbilities[0];

                        const auto Duration = AnimInstance->Montage_Play(Montage, 1.0f, EMontagePlayReturnType::Duration, 0.0f, true);

                        if (Duration > 0.f)
                        {
                            ReplayRepAnimMontageInfo.AnimMontage = Montage;
                            LocalAnimMontageInfo.AnimMontage = Montage;
                            if (Ability)
                            {
                                LocalAnimMontageInfo.AnimatingAbility = Ability;
                            }
                            LocalAnimMontageInfo.PlayBit = 1;

                            RepAnimMontageInfo.AnimMontage = Montage;
                            RepAnimMontageInfo.ForcePlayBit = 1;

                            RepCharPartAnimMontageInfo.PawnMontage = Montage;

                            if (Ability)
                            {
                                Ability->CurrentMontage = Montage;
                            }

                            bool bIsStopped = AnimInstance->Montage_GetIsStopped(Montage);

                            if (!bIsStopped)
                            {
                                RepAnimMontageInfo.PlayRate = AnimInstance->Montage_GetPlayRate(Montage);
                                RepAnimMontageInfo.Position = AnimInstance->Montage_GetPosition(Montage);
                                RepAnimMontageInfo.BlendTime = AnimInstance->Montage_GetBlendTime(Montage);
                            }

                            RepAnimMontageInfo.IsStopped = bIsStopped;
                            RepAnimMontageInfo.NextSectionID = 0;

                            // CurrentPawn->Mesh->SetAnimation(Montage);
                            CurrentPawn->OnRep_ReplicatedMovement();
                            CurrentPawn->OnRep_RepAnimMontageStartSection();
                            CurrentPawn->OnRep_CharPartAnimMontageInfo();
                            CurrentPawn->OnRep_ReplicatedAnimMontage();
                            CurrentPawn->OnRep_ReplayRepAnimMontageInfo();
                            CurrentPawn->ForceNetUpdate();
                        }
                    }
                }
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerAttemptInventoryDrop", {
            auto PC = (AFortPlayerControllerAthena*)Object;

            if (PC && !PC->IsInAircraft())
                Inventory::OnDrop(PC, Parameters);

            return false;
        })

        DEFINE_PEHOOK("Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded", {
            if (Object->IsA(ABP_VictoryDrone_C::StaticClass()))
            {
                auto Drone = (ABP_VictoryDrone_C*)Object;

                if (Drone)
                {
                    Drone->K2_DestroyActor();
                }
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerExecuteInventoryItem", {
            EquipInventoryItem((AFortPlayerControllerAthena*)Object, *(FGuid*)Parameters);

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerReturnToMainMenu", {
            ((AFortPlayerController*)Object)->ClientTravel(L"Frontend", ETravelType::TRAVEL_Absolute, false, FGuid());

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerLoadingScreenDropped", {
            auto Pawn = (APlayerPawn_Athena_C*)((AFortPlayerController*)Object)->Pawn;

            if (Pawn && Pawn->AbilitySystemComponent)
            {
                ApplyAbilities(Pawn);
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerPawn.ServerChoosePart", {
            auto Params = (AFortPlayerPawn_ServerChoosePart_Params*)Parameters;
            auto Pawn = (APlayerPawn_Athena_C*)Object;

            if (Params && Pawn)
            {
                if (!Params->ChosenCharacterPart)
                    return false;
            }

            return false;
        })

        DEFINE_PEHOOK("Function Engine.GameMode.ReadyToStartMatch", {
            if (!bListening)
            {
                Game::OnReadyToStartMatch();
                Listen();
                bListening = true;
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortGameModeAthena.OnAircraftExitedDropZone", { // To make this faster we could loop through client connections and get their controllers

			if (GetWorld() && GetWorld()->NetDriver && GetWorld()->NetDriver->ClientConnections.Data)
            {
                auto Connections = HostBeacon->NetDriver->ClientConnections;

                for (int i = 0; i < Connections.Num(); i++)
                {
                    auto Controller = (AFortPlayerControllerAthena*)Connections[i]->PlayerController;

                    if (!Controller || !Controller->IsA(AFortPlayerControllerAthena::StaticClass()) || Controller->PlayerState->bIsSpectator)
                        continue;

                    if (Controller && Controller->IsInAircraft())
                        Controller->ServerAttemptAircraftJump(FRotator());
                }            
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerCheatAll", {
            KickPlayer((AFortPlayerControllerAthena*)Object, L"Please do not do that!");
            return true;
        })

        printf("[+] Hooked %zu UFunction(s)\n", toHook.size());
    }
}