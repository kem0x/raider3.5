#ifndef __GLOBALS_H__
#define __GLOBALS_H__

#include "UE4.h"

namespace ConfigVars
{
    PlayerLoadout loadout = {};
    bool bMultiLoadout = false;
    std::vector<PlayerLoadout> loadouts = {};
    std::string gameMode = "GameModeSolos";
    int maxShield = 100;
    int maxHealth = 100;
    bool bNoSafezone = false;
    bool bRespawnEnabled = false;
    bool bRegenEnabled = false;
    bool bConfigLoadedSuccessfully = false;
}

#endif