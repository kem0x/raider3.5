#pragma once
#include "game.h"
#include "replication.h"
#include "ue4.h"

namespace Hooks
{
    uint64 GetNetMode(UWorld* World)
    {
        return 2; //ENetMode::NM_ListenServer;
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

        Pawn->bCanBeDamaged = false;

        PlayerController->Pawn = Pawn;
        Pawn->Owner = PlayerController;
        Pawn->OnRep_Owner();
        PlayerController->OnRep_Pawn();
        PlayerController->Possess(Pawn);

        PlayerController->bHasClientFinishedLoading = true;
        PlayerController->bHasServerFinishedLoading = true;
        PlayerController->OnRep_bHasServerFinishedLoading();

        PlayerState->bHasFinishedLoading = true;
        PlayerState->bHasStartedPlaying = true;
        PlayerState->OnRep_bHasStartedPlaying();

        auto pSkeletalMesh = UObject::FindObject<USkeletalMesh>("SkeletalMesh F_SML_Starter_Epic.F_SML_Starter_Epic");
        Pawn->Mesh->SetSkeletalMesh(pSkeletalMesh, true);
        Pawn->OnRep_AttachmentReplication();
        Pawn->OnRep_AttachmentMesh();

        static auto Head = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1_ATH.F_Med_Head1_ATH");

        // PlayerState->CharacterParts[0] = Head;

        // PlayerState->OnRep_CharacterParts();
        // Functions::PlayerState::OnRep_CharacterParts(PlayerState);
        Pawn->OnRep_CustomizationLoadout();

        PlayerState->OnRep_HeroType();

        auto QuickBars = SpawnActor<AFortQuickBars>({ -280, 400, 3000 }, PlayerController);
        PlayerController->QuickBars = QuickBars;
        PlayerController->OnRep_QuickBar();

        QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 0);
        QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 1);
        QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 2);
        QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 3);
        QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 4);
        QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 5);
        QuickBars->ServerEnableSlot(EFortQuickBars::Primary, 1);
        QuickBars->ServerEnableSlot(EFortQuickBars::Primary, 2);

        AddItemWithUpdate(PlayerController, UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Wall.BuildingItemData_Wall"), 0, EFortQuickBars::Secondary, 999);
        AddItemWithUpdate(PlayerController, UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Floor.BuildingItemData_Floor"), 0, EFortQuickBars::Secondary, 999);

        AddItemWithUpdate(PlayerController, UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition WoodItemData.WoodItemData"), 0, EFortQuickBars::Max_None, 999);
        AddItemWithUpdate(PlayerController, UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition StoneItemData.StoneItemData"), 0, EFortQuickBars::Max_None, 999);
        AddItemWithUpdate(PlayerController, UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition MetalItemData.MetalItemData"), 0, EFortQuickBars::Max_None, 999);

        auto Def = UObject::FindObject<UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition /Game/Athena/Items/Weapons/WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");

        FFortItemEntry ItemEntry;

        if (Def)
        {
            ItemEntry = AddItemWithUpdate(PlayerController, Def, 0);
            EquipWeaponDefinition(Pawn, Def, ItemEntry.ItemGuid);
        }

        Def = UObject::FindObject<UFortWeaponItemDefinition>("WID_Assault_AutoHigh_Athena_SR_Ore_T03.WID_Assault_AutoHigh_Athena_SR_Ore_T03");

        if (Def)
        {
            ItemEntry = AddItemWithUpdate(PlayerController, Def, 1);
            EquipWeaponDefinition(Pawn, Def, ItemEntry.ItemGuid);
        }

        QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 0, 0, true);
        QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 1, 0, true);

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

        GrantGameplayAbility(Pawn, UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_Sprint"));
        GrantGameplayAbility(Pawn, UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_Reload"));
        GrantGameplayAbility(Pawn, UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_RangedWeapon"));
        GrantGameplayAbility(Pawn, UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_Jump"));

        return PlayerController;
    }

    bool DestroySwappedPC(UWorld* World, UNetConnection* Connection)
    {
        return Functions::World::DestroySwappedPC(GetWorld(), Connection);
    }

    void Beacon_NotifyControlMessage(AOnlineBeaconHost* Beacon, UNetConnection* Connection, uint8 MessageType, void* Bunch)
    {
        printf("Recieved control message %i\n", MessageType);

        if (MessageType == 15)
            return; // PCSwap no thx

        if (MessageType == 5) // PreLogin isnt really needed so we can just use this
        {
            auto _Bunch = reinterpret_cast<int64*>(Bunch);
            _Bunch[7] += (16 * 1024 * 1024);

            FString OnlinePlatformName = FString(L"");

            Functions::NetConnection::ReceiveFString(Bunch, Connection->ClientResponse);
            Functions::NetConnection::ReceiveFString(Bunch, Connection->RequestURL);
            Functions::NetConnection::ReceiveUniqueIdRepl(Bunch, Connection->PlayerID);
            Functions::NetConnection::ReceiveFString(Bunch, OnlinePlatformName);

            _Bunch[7] -= (16 * 1024 * 1024);

            Functions::World::WelcomePlayer(GetWorld(), Connection);
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
        Functions::OnlineBeaconHost::InitHost(HostBeacon);

        HostBeacon->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
        HostBeacon->NetDriver->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
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
		
            else if (FunctionName.find("ServerPlayEmoteItem") != -1)
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

            else if (FunctionName.find("ServerLoadingScreenDropped") != -1)
            {
                GetPlayerController()->CheatManager->DestroyAll(AFortHLODSMActor::StaticClass());
                Listen();

                GrantGameplayAbility((APlayerPawn_Athena_C*)GetPlayerController()->Pawn, UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_Sprint"));
                GrantGameplayAbility((APlayerPawn_Athena_C*)GetPlayerController()->Pawn, UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_Reload"));
                GrantGameplayAbility((APlayerPawn_Athena_C*)GetPlayerController()->Pawn, UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_RangedWeapon"));
                GrantGameplayAbility((APlayerPawn_Athena_C*)GetPlayerController()->Pawn, UObject::FindObject<UClass>("Class FortniteGame.FortGameplayAbility_Jump"));
            }

            else if (FunctionName.find("ServerExecuteInventoryItem") != -1)
            {
                auto PC = (AFortPlayerControllerAthena*)Object;
                EquipInventoryItem(PC, *(FGuid*)Parameters);
            }
        }

        /* // Crashes

        if (FunctionName.find("ServerReturnToMainMenu") != - 1)
        {
            GetPlayerController()->SwitchLevel(L"Frontend");
			
            bPlayButton = false;
            bTraveled = false;
        }

		*/

        return PEOriginal(Object, Function, Parameters);
    }
}
