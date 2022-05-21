#pragma once

#include "game.h"
#include "replication.h"
#include "ue4.h"

//#define LOGGING

namespace Hooks
{
    bool LocalPlayerSpawnPlayActor(ULocalPlayer* Player, const FString& URL, FString& OutError, UWorld* World) // prevent server's pc from spawning
    {
        if (bTraveled)
            return true;
        else
            return Native::LocalPlayer::SpawnPlayActor(Player, URL, OutError, World);
    }

    uint64 GetNetMode(UWorld* World) // PlayerController::SendClientAdjustment checks if the netmode is not client
    {
        return 2; // ENetMode::NM_ListenServer;
    }

    void TickFlush(UNetDriver* NetDriver, float DeltaSeconds)
    {
        if (!NetDriver)
            return;

        if (NetDriver->IsA(UIpNetDriver::StaticClass()) && NetDriver->ClientConnections.Num() > 0 && NetDriver->ClientConnections[0]->InternalAck == false)
        {
            Replication::ServerReplicateActors(NetDriver);
        }

        Native::NetDriver::TickFlush(NetDriver, DeltaSeconds);
    }

    void WelcomePlayer(UWorld* World, UNetConnection* IncomingConnection)
    {
        Native::World::WelcomePlayer(GetWorld(), IncomingConnection);
    }

    char KickPlayer(__int64 a1, __int64 a2, __int64 a3)
    {
        return 0;
    }

    void World_NotifyControlMessage(UWorld* World, UNetConnection* Connection, uint8 MessageType, void* Bunch)
    {
        Native::World::NotifyControlMessage(GetWorld(), Connection, MessageType, Bunch);
    }

