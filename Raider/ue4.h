#pragma once

#include "SDK.hpp"

#include "patterns.h"
#include "util.h"

constexpr auto PI = 3.1415926535897932f;
constexpr auto INV_PI = 0.31830988618f;
constexpr auto HALF_PI = 1.57079632679f;

inline bool bTraveled = false;
inline bool bPlayButton = false;
inline bool bDroppedLS = false;

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

static FORCEINLINE void sinCos(float* ScalarSin, float* ScalarCos, float Value)
{
    float quotient = (INV_PI * 0.5f) * Value;
    if (Value >= 0.0f)
    {
        quotient = (float)((int)(quotient + 0.5f));
    }
    else
    {
        quotient = (float)((int)(quotient - 0.5f));
    }
    float y = Value - (2.0f * PI) * quotient;

    float sign;
    if (y > HALF_PI)
    {
        y = PI - y;
        sign = -1.0f;
    }
    else if (y < -HALF_PI)
    {
        y = -PI - y;
        sign = -1.0f;
    }
    else
    {
        sign = +1.0f;
    }

    float y2 = y * y;

    *ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;

    float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f;
    *ScalarCos = sign * p;
}

FORCEINLINE auto RotToQuat(FRotator& Rotator)
{
    const float DEG_TO_RAD = PI / (180.f);
    const float DIVIDE_BY_2 = DEG_TO_RAD / 2.f;
    float SP, SY, SR;
    float CP, CY, CR;

    sinCos(&SP, &CP, Rotator.Pitch * DIVIDE_BY_2);
    sinCos(&SY, &CY, Rotator.Yaw * DIVIDE_BY_2);
    sinCos(&SR, &CR, Rotator.Roll * DIVIDE_BY_2);

    FQuat RotationQuat;
    RotationQuat.X = CR * SP * SY - SR * CP * CY;
    RotationQuat.Y = -CR * SP * CY - SR * CP * SY;
    RotationQuat.Z = CR * CP * SY - SR * SP * CY;
    RotationQuat.W = CR * CP * CY + SR * SP * SY;

    return RotationQuat;
}

inline AActor* SpawnActorTrans(UClass* StaticClass, FTransform SpawnTransform, AActor* Owner = nullptr, ESpawnActorCollisionHandlingMethod Flags = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn)
{
    AActor* FirstActor = GetGameplayStatics()->STATIC_BeginDeferredActorSpawnFromClass(GetWorld(), StaticClass, SpawnTransform, Flags, Owner);

    if (FirstActor)
    {
        AActor* FinalActor = GetGameplayStatics()->STATIC_FinishSpawningActor(FirstActor, SpawnTransform);

        if (FinalActor)
        {
            return FinalActor;
        }
    }

    return nullptr;
}

inline auto GetItemInstances(AFortPlayerController* PC)
{
    return PC->WorldInventory->Inventory.ItemInstances;
}

template <typename RetActorType = AActor>
inline RetActorType* SpawnActor(FVector Location = { 0.0f, 0.0f, 0.0f }, AActor* Owner = nullptr)
{
    FTransform SpawnTransform;

    SpawnTransform.Translation = Location;
    SpawnTransform.Scale3D = FVector { 1, 1, 1 };
    SpawnTransform.Rotation = FQuat { 0, 0, 0 };

    return (RetActorType*)SpawnActorTrans(RetActorType::StaticClass(), SpawnTransform, Owner);
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
    ItemEntry.bIsDirty = true;

    PC->WorldInventory->Inventory.ReplicatedEntries.Add(ItemEntry);
    PC->WorldInventory->Inventory.ItemInstances.Add((UFortWorldItem*)TempItemInstance);
    PC->QuickBars->ServerAddItemInternal(ItemEntry.ItemGuid, Bars, Slot);

    UpdateInventory(PC);

    return ItemEntry;
}

