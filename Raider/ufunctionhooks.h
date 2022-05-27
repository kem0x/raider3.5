#pragma once

#include <functional>

#include "game.h"
#include "replication.h"
#include "ue4.h"

// #define LOGGING
static bool bDeveloperCheats = true; // CAnt put a ifdef in a define

inline std::vector<UFunction*> toHook;
inline std::vector<std::function<void(UObject*, void*)>> toCall;

#define DEFINE_PEHOOK(ufunctionName, func)                           \
    toHook.push_back(UObject::FindObject<UFunction>(ufunctionName)); \
    toCall.push_back([](UObject * Object, void* Parameters) -> void func);

namespace UFunctionHooks
{
    auto Initialize()
    {
        DEFINE_PEHOOK("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility", {
            auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;
            auto Params = (UAbilitySystemComponent_ServerTryActivateAbility_Params*)Parameters;

            TryActivateAbility(AbilitySystemComponent, Params->AbilityToActivate, Params->InputPressed, &Params->PredictionKey, nullptr);
        })

        DEFINE_PEHOOK("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData", {
            auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;
            auto Params = (UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params*)Parameters;

            TryActivateAbility(AbilitySystemComponent, Params->AbilityToActivate, Params->InputPressed, &Params->PredictionKey, &Params->TriggerEventData);
        })

        DEFINE_PEHOOK("Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch", {
            auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;
            auto Params = (UAbilitySystemComponent_ServerAbilityRPCBatch_Params*)Parameters;

            TryActivateAbility(AbilitySystemComponent, Params->BatchInfo.AbilitySpecHandle, Params->BatchInfo.InputPressed, &Params->BatchInfo.PredictionKey, nullptr);
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerPawn.ServerHandlePickup", { HandlePickup((AFortPlayerPawn*)Object, Parameters, true); })

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

                        if (Command == "setpickaxe" && NumArgs >= 1)
                        {
                            auto& PickaxeName = Arguments[1];
                            auto PID = UObject::FindObject<UFortWeaponMeleeItemDefinition>("WID_Harvest_" + PickaxeName + "_Athena_C_T01" + ".WID_Harvest_" + PickaxeName + "_Athena_C_T01");

                            if (PID && PID->IsA(UFortWeaponMeleeItemDefinition::StaticClass()))
                            {
                                bool bFound = false;
                                auto PickaxeEntry = FindItemInInventory<UFortWeaponMeleeItemDefinition>(PC, bFound);

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

                        else if (bDeveloperCheats && Command == "giveweapon" && NumArgs >= 1)
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

                        else if (bDeveloperCheats && Command == "revive" && Pawn->bIsDBNO)
                        {
                            Pawn->bIsDBNO = false;
                            Pawn->OnRep_IsDBNO();

                            // PC->ClientOnPawnRevived(InstigatorPC);
                            Pawn->SetHealth(100);
                        }

                        else if (bDeveloperCheats && Command == "respawn" && !Pawn)
                        {
                            InitPawn(PC);
                            PC->ActivateSlot(EFortQuickBars::Primary, 0, 0, true); // Select the pickaxe

                            bool bFound = false;
                            auto PickaxeEntry = FindItemInInventory<UFortWeaponMeleeItemDefinition>(PC, bFound);

                            if (bFound)
                                EquipInventoryItem(PC, PickaxeEntry.ItemGuid);
                        }

                        else
                            ClientMessage(PC, L"Unable to handle command!");
                    }
                }
            }
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerCreateBuildingActor", {
            auto PC = (AFortPlayerControllerAthena*)Object;

            auto Params = (AFortPlayerController_ServerCreateBuildingActor_Params*)Parameters;
            auto CurrentBuildClass = Params->BuildingClassData.BuildingClass;

            static auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);

            if (CurrentBuildClass)
            {
                if (auto BuildingActor = (ABuildingSMActor*)SpawnActor(CurrentBuildClass, Params->BuildLoc, Params->BuildRot, PC))
                {
                    TArray<ABuildingActor*> ExistingBuildings;
                    auto bCanBuild = GameState->StructuralSupportSystem->K2_CanAddBuildingActorToGrid(GetWorld(), BuildingActor, Params->BuildLoc, Params->BuildRot, false, false, &ExistingBuildings);

                    if (bCanBuild == EFortStructuralGridQueryResults::CanAdd || ExistingBuildings.Num() == 0)
                    {
                        BuildingActor->DynamicBuildingPlacementType = EDynamicBuildingPlacementType::DestroyAnythingThatCollides;
                        BuildingActor->SetMirrored(Params->bMirrored);
                        BuildingActor->PlacedByPlacementTool();
                        BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PC);
                    }
                    else
                    {
                        BuildingActor->SetActorScale3D({});
                        BuildingActor->SilentDie();
                        // BuildingActor->K2_DestroyActor();
                    }

                    ExistingBuildings.Reset();
                }
            }
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

