#pragma once

#include "ZeroGUI.h"
#include <format>
#include <mutex>
#include "json.hpp"

using namespace nlohmann;

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

// constexpr CustomMode Mode = CustomMode::NONE;

namespace GUI
{
    std::mutex mtx;
    void Tick()
    {
        ZeroGUI::Input::Handle();

        static bool menu_opened = true;

        if (GetAsyncKeyState(VK_F2) & 1)
            menu_opened = !menu_opened;

        static auto pos = FVector2D { 200.f, 250.0f };

        if (ZeroGUI::Window(L"Raider", &pos, FVector2D { 500.0f, 700.0f }, menu_opened))
        {
            if (bListening && HostBeacon)
            {
                static auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);
                static AFortPlayerStateAthena* currentPlayer = nullptr;

                // This is bad, but works for now.
                if (currentPlayer)
                {
                    if (ZeroGUI::Button(L"<", { 25.0f, 25.0f }))
                    {
                        mtx.lock();
                        currentPlayer = nullptr;
                        mtx.unlock();
                    }

                    ZeroGUI::NextColumn(90.0f);

                    if (currentPlayer) // it crashes sometimes if I don't put this here
                    {
                        auto currentPlayerName = currentPlayer->GetPlayerName().c_str();

                        ZeroGUI::Text(std::format(L"Current Player: {}", currentPlayerName).c_str());

                        if (ZeroGUI::Button(L"Kick", { 60.0f, 25.0f }))
                        {
                            KickController((APlayerController*)currentPlayer->Owner, L"You have been kicked by the server.");

                            mtx.lock();
                            currentPlayer = nullptr;
                            mtx.unlock();
                        }

                        auto currentIp = currentPlayer->SavedNetworkAddress.c_str();

                        if (ZeroGUI::Button(L"Ban", { 60.0f, 25.0f }))
                        {
                            Ban(currentIp, (APlayerController*)currentPlayer->Owner, currentPlayerName);

                            mtx.lock();
                            currentPlayer = nullptr;
                            mtx.unlock();
                        }
                    }
                }
                else
                {
                    static int tab = 0;

                    if (ZeroGUI::ButtonTab(L"Game", FVector2D { 110, 25 }, tab == 0))
                        tab = 0;
                    if (ZeroGUI::ButtonTab(L"Players", FVector2D { 110, 25 }, tab == 1))
                        tab = 1;
                    if (ZeroGUI::ButtonTab(L"Banned Players", FVector2D { 110, 25 }, tab == 2)) // figure out a different place to put this and check if there is atleast 1 banned player.
                        tab = 2;

                    ZeroGUI::NextColumn(130.0f);

                    switch (tab)
                    {
                    case 0:
                    {
                        if (!bStartedBus)
                        {
                            if (ZeroGUI::Button(L"Start Bus", FVector2D { 100, 25 }))
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
                        break;
                    }
                    case 1:
                    {
                        std::wstring ConnectedPlayers = std::format(L"Connected Players: {}\n", GameState->PlayerArray.Num());

                        ZeroGUI::Text(ConnectedPlayers.c_str());

                        for (auto i = 0; i < GameState->PlayerArray.Num(); i++)
                        {
                            auto PlayerState = GameState->PlayerArray[i];

                            if (ZeroGUI::Button(PlayerState->GetPlayerName().c_str(), { 100, 25 }))
                            {
                                currentPlayer = (AFortPlayerStateAthena*)PlayerState;
                            }
                        }

                        break;
                    }
                    case 2:
                    {
                        std::ifstream input_file("banned-ips.json");
                        std::string line;

                        if (input_file.is_open())
                        {
                            while (std::getline(input_file, line))
                            {
                                std::string Username = json::parse(line)["Username"];
                                if (ZeroGUI::Button((L"Unban " + std::wstring(Username.begin(), Username.end())).c_str(), { 100, 25 }))
                                {
                                    Unban(std::wstring(Username.begin(), Username.end()));
                                }
                            }
                        }
                        break;
                    }
                    }
                }
            }
            else
            {
                // ZeroGUI::Text(L"Waiting for map to load...");
            }
        }

        ZeroGUI::Render();
        // ZeroGUI::Draw_Cursor(menu_opened);
    }
}
