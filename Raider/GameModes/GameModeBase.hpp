#pragma once
#include <vector>
#include "../ue4.h"
#include "../SDK.hpp"

class GameModeBase
{
public:
    bool bIsSolo;
    static UFortPlaylistAthena* BasePlaylist;
    static std::vector DefaultLoadout = {
        FindWID("WID_Harvest_Pickaxe_Athena_C_T01"),
        FindWID("WID_Shotgun_Standard_Athena_UC_Ore_T03"), // Blue Pump
        FindWID("WID_Shotgun_Standard_Athena_UC_Ore_T03"), // Blue Pump
        FindWID("WID_Assault_AutoHigh_Athena_SR_Ore_T03"), // Gold AR
        FindWID("WID_Sniper_BoltAction_Scope_Athena_R_Ore_T03"), // Blue Bolt Action
        FindWID("Athena_Shields") // Big Shield Potion
    };
    
    GameModeBase(bool bIsSolo, UFortPlaylistAthena* BasePlaylist = nullptr)
    {
        if (!BasePlaylist) this->BasePlaylist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo");
        this->BasePlaylist->bNoDBNO = !bIsSolo;
        this->BasePlaylist->FriendlyFireType = EFriendlyFireType::On;
        this->BasePlaylist->RespawnLocation = EAthenaRespawnLocation::Air;
        this->BasePlaylist->RespawnType = EAthenaRespawnType::InfiniteRespawn;
    }

    void InitializePlayer()
    {
        
    }
};
