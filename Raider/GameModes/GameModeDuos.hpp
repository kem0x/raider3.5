#pragma once
#include "GameModeBase.hpp"

class GameModeDuos : AbstractGameModeBase
{
public:
    GameModeDuos()
        : AbstractGameModeBase("FortPlaylistAthena Playlist_DefaultDuos.Playlist_DefaultDuos", true)
    {
        this->teamIdx = 2;
    }
};