    APlayerController* SpawnPlayActor(UWorld* World, UPlayer* NewPlayer, ENetRole RemoteRole, FURL& URL, void* UniqueId, SDK::FString& Error, uint8 NetPlayerIndex)
    {
        auto PlayerController = (AFortPlayerControllerAthena*)Native::World::SpawnPlayActor(GetWorld(), NewPlayer, RemoteRole, URL, UniqueId, Error, NetPlayerIndex);
        NewPlayer->PlayerController = PlayerController;

        AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;

        InitInventory(PlayerController, false);

        auto Pawn = (APlayerPawn_Athena_C*)SpawnActorTrans(APlayerPawn_Athena_C::StaticClass(), GetPlayerStart(PlayerController), PlayerController);

        PlayerController->Pawn = Pawn;
        PlayerController->AcknowledgedPawn = Pawn;
        Pawn->Owner = PlayerController;
        Pawn->OnRep_Owner();
        PlayerController->OnRep_Pawn();
        PlayerController->Possess(Pawn);

        Pawn->SetMaxHealth(100);
        Pawn->SetMaxShield(100);

        PlayerController->bHasClientFinishedLoading = true;
        PlayerController->bHasServerFinishedLoading = true;
        PlayerController->bHasInitiallySpawned = true;
        PlayerController->OnRep_bHasServerFinishedLoading();

        PlayerState->bHasFinishedLoading = true;
        PlayerState->bHasStartedPlaying = true;
        PlayerState->OnRep_bHasStartedPlaying();

        static auto FortRegisteredPlayerInfo = UObject::FindObject<UFortRegisteredPlayerInfo>("FortRegisteredPlayerInfo Transient.FortEngine_0_1.FortGameInstance_0_1.FortRegisteredPlayerInfo_0_1");

        auto Hero = FortRegisteredPlayerInfo->AthenaMenuHeroDef;

        PlayerController->StrongMyHero = Hero;
        Pawn->CharacterGender = (EFortCustomGender)Hero->Gender;
        Pawn->CharacterBodyType = Hero->CharacterParts[0]->BodyTypesPermitted;

        PlayerState->HeroType = Hero->GetHeroTypeBP();
        PlayerState->OnRep_HeroType();

        // printf("Test: %s\n", Pawn->CustomizationLoadout.Character->GetName().c_str());

        for (auto i = 0; i < Hero->CharacterParts.Num(); i++)
        {
            auto Part = Hero->CharacterParts[i];

            if (!Part)
                continue;

            PlayerState->CharacterParts[i] = Part;
        }

        PlayerState->OnRep_CharacterParts();
        PlayerState->OnRep_CharacterBodyType();
        PlayerState->OnRep_CharacterGender();

        static auto pickaxe = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_HalloweenScythe_Athena_C_T01.WID_Harvest_HalloweenScythe_Athena_C_T01");
        static auto primary = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponRangedItemDefinition WID_Shotgun_Standard_Athena_UC_Ore_T03.WID_Shotgun_Standard_Athena_UC_Ore_T03");
        static auto secondary = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponRangedItemDefinition WID_Shotgun_Standard_Athena_UC_Ore_T03.WID_Shotgun_Standard_Athena_UC_Ore_T03");
        static auto forth = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_Auto_Athena_R_Ore_T03.WID_Assault_Auto_Athena_R_Ore_T03");
        static auto fifth = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponRangedItemDefinition WID_Launcher_Rocket_Athena_R_Ore_T03.WID_Launcher_Rocket_Athena_R_Ore_T03");
        static auto sixth = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponRangedItemDefinition Athena_Shields.Athena_Shields");

        auto pickaxeEntry = AddItemWithUpdate(PlayerController, pickaxe, 0);
        auto primaryEntry = AddItemWithUpdate(PlayerController, primary, 1);
        auto secondaryEntry = AddItemWithUpdate(PlayerController, secondary, 2);
        auto forthEntry = AddItemWithUpdate(PlayerController, forth, 3);
        auto fifthEntry = AddItemWithUpdate(PlayerController, fifth, 4);
        auto sixthEntry = AddItemWithUpdate(PlayerController, sixth, 5);

        EquipWeaponDefinition(Pawn, pickaxe, pickaxeEntry.ItemGuid);

        auto CheatManager = (UFortCheatManager*)CreateCheatManager(PlayerController, true);
        CheatManager->ToggleInfiniteAmmo();
        CheatManager->ToggleInfiniteDurability();

        if (PlayerController->Pawn)
        {
            if (PlayerController->Pawn->PlayerState)
            {
                static int Idx = 2;
                PlayerState->TeamIndex = EFortTeam(Idx);
                PlayerState->OnRep_PlayerTeam();
                PlayerState->SquadId = PlayerState->PlayerTeam->TeamMembers.Num() + 1;
                PlayerState->OnRep_SquadId();
            }
        }

        // Pawn->K2_TeleportTo({ 37713, -52942, 461 }, { 0, 0, 0 }); // Tilted

        return PlayerController;
    }

    void Beacon_NotifyControlMessage(AOnlineBeaconHost* Beacon, UNetConnection* Connection, uint8 MessageType, int64* Bunch)
    {
        printf("Recieved control message %i\n", MessageType);

        switch (MessageType)
        {
        case 4: // NMT_Netspeed
            Connection->CurrentNetSpeed = 30000;
            return;
        case 5: // NMT_Login
        {
            Bunch[7] += (16 * 1024 * 1024);

            FString OnlinePlatformName = FString(L"");

            Native::NetConnection::ReceiveFString(Bunch, Connection->ClientResponse);
            Native::NetConnection::ReceiveFString(Bunch, Connection->RequestURL);
            Native::NetConnection::ReceiveUniqueIdRepl(Bunch, Connection->PlayerID);
            Native::NetConnection::ReceiveFString(Bunch, OnlinePlatformName);

            Bunch[7] -= (16 * 1024 * 1024);

            Native::World::WelcomePlayer(GetWorld(), Connection);
            return;
        }
        case 15: // NMT_PCSwap
            // return;
            break;
        }

        Native::World::NotifyControlMessage(GetWorld(), Connection, MessageType, Bunch);
    }

    uint8 Beacon_NotifyAcceptingConnection(AOnlineBeacon* Beacon)
    {
        return Native::World::NotifyAcceptingConnection(GetWorld());
    }

