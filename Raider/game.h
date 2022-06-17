#pragma once

#include "ue4.h"

namespace Game
{
    void Start()
    {
        GetPlayerController()->SwitchLevel(L"Athena_Terrain?game=/Game/Athena/Athena_GameMode.Athena_GameMode_C");
        bTraveled = true;
    }

    void OnReadyToStartMatch()
    {
        auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);
        auto GameMode = reinterpret_cast<AFortGameModeAthena*>(GetWorld()->AuthorityGameMode);
        auto GameInstance = reinterpret_cast<UFortGameInstance*>(GetWorld()->OwningGameInstance);
        static auto SoloPlaylist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultSolo.Playlist_DefaultSolo");
        static auto DuoPlaylist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena Playlist_DefaultDuo.Playlist_DefaultDuo");
        auto InProgress = GetKismetString()->STATIC_Conv_StringToName(L"InProgress");

        GameState->bGameModeWillSkipAircraft = true;
        GameState->AircraftStartTime = 9999.9f;
        GameState->WarmupCountdownEndTime = 99999.9f;

        GameState->GamePhase = EAthenaGamePhase::Warmup;
        GameState->OnRep_GamePhase(EAthenaGamePhase::None);

        GameMode->bDisableGCOnServerDuringMatch = true;
        GameMode->bAllowSpectateAfterDeath = true;

        GameMode->MatchState = InProgress;
        GameMode->K2_OnSetMatchState(InProgress);

        auto Playlist = SoloPlaylist;

        if (Playlist)
        {
            Playlist->bNoDBNO = false;
            Playlist->bIsLargeTeamGame = true;

            Playlist->FriendlyFireType = EFriendlyFireType::On;

            GameState->CurrentPlaylistData = Playlist;
            GameState->OnRep_CurrentPlaylistData();
        }

        GameMode->FriendlyFireType = EFriendlyFireType::On;

        GameMode->StartPlay();

        GameState->bReplicatedHasBegunPlay = true;
        GameState->OnRep_ReplicatedHasBegunPlay();

        GameMode->StartMatch();
        GameMode->bAlwaysDBNO = true;

		// https://github.com/EpicGames/UnrealEngine/blob/46544fa5e0aa9e6740c19b44b0628b72e7bbd5ce/Engine/Source/Runtime/Engine/Private/ActorReplication.cpp#L300
        // By default the NetCullDistanceSquared is very low, I don't know why.
        GetWorld()->NetworkManager->NetCullDistanceSquared *= 3;

        /* 
        auto LootTierData = GameInstance->AthenaDataTables.LootTierData;
        auto LootTierData = SoftObjectToObject(Playlist->LootTierData);

        std::cout << "LootTierData: " << LootTierData << '\n';

        if (LootTierData)
            std::cout << "LootTierData Name: " << LootTierData->GetFullName() << '\n';

        if (LootTierData && LootTierData->Class)
            std::cout << "LootTierData Class: " << LootTierData->Class->GetFullName() << '\n';
			
	    */
    }
}
