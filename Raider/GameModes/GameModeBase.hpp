#pragma once

#include "../UE4.h"
#include "../SDK.hpp"
#include "../Logic/Teams.h"
#include "../Logic/Inventory.h"
#include "../Logic/Abilities.h"

class IGameModeBase
{
public:
    virtual void OnPlayerJoined(AFortPlayerControllerAthena* Controller) = 0;
    virtual void OnPlayerKilled(AFortPlayerControllerAthena* Controller) = 0;
};

class AbstractGameModeBase : protected IGameModeBase
{
public:
    AbstractGameModeBase(const std::string BasePlaylist, bool bRespawnEnabled = false, int maxTeamSize = 1, bool bRegenEnabled = false, bool bRejoinEnabled = false)
    {
        this->BasePlaylist = UObject::FindObject<UFortPlaylistAthena>(BasePlaylist);

        this->BasePlaylist->bNoDBNO = maxTeamSize > 1;
        this->bRespawnEnabled = bRespawnEnabled;
	    this->bRegenEnabled = bRegenEnabled;
        this->bRejoinEnabled = bRejoinEnabled;
        
        if (bRespawnEnabled)
        {
            this->BasePlaylist->FriendlyFireType = EFriendlyFireType::On;
            this->BasePlaylist->RespawnLocation = EAthenaRespawnLocation::Air;
            this->BasePlaylist->RespawnType = EAthenaRespawnType::InfiniteRespawn;
        }

        auto GameState = static_cast<AAthena_GameState_C*>(GetWorld()->GameState);

        GameState->CurrentPlaylistId = this->BasePlaylist->PlaylistId;
        GameState->CurrentPlaylistData = this->BasePlaylist;

        GameState->OnRep_CurrentPlaylistId();
        GameState->OnRep_CurrentPlaylistData();

        this->Teams = std::make_unique<PlayerTeams>(maxTeamSize);
    }

    ~AbstractGameModeBase()
    {
        GetWorld()->GameState->AuthorityGameMode->ResetLevel();
    }
    
    bool isRespawnEnabled() {
        return this->bRespawnEnabled;
    }

    void LoadKilledPlayer(AFortPlayerControllerAthena* Controller, FVector Spawn = {500, 500, 500})
    {
        if (this->bRespawnEnabled)
        {
            if (Controller->Pawn) {
                Controller->Pawn->K2_DestroyActor();
            }

            InitPawn(Controller, Spawn);
            Controller->ActivateSlot(EFortQuickBars::Primary, 0, 0, true);

            bool bFound = false;
            auto PickaxeEntry = Inventory::FindItemInInventory<UFortWeaponMeleeItemDefinition>(Controller, bFound);
            if (bFound)
            {
                Inventory::EquipInventoryItem(Controller, PickaxeEntry.ItemGuid);
            }

            LOG_INFO("({}) Re-initializing {} that has been killed (bRespawnEnabled == true)!", "GameModeBase", Controller->PlayerState->GetPlayerName().ToString());

        }
    }