    void* SeamlessTravelHandlerForWorld(UEngine* Engine, UWorld* World)
    {
        return Native::Engine::SeamlessTravelHandlerForWorld(Engine, GetWorld());
    }

    void* NetDebug(UObject* _this)
    {
        return nullptr;
    }

    void Listen()
    {
        printf("[UWorld::Listen]\n");

        AFortOnlineBeaconHost* HostBeacon = SpawnActor<AFortOnlineBeaconHost>();
        HostBeacon->ListenPort = 7777;
        auto bInitBeacon = Native::OnlineBeaconHost::InitHost(HostBeacon);
        CheckNullFatal(bInitBeacon, "Failed to initialize the Beacon!");

        HostBeacon->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
        HostBeacon->NetDriver->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
        HostBeacon->NetDriver->World = GetWorld();

        GetWorld()->NetDriver = HostBeacon->NetDriver;
        GetWorld()->LevelCollections[0].NetDriver = HostBeacon->NetDriver;
        GetWorld()->LevelCollections[1].NetDriver = HostBeacon->NetDriver;

        Native::OnlineBeacon::PauseBeaconRequests(HostBeacon, false);

        DETOUR_START
        DetourAttachE(Native::World::WelcomePlayer, WelcomePlayer);
        DetourAttachE(Native::Actor::GetNetMode, Hooks::GetNetMode);
        DetourAttachE(Native::World::NotifyControlMessage, World_NotifyControlMessage);
        DetourAttachE(Native::World::SpawnPlayActor, SpawnPlayActor);
        DetourAttachE(Native::OnlineBeaconHost::NotifyControlMessage, Beacon_NotifyControlMessage);
        DetourAttachE(Native::OnlineSession::KickPlayer, Hooks::KickPlayer);
        DETOUR_END

        GetWorld()->AuthorityGameMode->GameSession->MaxPlayers = 100;

        return;
    }

