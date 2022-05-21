#pragma once

#include "patterns.h"
#include "util.h"

inline UFortEngine* GetEngine()
{
    static auto engine = UObject::FindObject<UFortEngine>("FortEngine_");
    return engine;
}

namespace Native
{
    namespace Actor
    {
        inline void (*CallPreReplication)(AActor* Actor, UObject* NetDriver);
        inline void (*ForceNetUpdate)(AActor* Actor);
        inline bool (*IsNetRelevantFor)(AActor* _this, const AActor* RealViewer, const AActor* ViewTarget, const FVector& SrcLocation);
        inline __int64 (*GetNetMode)(__int64* a1);
    }

    namespace LocalPlayer
    {
        bool (*SpawnPlayActor)(ULocalPlayer* Player, const FString& URL, FString& OutError, UWorld* World);
    }

    namespace PlayerController
    {
        inline bool (*SendClientAdjustment)(APlayerController* Controller);
    }

    namespace AbilitySystemComponent
    {
        inline FGameplayAbilitySpecHandle* (*GiveAbility)(UAbilitySystemComponent* _this, FGameplayAbilitySpecHandle* outHandle, FGameplayAbilitySpec inSpec);
        inline bool (*InternalTryActivateAbility)(UAbilitySystemComponent* _this, FGameplayAbilitySpecHandle Handle, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* /* FOnGameplayAbilityEnded::FDelegate* */ OnGameplayAbilityEndedDelegate, FGameplayEventData* TriggerEventData);
        inline void (*MarkAbilitySpecDirty)(UAbilitySystemComponent* _this, FGameplayAbilitySpec& Spec);
    }

    namespace NetDriver
    {
        inline void (*TickFlush)(UNetDriver* NetDriver, float DeltaSeconds);
        inline bool (*IsLevelInitializedForActor)(UNetDriver* NetDriver, AActor* Actor, UNetConnection* Connection);
    }

    namespace NetConnection
    {
        inline UChannel* (*CreateChannel)(UNetConnection* NetConnection, int32 ChType, bool bOpenedLocally, int32_t ChIndex);
        inline void (*HandleClientPlayer)(UNetConnection* This, APlayerController* PC, UNetConnection* NetConnection);

        inline void (*ReceiveFString)(void* Bunch, FString& Str);
        inline void (*ReceiveUniqueIdRepl)(void* Bunch, FUniqueNetIdRepl& Str);
    }

    namespace ActorChannel
    {
        inline int64 (*ReplicateActor)(UActorChannel* ActorChannel);
        inline void (*SetChannelActor)(UActorChannel* ActorChannel, UObject* InActor);
        inline int64 (*Close)(UActorChannel* ActorChannel);
        inline void (*StartBecomingDormant)(UActorChannel* ActorChannel);
    }

    namespace OnlineSession
    {
        inline char (*KickPlayer)(AGameSession* a1, APlayerController*, FText a3);
    }

    namespace OnlineBeacon
    {
        inline void (*PauseBeaconRequests)(AOnlineBeacon* Beacon, bool bPause);
        inline uint8 (*NotifyAcceptingConnection)(AOnlineBeacon* Beacon);
    }

    namespace OnlineBeaconHost
    {
        inline bool (*InitHost)(AOnlineBeaconHost* Beacon);
        inline void (*NotifyControlMessage)(AOnlineBeaconHost* World, UNetConnection* Connection, uint8 MessageType, void* Bunch);
    }

    namespace World
    {
        inline void (*RemoveNetworkActor)(UWorld* World, AActor* Actor);
        inline void (*WelcomePlayer)(UWorld* World, UNetConnection* Connection);
        inline void (*NotifyControlMessage)(UWorld* World, UNetConnection* Connection, uint8 MessageType, void* Bunch);
        inline APlayerController* (*SpawnPlayActor)(UWorld* World, UPlayer* NewPlayer, ENetRole RemoteRole, FURL& URL, void* UniqueId, SDK::FString& Error, uint8 NetPlayerIndex);
        inline uint8 (*NotifyAcceptingConnection)(UWorld* World);
        inline void* (*AddNetworkActor)(UWorld*, AActor*);
    }

    namespace Engine
    {
        inline void* (*SeamlessTravelHandlerForWorld)(UEngine* Engine, UWorld* World);
        inline __int64 (*TSetToTArray)(__int64 a1, __int64 OutArray);
    }

