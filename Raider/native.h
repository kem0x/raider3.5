#pragma once

#include "patterns.h"
#include "util.h"

inline UFortEngine* GetEngine()
{
    static auto engine = UObject::FindObject<UFortEngine>("FortEngine_");
    return engine;
}

enum EObjectFlags
{
    // Do not add new flags unless they truly belong here. There are alternatives.
    // if you change any the bit of any of the RF_Load flags, then you will need legacy serialization
    RF_NoFlags = 0x00000000,
    ///< No flags, used to avoid a cast

    // This first group of flags mostly has to do with what kind of object it is. Other than transient, these are the persistent object flags.
    // The garbage collector also tends to look at these.
    RF_Public = 0x00000001,
    ///< Object is visible outside its package.
    RF_Standalone = 0x00000002,
    ///< Keep object around for editing even if unreferenced.
    RF_MarkAsNative = 0x00000004,
    ///< Object (UField) will be marked as native on construction (DO NOT USE THIS FLAG in HasAnyFlags() etc)
    RF_Transactional = 0x00000008,
    ///< Object is transactional.
    RF_ClassDefaultObject = 0x00000010,
    ///< This object is its class's default object
    RF_ArchetypeObject = 0x00000020,
    ///< This object is a template for another object - treat like a class default object
    RF_Transient = 0x00000040,
    ///< Don't save object.

    // This group of flags is primarily concerned with garbage collection.
    RF_MarkAsRootSet = 0x00000080,
    ///< Object will be marked as root set on construction and not be garbage collected, even if unreferenced (DO NOT USE THIS FLAG in HasAnyFlags() etc)
    RF_TagGarbageTemp = 0x00000100,
    ///< This is a temp user flag for various utilities that need to use the garbage collector. The garbage collector itself does not interpret it.

    // The group of flags tracks the stages of the lifetime of a uobject
    RF_NeedInitialization = 0x00000200,
    ///< This object has not completed its initialization process. Cleared when ~FObjectInitializer completes
    RF_NeedLoad = 0x00000400,
    ///< During load, indicates object needs loading.
    RF_KeepForCooker = 0x00000800,
    ///< Keep this object during garbage collection because it's still being used by the cooker
    RF_NeedPostLoad = 0x00001000,
    ///< Object needs to be postloaded.
    RF_NeedPostLoadSubobjects = 0x00002000,
    ///< During load, indicates that the object still needs to instance subobjects and fixup serialized component references
    RF_NewerVersionExists = 0x00004000,
    ///< Object has been consigned to oblivion due to its owner package being reloaded, and a newer version currently exists
    RF_BeginDestroyed = 0x00008000,
    ///< BeginDestroy has been called on the object.
    RF_FinishDestroyed = 0x00010000,
    ///< FinishDestroy has been called on the object.

    // Misc. Flags
    RF_BeingRegenerated = 0x00020000,
    ///< Flagged on UObjects that are used to create UClasses (e.g. Blueprints) while they are regenerating their UClass on load (See FLinkerLoad::CreateExport())
    RF_DefaultSubObject = 0x00040000,
    ///< Flagged on subobjects that are defaults
    RF_WasLoaded = 0x00080000,
    ///< Flagged on UObjects that were loaded
    RF_TextExportTransient = 0x00100000,
    ///< Do not export object to text form (e.g. copy/paste). Generally used for sub-objects that can be regenerated from data in their parent object.
    RF_LoadCompleted = 0x00200000,
    ///< Object has been completely serialized by linkerload at least once. DO NOT USE THIS FLAG, It should be replaced with RF_WasLoaded.
    RF_InheritableComponentTemplate = 0x00400000,
    ///< Archetype of the object can be in its super class
    RF_DuplicateTransient = 0x00800000,
    ///< Object should not be included in any type of duplication (copy/paste, binary duplication, etc.)
    RF_StrongRefOnFrame = 0x01000000,
    ///< References to this object from persistent function frame are handled as strong ones.
    RF_NonPIEDuplicateTransient = 0x02000000,
    ///< Object should not be included for duplication unless it's being duplicated for a PIE session
    RF_Dynamic = 0x04000000,
    // Field Only. Dynamic field - doesn't get constructed during static initialization, can be constructed multiple times
    RF_WillBeLoaded = 0x08000000,
    // This object was constructed during load and will be loaded shortly
};

namespace Native
{
    namespace Actor
    {
        inline void (*CallPreReplication)(AActor* Actor, UObject* NetDriver);
        inline void (*ForceNetUpdate)(AActor* Actor);
        inline bool (*IsNetRelevantFor)(AActor* _this, const AActor* RealViewer, const AActor* ViewTarget, const FVector& SrcLocation);
        inline __int64 (*GetNetMode)(__int64* a1);
        inline float(__fastcall* GetNetPriority)(AActor* a1, const FVector* a2, const FVector* a3, AActor* a4, AActor* a5, UActorChannel* a6, float Time);
    }

    namespace LocalPlayer
    {
        bool (*SpawnPlayActor)(ULocalPlayer* Player, const FString& URL, FString& OutError, UWorld* World);
    }

    namespace GC
    {
        __int64 (*CollectGarbage)(__int64 a1);
    }

    namespace PlayerController
    {
        inline bool (*SendClientAdjustment)(APlayerController* Controller);
        inline void (*GetPlayerViewPoint)(APlayerController* Controller, FVector* Location, FRotator* Rotation);
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
        inline FString (*LowLevelGetRemoteAddress)(UNetConnection* Connection, bool bAppendPort);
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

    namespace GameViewportClient
    {
        inline void (*PostRender)(UGameViewportClient* _this, UCanvas* Canvas);
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

        Address = Utils::FindPattern(Patterns::PostRender);
        CheckNullFatal(Address, "Failed to find PostRender");
        AddressToFunction(Address, GameViewportClient::PostRender);

        Address = Utils::FindPattern(Patterns::CollectGarbage, true, 1);
        CheckNullFatal(Address, "Failed to find CollectGarbage");
        AddressToFunction(Address, GC::CollectGarbage);

        Address = Utils::FindPattern(Patterns::ActorChannelClose);
        CheckNullFatal(Address, "Failed to find UActorChannel::Close");
        AddressToFunction(Address, ActorChannel::Close);

        Address = Utils::FindPattern(Patterns::GetPlayerViewPoint);
        CheckNullFatal(Address, "Failed to find GetPlayerViewPoint");
        AddressToFunction(Address, PlayerController::GetPlayerViewPoint);

        Address = Utils::FindPattern(Patterns::IsNetRelevantFor);
        CheckNullFatal(Address, "Failed to find IsNetRelevantFor");
        AddressToFunction(Address, Actor::IsNetRelevantFor);

        Address = Utils::FindPattern(Patterns::StartBecomingDormant);
        CheckNullFatal(Address, "Failed to find StartBecomingDormant");
        AddressToFunction(Address, ActorChannel::StartBecomingDormant);

        Address = Utils::FindPattern(Patterns::GetNetPriority);
        CheckNullFatal(Address, "Failed to find GetNetPriority");
        AddressToFunction(Address, Actor::GetNetPriority);

        ProcessEvent = reinterpret_cast<decltype(ProcessEvent)>(GetEngine()->Vtable[0x40]);
    }
}
