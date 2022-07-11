#pragma once

#include "GameModeBase.hpp"



static FVector GetRandomBattleBusLocation()
{
    static std::vector<FVector> Locations = {
        { 24426, 37710, 17525 },    // Retail Row
        { 50018, 73844, 17525 },    // Lonely Lodge
        { 34278, 867, 9500 },       // Dusty Depot & The Factories
        { 79710, 15677, 17525 },    // Tomato Town
        { 103901, -20203, 17525},   // Anarchy Acres
        { 86766, -83071, 17525 },   // Pleasant Park
        { 2399, -96255, 17525 },    // Greasy Grove
        { -35037, -463, 13242 },    // Fatal Fields
        { 83375, 50856, 17525 },    // Wailing Woods
        { 35000, -60121, 20525 },   // Tilted Towers
        { 40000, -127121, 17525 },  // Snobby Shores
        { 5000, -60121, 10748 },    // Shifty Shafts
        { 110088, -115332, 17525},  // Haunted Hills
        { 119126, -86354, 17525 },  // Junk Houses
        { 130036, -105092, 17525},  // Junk Junction
        { 39781, 61621, 17525},     // Moisty Mire
        { -68000, -63521, 17525 },  // Flush Factory
        { 3502, -9183, 10500 },     // Salty Springs
        { 7760, 76702, 17525},      // Race Track
        { 38374, -94726, 17525},    // Soccer field
        { 70000, -40121, 17525 },   // Loot Lake
        {-123778, -112480, 17525}   // Spawn Island
    };

    static auto Location = Locations[rand() % Locations.size()];
    return Location;
}

class GameModeLateGame : public AbstractGameModeBase
{
public:
    GameModeLateGame()
        : AbstractGameModeBase("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo", false, 1, false)
    {
        LOG_INFO("Initializing Late Game!");
        LOG_INFO("Trying to set SafeZone radius!");

        auto GameMode = static_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);

        GameMode->bSafeZoneActive = true;
        GameMode->bSafeZonePaused = false;
    }
    
    void InitializeGameplay()
    {

        auto GameState = static_cast<AFortGameStateAthena*>(GetWorld()->GameState);
        auto GameMode = static_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);
        auto Aircraft = GameState->GetAircraft(0);
        // GameState->GamePhase = EAthenaGamePhase::SafeZones;
        // int SafeZoneConfigure[3] = { 1 }
        // GameMode->SafeZoneLocations = GetRandomBattleBusLocation();

        auto SafeZoneCenter = GetRandomBattleBusLocation(); /* TODO: Array of Locations where late game could take place in. (POIs) */
        // GameMode->SafeZonePhase = 1;
        // GameMode->SafeZoneLocations = Aircraft->K2_GetActorLocation();
        // Aircraft->K2_GetActorLocation();
        /* TArray<FVector> Locations;
        Locations.Add(FVector(-123778, -112480, 17525));
        GameMode->SafeZoneLocations = Locations;
        GameMode->SafeZonePhase = 3;
        GameMode->bSafeZoneActive = true;
        GameMode->bSafeZonePaused = false;*/
        //GameMode->SafeZoneIndicator;

        if (Aircraft)
        {
            GameState->SafeZonesStartTime = 5.0f;
            Aircraft->FlightInfo.FlightSpeed = 0.0f;
            Aircraft->FlightInfo.TimeTillDropStart = 0.0f;
            Aircraft->FlightInfo.FlightStartLocation = FVector_NetQuantize100(SafeZoneCenter);

            Aircraft->ExitLocation = SafeZoneCenter;
            GameState->OnRep_Aircraft();
            GameMode->SafeZoneIndicator;

        }
        else
        {
            LOG_ERROR("Aircraft was NULL! Can't set flight data.");
        }
        
        if (GameMode->SafeZoneIndicator)
        {
            /* TArray<FVector> Locations;
            Locations.Add(FVector(-123778, -112480, 17525));
            GameMode->SafeZoneLocations = Locations;
            GameMode->SafeZonePhase = 3;
            GameMode->bSafeZoneActive = true;
            GameMode->bSafeZonePaused = false; */

            // GameMode->SafeZoneIndicator->SetSafeZoneRadiusAndCenter(1000, Locations);
            // GameState->SafeZonesStartTime = 0;
        }
        else
        {
            LOG_ERROR("SafeZoneIndicator was NULL! Can't set Radius and Center.");
        }
    }
    
    void OnPlayerJoined(AFortPlayerControllerAthena* Controller) override
    {
        this->Teams->AddPlayerToRandomTeam(Controller);
    }
};
