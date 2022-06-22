#pragma once
#include "../ue4.h"
#include "../SDK.hpp"
#include "../Teams.h"

class IGameModeBase
{
public:
    virtual void OnPlayerJoined(AFortPlayerControllerAthena* Controller) = 0;
    virtual void OnPlayerKilled(AFortPlayerControllerAthena* Controller) = 0;
};

class AbstractGameModeBase : protected IGameModeBase
{
public:
    AbstractGameModeBase(const std::string BasePlaylist, bool bRespawnEnabled = false, int maxTeamSize = 1)
    {
        this->BasePlaylist = UObject::FindObject<UFortPlaylistAthena>(BasePlaylist);

        this->BasePlaylist->bNoDBNO = maxTeamSize > 1;
        this->bRespawnEnabled = bRespawnEnabled;

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

    void LoadKilledPlayer(AFortPlayerControllerAthena* Controller)
    {
        if (this->bRespawnEnabled)
        {
            InitPawn(Controller, { 500, 500, 500 });
            Controller->ActivateSlot(EFortQuickBars::Primary, 0, 0, true);

            bool bFound = false;
            auto PickaxeEntry = FindItemInInventory<UFortWeaponMeleeItemDefinition>(Controller, bFound);
            if (bFound)
            {
                EquipInventoryItem(Controller, PickaxeEntry.ItemGuid);
            }

            LOG_INFO("({}) Re-initializing {} that has been killed (bRespawnEnabled == true)!", "GameModeBase", Controller->PlayerState->GetPlayerName().ToString());
        }

        OnPlayerKilled(Controller);
    }

    void LoadJoiningPlayer(AFortPlayerControllerAthena* Controller)
    {
        LOG_INFO("({}) Initializing {} that has just joined!", "GameModeBase", Controller->PlayerState->GetPlayerName().ToString());

            auto Pawn = SpawnActor<APlayerPawn_Athena_C>(GetPlayerStart(Controller).Translation, Controller, {});
            Pawn->Owner = Controller;
            Pawn->OnRep_Owner();

            Pawn->NetCullDistanceSquared = 0.f;

            Controller->Pawn = Pawn;
            Controller->AcknowledgedPawn = Pawn;
            Controller->OnRep_Pawn();
            Controller->Possess(Pawn);

            // This state gets auto reseted once the player respawns (aka jumps from the bus)
            //  CreateCheatManager(Controller)->God();
            Pawn->HealthSet->Health.Minimum = 1.0f; // This is more accurate to the actual game, you can take damage but you will not die

            Pawn->SetMaxHealth(this->maxHealth);
            Pawn->SetMaxShield(this->maxShield);

            Controller->bHasClientFinishedLoading = true;
            Controller->bHasServerFinishedLoading = true;
            Controller->bHasInitiallySpawned = true;
            Controller->OnRep_bHasServerFinishedLoading();

            auto PlayerState = (AFortPlayerStateAthena*)Controller->PlayerState;
            PlayerState->bHasFinishedLoading = true;
            PlayerState->bHasStartedPlaying = true;
            PlayerState->OnRep_bHasStartedPlaying();

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

            InitInventory(Controller);
            EquipLoadout(Controller, this->GetPlaylistLoadout());
            ApplyAbilities(Pawn);

            auto Drone = SpawnActor<ABP_VictoryDrone_C>(Controller->K2_GetActorLocation());
            Drone->InitDrone();
            Drone->TriggerPlayerSpawnEffects();

            OnPlayerJoined(Controller);
    }

    void OnPlayerJoined(AFortPlayerControllerAthena* Controller) override // derived classes should implement these
    {
    }

    virtual void OnPlayerKilled(AFortPlayerControllerAthena* Controller) override
    {
        if (this->bRespawnEnabled)
        {
            auto CheatManager = static_cast<UFortCheatManager*>(Controller->CheatManager);
            Controller->RespawnPlayerAfterDeath();
            CheatManager->RespawnPlayerServer();
            CheatManager->RespawnPlayer();
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

    void InitPawn(AFortPlayerControllerAthena* PlayerController, FVector Loc = FVector { 1250, 1818, 3284 }, FQuat Rotation = FQuat(), bool bResetCharacterParts = true)
    {
        if (PlayerController->Pawn)
            PlayerController->Pawn->K2_DestroyActor();

        auto SpawnTransform = FTransform();
        SpawnTransform.Scale3D = FVector(1, 1, 1);
        SpawnTransform.Rotation = Rotation;
        SpawnTransform.Translation = Loc;

        // SpawnTransform = GetPlayerStart(PlayerController);

        auto Pawn = static_cast<APlayerPawn_Athena_C*>(SpawnActorTrans(APlayerPawn_Athena_C::StaticClass(), SpawnTransform, PlayerController));

        PlayerController->Pawn = Pawn;
        PlayerController->AcknowledgedPawn = Pawn;
        Pawn->Owner = PlayerController;
        Pawn->OnRep_Owner();
        PlayerController->OnRep_Pawn();
        PlayerController->Possess(Pawn);

        Pawn->SetMaxHealth(this->maxHealth);
        Pawn->SetMaxShield(this->maxShield);

        Pawn->HealthSet->Health.Minimum = 0.0f; // Disables spawn island protection

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

        UpdateInventory(PlayerController);

        ApplyAbilities(Pawn);
    }

protected:
    std::unique_ptr<PlayerTeams> Teams;

private:
    int maxHealth = 100;
    int maxShield = 100;
    bool bRespawnEnabled = false;

    UFortPlaylistAthena* BasePlaylist;
};
