#pragma once
#include <vector>
#include "../ue4.h"
#include "../SDK.hpp"

class GameModeBase
{
private:
    bool bIsSolo = true;
    int maxHealth = 100;
    int maxShield = 100;
    
    UFortPlaylistAthena* BasePlaylist;
    std::vector<UFortWeaponRangedItemDefinition*> DefaultLoadout;
    
public:
    GameModeBase(UFortPlaylistAthena* BasePlaylist = nullptr, std::vector<UFortWeaponRangedItemDefinition*> Loadout = {}, bool bIsSolo = true, bool bRespawnEnabled = false)
    {
        if (!BasePlaylist) this->BasePlaylist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo");
        if (Loadout.size() <= 0) this->DefaultLoadout = {
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
            this->BasePlaylist->FriendlyFireType = EFriendlyFireType::On;
            this->BasePlaylist->RespawnLocation = EAthenaRespawnLocation::Air;
            this->BasePlaylist->RespawnType = EAthenaRespawnType::InfiniteRespawn;
        }

        auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);
        GameState->OnRep_CurrentPlaylistData();
    }
    
    ~GameModeBase()
    {
        GetWorld()->GameState->AuthorityGameMode->ResetLevel();
    }
    
    virtual void HandleJoiningPlayer(AFortPlayerControllerAthena* Controller)
    {
        //auto Pawn = (APlayerPawn_Athena_C*)SpawnActorTrans(APlayerPawn_Athena_C::StaticClass(), GetPlayerStart(Controller), Controller);

        auto Pawn = SpawnActor<APlayerPawn_Athena_C>(GetPlayerStart(Controller).Translation, Controller, {});
        Pawn->Owner = Controller;
        Pawn->OnRep_Owner();
        
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
        EquipLoadout(Controller, this->DefaultLoadout);
    }
};
