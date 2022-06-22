#pragma once

#include "ZeroGUI.h"
#include <format>

static bool bStartedBus = false;

enum class CustomMode
{
    NONE,
    JUGGERNAUT,
    // Gives the players 500 health and makes you slower.
    LATEGAME,
    // TODO: You know what late game is.
    LIFESTEAL,
    // TODO: You know what life steal is, but this might be a stupid idea.
    SPACE,
    // Sets gravity like the moon // BUG: Unfortunately, the gravityscale variable doesn't update for the client, making them rubberband and making it look weird.
    SIPHON // Gives 50 shield/health whenever you finish someone. (Late game also has this)
};

//constexpr CustomMode Mode = CustomMode::NONE;

namespace GUI
{
    void Tick()
    {
        ZeroGUI::Input::Handle();

        static bool menu_opened = true;

        if (GetAsyncKeyState(VK_F2) & 1)
            menu_opened = !menu_opened;

        static auto pos = FVector2D{ 200.f, 250.0f };

        if (ZeroGUI::Window((char*)"Raider", &pos, FVector2D{ 500.0f, 400.0f }, menu_opened))
        {
            if (bListening && HostBeacon)
            {
                static auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);
                std::string ConnectedPlayers = std::format("Connected Players: {}\n", GameState->PlayerArray.Num());

                ZeroGUI::Text((char*)ConnectedPlayers.c_str());

                if (!bStartedBus)
                {
                    if (ZeroGUI::Button((char*)"Start Bus", FVector2D{ 100, 25 }))
                    {
                        if (static_cast<AAthena_GameState_C*>(GetWorld()->GameState)->GamePhase >= EAthenaGamePhase::Aircraft)
                        {
                            LOG_INFO("The bus has already started!")
                            bStartedBus = true;
                        }

                        GameState->bGameModeWillSkipAircraft = false;
                        GameState->AircraftStartTime = 0;
                        GameState->WarmupCountdownEndTime = 0;

                        GetKismetSystem()->STATIC_ExecuteConsoleCommand(GetWorld(), L"startaircraft", nullptr);

                        Game::Mode->InitializeGameplay();
                        LOG_INFO("The bus has been started!")
                        bStartedBus = true;
                    }
                }
            }
            else
            {
                // ZeroGUI::Text((char*)"Waiting for map to load...");
            }
        }

        ZeroGUI::Render();
        //ZeroGUI::Draw_Cursor(menu_opened);
    }
}
