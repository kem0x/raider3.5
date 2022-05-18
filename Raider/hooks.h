#pragma once
#include "game.h"
#include "replication.h"
#include "ue4.h"



namespace Hooks
{
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

        Functions::NetDriver::TickFlush(NetDriver, DeltaSeconds);
    }

    void WelcomePlayer(UWorld* World, UNetConnection* IncomingConnection)
    {
        Functions::World::WelcomePlayer(GetWorld(), IncomingConnection);
    }

    char KickPlayer(__int64 a1, __int64 a2, __int64 a3)
    {
        return 0;
    }

    void World_NotifyControlMessage(UWorld* World, UNetConnection* Connection, uint8 MessageType, void* Bunch)
    {
        Functions::World::NotifyControlMessage(GetWorld(), Connection, MessageType, Bunch);
    }

    APlayerController* SpawnPlayActor(UWorld* World, UPlayer* NewPlayer, ENetRole RemoteRole, FURL& URL, void* UniqueId, SDK::FString& Error, uint8 NetPlayerIndex)
    {
        auto PlayerController = (AFortPlayerControllerAthena*)Functions::World::SpawnPlayActor(GetWorld(), NewPlayer, RemoteRole, URL, UniqueId, Error, NetPlayerIndex);
        NewPlayer->PlayerController = PlayerController;
        PlayerController->SetOwner((AActor*)NewPlayer);

        AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;
        PlayerState->SetOwner(PlayerController);

        InitInventory(PlayerController, false);

        auto Pawn = SpawnActor<APlayerPawn_Athena_C>({ 1250, 1818, 3284 }, PlayerController);

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

        Pawn->bReplicateMovement = true;
        Pawn->OnRep_ReplicateMovement();

        auto Hero = GetPlayerController()->StrongMyHero; // set the Hero to the servers Hero, temporary work around.

        PlayerController->StrongMyHero = Hero;

        PlayerState->HeroType = Hero->GetHeroTypeBP();
        PlayerState->OnRep_HeroType();

        for (auto i = 0; i < Hero->CharacterParts.Num(); i++)
        {
            auto Part = Hero->CharacterParts[i];

            if (!Part)
                continue;

            PlayerState->CharacterParts[i] = Part;
        }

        PlayerState->OnRep_CharacterParts();


        static auto pickaxe = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_HalloweenScythe_Athena_C_T01.WID_Harvest_HalloweenScythe_Athena_C_T01");
        static auto primary = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponRangedItemDefinition WID_Shotgun_Standard_Athena_UC_Ore_T03.WID_Shotgun_Standard_Athena_UC_Ore_T03");
        //static auto secondary = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponRangedItemDefinition WID_Pistol_Scavenger_Athena_R_Ore_T03.WID_Pistol_Scavenger_Athena_R_Ore_T03");
        static auto secondary = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponRangedItemDefinition WID_Shotgun_Standard_Athena_UC_Ore_T03.WID_Shotgun_Standard_Athena_UC_Ore_T03");
        static auto forth = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_Auto_Athena_R_Ore_T03.WID_Assault_Auto_Athena_R_Ore_T03");
        static auto fifth = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponRangedItemDefinition Athena_Bandage.Athena_Bandage");
        static auto sixth = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponRangedItemDefinition Athena_ShieldSmall.Athena_ShieldSmall");

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
                PlayerState->TeamIndex = EFortTeam(Idx++);
                PlayerState->OnRep_PlayerTeam();
                PlayerState->SquadId = PlayerState->PlayerTeam->TeamMembers.Num() + 1;
                PlayerState->OnRep_SquadId();
            }
        }

        return PlayerController;
    }

    bool DestroySwappedPC(UWorld* World, UNetConnection* Connection)
    {
        return Functions::World::DestroySwappedPC(GetWorld(), Connection);
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

            Functions::NetConnection::ReceiveFString(Bunch, Connection->ClientResponse);
            Functions::NetConnection::ReceiveFString(Bunch, Connection->RequestURL);
            Functions::NetConnection::ReceiveUniqueIdRepl(Bunch, Connection->PlayerID);
            Functions::NetConnection::ReceiveFString(Bunch, OnlinePlatformName);

            Bunch[7] -= (16 * 1024 * 1024);

            Functions::World::WelcomePlayer(GetWorld(), Connection);
            return;
        }
        case 15: // NMT_PCSwap
            return;
        }

        Functions::World::NotifyControlMessage(GetWorld(), Connection, MessageType, Bunch);
    }

    uint8 Beacon_NotifyAcceptingConnection(AOnlineBeacon* Beacon)
    {
        return Functions::World::NotifyAcceptingConnection(GetWorld());
    }

    void* SeamlessTravelHandlerForWorld(UEngine* Engine, UWorld* World)
    {
        return Functions::Engine::SeamlessTravelHandlerForWorld(Engine, GetWorld());
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
        auto bInitBeacon = Functions::OnlineBeaconHost::InitHost(HostBeacon);
        CheckNullFatal(bInitBeacon, "Failed to init beacon!");

        HostBeacon->NetDriver->World = GetWorld();

        GetWorld()->NetDriver = HostBeacon->NetDriver;
        GetWorld()->LevelCollections[0].NetDriver = HostBeacon->NetDriver;
        GetWorld()->LevelCollections[1].NetDriver = HostBeacon->NetDriver;

        Functions::OnlineBeacon::PauseBeaconRequests(HostBeacon, false);

        DETOUR_START
        DetourAttachE(Functions::World::WelcomePlayer, WelcomePlayer);
        DetourAttachE(Functions::Actor::GetNetMode, Hooks::GetNetMode);
        DetourAttachE(Functions::World::NotifyControlMessage, World_NotifyControlMessage);
        DetourAttachE(Functions::World::SpawnPlayActor, SpawnPlayActor);
        DetourAttachE(Functions::OnlineBeaconHost::NotifyControlMessage, Beacon_NotifyControlMessage);
        DetourAttachE(Functions::OnlineSession::KickPlayer, Hooks::KickPlayer);
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
            if (FunctionName.find("ReadyToStartMatch") != -1)
            {
                EXECUTE_ONE_TIME
                {
                    Game::OnReadyToStartMatch();
                }
            }

            else if (FunctionName.find("ServerLoadingScreenDropped") != -1)
            {
                auto Pawn = (APlayerPawn_Athena_C*)((AFortPlayerController*)Object)->Pawn;

                if (!bDroppedLS)
                {
                    GetPlayerController()->CheatManager->DestroyAll(AFortHLODSMActor::StaticClass());
                    SummonPickup(Pawn, UObject::FindObject<UFortWeaponRangedItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_HalloweenScythe_Athena_C_T01.WID_Harvest_HalloweenScythe_Athena_C_T01"), 1, ((APlayerPawn_Athena_C*)GetPlayerController()->Pawn)->K2_GetActorLocation());
                    Listen();

                    bDroppedLS = true;
                }

                if (Pawn && Pawn->AbilitySystemComponent)
                {
                    static auto SprintAbility = UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_Sprint");
                    static auto ReloadAbility = UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_Reload");
                    static auto RangedWeaponAbility = UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_RangedWeapon");
                    static auto JumpAbility = UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_Jump");

                    GrantGameplayAbility(Pawn, SprintAbility);
                    GrantGameplayAbility(Pawn, ReloadAbility);
                    GrantGameplayAbility(Pawn, RangedWeaponAbility);
                    GrantGameplayAbility(Pawn, JumpAbility);
                }
            }

            if (bDroppedLS)
            {
                if (Function->FunctionFlags & 0x00200000)
                {
                    if (FunctionName.find("ServerUpdateCamera") == -1 && FunctionName.find("ServerMove") == -1)
                    {
                        std::cout << "RPC Called: " << FunctionName << '\n';
                    }
                }

                if (FunctionName.find("ServerHandlePickup") != -1)
                {
                    // HandlePickup((AFortPlayerPawn*)Object, Parameters, true); // crashes
                }

                else if (FunctionName.find("ServerCreateBuilding") != -1)
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

                        auto BuildingActor = SpawnActorTrans(CurrentBuildClass, Transform, PC); //, ESpawnActorCollisionHandlingMethod::DontSpawnIfColliding);
                        ((ABuildingActor*)BuildingActor)->InitializeKismetSpawnedBuildingActor((ABuildingActor*)BuildingActor, PC);
                    }
                }

                else if (FunctionName.find("ServerAttemptInventoryDrop") != -1)
                {
                    auto PC = (AFortPlayerController*)Object;
                    auto Pawn = (APlayerPawn_Athena_C*)PC->Pawn;
                    HandleInventoryDrop(Pawn, Parameters);
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

                else if (FunctionName.find("ServerExecuteInventoryItem") != -1)
                {
                    auto PC = (AFortPlayerControllerAthena*)Object;
                    EquipInventoryItem(PC, *(FGuid*)Parameters);
                }

                else if (FunctionName.find("ServerReturnToMainMenu") != -1)
                {
                    if (Object != GetPlayerController())
                    {
                        ((AFortPlayerController*)Object)->ClientTravel(L"Frontend", ETravelType::TRAVEL_Absolute, false, FGuid());
                    }

                    else
                    {
                        GetPlayerController()->SwitchLevel(L"Frontend");
                        bPlayButton = false;
                        bTraveled = false;
                        bDroppedLS = false;
                    }
                }

                else if (FunctionName.find("ServerPlayEmoteItem") != -1)
                {
                    auto CurrentPawn = (AFortPlayerPawnAthena*)((AFortPlayerController*)Object)->Pawn;
                    auto EmoteParams = (AFortPlayerController_ServerPlayEmoteItem_Params*)Parameters;

                    if (EmoteParams->EmoteAsset)
                    {
                        auto Montage = EmoteParams->EmoteAsset->GetAnimationHardReference(CurrentPawn->CharacterBodyType, CurrentPawn->CharacterGender);

                        if (Montage)
                        {
                            auto AnimInstance = CurrentPawn->Mesh->GetAnimInstance();
                            CurrentPawn->PlayLocalAnimMontage(Montage, 1, Montage->CompositeSections[0].SectionName);
                            CurrentPawn->PlayAnimMontage(Montage, 1, Montage->CompositeSections[0].SectionName);
                            CurrentPawn->OnRep_ReplicatedAnimMontage();
                        }

                        else
                        {
                            std::cout << "Failed to find Montage!\n";
                        }
                    }
                    else
                    {
                        std::cout << "Failed to find EmoteAsset!\n";
                    }
                }

                else if (FunctionName.find("ServerAttemptInteract") != -1)
                {
                    auto Params = (AFortPlayerController_ServerAttemptInteract_Params*)Parameters;
                    auto PC = (AFortPlayerController*)Object;

                    if (Params->ReceivingActor)
                    {
                        auto InteractingActorName = Params->ReceivingActor->GetFullName();

                        // std::cout << PC->GetFullName() << " interacting with: " << InteractingActorName << '\n';

                        if (InteractingActorName.starts_with("Tiered_"))
                        {
                            auto Actor = (ABuildingContainer*)Params->ReceivingActor;
                            auto ActorLocation = Params->ReceivingActor->K2_GetActorLocation();

                            Actor->bAlreadySearched = true;
                            Actor->OnRep_bAlreadySearched();

                            if (InteractingActorName.starts_with("Tiered_Chest"))
                            {
                                // PC->ClientPlaySoundAtLocation
                                static auto def = UObject::FindObject<UFortWorldItemDefinition>("FortWeaponRangedItemDefinition WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03");

                                SummonPickupFromChest(def, 1, Params->ReceivingActor->K2_GetActorLocation());
                            }

                            else if (InteractingActorName.find("Ammo") != -1)
                            {
                                // PC->ClientPlaySoundAtLocation
                                static auto Medium = UObject::FindObject<UFortResourceItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium");
                                SummonPickupFromChest(Medium, 15, ActorLocation);
                            }
                        }

                        else if (InteractingActorName.find("Wall") != -1 || InteractingActorName.find("Door") != -1)
                        {
                            auto Actor = (ABuildingWall*)Params->ReceivingActor;

                            Actor->bDoorOpen = ~Actor->bDoorOpen;
                            Actor->OnRep_bDoorOpen();
                            // Actor->DoorClosingSound
                        }

                        else if (InteractingActorName.find("VendingMachine") != -1)
                        {
                        }
                    }
                }

                else if (FunctionName.find("ServerAttemptExitVehicle") != -1)
                {
                    auto PC = (AFortPlayerControllerAthena*)Object;

                    if (PC && PC->Pawn)
                    {
                        auto Vehicle = ((AFortPlayerPawnAthena*)PC->Pawn)->GetVehicle();
                        PC->Pawn->Role = ENetRole::ROLE_Authority;
                        Vehicle->Role = ENetRole::ROLE_Authority;
                    }
                }

                else if (FunctionName.find("ServerBeginEditingBuildingActor") != -1)
                {
                    std::cout << "Attempting to edit a building!\n";
                    auto Params = (AFortPlayerController_ServerBeginEditingBuildingActor_Params*)Parameters;
                    auto Controller = (AFortPlayerControllerAthena*)Object;
                    auto Pawn = (APlayerPawn_Athena_C*)Controller->Pawn;

                    if (Controller && Pawn && Params->BuildingActorToEdit)
                    {
                        Params->BuildingActorToEdit->OnRep_EditingPlayer();
                        // OnRep_EditTool();
                    }
                }
            }
        }

        return PEOriginal(Object, Function, Parameters);
    }
}
