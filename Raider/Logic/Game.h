#pragma once

static bool bStartedBus = false;

#include "UE4.h"
#include "GameModes/GameModes.hpp"
#include "../Config.h"


typedef GameModeSolos CurrentGameMode;

/*enum GameModes
{
    Solos,
    Duos,
    LateGame,
    Playground,
    FiftyVersusFifty
};

GameModes strToGameMode(std::string input) { 
    //name in config : enum
        static std::map<std::string, GameModes> GameModesConvertor {
        { "GameMode50v50", GameModes::FiftyVersusFifty },
        { "GameModeDuos", GameModes::Duos },
        { "GameModeSolos", GameModes::Solos },
        { "GameModePlayground", GameModes::Playground },
        { "GameModeLateGame", GameModes::LateGame },
        };

        for (auto gameMode : GameModesConvertor)
        {
            if (input == gameMode.first)
                return gameMode.second;
            else
                continue;
        }

        return GameModes::Playground;
}*/


namespace Game
{
    inline std::unique_ptr<CurrentGameMode> Mode;

    void Start()
    {
        GetPlayerController()->SwitchLevel(L"Athena_Terrain?game=/Game/Athena/Athena_GameMode.Athena_GameMode_C");
        bTraveled = true;
    }

    void OnReadyToStartMatch()
    {
        LOG_INFO("Initializing the match for the server!");
        auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);
        auto GameMode = reinterpret_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);
        auto InProgress = GetKismetString()->STATIC_Conv_StringToName(L"InProgress");

        GameState->bGameModeWillSkipAircraft = true;
        GameState->AircraftStartTime = 9999.9f;
        GameState->WarmupCountdownEndTime = 99999.9f;

        GameState->GamePhase = EAthenaGamePhase::Warmup;
        GameState->OnRep_GamePhase(EAthenaGamePhase::None);

        GameMode->bDisableGCOnServerDuringMatch = true;
        GameMode->bAllowSpectateAfterDeath = true;
        GameMode->bEnableReplicationGraph = true;

        GameMode->MatchState = InProgress;
        GameMode->K2_OnSetMatchState(InProgress);

     /* auto gamemode = strToGameMode(ConfigVars::gameMode);
        switch (gamemode)
        {
        case Solos:
            Mode = std::make_unique<GameModeSolos>;
            break;
        case Duos:
            Mode = std::make_unique<GameModeDuos>;
            break;
        case LateGame:
            Mode = std::make_unique<GameModeLateGame>;
            break;
        case Playground:
            Mode = std::make_unique<GameModePlayground>;
            break;
        case FiftyVersusFifty:
            Mode = std::make_unique<GameMode50v50>;
            break;
        default:
            Mode = std::make_unique<GameModePlayground>;
                break;
        }*/

        Mode = std::make_unique<CurrentGameMode>();

        GameMode->MinRespawnDelay = 5.0f;
        GameMode->StartPlay();

        GameState->bReplicatedHasBegunPlay = true;
        GameState->OnRep_ReplicatedHasBegunPlay();
        GameMode->StartMatch();
    }

    auto GetDeathCause(FFortPlayerDeathReport DeathReport)
    {
        static std::map<std::string, EDeathCause> DeathCauses {
            { "weapon.ranged.shotgun", EDeathCause::Shotgun },
            { "weapon.ranged.assault", EDeathCause::Rifle },
            { "Gameplay.Damage.Environment.Falling", EDeathCause::FallDamage },
            { "weapon.ranged.sniper", EDeathCause::Sniper },
            { "Weapon.Ranged.SMG", EDeathCause::SMG },
            { "weapon.ranged.heavy.rocket_launcher", EDeathCause::RocketLauncher },
            { "weapon.ranged.heavy.grenade_launcher", EDeathCause::GrenadeLauncher },
            { "Weapon.ranged.heavy.grenade", EDeathCause::Grenade },
            { "Weapon.Ranged.Heavy.Minigun", EDeathCause::Minigun },
            { "Weapon.Ranged.Crossbow", EDeathCause::Bow },
            { "trap.floor", EDeathCause::Trap },
            { "weapon.ranged.pistol", EDeathCause::Pistol },
            { "Gameplay.Damage.OutsideSafeZone", EDeathCause::OutsideSafeZone },
            { "Weapon.Melee.Impact.Pickaxe", EDeathCause::Melee }
        };

        for (int i = 0; i < DeathReport.Tags.GameplayTags.Num(); i++)
        {
            auto TagName = DeathReport.Tags.GameplayTags[i].TagName.ToString();

            for (auto Map : DeathCauses)
            {
                if (TagName == Map.first) return Map.second;
                else continue;
            }
        }

        return EDeathCause::Unspecified;
    }
}
