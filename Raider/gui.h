#pragma once

#include "ZeroGUI.h"

static bool bStartedBus = false;

namespace GUI
{
    void Tick()
    {
        ZeroGUI::Input::Handle();

        static bool menu_opened = true;

        if (GetAsyncKeyState(VK_F2) & 1)
            menu_opened = !menu_opened;

        auto pos = FVector2D { 200.f, 250.0f };

        if (ZeroGUI::Window((char*)"Raider GS", &pos, FVector2D { 500.0f, 400.0f }, menu_opened))
        {
            if (!bStartedBus)
            {
                if (ZeroGUI::Button((char*)"Start Bus!", FVector2D { 100, 25 }))
                {
                    auto gameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);

                    gameState->bGameModeWillSkipAircraft = false;
                    gameState->AircraftStartTime = 0;
                    gameState->WarmupCountdownEndTime = 0;

                    ((UKismetSystemLibrary*)UKismetSystemLibrary::StaticClass())->STATIC_ExecuteConsoleCommand(GetWorld(), L"startaircraft", nullptr);

                    printf("Started Aircraft!\n");
                }
                bStartedBus = true;
            }
        }

        ZeroGUI::Render();
        ZeroGUI::Draw_Cursor(menu_opened);
    }
}