inline AFortWeapon* EquipWeaponDefinition(APlayerPawn_Athena_C* Pawn, UFortWeaponItemDefinition* Definition, FGuid& Guid)
{
    // AFortWeapon* Weapon = Pawn->EquipWeaponDefinition(Definition, Guid);
    /* auto weaponClass = Definition->GetWeaponActorClass();

    if (weaponClass)
    {
        auto Weapon = (AFortWeapon*)SpawnActorTrans(weaponClass, {}, Pawn);
    */
    AFortWeapon* Weapon = Pawn->EquipWeaponDefinition(Definition, Guid);

    if (Weapon)
    {
        Weapon->OnRep_ReplicatedWeaponData();
        Weapon->ClientGivenTo(Pawn);
        Pawn->ClientInternalEquipWeapon(Weapon);
    }

    return Weapon;
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

static void SummonPickup(AFortPlayerPawn* Pawn, auto ItemDef, int Count, FVector Location)
{
    auto FortPickup = SpawnActor<AFortPickupAthena>(Location, Pawn);

    FortPickup->bReplicates = true; // should be autmoatic but eh

    FortPickup->PrimaryPickupItemEntry.Count = Count;
    FortPickup->PrimaryPickupItemEntry.ItemDefinition = ItemDef;

    FortPickup->OnRep_PrimaryPickupItemEntry();
    FortPickup->TossPickup(Location, Pawn, 6, true);
}

static void SummonPickupFromChest(auto ItemDef, int Count, FVector Location)
{
    auto FortPickup = SpawnActor<AFortPickupAthena>(Location);

    FortPickup->bReplicates = true; // should be autmoatic but eh
    FortPickup->bTossedFromContainer = true;

    FortPickup->PrimaryPickupItemEntry.Count = Count;
    FortPickup->PrimaryPickupItemEntry.ItemDefinition = ItemDef;

    FortPickup->OnRep_PrimaryPickupItemEntry();
    FortPickup->OnRep_TossedFromContainer();
}

static void HandlePickup(AFortPlayerPawn* Pawn, void* params, bool bEquip = false)
{
    auto Params = (AFortPlayerPawn_ServerHandlePickup_Params*)params;

    auto ItemInstances = ((AFortPlayerController*)Pawn->Controller)->WorldInventory->Inventory.ItemInstances;

    if (Params->Pickup)
    {
        if (!Params->Pickup->PrimaryPickupItemEntry.ItemDefinition->IsA(UFortWeaponItemDefinition::StaticClass()))
            bEquip = false;

        auto WorldItemDefinition = (UFortWorldItemDefinition*)Params->Pickup->PrimaryPickupItemEntry.ItemDefinition;
        auto Controller = (AFortPlayerControllerAthena*)Pawn->Controller;
        auto QuickBarSlots = Controller->QuickBars->PrimaryQuickBar.Slots;

        for (int i = 0; i < QuickBarSlots.Num(); i++)
        {
            if (QuickBarSlots[i].Items.Data == 0) // if u are getting error then just make vars public in tarray
            {
                if (i >= 6)
                {
                    auto QuickBars = Controller->QuickBars;

                    auto FocusedSlot = QuickBars->PrimaryQuickBar.CurrentFocusedSlot;

                    if (FocusedSlot == 0)
                        continue;

                    i = FocusedSlot;

                    FGuid& FocusedGuid = QuickBarSlots[FocusedSlot].Items[0];

                    for (int j = 0; i < ItemInstances.Num(); j++)
                    {
                        auto ItemInstance = ItemInstances[j];

                        if (!ItemInstance)
                            return;

                        auto Def = ItemInstance->ItemEntry.ItemDefinition;
                        auto Guid = ItemInstance->ItemEntry.ItemGuid;

                        if (IsMatchingGuid(FocusedGuid, Guid))
                            SummonPickup((APlayerPawn_Athena_C*)Pawn, Def, 1, Pawn->K2_GetActorLocation());
                    }

                    QuickBars->EmptySlot(EFortQuickBars::Primary, FocusedSlot);

                    // return;
                }

                auto entry = AddItemWithUpdate((AFortPlayerController*)Pawn->Controller, WorldItemDefinition, i, EFortQuickBars::Primary, Params->Pickup->PrimaryPickupItemEntry.Count);
                Params->Pickup->K2_DestroyActor(); // this does not work I have no idea why

                if (bEquip)
                    EquipWeaponDefinition((APlayerPawn_Athena_C*)Pawn, (UFortWeaponItemDefinition*)WorldItemDefinition, entry.ItemGuid);
            }
        }
    }
}

static void InitInventory(AFortPlayerController* PlayerController)
{
    auto QuickBars = SpawnActor<AFortQuickBars>({ -280, 400, 3000 }, PlayerController);
    PlayerController->QuickBars = QuickBars;
    PlayerController->OnRep_QuickBar();

    // not sure if this enable stuff is acutally needed

    QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 0);
    QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 1);
    QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 2);
    QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 3);
    QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 4);
    QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 5);
    QuickBars->ServerEnableSlot(EFortQuickBars::Primary, 1);
    QuickBars->ServerEnableSlot(EFortQuickBars::Primary, 2);

    QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 0, 0, true);
    QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 1, 0, true);
    QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 2, 0, true);

    QuickBars->ServerActivateSlotInternal(EFortQuickBars::Secondary, 0, 0, true);
    QuickBars->ServerActivateSlotInternal(EFortQuickBars::Secondary, 1, 0, true);
    QuickBars->ServerActivateSlotInternal(EFortQuickBars::Secondary, 2, 0, true);

    static auto Wall = UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Wall.BuildingItemData_Wall");
    static auto Stair = UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Stair_W.BuildingItemData_Stair_W");
    static auto Cone = UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_RoofS.BuildingItemData_RoofS");
    static auto Floor = UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Floor.BuildingItemData_Floor");
    static auto Wood = UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition WoodItemData.WoodItemData");
    static auto Stone = UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition StoneItemData.StoneItemData");
    static auto Metal = UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition MetalItemData.MetalItemData");
    static auto Medium = UObject::FindObject<UFortResourceItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium");
    static auto Light = UObject::FindObject<UFortResourceItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight");
    static auto Heavy = UObject::FindObject<UFortResourceItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsHeavy.AthenaAmmoDataBulletsHeavy");

    AddItemWithUpdate(PlayerController, Wall, 0, EFortQuickBars::Secondary, 1);
    AddItemWithUpdate(PlayerController, Floor, 1, EFortQuickBars::Secondary, 1);
    AddItemWithUpdate(PlayerController, Stair, 2, EFortQuickBars::Secondary, 1);
    AddItemWithUpdate(PlayerController, Cone, 3, EFortQuickBars::Secondary, 1);

    AddItemWithUpdate(PlayerController, Wood, 0, EFortQuickBars::Secondary, 999);
    AddItemWithUpdate(PlayerController, Stone, 0, EFortQuickBars::Secondary, 999);
    AddItemWithUpdate(PlayerController, Metal, 0, EFortQuickBars::Secondary, 999);
    AddItemWithUpdate(PlayerController, Medium, 0, EFortQuickBars::Secondary, 999);
    AddItemWithUpdate(PlayerController, Light, 0, EFortQuickBars::Secondary, 999);
    AddItemWithUpdate(PlayerController, Heavy, 0, EFortQuickBars::Secondary, 999);
}

