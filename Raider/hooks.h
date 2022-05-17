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

        auto Pawn = SpawnActor<APlayerPawn_Athena_C>({ 1250, 1818, 3284 }, PlayerController);

        PlayerController->Pawn = Pawn;
        PlayerController->AcknowledgedPawn = Pawn;
        Pawn->Owner = PlayerController;
        Pawn->OnRep_Owner();
        PlayerController->OnRep_Pawn();
        PlayerController->Possess(Pawn);

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

		InitInventory(PlayerController);

        static auto Def = UObject::FindObject<UFortWeaponItemDefinition>("WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03");

        if (Def)
        {
            auto ItemEntry = AddItemWithUpdate(PlayerController, Def, 1);
            EquipWeaponDefinition(Pawn, Def, ItemEntry.ItemGuid);
        }

        auto CheatManager = (UFortCheatManager*)CreateCheatManager(PlayerController, true);
        CheatManager->ToggleInfiniteAmmo();
        CheatManager->ToggleInfiniteDurability();

        Pawn->OnRep_CurrentWeapon();

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
        auto ObjectName = Object->GetFullName();
        auto FunctionName = Function->GetFullName();

        if (!bPlayButton && FunctionName.contains("BP_PlayButton"))
        {
            bPlayButton = true;
            Game::Start();
            printf("[Game::Start] Done\n");
        }

        if (bTraveled)
        {
            if (FunctionName.contains("ReadyToStartMatch"))
            {
                EXECUTE_ONE_TIME
                {
                    Game::OnReadyToStartMatch();
                }
            }

            else if (FunctionName.contains("ServerLoadingScreenDropped"))
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
                    static auto AbilitySet = UObject::FindObject<UFortAbilitySet>("FortAbilitySet GAS_DefaultPlayer.GAS_DefaultPlayer");

                    for (int i = 0; i < AbilitySet->GameplayAbilities.Num(); i++)
                    {
                        auto Ability = AbilitySet->GameplayAbilities[i];

                        if (!Ability)
                            continue;

                        GrantGameplayAbility(Pawn, Ability);
                    }
                }
            }

            if (bDroppedLS)
            {
                if (Function->FunctionFlags & 0x00200000)
                {
                    std::cout << "RPC Called: " << FunctionName << '\n';
                }

                if (FunctionName.contains("ServerHandlePickup"))
                {
                    // HandlePickup((AFortPlayerPawn*)Object, Parameters, true); // crashes
                }

                else if (FunctionName.contains("ServerCreateBuilding"))
                {
                    auto PC = (AFortPlayerControllerAthena*)Object;

                    auto Params = (AFortPlayerController_ServerCreateBuildingActor_Params*)Parameters;
                    auto CurrentBuildClass = PC->CurrentBuildableClass;

                    FTransform Transform;
                    Transform.Rotation = RotToQuat(Params->BuildRot);
                    Transform.Translation = Params->BuildLoc;
                    Transform.Scale3D = { 1, 1, 1 };

                    auto BuildingActor = SpawnActorTrans(CurrentBuildClass, Transform, PC);
                    ((ABuildingActor*)BuildingActor)->InitializeKismetSpawnedBuildingActor((ABuildingActor*)BuildingActor, PC);
                }

                else if (FunctionName.contains("ServerAttemptInventoryDrop"))
                {
                    auto PC = (AFortPlayerController*)Object;
                    auto Pawn = (APlayerPawn_Athena_C*)PC->Pawn;
                    HandleInventoryDrop(Pawn, Parameters);
                }

                else if (FunctionName.contains("ServerExecuteInventoryItem"))
                {
                    auto PC = (AFortPlayerControllerAthena*)Object;
                    EquipInventoryItem(PC, *(FGuid*)Parameters);
                }

                else if (FunctionName.contains("ServerReturnToMainMenu"))
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

                else if (FunctionName.contains("ServerPlayEmoteItem"))
                {
                    auto EmoteParams = (AFortPlayerController_ServerPlayEmoteItem_Params*)Parameters;

                    if (EmoteParams->EmoteAsset)
                    {
                        auto Montage = EmoteParams->EmoteAsset->GetAnimationHardReference(EFortCustomBodyType::All, EFortCustomGender::Both);

                        if (Montage)
                        {
                            auto CurrentPawn = (AFortPlayerPawnAthena*)((AFortPlayerController*)Object)->Pawn;
                            auto AnimInstance = CurrentPawn->Mesh->GetAnimInstance();

                            // AnimInstance->Montage_Play(Montage, 1, EMontagePlayReturnType::Duration, 0, true);

                            // CurrentPawn->OnRep_CharPartAnimMontageInfo();
                            CurrentPawn->PlayAnimMontage(Montage, 1, FName());
                            CurrentPawn->OnRep_ReplicatedAnimMontage();
                        }
                    }
                }

                else if (FunctionName.contains("ServerAttemptInteract"))
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

                            else if (InteractingActorName.contains("Ammo"))
                            {
                                // PC->ClientPlaySoundAtLocation
                                static auto Medium = UObject::FindObject<UFortResourceItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium");
                                SummonPickupFromChest(Medium, 15, ActorLocation);
                            }
                        }

                        else if (InteractingActorName.contains("Wall") || InteractingActorName.contains("Door"))
                        {
                            auto Actor = (ABuildingWall*)Params->ReceivingActor;

                            Actor->bDoorOpen = ~Actor->bDoorOpen;
                            Actor->OnRep_bDoorOpen();
                            // Actor->DoorClosingSound
                        }

                        else if (InteractingActorName.contains("VendingMachine"))
                        {
                        }
                    }
                }

                else if (FunctionName.contains("ServerAttemptExitVehicle"))
                {
                    auto PC = (AFortPlayerControllerAthena*)Object;

                    if (PC && PC->Pawn)
                    {
                        auto Vehicle = ((AFortPlayerPawnAthena*)PC->Pawn)->GetVehicle();
                        PC->Pawn->Role = ENetRole::ROLE_Authority;
                        Vehicle->Role = ENetRole::ROLE_Authority;
                    }
                }
            }
        }

        return PEOriginal(Object, Function, Parameters);
    }
}
