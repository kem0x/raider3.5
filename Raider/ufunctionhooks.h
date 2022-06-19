#pragma once
#pragma warning(disable:4099)

#include <functional>

#include "game.h"
#include "replication.h"
#include "ue4.h"

// #define LOGGING
//#define CHEATS
#define MAXPLAYERS 100

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
        DEFINE_PEHOOK(
            "Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility", {
            auto AbilitySystemComponent = static_cast<UAbilitySystemComponent*>(Object);
            auto Params = static_cast<UAbilitySystemComponent_ServerTryActivateAbility_Params*>(Parameters);

            TryActivateAbility(AbilitySystemComponent, Params->AbilityToActivate, Params->InputPressed, &Params->PredictionKey, nullptr);

            return false;
        })

        DEFINE_PEHOOK(
            "Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData", {
            auto AbilitySystemComponent = static_cast<UAbilitySystemComponent*>(Object);
            auto Params = static_cast<UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params*>(Parameters);

            TryActivateAbility(AbilitySystemComponent, Params->AbilityToActivate, Params->InputPressed, &Params->PredictionKey, &Params->TriggerEventData);

            return false;
        })

        DEFINE_PEHOOK(
            "Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch", {
            auto AbilitySystemComponent = static_cast<UAbilitySystemComponent*>(Object);
            auto Params = static_cast<UAbilitySystemComponent_ServerAbilityRPCBatch_Params*>(Parameters);

            TryActivateAbility(AbilitySystemComponent, Params->BatchInfo.AbilitySpecHandle, Params->BatchInfo.InputPressed, &Params->BatchInfo.PredictionKey, nullptr);

            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerPawn.ServerHandlePickup", {
            Inventory::OnPickup((AFortPlayerControllerAthena*)(static_cast<APawn*>(Object))->Controller, Parameters);
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
                        auto& Command = Arguments[0];
                        std::transform(Command.begin(), Command.end(), Command.begin(), ::tolower);

                        if (Command == "revive" && Pawn->bIsDBNO)
                        {
                            Pawn->bIsDBNO = false;
                            Pawn->OnRep_IsDBNO();

                            // PC->ClientOnPawnRevived(InstigatorPC);
                            Pawn->SetHealth(100);
                        }

                        else if (Command == "testindicator") // It doesn't replicate to teammates for some reason.
                        {
                            auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
                            if (PlayerState)
                            {
                                PlayerState->OnRep_MapIndicatorPos();
								ClientMessage(PC, L"Updated Minimap Indicator!");
                            }
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

        DEFINE_PEHOOK(
            "Function Engine.CheatManager.CheatScript", {
            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerController.ServerCreateBuildingActor", {
            auto PC = static_cast<AFortPlayerControllerAthena*>(Object);

            auto Params = static_cast<AFortPlayerController_ServerCreateBuildingActor_Params*>(Parameters);
            auto CurrentBuildClass = Params->BuildingClassData.BuildingClass;
                
            if (PC && Params && CurrentBuildClass) {
                auto BuildingActor = static_cast<ABuildingSMActor*>(SpawnActor(CurrentBuildClass, Params->BuildLoc, Params->BuildRot, PC, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn));
                if (BuildingActor && CanBuild2(BuildingActor))
                {
                    BuildingActor->DynamicBuildingPlacementType = EDynamicBuildingPlacementType::DestroyAnythingThatCollides;
                    BuildingActor->SetMirrored(Params->bMirrored);
                    BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PC);
                }
                else
                {
                    BuildingActor->SetActorScale3D({});
                    BuildingActor->SilentDie();
                }
            }

            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerController.ServerBeginEditingBuildingActor", {
            auto Params = static_cast<AFortPlayerController_ServerBeginEditingBuildingActor_Params*>(Parameters);
            auto Controller = static_cast<AFortPlayerControllerAthena*>(Object);
            auto Pawn = static_cast<APlayerPawn_Athena_C*>(Controller->Pawn);
            bool bFound = false;
            auto EditToolEntry = FindItemInInventory<UFortEditToolItemDefinition>(Controller, bFound);

            if (Controller && Pawn && Params->BuildingActorToEdit && bFound)
            {
                auto EditTool = (AFortWeap_EditingTool*)EquipWeaponDefinition(Pawn, static_cast<UFortWeaponItemDefinition*>(EditToolEntry.ItemDefinition), EditToolEntry.ItemGuid);

                if (EditTool)
                {
                    EditTool->EditActor = Params->BuildingActorToEdit;
                    EditTool->OnRep_EditActor();
                    Params->BuildingActorToEdit->EditingPlayer = static_cast<AFortPlayerStateZone*>(Pawn->PlayerState);
                    Params->BuildingActorToEdit->OnRep_EditingPlayer();
                }
            }

            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortDecoTool.ServerSpawnDeco", {
            SpawnDeco(static_cast<AFortDecoTool*>(Object), Parameters);
            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerController.ServerEditBuildingActor", {
            auto Params = static_cast<AFortPlayerController_ServerEditBuildingActor_Params*>(Parameters);
            auto PC = static_cast<AFortPlayerControllerAthena*>(Object);

            if (PC && Params)
            {
                auto BuildingActor = Params->BuildingActorToEdit;
                auto NewBuildingClass = Params->NewBuildingClass;
                auto RotationIterations = Params->RotationIterations;

                printf("RotationIterations: %i\n", RotationIterations);

                if (BuildingActor && NewBuildingClass)
                {
                    auto rotation = BuildingActor->K2_GetActorRotation(); //Not correct, this is not centered.

                    if (BuildingActor->BuildingType == EFortBuildingType::Wall) // this only works for walls
                    rotation.Yaw += /* rotation.Yaw */ 90 * RotationIterations;

                    auto HealthPercent = BuildingActor->GetHealthPercent();

                    //  BuildingActor->K2_DestroyActor();					
                    BuildingActor->SilentDie();

                    if (auto NewBuildingActor = static_cast<ABuildingSMActor*>(SpawnActor(NewBuildingClass, BuildingActor->K2_GetActorLocation(), rotation, PC)))
                    {
                        NewBuildingActor->ForceBuildingHealth(NewBuildingActor->GetMaxHealth() * HealthPercent);
                        NewBuildingActor->SetMirrored(Params->bMirrored);
                        NewBuildingActor->InitializeKismetSpawnedBuildingActor(NewBuildingActor, PC);
                    }
                }
            }

            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerControllerZone.ClientOnPawnDied", { // Spectating hasn't been majorly testing
            auto Params = static_cast<AFortPlayerControllerZone_ClientOnPawnDied_Params*>(Parameters);
            auto DeadPC = static_cast<AFortPlayerControllerAthena*>(Object);
            auto DeadPlayerState = static_cast<AFortPlayerStateAthena*>(DeadPC->PlayerState);

            if (DeadPC && Params)
            {
                Game::Mode->HandlePlayerDeath(DeadPC);
                // GameState->PlayerArray.RemoveAt(DeadPC->NetPlayerIndex);

                if (DeadPC && DeadPC->Pawn)
                {
                    // TODO: Show death drone/death animation
                    DeadPC->Pawn->K2_DestroyActor();
                }

                auto KillerPawn = Params->DeathReport.KillerPawn;
                auto KillerPlayerState = static_cast<AFortPlayerStateAthena*>(Params->DeathReport.KillerPlayerState);

                DeadPlayerState->OnRep_DeathInfo();
                
                bool bChooseRandomPawn = false;
                if (KillerPlayerState && KillerPawn && KillerPlayerState != DeadPlayerState)
                {
                    if (KillerPlayerState->IsA(AFortPlayerStateAthena::StaticClass()) && KillerPawn->IsA(APlayerPawn_Athena_C::StaticClass()) && Params->DeathReport.DamageCauser->IsA(APlayerPawn_Athena_C::StaticClass()))
                    {
                        KillerPlayerState->KillScore++;
                        KillerPlayerState->OnRep_Kills();
                        Spectate(DeadPC->NetConnection, KillerPlayerState);
                    } else {
                        bChooseRandomPawn = true;
                    }
                } else {
                    bChooseRandomPawn = true;
                }

                if (bChooseRandomPawn)
                {
                    auto Players = GetWorld()->GameState->PlayerArray;
                    if (Players.Num() > 2)
                    {
                        auto PlayerState = static_cast<AFortPlayerStateAthena*>(Players[rand() % Players.Num()]);
                        if (PlayerState)
                        {
                            Spectate(DeadPC->NetConnection, PlayerState);
                        }
                    }
                }
            }

            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerController.ServerEndEditingBuildingActor", {
            auto Params = static_cast<AFortPlayerController_ServerEndEditingBuildingActor_Params*>(Parameters);
            auto PC = static_cast<AFortPlayerControllerAthena*>(Object);

            if (!PC->IsInAircraft() && Params->BuildingActorToStopEditing)
            {
                Params->BuildingActorToStopEditing->EditingPlayer = nullptr;
                Params->BuildingActorToStopEditing->OnRep_EditingPlayer();

                auto EditTool = (AFortWeap_EditingTool*)(static_cast<APlayerPawn_Athena_C*>(PC->Pawn))->CurrentWeapon;

                if (EditTool)
                {
                    EditTool->bEditConfirmed = true;
                    EditTool->EditActor = nullptr;
                    EditTool->OnRep_EditActor();
                }
            }
            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerController.ServerRepairBuildingActor", {
            auto Params = static_cast<AFortPlayerController_ServerRepairBuildingActor_Params*>(Parameters);
            auto Controller = static_cast<AFortPlayerControllerAthena*>(Object);
            auto Pawn = static_cast<APlayerPawn_Athena_C*>(Controller->Pawn);

            if (Controller && Pawn && Params->BuildingActorToRepair)
            {
                Params->BuildingActorToRepair->RepairBuilding(Controller, 10); // TODO: Figure out how to get the repair amount
            }

            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerControllerAthena.ServerAttemptAircraftJump", {
            auto Params = static_cast<AFortPlayerControllerAthena_ServerAttemptAircraftJump_Params*>(Parameters);
            auto PC = static_cast<AFortPlayerControllerAthena*>(Object);
            auto GameState = static_cast<AAthena_GameState_C*>(GetWorld()->AuthorityGameMode->GameState);

            if (PC && Params && !PC->Pawn && PC->IsInAircraft())
            {
                auto Aircraft = GameState->Aircrafts[0];

                if (Aircraft)
                {
                    auto ExitLocation = Aircraft->K2_GetActorLocation();
                        
                    InitPawn(PC, ExitLocation);
                    (static_cast<AAthena_GameState_C*>(GetWorld()->AuthorityGameMode->GameState))->Aircrafts[0]->PlayEffectsForPlayerJumped();
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

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerPawn.ServerReviveFromDBNO", {
            auto Params = static_cast<AFortPlayerPawn_ServerReviveFromDBNO_Params*>(Parameters);
            auto DBNOPawn = static_cast<APlayerPawn_Athena_C*>(Object);
            auto DBNOPC = static_cast<AFortPlayerControllerAthena*>(DBNOPawn->Controller);
            auto InstigatorPC = static_cast<AFortPlayerControllerAthena*>(Params->EventInstigator);

            if (InstigatorPC && DBNOPawn && DBNOPC)
            {
                DBNOPawn->bIsDBNO = false;
                DBNOPC->ClientOnPawnRevived(InstigatorPC);
                DBNOPawn->SetHealth(30);
                DBNOPawn->OnRep_IsDBNO();
                if (DBNOPawn && DBNOPawn->AbilitySystemComponent)
                {
                    ApplyAbilities(DBNOPawn, true);
                }
            }

            return false;
       })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerController.ServerAttemptInteract", {
            auto Params = static_cast<AFortPlayerController_ServerAttemptInteract_Params*>(Parameters);
            auto PC = static_cast<AFortPlayerControllerAthena*>(Object);

            if (Params->ReceivingActor)
            {
                auto DBNOPawn = static_cast<APlayerPawn_Athena_C*>(Params->ReceivingActor);
                auto DBNOPC = static_cast<AFortPlayerControllerAthena*>(DBNOPawn->Controller);

                if (DBNOPawn && DBNOPC && DBNOPawn->IsA(APlayerPawn_Athena_C::StaticClass()))
                {
                    DBNOPawn->ReviveFromDBNO(PC);
                }
            }

            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerController.ServerPlayEmoteItem", {
            if (!Object->IsA(AFortPlayerControllerAthena::StaticClass()))
                return false;

            auto CurrentPC = static_cast<AFortPlayerControllerAthena*>(Object);
            auto CurrentPawn = static_cast<APlayerPawn_Athena_C*>(CurrentPC->Pawn);

            auto EmoteParams = static_cast<AFortPlayerController_ServerPlayEmoteItem_Params*>(Parameters);
            auto AnimInstance = static_cast<UFortAnimInstance*>(CurrentPawn->Mesh->GetAnimInstance());

            if (CurrentPC && !CurrentPC->IsInAircraft() && CurrentPawn && EmoteParams->EmoteAsset && AnimInstance && !AnimInstance->bIsJumping && !AnimInstance->bIsFalling)
            {
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

                            CurrentPawn->OnRep_ReplicatedMovement();
                            CurrentPawn->OnRep_CharPartAnimMontageInfo();
                            CurrentPawn->OnRep_ReplicatedAnimMontage();
                            CurrentPawn->OnRep_RepAnimMontageStartSection();
                            CurrentPawn->OnRep_ReplayRepAnimMontageInfo();
                            CurrentPawn->ForceNetUpdate();
                        }
                    }
                }
            }

            return false;
       })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerController.ServerAttemptInventoryDrop", {
            auto PC = static_cast<AFortPlayerControllerAthena*>(Object);

            if (PC && !PC->IsInAircraft())
                Inventory::OnDrop(PC, Parameters);

            return false;
        })

        DEFINE_PEHOOK(
            "Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded", {
            if (Object->IsA(ABP_VictoryDrone_C::StaticClass()))
            {
                auto Drone = static_cast<ABP_VictoryDrone_C*>(Object);

                if (Drone)
                {
                    Drone->K2_DestroyActor();
                }
            }

            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerController.ServerExecuteInventoryItem", {
            EquipInventoryItem(static_cast<AFortPlayerControllerAthena*>(Object), *static_cast<FGuid*>(Parameters));

            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerController.ServerReturnToMainMenu", {
            (static_cast<AFortPlayerController*>(Object))->ClientTravel(L"Frontend", ETravelType::TRAVEL_Absolute, false, FGuid());

            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerController.ServerLoadingScreenDropped", {
            auto Pawn = (APlayerPawn_Athena_C*)(static_cast<AFortPlayerController*>(Object))->Pawn;

            /*if (IsBanned(std::wstring(Pawn->PlayerState->SavedNetworkAddress.c_str())))
            {
                std::cout << "Player is banned!\n";
                KickController((APlayerController*)Pawn->Controller, L"You are banned."); // TODO: Add ban reason to here too.
                // Should we change their name to "Banned" or something?
                return true;
            }*/

            if (Pawn && Pawn->AbilitySystemComponent)
            {
                ApplyAbilities(Pawn);
            }

            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerPawn.ServerChoosePart", {
            return true;
        })

        DEFINE_PEHOOK(
            "Function Engine.GameMode.ReadyToStartMatch", {
            if (!bListening)
            {
                Game::OnReadyToStartMatch();

                HostBeacon = SpawnActor<AFortOnlineBeaconHost>();
                HostBeacon->ListenPort = 7777;
                auto bInitBeacon = Native::OnlineBeaconHost::InitHost(HostBeacon);
                CheckNullFatal(bInitBeacon, "Failed to initialize the Beacon!");

                HostBeacon->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
                HostBeacon->NetDriver->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
                HostBeacon->NetDriver->World = GetWorld();

                GetWorld()->NetDriver = HostBeacon->NetDriver;
                GetWorld()->LevelCollections[0].NetDriver = HostBeacon->NetDriver;
                GetWorld()->LevelCollections[1].NetDriver = HostBeacon->NetDriver;

                // Native::OnlineBeacon::PauseBeaconRequests(HostBeacon, false);

                CreateThread(0, 0, MapLoadThread, 0, 0, 0);
                GetWorld()->AuthorityGameMode->GameSession->MaxPlayers = MAXPLAYERS;
                
                bListening = true;
                std::cout << "\n\nListening on port " << HostBeacon->ListenPort << "\n\n";
            }

            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortGameModeAthena.OnAircraftExitedDropZone", {

            if (GetWorld() && GetWorld()->NetDriver && GetWorld()->NetDriver->ClientConnections.Data)
            {
                auto Connections = HostBeacon->NetDriver->ClientConnections;

                for (int i = 0; i < Connections.Num(); i++)
                {
                    auto Controller = static_cast<AFortPlayerControllerAthena*>(Connections[i]->PlayerController);

                    if (!Controller || !Controller->IsA(AFortPlayerControllerAthena::StaticClass()) || Controller->PlayerState->bIsSpectator)
                    continue;

                    if (Controller && Controller->IsInAircraft())
                        Controller->ServerAttemptAircraftJump(FRotator());
                }
            }

            return false;
        })

        DEFINE_PEHOOK(
            "Function FortniteGame.FortPlayerController.ServerCheatAll", {
            return true;
        })

        printf("[+] Hooked %zu UFunction(s)\n", toHook.size());
    }
}