    void ProcessEvent(UObject* Object, UFunction* Function, void* Parameters)
    {
        auto ObjectName = Object->GetName();
        auto FunctionName = Function->GetName();

        if (!bPlayButton && FunctionName.find("BP_PlayButton") != -1)
        {
            bPlayButton = true;
            Game::Start();
            printf("[Game::Start] Done\n");
        }

        if (bTraveled)
        {
            if (!bListening && FunctionName.find("ReadyToStartMatch") != -1)
            {
                Game::OnReadyToStartMatch();
                Listen();
                bListening = true;
            }

            else if (FunctionName == "ServerLoadingScreenDropped")
            {
                bDroppedLS = true;

                auto Pawn = (APlayerPawn_Athena_C*)((AFortPlayerController*)Object)->Pawn;

                if (Pawn && Pawn->AbilitySystemComponent)
                {
                    static auto AbilitySet = UObject::FindObject<UFortAbilitySet>("FortAbilitySet GAS_DefaultPlayer.GAS_DefaultPlayer");
                    for (int i = 0; i < AbilitySet->GameplayAbilities.Num(); i++)
                    {
                        auto Ability = AbilitySet->GameplayAbilities[i];

                        if (!Ability)
                            continue;

                        if (Ability->GetName().find("DBNO") == -1)
                        {
                            GrantGameplayAbility(Pawn, Ability);
                        }
                    }
                }
            }

            if (bDroppedLS)
            {
#ifdef LOGGING
                if (Function->FunctionFlags & 0x00200000 || (Function->FunctionFlags & 0x01000000 && FunctionName.find("Ack") == -1 && FunctionName.find("AdjustPos") == -1))
                {
                    if (FunctionName.find("ServerUpdateCamera") == -1 && FunctionName.find("ServerMove") == -1)
                    {
                        std::cout << "RPC Called: " << FunctionName << '\n';
                    }
                }
#endif

                if (FunctionName.find("ServerHandlePickup") != -1)
                {
                    HandlePickup((AFortPlayerPawn*)Object, Parameters, true); // crashes
                }

                else if (FunctionName == "ServerAttemptInventoryDrop")
                {
                    auto PC = (AFortPlayerController*)Object;
                    auto Pawn = (APlayerPawn_Athena_C*)PC->Pawn;
                    // HandleInventoryDrop(Pawn, Parameters);
                }

                else if (FunctionName == "ServerTryActivateAbility")
                {
                    auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;
                    auto Params = (UAbilitySystemComponent_ServerTryActivateAbility_Params*)Parameters;

                    TryActivateAbility(AbilitySystemComponent, Params->AbilityToActivate, Params->InputPressed, &Params->PredictionKey, nullptr);
                }

                else if (FunctionName == "ServerTryActivateAbilityWithEventData")
                {
                    auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;
                    auto Params = (UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params*)Parameters;

                    TryActivateAbility(AbilitySystemComponent, Params->AbilityToActivate, Params->InputPressed, &Params->PredictionKey, &Params->TriggerEventData);
                }

                else if (FunctionName == "ServerAbilityRPCBatch")
                {
                    auto AbilitySystemComponent = (UAbilitySystemComponent*)Object;
                    auto Params = (UAbilitySystemComponent_ServerAbilityRPCBatch_Params*)Parameters;

                    TryActivateAbility(AbilitySystemComponent, Params->BatchInfo.AbilitySpecHandle, Params->BatchInfo.InputPressed, &(Params->BatchInfo.PredictionKey), nullptr);
                }

                else if (FunctionName == "ServerExecuteInventoryItem")
                {
                    auto PC = (AFortPlayerControllerAthena*)Object;
                    EquipInventoryItem(PC, *(FGuid*)Parameters);
                }

                else if (FunctionName == "ServerReturnToMainMenu")
                {
                    // PC->ClientReturnToMainMenuWithTextReason
                    ((AFortPlayerController*)Object)->ClientTravel(L"Frontend", ETravelType::TRAVEL_Absolute, false, FGuid());
                }

                else if (FunctionName == "ServerPlayEmoteItem")
                {
                    auto CurrentPC = (AFortPlayerControllerAthena*)Object;
                    auto CurrentPawn = (APlayerPawn_Athena_C*)CurrentPC->Pawn;
                    ((AFortPlayerStateAthena*)CurrentPawn->PlayerState)->OnRep_MapIndicatorPos();

                    auto EmoteParams = (AFortPlayerController_ServerPlayEmoteItem_Params*)Parameters;
                    auto AnimInstance = (UFortAnimInstance*)CurrentPawn->Mesh->GetAnimInstance();

                    if (CurrentPC && !CurrentPC->IsInAircraft() && CurrentPawn && EmoteParams->EmoteAsset && !AnimInstance->bIsJumping && !AnimInstance->bIsFalling)
                    {
                        if (EmoteParams->EmoteAsset->IsA(UAthenaDanceItemDefinition::StaticClass())) // idk if emojis would work
                        {
                            if (auto Montage = EmoteParams->EmoteAsset->GetAnimationHardReference(CurrentPawn->CharacterBodyType, CurrentPawn->CharacterGender))
                            {
                                if (AnimInstance && Montage)
                                {
                                    auto& RepAnimMontageInfo = CurrentPawn->RepAnimMontageInfo;
                                    auto& RepCharPartAnimMontageInfo = CurrentPawn->RepCharPartAnimMontageInfo;
                                    auto Duration = AnimInstance->Montage_Play(Montage, 1.0f, EMontagePlayReturnType::Duration, 0.0f, true);

                                    if (Duration > 0.f)
                                    {
                                        RepAnimMontageInfo.AnimMontage = Montage;
                                        RepAnimMontageInfo.ForcePlayBit = 1;

                                        RepCharPartAnimMontageInfo.PawnMontage = Montage;

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
                                        CurrentPawn->PlayLocalAnimMontage(Montage, 1.0f, FName(-1));
                                        CurrentPawn->PlayAnimMontage(Montage, 1.0f, FName(-1));
                                        CurrentPawn->OnRep_CharPartAnimMontageInfo();
                                        CurrentPawn->OnRep_ReplicatedAnimMontage();
                                    }
                                }
                            }
                        }
                    }
                }

                else if (FunctionName == "ClientOnPawnDied")
                {
                    auto Params = (AFortPlayerControllerZone_ClientOnPawnDied_Params*)Parameters;
                    auto DeadPC = (AFortPlayerControllerAthena*)Object;
                    auto DeadPlayerState = (AFortPlayerStateAthena*)DeadPC->PlayerState;

                    if (DeadPC && Params)
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
                        // KillerPlayerState->ClientReportKill(DeadPlayerState);

                        auto Spectate = [&](AFortPlayerStateAthena* StateToSpectate) -> void
                        {
                            auto PawnToSpectate = StateToSpectate->GetCurrentPawn();

                            if (PawnToSpectate)
                            {
                                DeadPC->PlayerToSpectateOnDeath = PawnToSpectate;
                                DeadPC->SpectateOnDeath();
                                // DeadPC->ClientSetViewTarget(PawnToSpectate, FViewTargetTransitionParams());
                                DeadPlayerState->SpectatingTarget = StateToSpectate;
                                DeadPlayerState->bIsSpectator = true;
                                DeadPlayerState->OnRep_SpectatingTarget();

                                auto Connection = DeadPC->NetConnection;
                                auto SpectatorPC = SpawnActor<AFortPlayerControllerSpectating>(PawnToSpectate->K2_GetActorLocation()); // ABP_ReplayPC_Athena_C
                                // SpectatorPC->SetNewCameraType(ESpectatorCameraType::Gameplay, true);
                                // SpectatorPC->ToggleSpectatorHUD();
                                Connection->PlayerController = SpectatorPC;
                                auto SpectatorPawn = SpawnActor<ASpectatorPawn>(KillerPawn->K2_GetActorLocation(), PawnToSpectate); // ABP_SpectatorPawn_C

                                // DeadPC->ClientGotoState("Spectating");
                                SpectatorPC->SpectatorPawn = SpectatorPawn;
                                SpectatorPC->Pawn = SpectatorPawn;
                                SpectatorPC->AcknowledgedPawn = SpectatorPawn;
                                SpectatorPawn->Owner = SpectatorPC;
                                SpectatorPawn->OnRep_Owner();
                                SpectatorPC->OnRep_Pawn();
                                SpectatorPC->Possess(SpectatorPawn);

                                SpectatorPawn->bReplicateMovement = true;
                                SpectatorPawn->OnRep_ReplicateMovement();
                            }
                        };

                        if (KillerPlayerState && KillerPawn && KillerPlayerState != DeadPlayerState)
                        {
                            KillerPlayerState->KillScore++;
                            KillerPlayerState->OnRep_Kills();
                            Spectate(KillerPlayerState);
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
                                    Spectate((AFortPlayerStateAthena*)PawnToUse->PlayerState);
                                }
                            }
                        }

                        if (KillerPawn)
                        {
                            auto KillerController = (AFortPlayerControllerAthena*)Params->DeathReport.KillerPawn->Controller;
                            if (KillerController)
                            {
                            }
                        }
                    }
                }

