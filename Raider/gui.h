#pragma once

#include "ZeroGUI.h"
#include <format>

static bool bStartedBus = false;

enum class CustomMode
{
    NONE,
    JUGGERNAUT, // Gives the players 500 health and makes you slower.
    LATEGAME, // TODO: You know what late game is.
    LIFESTEAL, // TODO: You know what life steal is, but this might be a stupid idea.
    SPACE, // Sets gravity like the moon // BUG: Unfortunately, the gravityscale variable doesn't update for the client, making them rubberband and making it look weird.
    SIPHON // Gives 50 shield/health whenever you finish someone. (Late game also has this)
};

constexpr CustomMode Mode = CustomMode::NONE;

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
            if (bListening && HostBeacon && bMapFullyLoaded)
            {
                static auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);
                std::string ConnectedPlayers = std::format("Connected Players: {}\n", GameState->PlayerArray.Num());

                ZeroGUI::Text((char*)ConnectedPlayers.c_str());

                if (!bStartedBus)
                {
                    if (ZeroGUI::Button((char*)"Start Bus", FVector2D{ 100, 25 }))
                    {
                        if (((AAthena_GameState_C*)GetWorld()->GameState)->GamePhase >= EAthenaGamePhase::Aircraft)
                        {
                            std::cout << "The bus is already started!\n";
                            bStartedBus = true;
                        }
						
                        GameState->bGameModeWillSkipAircraft = false;
                        GameState->AircraftStartTime = 0;
                        GameState->WarmupCountdownEndTime = 0;

                        ((UKismetSystemLibrary*)UKismetSystemLibrary::StaticClass())->STATIC_ExecuteConsoleCommand(GetWorld(), L"startaircraft", nullptr);

                        printf("Started Aircraft!\n");
                        bStartedBus = true;

						if constexpr (Mode == CustomMode::LATEGAME)
                        {
                            AFortAthenaAircraft* Aircraft = ((AAthena_GameState_C*)GetWorld()->GameState)->Aircrafts[0];
                            auto GameMode = (AAthena_GameMode_C*)GetWorld()->AuthorityGameMode;
                            if (Aircraft)
                            {
                                auto& AircraftInfo = Aircraft->FlightInfo;
                                const int Speed = 2;
                                Aircraft->DropStartTime / Speed;
                                Aircraft->DropEndTime / Speed;
                                Aircraft->FlightStartTime / Speed;
								Aircraft->FlightEndTime / Speed;
                                AircraftInfo.FlightSpeed *= Speed;
                                AircraftInfo.TimeTillDropStart / Speed;
								AircraftInfo.TimeTillDropEnd / Speed;

                                const int StartSafeZonePhase = 3;
                                auto Rotation = Aircraft->K2_GetActorRotation();
                                auto Location = Aircraft->K2_GetActorLocation();
                                Rotation.Pitch = -90.f;
								
                                if (GameMode->SafeZoneLocations.Data && GameMode->SafeZoneLocations[StartSafeZonePhase])
                                    Location = GameMode->SafeZoneLocations[StartSafeZonePhase];

                                Aircraft->K2_TeleportTo(Location, Rotation);
                                GameMode->SafeZonePhase = StartSafeZonePhase;
                            }
                            else
                                std::cout << "Could not find Aircraft!\n";
                        }
                    }
                }

                if (ZeroGUI::Button((char*)"Summon FloorLoot", FVector2D { 100, 25 }))
                {
                    CreateThread(0, 0, SummonFloorLoot, 0, 0, 0);
                    printf("Spawning Floor Loot!\n");
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