static void GrantGameplayAbility(APlayerPawn_Athena_C* TargetPawn, UClass* GameplayAbilityClass)
{
    auto AbilitySystemComponent = TargetPawn->AbilitySystemComponent;
    static UGameplayEffect* DefaultGameplayEffect = UObject::FindObject<UGameplayEffect>("GE_Constructor_ContainmentUnit_Applied_C GE_Constructor_ContainmentUnit_Applied.Default__GE_Constructor_ContainmentUnit_Applied_C");

    if (!DefaultGameplayEffect)
        return;

    TArray<FGameplayAbilitySpecDef> GrantedAbilities = DefaultGameplayEffect->GrantedAbilities;

    // overwrite current gameplay ability with the one we want to activate
    GrantedAbilities[0].Ability = GameplayAbilityClass;
    GrantedAbilities[0].Level = 1.0f;

    // give this gameplay effect an infinite duration
    DefaultGameplayEffect->DurationPolicy = EGameplayEffectDurationType::Infinite;

    static auto GameplayEffectClass = UObject::FindObject<UClass>("BlueprintGeneratedClass GE_Constructor_ContainmentUnit_Applied.GE_Constructor_ContainmentUnit_Applied_C");

    if (!GameplayEffectClass)
        return;

    auto handle = FGameplayEffectContextHandle();

    AbilitySystemComponent->BP_ApplyGameplayEffectToTarget(GameplayEffectClass, AbilitySystemComponent, 1.f, handle);
}

static void HandleInventoryDrop(AFortPlayerPawn* Pawn, void* params)
{
    auto Params = (AFortPlayerController_ServerAttemptInventoryDrop_Params*)params;

    auto ItemInstances = GetItemInstances((AFortPlayerControllerAthena*)Pawn->Controller);
    auto Controller = (AFortPlayerControllerAthena*)Pawn->Controller;
    auto QuickBars = Controller->QuickBars;
    auto QuickBarSlots = QuickBars->PrimaryQuickBar.Slots;

    for (int i = 0; i < QuickBarSlots.Num(); i++)
    {
        if (QuickBarSlots[i].Items.Data)
        {
            if (IsMatchingGuid(QuickBarSlots[i].Items[0], Params->ItemGuid))
            {
                QuickBars->EmptySlot(EFortQuickBars::Primary, i);
                UpdateInventory(Controller);
            }
        }
    }

    for (int i = 0; i < ItemInstances.Num(); i++)
    {
        auto ItemInstance = ItemInstances[i];
        auto Guid = ItemInstance->GetItemGuid();

        if (IsMatchingGuid(Guid, Params->ItemGuid))
        {
            auto def = ItemInstance->ItemEntry.ItemDefinition;

            if (def)
                SummonPickup(Pawn, def, 1, Pawn->K2_GetActorLocation());
        }
    }
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