#pragma once
#include "GameModeBase.hpp"

class GameModeDuos : AbstractGameModeBase
{
public:
    GameModeDuos()
        : AbstractGameModeBase(true, true)
    {
        this->teamIdx = 2;
    }
};
