#pragma once
#pragma warning(disable : 4099)

#include <functional>

#include "Logic/Game.h"
#include "Logic/Spawners.h"
#include "Logic/Abilities.h"
#include "UE4.h"

// #define LOGGING
//#define CHEATS
#define MAXPLAYERS 100

// Define the hook with ufunction full name
// Return true in the lambda to prevent the original function call

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

            Abilities::TryActivateAbility(AbilitySystemComponent, Params->AbilityToActivate, Params->InputPressed, &Params->PredictionKey, nullptr);

            return false;
        })

        DEFINE_PEHOOK("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData", {
            auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;
            auto Params = (UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params*)Parameters;

            Abilities::TryActivateAbility(AbilitySystemComponent, Params->AbilityToActivate, Params->InputPressed, &Params->PredictionKey, &Params->TriggerEventData);

            return false;
        })

        DEFINE_PEHOOK("Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch", {
            auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;
            auto Params = (UAbilitySystemComponent_ServerAbilityRPCBatch_Params*)Parameters;

            Abilities::TryActivateAbility(AbilitySystemComponent, Params->BatchInfo.AbilitySpecHandle, Params->BatchInfo.InputPressed, &Params->BatchInfo.PredictionKey, nullptr);

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

        DEFINE_PEHOOK("Function Engine.CheatManager.CheatScript", {
            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerCreateBuildingActor", {
            auto PC = (AFortPlayerControllerAthena*)Object;

            auto Params = (AFortPlayerController_ServerCreateBuildingActor_Params*)Parameters;
            auto CurrentBuildClass = Params->BuildingClassData.BuildingClass;

            if (PC && Params && CurrentBuildClass)
            {
                {
                    auto BuildingActor = (ABuildingSMActor*)Spawners::SpawnActor(CurrentBuildClass, Params->BuildLoc, Params->BuildRot, PC, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn);
                    // SpawnBuilding(CurrentBuildClass, Params->BuildLoc, Params->BuildRot, (APlayerPawn_Athena_C*)PC->Pawn);
                    if (BuildingActor && CanBuild2(BuildingActor))
                    {
                        // Buildings.insert(BuildingActor); // Add as soon as possible to make sure there is no time to double build.

                        BuildingActor->DynamicBuildingPlacementType = EDynamicBuildingPlacementType::DestroyAnythingThatCollides;
                        BuildingActor->SetMirrored(Params->bMirrored);
                        // BuildingActor->PlacedByPlacementTool();
                        BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PC);
                        auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
                        BuildingActor->Team = PlayerState->TeamIndex;
                    }
                    else
                    {
                        BuildingActor->SetActorScale3D({});
                        BuildingActor->SilentDie();
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
            auto EditToolEntry = Inventory::FindItemInInventory<UFortEditToolItemDefinition>(Controller, bFound);

            if (Controller && Pawn && Params->BuildingActorToEdit && bFound)
            {
                auto EditTool = (AFortWeap_EditingTool*)Inventory::EquipWeaponDefinition(Pawn, (UFortWeaponItemDefinition*)EditToolEntry.ItemDefinition, EditToolEntry.ItemGuid);

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

        DEFINE_PEHOOK("Function FortniteGame.FortDecoTool.ServerSpawnDeco", {
            Spawners::SpawnDeco((AFortDecoTool*)Object, Parameters);
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

                if (BuildingActor && NewBuildingClass)
                {
                    auto location = BuildingActor->K2_GetActorLocation();
                    auto rotation = BuildingActor->K2_GetActorRotation();

                    int yaw = (int(rotation.Yaw) + 360) % 360; // Gets the rotation ranging from 0 to 360 degrees

                    if (BuildingActor->BuildingType != EFortBuildingType::Wall) // Centers building pieces if necessary
                    {
                        switch (yaw)
                        {
                        case 89: case 90: case 91: // Sometimes the rotation may differ by 1
                            switch (RotationIterations)
                            {
                            case 1:
                                location.X += -256;
                                location.Y += 256;
                                break;
                            case 2:
                                location.X += -512;
                                location.Y += 0;
                                break;
                            case 3:
                                location.X += -256;
                                location.Y += -256;
                                break;
                            }
                            yaw = 90;
                            break;
                        case 179: case 180: case 181:
                            switch (RotationIterations)
                            {
                            case 1:
                                location.X += -256;
                                location.Y += -256;
                                break;
                            case 2:
                                location.X += 0;
                                location.Y += -512;
                                break;
                            case 3:
                                location.X += 256;
                                location.Y += -256;
                                break;
                            }
                            yaw = 180;
                            break;
                        case 269: case 270: case 271:
                            switch (RotationIterations)
                            {
                            case 1:
                                location.X += 256;
                                location.Y += -256;
                                break;
                            case 2:
                                location.X += 512;
                                location.Y += 0;
                                break;
                            case 3:
                                location.X += 256;
                                location.Y += 256;
                                break;
                            }
                            yaw = 270;
                            break;
                        default: // 0, 360. etc.
                            switch (RotationIterations)
                            {
                            case 1:
                                location.X += 256;
                                location.Y += 256;
                                break;
                            case 2:
                                location.X += 0;
                                location.Y += 512;
                                break;
                            case 3:
                                location.X += -256;
                                location.Y += 256;
                                break;
                            }
                            yaw = 0;
                        }
                    }

                    rotation.Yaw = yaw + 90 * RotationIterations;

                    auto HealthPercent = BuildingActor->GetHealthPercent();

                    //  BuildingActor->K2_DestroyActor();
                    BuildingActor->SilentDie();

                    if (auto NewBuildingActor = (ABuildingSMActor*)Spawners::SpawnActor(NewBuildingClass, location, rotation, PC))
                    {
                        if (!BuildingActor->bIsInitiallyBuilding)
                            NewBuildingActor->ForceBuildingHealth(NewBuildingActor->GetMaxHealth() * HealthPercent);
                        NewBuildingActor->SetMirrored(Params->bMirrored);
                        NewBuildingActor->InitializeKismetSpawnedBuildingActor(NewBuildingActor, PC);
                        auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
                        NewBuildingActor->Team = PlayerState->TeamIndex;
                    }
                }
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerControllerZone.ClientOnPawnDied", { // Spectating hasn't been majorly testing
            auto Params = (AFortPlayerControllerZone_ClientOnPawnDied_Params*)Parameters;

            auto DeadPC = static_cast<AFortPlayerControllerAthena*>(Object);
            auto DeadPlayerState = static_cast<AFortPlayerStateAthena*>(DeadPC->PlayerState);

            auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);
            GameState->PlayersLeft--;
            GameState->OnRep_PlayersLeft();

            if (Params && DeadPC)
            {
                auto GameMode = static_cast<AFortGameModeAthena*>(GameState->AuthorityGameMode);
                auto KillerPlayerState = static_cast<AFortPlayerStateAthena*>(Params->DeathReport.KillerPlayerState);
                GameState->PlayerArray.RemoveSingle(DeadPC->NetPlayerIndex);

                Spawners::SpawnActor<ABP_VictoryDrone_C>(DeadPC->Pawn->K2_GetActorLocation())->PlaySpawnOutAnim();

                FDeathInfo DeathData;
                DeathData.bDBNO = false;
                DeathData.DeathLocation = DeadPC->Pawn->K2_GetActorLocation();
                DeathData.Distance = Params->DeathReport.KillerPawn ? Params->DeathReport.KillerPawn->GetDistanceTo(DeadPC->Pawn) : 0;

                DeathData.DeathCause = KillerPlayerState ? EDeathCause::Sniper : EDeathCause::FallDamage; // TODO: Determine what the actual death cause was.
                DeathData.FinisherOrDowner = KillerPlayerState ? KillerPlayerState : DeadPlayerState;

                DeadPC->Pawn->K2_DestroyActor();

                DeadPlayerState->DeathInfo = DeathData;
                DeadPlayerState->OnRep_DeathInfo();

                if (KillerPlayerState)
                {
                    if (auto Controller = static_cast<AFortPlayerControllerPvP*>(Params->DeathReport.KillerPawn->Controller))
                    {
                        Controller->ClientReceiveKillNotification(KillerPlayerState, DeadPlayerState);
                    }
                    
                    KillerPlayerState->KillScore++;
                    KillerPlayerState->TeamKillScore++;

                    KillerPlayerState->ClientReportKill(DeadPlayerState);
                    KillerPlayerState->OnRep_Kills();

                    Spectate(DeadPC->NetConnection, KillerPlayerState);
                }

                if (GameState->PlayersLeft == 1)
                {
                    TArray<AFortPlayerPawn*> OutActors;
                    GetFortKismet()->STATIC_GetAllFortPlayerPawns(GetWorld(), &OutActors);

                    auto Winner = OutActors[0];
                    auto Controller = static_cast<AFortPlayerControllerAthena*>(Winner->Controller);

                    if (!Controller->bClientNotifiedOfWin)
                    {
                        GameState->WinningPlayerName = Controller->PlayerState->GetPlayerName();
                        GameState->OnRep_WinningPlayerName();

                        Controller->PlayWinEffects();
                        Controller->ClientNotifyWon();

                        Controller->ClientGameEnded(Winner, true);
                        GameMode->ReadyToEndMatch();
                        GameMode->EndMatch();
                    }
                    OutActors.FreeArray();
                }

                if (GameState->PlayersLeft > 1)
                {
                    TArray<AFortPlayerPawn*> OutActors;
                    GetFortKismet()->STATIC_GetAllFortPlayerPawns(GetWorld(), &OutActors);
                    auto RandomTarget = OutActors[rand() % OutActors.Num()];

                    if (!RandomTarget)
                    {
                        LOG_ERROR("Couldn't assign to a spectator a target! Pawn picked was NULL!");
                        return false;
                    }

                    Spectate(DeadPC->NetConnection, static_cast<AFortPlayerStateAthena*>(RandomTarget->Controller->PlayerState));
                    OutActors.FreeArray();
                }
            }
            else
            {
                LOG_ERROR("Parameters of ClientOnPawnDied were invalid!");
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
                Params->BuildingActorToRepair->RepairBuilding(Controller, 50); // TODO: Figure out how to get the repair amount
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

                    Game::Mode->InitPawn(PC, ExitLocation);

                    ((AAthena_GameState_C*)GetWorld()->AuthorityGameMode->GameState)->Aircrafts[0]->PlayEffectsForPlayerJumped();
                    PC->ActivateSlot(EFortQuickBars::Primary, 0, 0, true); // Select the pickaxe

                    bool bFound = false;
                    auto PickaxeEntry = Inventory::FindItemInInventory<UFortWeaponMeleeItemDefinition>(PC, bFound);

                    if (bFound)
                        Inventory::EquipInventoryItem(PC, PickaxeEntry.ItemGuid);

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
                DBNOPawn->SetHealth(30);
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerController.ServerAttemptInteract", {
            auto Params = (AFortPlayerController_ServerAttemptInteract_Params*)Parameters;
            auto PC = (AFortPlayerControllerAthena*)Object;

            if (Params->ReceivingActor)
            {
                if (Params->ReceivingActor->IsA(APlayerPawn_Athena_C::StaticClass()))
                {
                    auto DBNOPawn = (APlayerPawn_Athena_C*)Params->ReceivingActor;
                    auto DBNOPC = (AFortPlayerControllerAthena*)DBNOPawn->Controller;

                    if (DBNOPawn && DBNOPC)
                    {
                        DBNOPawn->ReviveFromDBNO(PC);
                    }
                }

                if (Params->ReceivingActor->IsA(ABuildingContainer::StaticClass()))
                {
                    auto Container = (ABuildingContainer*)Params->ReceivingActor;

                    Container->bAlreadySearched = true;
                    Container->OnRep_bAlreadySearched();

                    /*
                     * Loot Tier Groups:
                     *  - Chests: Loot_Treasure
                     *  - Ammo Box: Loot_Ammo
                     */

                    // auto LootTierGroup = Container->SearchLootTierGroup;

                    // printf("Loot Tier: %d\n", Container->GetLootTier());
                    // printf("Loot Tier Group: %s\n", Container->SearchLootTierGroup.ToString().c_str());
                    // printf("Loot Tier Key: %d\n", Container->ContainerLootTierKey.ToString().c_str());
                    // printf("Quota Loot Tier: %d\n", Container->SearchLootTierChosenQuotaInfo.LootTier);
                    // printf("Quota Loot Tier Key: %s\n", Container->SearchLootTierChosenQuotaInfo.LootTierKey.ToString().c_str());

                    // auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);
                    // TArray<FFortItemEntry> OutDrops;
                    // GetFortKismet()->STATIC_PickLootDrops(Container->SearchLootTierGroup, -1, 0, &OutDrops);

                    // printf("Size: %d\n", OutDrops.Num());
                    // for(int i = 0; i < OutDrops.Num(); i++)
                    //{
                    //     FFortItemEntry Drop = OutDrops[i];
                    //     printf("Drop: %s\n", Drop.ItemDefinition->GetName().c_str());
                    // }
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
                            CurrentPawn->OnRep_CharPartAnimMontageInfo();
                            CurrentPawn->OnRep_ReplicatedAnimMontage();
                            CurrentPawn->OnRep_RepAnimMontageStartSection();
                            CurrentPawn->OnRep_ReplayRepAnimMontageInfo();
                            CurrentPawn->ForceNetUpdate();

                            // Look into ACharacter::FRepRootMotionMontage
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
            Inventory::EquipInventoryItem((AFortPlayerControllerAthena*)Object, *(FGuid*)Parameters);

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
                Abilities::ApplyAbilities(Pawn);
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortPlayerPawn.ServerChoosePart", {
            return true;
        })

        DEFINE_PEHOOK("Function Engine.GameMode.ReadyToStartMatch", {
            if (!bListening)
            {
                Game::OnReadyToStartMatch();

                HostBeacon = Spawners::SpawnActor<AFortOnlineBeaconHost>();
                HostBeacon->ListenPort = 7776;
                auto bInitBeacon = Native::OnlineBeaconHost::InitHost(HostBeacon);
                CheckNullFatal(bInitBeacon, "Failed to initialize the Beacon!");

                HostBeacon->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
                HostBeacon->NetDriver->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
                HostBeacon->NetDriver->World = GetWorld();
                FString Error;
                auto InURL = FURL();
                InURL.Port = 7777;

                Native::NetDriver::InitListen(HostBeacon->NetDriver, GetWorld(), InURL, true, Error);

                Native::ReplicationDriver::ServerReplicateActors = decltype(Native::ReplicationDriver::ServerReplicateActors)(HostBeacon->NetDriver->ReplicationDriver->Vtable[0x53]);

                auto ClassRepNodePolicies = GetClassRepNodePolicies(HostBeacon->NetDriver->ReplicationDriver);

                for (auto&& Pair : ClassRepNodePolicies)
                {
                    auto key = Pair.Key().ResolveObjectPtr();
                    auto& value = Pair.Value();

                    LOG_INFO("ClassRepNodePolicies: {} - {}", key->GetName(), ClassRepNodeMappingToString(value));

                    if (key == AFortInventory::StaticClass())
                    {
                        value = EClassRepNodeMapping::RelevantAllConnections;
                        LOG_INFO("Found ClassRepNodePolicy for AFortInventory! {}", (int)value);
                    }

                    if (key == AFortQuickBars::StaticClass())
                    {
                        value = EClassRepNodeMapping::RelevantAllConnections;
                        LOG_INFO("Found ClassRepNodePolicy for AFortQuickBars! {}", (int)value);
                    }
                }

                GetWorld()->NetDriver = HostBeacon->NetDriver;
                GetWorld()->LevelCollections[0].NetDriver = HostBeacon->NetDriver;
                GetWorld()->LevelCollections[1].NetDriver = HostBeacon->NetDriver;

                GetWorld()->AuthorityGameMode->GameSession->MaxPlayers = MAXPLAYERS;

                Native::OnlineBeacon::PauseBeaconRequests(HostBeacon, false);
                bListening = true;
                LOG_INFO("Listening for connections on port {}!", HostBeacon->ListenPort);
            }

            return false;
        })

        DEFINE_PEHOOK("Function FortniteGame.FortGameModeAthena.OnAircraftExitedDropZone", {
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
            // auto PlayerController = (AFortPlayerControllerAthena*)Object;

            // if (PlayerController)
            //     KickController((AFortPlayerControllerAthena*)Object, L"Please do not do that!");

            return true;
        })

        LOG_INFO("Hooked {} UFunction(s)!", toHook.size());
    }
}