					if (BuildingActor->BuildingType == EFortBuildingType::Wall)
                        rotation.Yaw =+ 90.0f * RotationIterations;
                    else if (BuildingActor->BuildingType == EFortBuildingType::Stairs)
                        rotation.Yaw =+ 180.0f * RotationIterations;
					
                    //  BuildingActor->K2_DestroyActor();					
                    BuildingActor->SilentDie();

                    if (auto NewBuildingActor = (ABuildingSMActor*)SpawnActor(NewBuildingClass, BuildingActor->K2_GetActorLocation(), rotation, PC))
                    {
                        NewBuildingActor->SetMirrored(Params->bMirrored);
                        NewBuildingActor->InitializeKismetSpawnedBuildingActor(NewBuildingActor, PC);
                    }
                }
            }
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerControllerZone.ClientOnPawnDied", {
            return;
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
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerRepairBuildingActor", {
            auto Params = (AFortPlayerController_ServerRepairBuildingActor_Params*)Parameters;
            auto Controller = (AFortPlayerControllerAthena*)Object;
            auto Pawn = (APlayerPawn_Athena_C*)Controller->Pawn;

            if (Controller && Pawn && Params->BuildingActorToRepair)
            {
                Params->BuildingActorToRepair->RepairBuilding(Controller, 10); // figure out how to get the repair amount
            }
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerControllerAthena.ServerAttemptAircraftJump", {
            auto Params = (AFortPlayerControllerAthena_ServerAttemptAircraftJump_Params*)Parameters;
            auto PC = (AFortPlayerControllerAthena*)Object;
            auto GameState = (AAthena_GameState_C*)GetWorld()->AuthorityGameMode->GameState;

            if (PC && Params && !PC->Pawn && PC->IsInAircraft()) // TODO: Teleport the player's pawn instead of making a new one.
            {
                // ((AAthena_GameState_C*)GetWorld()->AuthorityGameMode->GameState)->Aircrafts[0]->PlayEffectsForPlayerJumped();
                auto Aircraft = (AFortAthenaAircraft*)GameState->Aircrafts[0];

                if (Aircraft)
                {
                    auto ExitLocation = Aircraft->K2_GetActorLocation();

                    // ExitLocation.Z -= 500;

                    InitPawn(PC, ExitLocation);
                    PC->ActivateSlot(EFortQuickBars::Primary, 0, 0, true); // Select the pickaxe

                    bool bFound = false;
                    auto PickaxeEntry = FindItemInInventory<UFortWeaponMeleeItemDefinition>(PC, bFound);

                    if (bFound)
                        EquipInventoryItem(PC, PickaxeEntry.ItemGuid);

                    // PC->Pawn->K2_TeleportTo(ExitLocation, Params->ClientRotation);
                }
            }
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
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerPlayEmoteItem", {
            if (!Object->IsA(AFortPlayerControllerAthena::StaticClass()))
                return;

            auto CurrentPC = (AFortPlayerControllerAthena*)Object;
            auto CurrentPawn = (APlayerPawn_Athena_C*)CurrentPC->Pawn;

            auto EmoteParams = (AFortPlayerController_ServerPlayEmoteItem_Params*)Parameters;
            auto AnimInstance = (UFortAnimInstance*)CurrentPawn->Mesh->GetAnimInstance();

            if (CurrentPC && !CurrentPC->IsInAircraft() && CurrentPawn && EmoteParams->EmoteAsset && !AnimInstance->bIsJumping && !AnimInstance->bIsFalling)
            {
                if (EmoteParams->EmoteAsset->IsA(UAthenaDanceItemDefinition::StaticClass()))
                {
                    if (auto Montage = EmoteParams->EmoteAsset->GetAnimationHardReference(CurrentPawn->CharacterBodyType, CurrentPawn->CharacterGender))
                    {
                        if (AnimInstance && Montage)
                        {
                            auto& RepAnimMontageInfo = CurrentPawn->RepAnimMontageInfo;
                            auto& RepCharPartAnimMontageInfo = CurrentPawn->RepCharPartAnimMontageInfo;
                            auto& LocalAnimMontageInfo = CurrentPawn->AbilitySystemComponent->LocalAnimMontageInfo;
                            auto Ability = CurrentPawn->AbilitySystemComponent->AllReplicatedInstancedAbilities[0];

                            const auto Duration = AnimInstance->Montage_Play(Montage, 1.0f, EMontagePlayReturnType::Duration, 0.0f, true);

                            if (Duration > 0.f)
                            {
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

                                CurrentPawn->OnRep_ReplicatedMovement();
                                CurrentPawn->OnRep_CharPartAnimMontageInfo();
                                CurrentPawn->OnRep_ReplicatedAnimMontage();
                            }
                        }
                    }
                }
            }
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerAttemptInventoryDrop", {
            auto PC = (AFortPlayerControllerAthena*)Object;

            if (!PC->IsInAircraft())
            {
                auto Pawn = (APlayerPawn_Athena_C*)PC->Pawn;
                HandleInventoryDrop(Pawn, Parameters);
            }
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
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerExecuteInventoryItem", {
            EquipInventoryItem((AFortPlayerControllerAthena*)Object, *(FGuid*)Parameters);
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerReturnToMainMenu", {
            ((AFortPlayerController*)Object)->ClientTravel(L"Frontend", ETravelType::TRAVEL_Absolute, false, FGuid());
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerLoadingScreenDropped", {
            auto Pawn = (APlayerPawn_Athena_C*)((AFortPlayerController*)Object)->Pawn;

            if (Pawn && Pawn->AbilitySystemComponent)
            {
                static auto SprintAbility = UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_Sprint");
                static auto ReloadAbility = UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_Reload");
                static auto RangedWeaponAbility = UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_RangedWeapon");
                static auto JumpAbility = UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_Jump");
                static auto DeathAbility = UObject::FindObject<UClass>("BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C");
                static auto InteractUseAbility = UObject::FindObject<UClass>("BlueprintGeneratedClass GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C");
                static auto InteractSearchAbility = UObject::FindObject<UClass>("BlueprintGeneratedClass GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C");

                GrantGameplayAbility(Pawn, SprintAbility);
                GrantGameplayAbility(Pawn, ReloadAbility);
                GrantGameplayAbility(Pawn, RangedWeaponAbility);
                GrantGameplayAbility(Pawn, JumpAbility);
                GrantGameplayAbility(Pawn, DeathAbility);
                GrantGameplayAbility(Pawn, InteractUseAbility);
                GrantGameplayAbility(Pawn, InteractSearchAbility);
            }
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerPawn.ServerChoosePart", {
            auto Params = (AFortPlayerPawn_ServerChoosePart_Params*)Parameters;
            auto Pawn = (APlayerPawn_Athena_C*)Object;

            if (Params && Pawn)
            {
                if (!Params->ChosenCharacterPart)
                    return;
            }
        })

        DEFINE_PEHOOK("Function Engine.GameMode.ReadyToStartMatch", {
            if (!bListening)
            {
                Game::OnReadyToStartMatch();
                Listen();
                bListening = true;
            }
        })

        DEFINE_PEHOOK("Function FortniteGame.FortGameModeAthena.OnAircraftExitedDropZone", { // To make this faster we could loop through client connections and get their controllers
            TArray<AActor*> PlayerArray;

            static auto GameplayStatics = (UGameplayStatics*)UGameplayStatics::StaticClass()->CreateDefaultObject();
            GameplayStatics->STATIC_GetAllActorsOfClass(GetWorld(), APlayerController::StaticClass(), &PlayerArray);

            std::cout << "Size: " << PlayerArray.Num() << std::endl;

            for (int i = 0; i < PlayerArray.Num(); i++)
            {
                auto Controller = (AFortPlayerControllerAthena*)PlayerArray[i];

                if (!Controller)
                    continue;

                if (Controller && Controller->IsInAircraft())
                    Controller->ServerAttemptAircraftJump(FRotator());
            }
        })

        printf("[+] Hooked %zu UFunction(s)\n", toHook.size());
    }
}