                else if (FunctionName == "ClientNotifyWon")
                {
                    return;
                }

                else if (FunctionName == "ServerAttemptExitVehicle") // is this even needed
                {
                    auto PC = (AFortPlayerControllerAthena*)Object;

                    if (PC && PC->Pawn)
                    {
                        auto Vehicle = ((AFortPlayerPawnAthena*)PC->Pawn)->GetVehicle();
                        PC->Pawn->Role = ENetRole::ROLE_Authority;
                        Vehicle->Role = ENetRole::ROLE_Authority;
                    }
                }

                else if (FunctionName == "ServerSuicide")
                {
                    return;
                }

                else if (FunctionName == "ServerCreateBuildingActor")
                {
                    auto PC = (AFortPlayerControllerAthena*)Object;

                    auto Params = (AFortPlayerController_ServerCreateBuildingActor_Params*)Parameters;
                    auto CurrentBuildClass = Params->BuildingClassData.BuildingClass;

                    if (CurrentBuildClass)
                    {
                        FTransform Transform;
                        Transform.Rotation = RotToQuat(Params->BuildRot);
                        Transform.Translation = Params->BuildLoc;
                        Transform.Scale3D = { 1, 1, 1 };

                        if (auto BuildingActor = (ABuildingSMActor*)SpawnActorTrans(CurrentBuildClass, Transform, PC))
                        {
                            BuildingActor->DynamicBuildingPlacementType = EDynamicBuildingPlacementType::CountsTowardsBounds;
                            BuildingActor->SetMirrored(Params->bMirrored);
                            BuildingActor->PlacedByPlacementTool();
                            BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PC);
                        }
                    }
                }

                else if (FunctionName == "ServerBeginEditingBuildingActor")
                {
                    auto Params = (AFortPlayerController_ServerBeginEditingBuildingActor_Params*)Parameters;
                    auto Controller = (AFortPlayerControllerAthena*)Object;
                    auto Pawn = (APlayerPawn_Athena_C*)Controller->Pawn;
                    auto EditToolEntry = FindItemInInventory<UFortEditToolItemDefinition>(Controller);

                    if (Controller && Pawn && Params->BuildingActorToEdit)
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
                }

                else if (FunctionName == "ServerEditBuildingActor")
                {
                    auto Params = (AFortPlayerController_ServerEditBuildingActor_Params*)Parameters;
                    auto PC = (AFortPlayerControllerAthena*)Object;

                    if (PC && Params)
                    {
                        auto BuildingActor = Params->BuildingActorToEdit;
                        auto NewBuildingClass = Params->NewBuildingClass;

                        if (BuildingActor && NewBuildingClass)
                        {
                            FTransform SpawnTransform;
                            SpawnTransform.Rotation = RotToQuat(BuildingActor->K2_GetActorRotation());
                            SpawnTransform.Translation = BuildingActor->K2_GetActorLocation();
                            SpawnTransform.Scale3D = BuildingActor->GetActorScale3D();

                            BuildingActor->K2_DestroyActor();

                            if (auto NewBuildingActor = (ABuildingSMActor*)SpawnActorTrans(NewBuildingClass, SpawnTransform, PC))
                            {
                                NewBuildingActor->SetMirrored(Params->bMirrored);
                                NewBuildingActor->InitializeKismetSpawnedBuildingActor(NewBuildingActor, PC);
                            }
                        }
                    }
                }

                else if (FunctionName == "ServerEndEditingBuildingActor")
                {
                    auto Params = (AFortPlayerController_ServerEndEditingBuildingActor_Params*)Parameters;
                    auto PC = (AFortPlayerControllerAthena*)Object;

                    if (Params->BuildingActorToStopEditing)
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
                }

                else if (FunctionName == "ServerAttemptInteract")
                {
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
                }

                else if (FunctionName == "ServerReviveFromDBNO")
                {
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
                }

                else if (FunctionName == "ServerRepairBuildingActor")
                {
                    auto Params = (AFortPlayerController_ServerRepairBuildingActor_Params*)Parameters;
                    auto Controller = (AFortPlayerControllerAthena*)Object;
                    auto Pawn = (APlayerPawn_Athena_C*)Controller->Pawn;

                    if (Controller && Pawn && Params->BuildingActorToRepair)
                    {
                        Params->BuildingActorToRepair->RepairBuilding(Controller, 10); // figure out how to get the repair amount
                    }
                }

                else if (FunctionName == "ServerAttemptAircraftJump" || FunctionName == "AircraftExitedDropZone")
                {
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
                            // PC->Pawn->K2_TeleportTo(ExitLocation, Params->ClientRotation);
                        }
                    }
                }
            }
        }

        return PEOriginal(Object, Function, Parameters);
    }
}