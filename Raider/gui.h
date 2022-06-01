#pragma once

#include "ZeroGUI.h"
#include <format>

static bool bStartedBus = false;

namespace GUI
{
    void Tick()
    {
        ZeroGUI::Input::Handle();

        static bool menu_opened = true;

        if (GetAsyncKeyState(VK_F2) & 1)
            menu_opened = !menu_opened;

        auto pos = FVector2D{ 200.f, 250.0f };

        if (ZeroGUI::Window((char*)"Raider", &pos, FVector2D{ 500.0f, 400.0f }, menu_opened))
        {
            if (bListening && HostBeacon)
            {
                static auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);
                static auto GameInstance = (UFortGameInstance*)GetWorld()->OwningGameInstance;

                ZeroGUI::Text((char*)std::format("Connected Players: {}!\n", GameState->PlayerArray.Num()).c_str());
                
                for (int i = 1; i < GameInstance->RegisteredPlayers.Num(); i++)
                {
                    if (GameInstance->RegisteredPlayers[i])
                    {
                        auto name = GameInstance->RegisteredPlayers[i]->GetPlayerName();

					    ZeroGUI::Text((char*)name.ToString().c_str()); // this works sometimes	
                    }
                }

                if (!bStartedBus)
                {
                    if (ZeroGUI::Button((char*)"Start Bus", FVector2D{ 100, 25 }))
                    {
                        GameState->bGameModeWillSkipAircraft = false;
                        GameState->AircraftStartTime = 0;
                        GameState->WarmupCountdownEndTime = 0;

                        ExecuteConsoleCommand(L"startaircraft");

                        printf("Started Aircraft!\n");
                        bStartedBus = true; // Instead of relying on a variable, we should check if the aircraft has started or is planning to start (potentially by checking the gamephase?).
                    }
                }

                if (ZeroGUI::Button((char*)"Summon FloorLoot", FVector2D{ 100, 25 })) // this isn't a great idea due to no relevancy...
                {
                    // CreateThread(0, 0, SummonFloorLoot, 0, 0, 0); // crashes 99% of the time
                    printf("Spawning Floor Loot!\n");
                }
            }
            else
            {
                ZeroGUI::Text((char*)"Waiting for the server to launch - or the requirements (bListening && HostBeacon) are failing to be met.", true, true);
            }
        }

        ZeroGUI::Render();
        //ZeroGUI::Draw_Cursor(menu_opened);
    }
}
