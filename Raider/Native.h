#pragma once

#include "Patterns.h"
#include "Util.h"

inline UFortEngine* GetEngine()
{
    static auto engine = UObject::FindObject<UFortEngine>("FortEngine_");
    return engine;
}

namespace Native
{
    namespace Actor
    {
        inline __int64 (*GetNetMode)(__int64* a1);
    }

    namespace PlayerController
    {
        void(__fastcall* GetPlayerViewPoint)(APlayerController* pc, FVector* a2, FRotator* a3);
    }

    namespace LocalPlayer
    {
        bool (*SpawnPlayActor)(ULocalPlayer* Player, const FString& URL, FString& OutError, UWorld* World);
    }

    namespace GC
    {
        __int64 (*CollectGarbage)(__int64 a1);
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

        inline bool (*InitListen)(UObject* Driver, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error);
    }

    namespace ReplicationDriver
    {
        inline void (*ServerReplicateActors)(UReplicationDriver* ReplicationDriver);
    }

    namespace NetConnection
    {
        inline void (*ReceiveFString)(void* Bunch, FString& Str);
        inline void (*ReceiveUniqueIdRepl)(void* Bunch, FUniqueNetIdRepl& Str);
        inline FString (*LowLevelGetRemoteAddress)(UNetConnection* Connection, bool bAppendPort);
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
        inline APlayerController* (*SpawnPlayActor)(UWorld* World, UPlayer* NewPlayer, ENetRole RemoteRole, FURL& URL, void* UniqueId, FString& Error, uint8 NetPlayerIndex);
        inline uint8 (*NotifyAcceptingConnection)(UWorld* World);
    }

    namespace Engine
    {
        inline void* (*SeamlessTravelHandlerForWorld)(UEngine* Engine, UWorld* World);
    }

    namespace GameViewportClient
    {
        inline void (*PostRender)(UGameViewportClient* _this, UCanvas* Canvas);
    }

    void InitializeAll()
    {
        Imagebase = (uintptr_t)GetModuleHandleA(nullptr);

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

        Address = Utils::FindPattern(Patterns::TickFlush);
        CheckNullFatal(Address, "Failed to find TickFlush");
        AddressToFunction(Address, NetDriver::TickFlush);

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

        Address = Utils::FindPattern(Patterns::PostRender);
        CheckNullFatal(Address, "Failed to find PostRender");
        AddressToFunction(Address, GameViewportClient::PostRender);

        Address = Utils::FindPattern(Patterns::CollectGarbage, true, 1);
        CheckNullFatal(Address, "Failed to find CollectGarbage");
        AddressToFunction(Address, GC::CollectGarbage);

        Address = Utils::FindPattern(Patterns::InitListen);
        CheckNullFatal(Address, "Failed to find NetDriver::InitListen");
        AddressToFunction(Address, NetDriver::InitListen);

        Address = Utils::FindPattern(Patterns::GetPlayerViewPoint);
        CheckNullFatal(Address, "Failed to find PlayerController::GetPlayerViewPoint");
        AddressToFunction(Address, PlayerController::GetPlayerViewPoint);

        ProcessEvent = reinterpret_cast<decltype(ProcessEvent)>(GetEngine()->Vtable[0x40]);
    }
}
