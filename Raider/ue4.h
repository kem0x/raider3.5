#pragma once

#include "SDK.hpp"

#include "patterns.h"
#include "util.h"

inline bool bTraveled = false;
inline bool bPlayButton = false;

inline UFortEngine* GetEngine()
{
    static auto engine = UObject::FindObject<UFortEngine>("FortEngine_");
    return engine;
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
        std::cout << "WARNING! PlayerController out of range! (" << Index << " out of " << GetWorld()->OwningGameInstance->LocalPlayers.Num() << ")" << '\n';

        return (AAthena_PlayerController_C*)GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController;
    }

    return (AAthena_PlayerController_C*)GetWorld()->OwningGameInstance->LocalPlayers[Index]->PlayerController;
}

FORCEINLINE int32& GetReplicationFrame(UNetDriver* Driver)
{
    return *(int32*)(int64(Driver) + 816); // Offsets::Net::ReplicationFrame);
}

FORCEINLINE UGameplayStatics* GetGameplayStatics()
{
    return reinterpret_cast<UGameplayStatics*>(UGameplayStatics::StaticClass());
}

FORCEINLINE auto GetMath()
{
    return reinterpret_cast<UKismetMathLibrary*>(UKismetMathLibrary::StaticClass());
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

inline void CreateConsole()
{
    GetEngine()->GameViewport->ViewportConsole = (UConsole*)GetGameplayStatics()->STATIC_SpawnObject(UConsole::StaticClass(), GetEngine()->GameViewport);
}

inline auto CreateCheatManager(APlayerController* Controller, bool bFortCheatManager = false)
{
    if (!Controller->CheatManager)
    {
        if (bFortCheatManager)
            Controller->CheatManager = (UCheatManager*)GetGameplayStatics()->STATIC_SpawnObject(UCheatManager::StaticClass(), Controller);
        else
            Controller->CheatManager = (UCheatManager*)GetGameplayStatics()->STATIC_SpawnObject(UFortCheatManager::StaticClass(), Controller);
    }

    return Controller->CheatManager;
}

inline bool IsMatchingGuid(FGuid A, FGuid B)
{
    return A.A == B.A && A.B == B.B && A.C == B.C && A.D == B.D;
}

inline void UpdateInventory(AFortPlayerController* PlayerController)
{
    PlayerController->WorldInventory->HandleInventoryLocalUpdate();
    PlayerController->HandleWorldInventoryLocalUpdate();
    PlayerController->OnRep_QuickBar();
    PlayerController->QuickBars->OnRep_PrimaryQuickBar();
    PlayerController->QuickBars->OnRep_SecondaryQuickBar();
}

inline auto AddItemWithUpdate(AFortPlayerController* PC, UFortWorldItemDefinition* Def, int Slot, EFortQuickBars Bars = EFortQuickBars::Primary, int Count = 1)
{
    auto TempItemInstance = Def->CreateTemporaryItemInstanceBP(Count, 1);
    TempItemInstance->SetOwningControllerForTemporaryItem(PC);

    ((UFortWorldItem*)TempItemInstance)->ItemEntry.Count = Count;

    auto ItemEntry = ((UFortWorldItem*)TempItemInstance)->ItemEntry;
    PC->WorldInventory->Inventory.ReplicatedEntries.Add(ItemEntry);
    PC->QuickBars->ServerAddItemInternal(ItemEntry.ItemGuid, Bars, Slot);
    UpdateInventory(PC);
    return ItemEntry;
}

inline void EquipWeaponDefinition(APlayerPawn_Athena_C* Pawn, UFortWeaponItemDefinition* Definition, FGuid& Guid)
{
    AFortWeapon* weap = Pawn->EquipWeaponDefinition(Definition, Guid);
    weap->AmmoCount = 1;
    weap->OnRep_ReplicatedWeaponData();
    weap->ClientGivenTo(Pawn);
    Pawn->ClientInternalEquipWeapon(weap);
}

inline void EquipInventoryItem(AFortPlayerController* PC, FGuid& Guid)
{
    auto ItemInstances = PC->WorldInventory->Inventory.ItemInstances;

    for (int i = 0; i < ItemInstances.Num(); i++)
    {
        auto CurrentItemInstance = ItemInstances[i];

        if (IsMatchingGuid(CurrentItemInstance->GetItemGuid(), Guid))
        {
            EquipWeaponDefinition((APlayerPawn_Athena_C*)PC->Pawn, (UFortWeaponItemDefinition*)CurrentItemInstance->GetItemDefinitionBP(), Guid);
        }
    }
}

inline void DumpObjects()
{
    std::ofstream objects("ObjectsDump.txt");

    if (objects)
    {
        for (int i = 0; i < UObject::GObjects->Num(); i++)
        {
            auto Object = UObject::GObjects->GetByIndex(i);

            if (!Object)
                continue;

            objects << '[' + std::to_string(Object->InternalIndex) + "] " + Object->GetFullName() << '\n';
        }
    }

    objects.close();

    std::cout << "Finished dumping objects!\n";
}

static auto BP_ApplyGameplayEffectToSelf(UAbilitySystemComponent* AbilitySystemComponent, UClass* GameplayEffectClass)
{
    static auto handle = FGameplayEffectContextHandle();
    UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params params;
    params.GameplayEffectClass = GameplayEffectClass;
    params.Level = 1.0f;
    params.EffectContext = handle;
    static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf");
    std::cout << "fn: " << fn->GetFullName() << '\n';

    // if (fn)
        //AbilitySystemComponent->ProcessEvent(fn, &params);

    std::cout << "done\n";

    // AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(GameplayEffectClass, 1.0f, handle);
}

static void GrantGameplayAbility(APlayerPawn_Athena_C* TargetPawn, UClass* GameplayAbilityClass)
{
    auto AbilitySystemComponent = TargetPawn->AbilitySystemComponent;
    std::cout << "abilitycomponent: " << AbilitySystemComponent->GetFullName() << '\n';
    static UGameplayEffect* DefaultGameplayEffect = UObject::FindObject<UGameplayEffect>("GE_Athena_PurpleStuff_C GE_Athena_PurpleStuff.Default__GE_Athena_PurpleStuff_C");

    std::cout << "dge: " << DefaultGameplayEffect->GetFullName() << '\n';

    TArray<FGameplayAbilitySpecDef> GrantedAbilities = DefaultGameplayEffect->GrantedAbilities;

    std::cout << "abiltuy 1: " << GrantedAbilities[0].Ability->GetFullName() << '\n';

    // overwrite current gameplay ability with the one we want to activate
    GrantedAbilities[0].Ability = GameplayAbilityClass;

    // give this gameplay effect an infinite duration
    DefaultGameplayEffect->DurationPolicy = EGameplayEffectDurationType::Infinite;

    static auto GameplayEffectClass = UObject::FindObject<UClass>("BlueprintGeneratedClass GE_Athena_PurpleStuff.GE_Athena_PurpleStuff_C");

    std::cout << "gec: " << GameplayEffectClass->GetFullName() << '\n';

    BP_ApplyGameplayEffectToSelf(AbilitySystemComponent, GameplayEffectClass);
}

namespace Functions
{
    namespace Actor
    {
        inline void (*CallPreReplication)(AActor* Actor, UObject* NetDriver);
        inline void (*ForceNetUpdate)(AActor* Actor);
        inline bool (*IsNetRelevantFor)(AActor* _this, const AActor* RealViewer, const AActor* ViewTarget, const FVector& SrcLocation);
        inline __int64 (*GetNetMode)(__int64* a1);
    }

    namespace PlayerController
    {
        inline bool (*SendClientAdjustment)(APlayerController* Controller);
    }

	namespace PlayerState
    {
        inline void (*OnRep_CharacterParts)(AFortPlayerState* State);
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
        inline char (*KickPlayer)(__int64 a1, __int64 a2, __int64 a3);
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
        inline bool (*DestroySwappedPC)(UWorld* World, UNetConnection* Connection);
        inline void* (*AddNetworkActor)(UWorld*, AActor*);
    }

    namespace Engine
    {
        inline void* (*SeamlessTravelHandlerForWorld)(UEngine* Engine, UWorld* World);
    }

    void InitializeAll()
    {
        Offsets::Imagebase = (uintptr_t)GetModuleHandleA(0);

        uintptr_t Address = Utils::FindPattern(Patterns::GObjects, true, 3);
        CheckNullFatal(Address, "Failed to find GObjects");
        AddressToFunction(Address, UObject::GObjects);
		
        Address = Utils::FindPattern(Patterns::Free);
        CheckNullFatal(Address, "Failed to find Free");
        AddressToFunction(Address, FreeInternal);

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

        Address = Utils::FindPattern(Patterns::OnRep_CharacterParts);
        CheckNullFatal(Address, "Failed to find OnRep_CharacterParts");
        AddressToFunction(Address, PlayerState::OnRep_CharacterParts);

        Address = Utils::FindPattern(Patterns::GetNetMode);
		CheckNullFatal(Address, "Failed to find InternalGetNetMode");
        AddressToFunction(Address, Actor::GetNetMode);

		Address = Utils::FindPattern(Patterns::AddNetworkActor);
        CheckNullFatal(Address, "Failed to find AddNetworkActor");
        AddressToFunction(Address, World::AddNetworkActor);

        Address = Utils::FindPattern(Patterns::IsNetRelevantFor);
        CheckNullFatal(Address, "Failed to find IsNetRelevantFor");
        AddressToFunction(Address, Actor::IsNetRelevantFor);

        PEOriginal = reinterpret_cast<decltype(PEOriginal)>(GetEngine()->Vtable[0x40]);
		
        return;
    }

}