    void LoadJoiningPlayer(AFortPlayerControllerAthena* Controller)
    {
       

        LOG_INFO("({}) Initializing {} that has just joined!", "GameModeBase", Controller->PlayerState->GetPlayerName().ToString());
        
        auto Pawn = Spawners::SpawnActor<APlayerPawn_Athena_C>(GetPlayerStart(Controller).Translation, Controller, {});
        Pawn->Owner = Controller;
        Pawn->OnRep_Owner();

        Pawn->NetCullDistanceSquared = 0.f;

        Controller->Pawn = Pawn;
        Controller->AcknowledgedPawn = Pawn;
        Controller->OnRep_Pawn();
        Controller->Possess(Pawn);

        Pawn->HealthSet->Health.Minimum = this->maxHealth;
        Pawn->HealthSet->CurrentShield.Minimum = this->maxShield;

        Pawn->SetMaxHealth(this->maxHealth);
        Pawn->SetMaxShield(this->maxShield);
        
        Pawn->bCanBeDamaged = bStartedBus;

        Controller->bHasClientFinishedLoading = true;
        Controller->bHasServerFinishedLoading = true;
        Controller->bHasInitiallySpawned = true;
        Controller->OnRep_bHasServerFinishedLoading();

        auto PlayerState = (AFortPlayerStateAthena*)Controller->PlayerState;
        PlayerState->bHasFinishedLoading = true;
        PlayerState->bHasStartedPlaying = true;
        PlayerState->OnRep_bHasStartedPlaying();
        if (bStartedBus && !bRejoinEnabled)
            KickController(Controller, L"Game Already Started, try again later.");
            LOG_INFO("{} HAS BEEN REMOVED FOR JOINING AFTER BUS STARTED", Controller->PlayerState->GetPlayerName().ToString());

        //if (bStartedBus)
           // Pawn->bCanBeDamaged = bStartedBus;


        static auto FortRegisteredPlayerInfo = ((UFortGameInstance*)GetWorld()->OwningGameInstance)->RegisteredPlayers[0]; // UObject::FindObject<UFortRegisteredPlayerInfo>("FortRegisteredPlayerInfo Transient.FortEngine_0_1.FortGameInstance_0_1.FortRegisteredPlayerInfo_0_1");

        if (FortRegisteredPlayerInfo)
        {
            auto Hero = FortRegisteredPlayerInfo->AthenaMenuHeroDef;

            if (Hero)
            {
                UFortHeroType* HeroType = Hero->GetHeroTypeBP(); // UObject::FindObject<UFortHeroType>("FortHeroType HID_Outlander_015_F_V1_SR_T04.HID_Outlander_015_F_V1_SR_T04");
                PlayerState->HeroType = HeroType;
                PlayerState->OnRep_HeroType();

                static auto Head = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1");
                static auto Body = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01");

                PlayerState->CharacterParts[(uint8_t)EFortCustomPartType::Head] = Head;
                PlayerState->CharacterParts[(uint8_t)EFortCustomPartType::Body] = Body;
                PlayerState->OnRep_CharacterParts();
            }
        }

        Inventory::Init(Controller);
        Inventory::EquipLoadout(Controller, this->GetPlaylistLoadout());
        Abilities::ApplyAbilities(Pawn);

        auto Drone = Spawners::SpawnActor<ABP_VictoryDrone_C>(Controller->K2_GetActorLocation());
        Drone->InitDrone();
        Drone->TriggerPlayerSpawnEffects();

        OnPlayerJoined(Controller);
    }

    void OnPlayerJoined(AFortPlayerControllerAthena* Controller) override // derived classes should implement these
    {
    }

    virtual void OnPlayerKilled(AFortPlayerControllerAthena* Controller) override
    {
        if (Controller && !IsCurrentlyDisconnecting(Controller->NetConnection)  && this->bRespawnEnabled)
        {
            LOG_INFO("Trying to respawn {}", Controller->PlayerState->GetPlayerName().ToString());
            // -Kyiro TO-DO: See if most of this code is even needed but it does work
            FVector RespawnPos = Controller->Pawn ? Controller->Pawn->K2_GetActorLocation() : FVector(10000, 10000, 10000);
            RespawnPos.Z += 3000;
            
            this->LoadKilledPlayer(Controller, RespawnPos);
            Controller->RespawnPlayerAfterDeath();
            
            if (Controller->Pawn->K2_TeleportTo(RespawnPos, FRotator{ 0, 0, 0 })) {
                Controller->Character->CharacterMovement->SetMovementMode(EMovementMode::MOVE_Custom, 4);
            }
            else
            {
                LOG_ERROR("Failed to teleport {}", Controller->PlayerState->GetPlayerName().ToString())
            }
             
            // auto CheatManager = static_cast<UFortCheatManager*>(Controller->CheatManager);
            // CheatManager->RespawnPlayerServer();
            // CheatManager->RespawnPlayer();
        }
    }

    virtual PlayerLoadout& GetPlaylistLoadout()
    {
        static PlayerLoadout Ret = {
            FindWID("WID_Harvest_Pickaxe_Athena_C_T01"),
            FindWID("WID_Shotgun_Standard_Athena_UC_Ore_T03"), // Blue Pump
            FindWID("WID_Shotgun_Standard_Athena_UC_Ore_T03"), // Blue Pump
            FindWID("WID_Assault_AutoHigh_Athena_SR_Ore_T03"), // Gold AR
            FindWID("WID_Sniper_BoltAction_Scope_Athena_R_Ore_T03"), // Blue Bolt Action
            FindWID("Athena_Shields") // Big Shield Potion
        };
        
        return Ret;
    }