    void InitializeAll()
    {
        Offsets::Imagebase = (uintptr_t)GetModuleHandleA(0);

        uintptr_t Address = Utils::FindPattern(Patterns::GObjects, true, 3);
        CheckNullFatal(Address, "Failed to find GObjects");
        AddressToFunction(Address, UObject::GObjects);

        Address = Utils::FindPattern(Patterns::Free);
        CheckNullFatal(Address, "Failed to find Free");
        AddressToFunction(Address, FMemory_Free);

        Address = Utils::FindPattern(Patterns::Realloc);
        CheckNullFatal(Address, "Failed to find Realloc");
        AddressToFunction(Address, FMemory_Realloc);

        Address = Utils::FindPattern(Patterns::Malloc);
        CheckNullFatal(Address, "Failed to find Malloc");
        AddressToFunction(Address, FMemory_Malloc);

        Address = Utils::FindPattern(Patterns::FNameToString);
        CheckNullFatal(Address, "Failed to find FNameToString");
        AddressToFunction(Address, FNameToString);

        Address = Utils::FindPattern(Patterns::CallPreReplication, true, 1);
        CheckNullFatal(Address, "Failed to find CallPreReplication");
        AddressToFunction(Address, Actor::CallPreReplication);

        Address = Utils::FindPattern(Patterns::SendClientAdjustment);
        CheckNullFatal(Address, "Failed to find SendClientAdjustment");
        AddressToFunction(Address, PlayerController::SendClientAdjustment);

        Address = Utils::FindPattern(Patterns::TickFlush);
        CheckNullFatal(Address, "Failed to find TickFlush");
        AddressToFunction(Address, NetDriver::TickFlush);

        Address = Utils::FindPattern(Patterns::CreateChannel);
        CheckNullFatal(Address, "Failed to find CreateChannel");
        AddressToFunction(Address, NetConnection::CreateChannel);

        Address = Utils::FindPattern(Patterns::ReplicateActor);
        CheckNullFatal(Address, "Failed to find ReplicateActor");
        AddressToFunction(Address, ActorChannel::ReplicateActor);

        Address = Utils::FindPattern(Patterns::SetChannelActor);
        CheckNullFatal(Address, "Failed to find SetChannelActor");
        AddressToFunction(Address, ActorChannel::SetChannelActor);

        Address = Utils::FindPattern(Patterns::PauseBeaconRequests);
        CheckNullFatal(Address, "Failed to find PauseBeaconRequests");
        AddressToFunction(Address, OnlineBeacon::PauseBeaconRequests);

        Address = Utils::FindPattern(Patterns::InitHost);
        CheckNullFatal(Address, "Failed to find InitHost");
        AddressToFunction(Address, OnlineBeaconHost::InitHost);

        Address = Utils::FindPattern(Patterns::Beacon_NotifyControlMessage);
        CheckNullFatal(Address, "Failed to find NotifyControlMessage");
        AddressToFunction(Address, OnlineBeaconHost::NotifyControlMessage);

        Address = Utils::FindPattern(Patterns::WelcomePlayer);
        CheckNullFatal(Address, "Failed to find WelcomePlayer");
        AddressToFunction(Address, World::WelcomePlayer);

        Address = Utils::FindPattern(Patterns::World_NotifyControlMessage);
        CheckNullFatal(Address, "Failed to find NotifyControlMessage");
        AddressToFunction(Address, World::NotifyControlMessage);

        Address = Utils::FindPattern(Patterns::SpawnPlayActor);
        CheckNullFatal(Address, "Failed to find SpawnPlayActor");
        AddressToFunction(Address, World::SpawnPlayActor);

        Address = Utils::FindPattern(Patterns::ReceiveUniqueIdRepl);
        CheckNullFatal(Address, "Failed to find ReceiveUniqueIdRepl");
        AddressToFunction(Address, NetConnection::ReceiveUniqueIdRepl);

        Address = Utils::FindPattern(Patterns::ReceiveFString);
        CheckNullFatal(Address, "Failed to find ReceiveFString");
        AddressToFunction(Address, NetConnection::ReceiveFString);

        Address = Utils::FindPattern(Patterns::KickPlayer);
        CheckNullFatal(Address, "Failed to find KickPlayer");
        AddressToFunction(Address, OnlineSession::KickPlayer);

        Address = Utils::FindPattern(Patterns::GetNetMode);
        CheckNullFatal(Address, "Failed to find InternalGetNetMode");
        AddressToFunction(Address, Actor::GetNetMode);

        Address = Utils::FindPattern(Patterns::AddNetworkActor);
        CheckNullFatal(Address, "Failed to find AddNetworkActor");
        AddressToFunction(Address, World::AddNetworkActor);

        Address = Utils::FindPattern(Patterns::IsNetRelevantFor);
        CheckNullFatal(Address, "Failed to find IsNetRelevantFor");
        AddressToFunction(Address, Actor::IsNetRelevantFor);

        Address = Utils::FindPattern(Patterns::GiveAbility);
        CheckNullFatal(Address, "Failed to find GiveAbility");
        AddressToFunction(Address, AbilitySystemComponent::GiveAbility);

        Address = Utils::FindPattern(Patterns::InternalTryActivateAbility);
        CheckNullFatal(Address, "Failed to find InternalTryActivateAbility");
        AddressToFunction(Address, AbilitySystemComponent::InternalTryActivateAbility);

        Address = Utils::FindPattern(Patterns::MarkAbilitySpecDirty);
        CheckNullFatal(Address, "Failed to find MarkAbilitySpecDirty");
        AddressToFunction(Address, AbilitySystemComponent::MarkAbilitySpecDirty);

        Address = Utils::FindPattern(Patterns::LocalPlayerSpawnPlayActor);
        CheckNullFatal(Address, "Failed to find LocalPlayerSpawnPlayActor");
        AddressToFunction(Address, LocalPlayer::SpawnPlayActor);

        Address = Utils::FindPattern(Patterns::TSetToTArray, true, 1);
        CheckNullFatal(Address, "Failed to find TSetToTArray");
        AddressToFunction(Address, Engine::TSetToTArray);

        PEOriginal = reinterpret_cast<decltype(PEOriginal)>(GetEngine()->Vtable[0x40]);

        return;
    }

}
