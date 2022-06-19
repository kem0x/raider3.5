#pragma once
#include <vector>
#include "../ue4.h"
#include "../SDK.hpp"

class GameModeBase
{
public:
    GameModeBase(UFortPlaylistAthena* BasePlaylist = nullptr, std::vector<UFortWeaponRangedItemDefinition*> Loadout = {}, bool bIsSolo = true, bool bRespawnEnabled = false, bool bSpectatingEnabled = true)
    {
        if (!BasePlaylist)
            this->BasePlaylist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo");
        if (Loadout.size() <= 0)
            this->DefaultLoadout = {
                FindWID("WID_Harvest_Pickaxe_Athena_C_T01"),
                FindWID("WID_Shotgun_Standard_Athena_UC_Ore_T03"), // Blue Pump
                FindWID("WID_Shotgun_Standard_Athena_UC_Ore_T03"), // Blue Pump
                FindWID("WID_Assault_AutoHigh_Athena_SR_Ore_T03"), // Gold AR
                FindWID("WID_Sniper_BoltAction_Scope_Athena_R_Ore_T03"), // Blue Bolt Action
                FindWID("Athena_Shields") // Big Shield Potion
            };

        this->BasePlaylist->bNoDBNO = !bIsSolo;

        if (bRespawnEnabled)
        {
            this->bRespawnEnabled = bRespawnEnabled;
            this->BasePlaylist->RespawnLocation = EAthenaRespawnLocation::Air;
            this->BasePlaylist->RespawnType = EAthenaRespawnType::InfiniteRespawn;
        }

        this->bSpectatingEnabled = bSpectatingEnabled;
        
        auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);
        GameState->OnRep_CurrentPlaylistData();
    }

    ~GameModeBase()
    {
        GetWorld()->GameState->AuthorityGameMode->ResetLevel();
    }

    virtual void HandleJoiningPlayer(AFortPlayerControllerAthena* Controller)
    {
        InitInventory(Controller);
        //auto Pawn = (APlayerPawn_Athena_C*)SpawnActorTrans(APlayerPawn_Athena_C::StaticClass(), GetPlayerStart(Controller), Controller);
        auto Pawn = SpawnActor<APlayerPawn_Athena_C>(GetPlayerStart(Controller).Translation, Controller, {});
        Pawn->Owner = Controller;
        Pawn->OnRep_Owner();

        // ((__int64*)Pawn)[0x3DB] = (__int64)Controller->WorldInventory;
        // Pawn->Role = 3;
		
        Controller->Pawn = Pawn;
        Controller->AcknowledgedPawn = Pawn;
        Controller->OnRep_Pawn();
        Controller->Possess(Pawn);

        Pawn->SetMaxHealth(this->maxHealth);
        Pawn->SetMaxShield(this->maxShield);

        Controller->bHasClientFinishedLoading = true;
        Controller->bHasServerFinishedLoading = true;
        Controller->bHasInitiallySpawned = true;
        Controller->OnRep_bHasServerFinishedLoading();

        auto PlayerState = static_cast<AFortPlayerStateAthena*>(Controller->PlayerState);
        PlayerState->bHasFinishedLoading = true;
        PlayerState->bHasStartedPlaying = true;
        PlayerState->OnRep_bHasStartedPlaying();

        static auto FortRegisteredPlayerInfo = static_cast<UFortGameInstance*>(GetWorld()->OwningGameInstance)->RegisteredPlayers[0];

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

                PlayerState->CharacterParts[static_cast<uint8_t>(EFortCustomPartType::Head)] = Head;
                PlayerState->CharacterParts[static_cast<uint8_t>(EFortCustomPartType::Body)] = Body;
                PlayerState->OnRep_CharacterParts();
            }
        }

        EquipLoadout(Controller, this->DefaultLoadout);
    }

    virtual void HandlePlayerDeath(AFortPlayerControllerAthena* Controller)
    {
        if (!this->bRespawnEnabled)
        {
            auto GameState = static_cast<AAthena_GameState_C*>(GetWorld()->AuthorityGameMode->GameState);
            GameState->PlayersLeft--;
            GameState->OnRep_PlayersLeft();

            /*if (this->bSpectatingEnabled)
            {
            
            }*/
        }
    }
private:
    bool bIsSolo = true;
    bool bRespawnEnabled = false;
    bool bSpectatingEnabled = true;
    
    int maxHealth = 100;
    int maxShield = 100;

    UFortPlaylistAthena* BasePlaylist;
    std::vector<UFortWeaponRangedItemDefinition*> DefaultLoadout;
};