    void InitPawn(AFortPlayerControllerAthena* PlayerController, FVector Loc = FVector { 1250, 1818, 3284 }, FQuat Rotation = FQuat(), bool bResetCharacterParts = false)
    {
        if (PlayerController->Pawn)
            PlayerController->Pawn->K2_DestroyActor();

        auto SpawnTransform = FTransform();
        SpawnTransform.Scale3D = FVector(1, 1, 1);
        SpawnTransform.Rotation = Rotation;
        SpawnTransform.Translation = Loc;

        // SpawnTransform = GetPlayerStart(PlayerController);

        auto Pawn = static_cast<APlayerPawn_Athena_C*>(Spawners::SpawnActor(APlayerPawn_Athena_C::StaticClass(), SpawnTransform, PlayerController));

        PlayerController->Pawn = Pawn;
        PlayerController->AcknowledgedPawn = Pawn;
        Pawn->Owner = PlayerController;
        Pawn->OnRep_Owner();
        PlayerController->OnRep_Pawn();
        PlayerController->Possess(Pawn);

        Pawn->SetMaxHealth(this->maxHealth);
        Pawn->SetMaxShield(this->maxShield);
	
        if (this->bRegenEnabled) { 
            Pawn->AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(Pawn->HealthRegenDelayGameplayEffect, Pawn->AbilitySystemComponent, 1);
            Pawn->AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(Pawn->HealthRegenGameplayEffect, Pawn->AbilitySystemComponent, 1);
            Pawn->AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(Pawn->ShieldRegenDelayGameplayEffect, Pawn->AbilitySystemComponent, 1);
            Pawn->AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(Pawn->ShieldRegenGameplayEffect, Pawn->AbilitySystemComponent, 1);
            // TODO: Check if this is useless.
            Pawn->HealthRegenDelayGameplayEffect = nullptr;
            Pawn->HealthRegenGameplayEffect = nullptr;
            Pawn->ShieldRegenDelayGameplayEffect = nullptr;
            Pawn->ShieldRegenGameplayEffect = nullptr;
        }

        Pawn->HealthSet->Health.Minimum = 0.0f; // Disables spawn island protection
        Pawn->HealthSet->CurrentShield.Minimum = 0.0f;

        Pawn->bReplicateMovement = true;
        Pawn->OnRep_ReplicateMovement();

        static auto FortRegisteredPlayerInfo = static_cast<UFortGameInstance*>(GetWorld()->OwningGameInstance)->RegisteredPlayers[0]; // UObject::FindObject<UFortRegisteredPlayerInfo>("FortRegisteredPlayerInfo Transient.FortEngine_0_1.FortGameInstance_0_1.FortRegisteredPlayerInfo_0_1");

        if (bResetCharacterParts && FortRegisteredPlayerInfo)
        {
            auto PlayerState = static_cast<AFortPlayerStateAthena*>(PlayerController->PlayerState);
            static auto Hero = FortRegisteredPlayerInfo->AthenaMenuHeroDef;

            PlayerState->HeroType = Hero->GetHeroTypeBP();
            PlayerState->OnRep_HeroType();

            static auto Head = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1");
            static auto Body = UObject::FindObject<UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01");

            PlayerState->CharacterParts[static_cast<uint8_t>(EFortCustomPartType::Head)] = Head;
            PlayerState->CharacterParts[static_cast<uint8_t>(EFortCustomPartType::Body)] = Body;
        }

        Inventory::Update(PlayerController);

        Abilities::ApplyAbilities(Pawn);
    }

protected:
    std::unique_ptr<PlayerTeams> Teams;

private:
    int maxHealth = 100;
    int maxShield = 100;
    bool bRespawnEnabled = false;
    bool bRegenEnabled = false;
    bool bRejoinEnabled = false;

    UFortPlaylistAthena* BasePlaylist;
};

