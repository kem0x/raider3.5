#pragma once
#include "SDK.hpp"
#include "classes.h"
#include "patterns.h"
#include "util.h"

inline bool bTraveled = false;

inline UFortEngine* GetEngine()
{
    return *(UFortEngine**)(Offsets::Imagebase + Offsets::GEngineOffset);
}

inline UWorld* GetWorld()
{
    return GetEngine()->GameViewport->World;
    // return *(UWorld**)(Offsets::Imagebase + Offsets::GWorldOffset);
}

inline AAthena_PlayerController_C* GetPlayerController(int32 Index = 0)
{
    if (Index > GetWorld()->OwningGameInstance->LocalPlayers.Num())
    {
        std::cout << "WARNING! PlayerController out of range! (" << Index << " out of " << GetWorld()->OwningGameInstance->LocalPlayers.Num() << ")" << std::endl;

        return (AAthena_PlayerController_C*)GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController;
    }

    return (AAthena_PlayerController_C*)GetWorld()->OwningGameInstance->LocalPlayers[Index]->PlayerController;
}

FORCEINLINE int32& GetReplicationFrame(UNetDriver* Driver)
{
    return *(int32*)(int64(Driver) + Offsets::Net::ReplicationFrame);
}

FORCEINLINE UGameplayStatics* GetGameplayStatics()
{
    return reinterpret_cast<UGameplayStatics*>(UGameplayStatics::StaticClass());
}

template <typename RetActorType = AActor>
inline RetActorType* SpawnActor(FVector Location = { 0.0f, 0.0f, 0.0f }, AActor* Owner = nullptr)
{
    FTransform SpawnTransform;

    SpawnTransform.Translation = Location;
    SpawnTransform.Scale3D = FVector { 1, 1, 1 };
    SpawnTransform.Rotation = FQuat { 0, 0, 0 };

    AActor* FirstActor = GetGameplayStatics()->STATIC_BeginDeferredActorSpawnFromClass(GetWorld(), RetActorType::StaticClass(), SpawnTransform, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, Owner);

    if (FirstActor)
    {
        AActor* FinalActor = GetGameplayStatics()->STATIC_FinishSpawningActor(FirstActor, SpawnTransform);

        if (FinalActor)
        {
            return reinterpret_cast<RetActorType*>(FinalActor);
        }
    }

    return nullptr;
}

namespace Functions
{
    namespace Actor
    {
        inline void (*CallPreReplication)(AActor* Actor, UObject* NetDriver);
        inline void (*ForceNetUpdate)(AActor* Actor);
        inline bool (*IsNetRelevantFor)(AActor* _this, const AActor* RealViewer, const AActor* ViewTarget, const FVector& SrcLocation);
    }

    namespace PlayerController
    {
        inline bool (*SendClientAdjustment)(APlayerController* Controller);
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

    namespace OnlineBeacon
    {
        inline void (*PauseBeaconRequest)(AOnlineBeacon* Beacon, bool bPause);
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
        inline bool (*DestroySwappedPC)(UWorld* World, UNetConnection* Connection);
    }

    namespace Engine
    {
        inline void* (*SeamlessTravelHandlerForWorld)(UEngine* Engine, UWorld* World);
    }

    void InitializeAll()
    {

        Offsets::Imagebase = (uintptr_t)GetModuleHandleA(0);
        PEOriginal = reinterpret_cast<decltype(PEOriginal)>(GetEngine()->Vtable[0x40]);

        uintptr_t Address = Utils::FindPattern(Patterns::GObjects, true, 3);
        CheckNullFatal(Address, "Failed to find GObjects");
        AddressToFunction(Address, UObject::GObjects);
		
        Address = Utils::FindPattern(Patterns::Free);
        CheckNullFatal(Address, "Failed to find Free");
        AddressToFunction(Address, FreeInternal );

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

        Address = Utils::FindPattern(Patterns::PauseBeaconRequest);
        CheckNullFatal(Address, "Failed to find PauseBeaconRequest");
        AddressToFunction(Address, OnlineBeacon::PauseBeaconRequest);

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
        return;
    }

}