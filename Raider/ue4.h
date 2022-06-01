#pragma once

#include <unordered_set>
#include <random>

#include "native.h"

constexpr auto PI = 3.1415926535897932f;
constexpr auto INV_PI = 0.31830988618f;
constexpr auto HALF_PI = 1.57079632679f;

inline bool bTraveled = false;
inline bool bPlayButton = false;
inline bool bListening = false;
static std::unordered_set<ABuildingSMActor*> Buildings;

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

struct FNetworkObjectInfo
{
    AActor* Actor;

    TWeakObjectPtr<AActor> WeakActor;

    double NextUpdateTime;

    double LastNetReplicateTime;

    float OptimalNetUpdateDelta;

    float LastNetUpdateTime;

    uint32 bPendingNetUpdate : 1;

    uint32 bForceRelevantNextUpdate : 1;

    TSet<TWeakObjectPtr<UNetConnection>> DormantConnections;

    TSet<TWeakObjectPtr<UNetConnection>> RecentlyDormantConnections;
};

class FNetworkObjectList
{
public:
    using FNetworkObjectSet = TSet<TSharedPtr<FNetworkObjectInfo>>;

    FNetworkObjectSet AllNetworkObjects;
    FNetworkObjectSet ActiveNetworkObjects;
    FNetworkObjectSet ObjectsDormantOnAllConnections;

    TMap<TWeakObjectPtr<UObject>, int32> NumDormantObjectsPerConnection;
};

FORCEINLINE int32& GetReplicationFrame(UNetDriver* Driver)
{
    return *(int32*)(int64(Driver) + 816); // Offsets::Net::ReplicationFrame);
}

FORCEINLINE auto& GetNetworkObjectList(UObject* NetDriver)
{
    return *(*(TSharedPtr<FNetworkObjectList>*)(int64(NetDriver) + 0x508));
}

FORCEINLINE UGameplayStatics* GetGameplayStatics()
{
    return reinterpret_cast<UGameplayStatics*>(UGameplayStatics::StaticClass());
}

FORCEINLINE UKismetSystemLibrary* GetKismetSystem()
{
    return reinterpret_cast<UKismetSystemLibrary*>(UKismetSystemLibrary::StaticClass());
}

FORCEINLINE UFortKismetLibrary* GetFortKismet()
{
    return ((UFortKismetLibrary*)UFortKismetLibrary::StaticClass());
}

FORCEINLINE UKismetStringLibrary* GetKismetString()
{
    return (UKismetStringLibrary*)UKismetStringLibrary::StaticClass();
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

static auto RotToQuat(FRotator Rotator)
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

static auto VecToRot(FVector Vector)
{
    FRotator R;

    R.Yaw = std::atan2(Vector.Y, Vector.X) * (180.f / PI);

    R.Pitch = std::atan2(Vector.Z, std::sqrt(Vector.X * Vector.X + Vector.Y * Vector.Y)) * (180.f / PI);

    // roll can't be found from vector
    R.Roll = 0;

    return R;
}

static AActor* SpawnActorTrans(UClass* StaticClass, FTransform SpawnTransform, AActor* Owner = nullptr, ESpawnActorCollisionHandlingMethod Flags = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn)
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

inline auto& GetItemInstances(AFortPlayerController* PC)
{
    return PC->WorldInventory->Inventory.ItemInstances;
}

inline AActor* SpawnActor(UClass* ActorClass, FVector Location = { 0.0f, 0.0f, 0.0f }, FRotator Rotation = { 0, 0, 0 }, AActor* Owner = nullptr, ESpawnActorCollisionHandlingMethod Flags = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn)
{
    FTransform SpawnTransform;

    SpawnTransform.Translation = Location;
    SpawnTransform.Scale3D = FVector{ 1, 1, 1 };
    SpawnTransform.Rotation = RotToQuat(Rotation);

    return SpawnActorTrans(ActorClass, SpawnTransform, Owner, Flags);
}

template <typename RetActorType = AActor>
inline RetActorType* SpawnActor(FVector Location = { 0.0f, 0.0f, 0.0f }, AActor* Owner = nullptr, FQuat Rotation = { 0, 0, 0 }, ESpawnActorCollisionHandlingMethod Flags = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn)
{
    FTransform SpawnTransform;

    SpawnTransform.Translation = Location;
    SpawnTransform.Scale3D = FVector{ 1, 1, 1 };
    SpawnTransform.Rotation = Rotation;

    return (RetActorType*)SpawnActorTrans(RetActorType::StaticClass(), SpawnTransform, Owner, Flags);
}

inline ABuildingSMActor* SpawnBuilding(UClass* BGAClass, FVector& Location, FRotator& Rotation, APlayerPawn_Athena_C* Pawn)
{
    FTransform Transform;
    Transform.Translation = Location;
    Transform.Scale3D = FVector{ 1, 1, 1 };
    Transform.Rotation = RotToQuat(Rotation);

    return (ABuildingSMActor*)GetFortKismet()->STATIC_SpawnBuildingGameplayActor(BGAClass, Transform, Pawn);
}

inline void CreateConsole()
{
    GetEngine()->GameViewport->ViewportConsole = (UConsole*)GetGameplayStatics()->STATIC_SpawnObject(UConsole::StaticClass(), GetEngine()->GameViewport);
}

inline auto CreateCheatManager(APlayerController* Controller)
{
    if (!Controller->CheatManager)
    {
        Controller->CheatManager = (UCheatManager*)GetGameplayStatics()->STATIC_SpawnObject(UFortCheatManager::StaticClass(), Controller); // lets just assume its gamemode athena
    }

    return (UFortCheatManager*)Controller->CheatManager;
}

inline int RemoveDuplicatesFromInventory(AFortPlayerController* Controller) // i don't think this works
{
    auto& ReplicatedEntries = Controller->WorldInventory->Inventory.ReplicatedEntries;
    auto& ItemInstances = GetItemInstances(Controller);
    int AmountRemoved = 0;

    for (int i = 1; i < ReplicatedEntries.Num(); i++)
    {
        auto Guid = ReplicatedEntries[i].ItemGuid;

        for (int j = 1; j < ReplicatedEntries.Num(); j++)
        {
            if (j == i)
                continue;

            auto Guid2 = ReplicatedEntries[j].ItemGuid;

            if (Guid == Guid2)
            {
                std::cout << std::format("{} is a duplicate of {} in ReplicatedEntries!\n", std::to_string(j), std::to_string(i));
                ReplicatedEntries.RemoveAt(j);
                AmountRemoved++;
            }
        }
    }

    for (int i = 1; i < ItemInstances.Num(); i++)
    {
        auto Guid = ItemInstances[i]->GetItemGuid();

        for (int j = 1; j < ItemInstances.Num(); j++)
        {
            if (j == i)
                continue;

            auto Guid2 = ItemInstances[j]->GetItemGuid();

            if (Guid == Guid2)
            {
                std::cout << std::format("{} is a duplicate of {} in ItemInstances!\n", std::to_string(j), std::to_string(i));
                ItemInstances.RemoveAt(j);
                AmountRemoved++;
            }
        }
    }

    return AmountRemoved;
}

bool CanBuild(UClass* BuildingClass, FVector& Location)
{
    /* static auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);

    FBuildingGridActorFilter filter { true, true, true, true};
    FBuildingNeighboringActorInfo OutActors;
    GameState->StructuralSupportSystem->K2_GetBuildingActorsInGridCell(Location, filter, &OutActors);
    auto Amount = OutActors.NeighboringCenterCellInfos.Num() + OutActors.NeighboringFloorInfos.Num() + OutActors.NeighboringWallInfos.Num();
    if (Amount == 0)
        return true; */

    for (const auto Building : Buildings)
    {
        if (!Building) // || Building->bDestroyed)
        {
            Buildings.erase(Building);
            continue;
        }

        if (Building->bDestroyed)
        {
            Buildings.erase(Building);
            break;
        }

        if (Building->K2_GetActorLocation() == Location) // If we use a vector of locations, I do not know how to track if the actor has been destroyed.
        {
            if (!BuildingClass->IsA(APBWA_W1_StairW_C::StaticClass()) || (BuildingClass->IsA(APBWA_W1_StairW_C::StaticClass()) && Building->BuildingType == EFortBuildingType::Stairs))
            {
                return false;
            }
        }
    }

    return true;
}

bool IsCurrentlyDisconnecting(UNetConnection* Connection)
{
    return false;
}

void Spectate(UNetConnection* SpectatingConnection, AFortPlayerStateAthena* StateToSpectate)
{
    if (!SpectatingConnection || !StateToSpectate)
        return;

    auto PawnToSpectate = StateToSpectate->GetCurrentPawn();
    auto DeadPC = (AFortPlayerControllerAthena*)SpectatingConnection->PlayerController;

    if (!DeadPC)
        return;

    auto DeadPlayerState = (AFortPlayerStateAthena*)DeadPC->PlayerState;

    if (!IsCurrentlyDisconnecting(SpectatingConnection) && DeadPlayerState && PawnToSpectate)
    {
        DeadPC->PlayerToSpectateOnDeath = PawnToSpectate;
        DeadPC->SpectateOnDeath();

        DeadPlayerState->SpectatingTarget = StateToSpectate;
        DeadPlayerState->bIsSpectator = true;
        DeadPlayerState->OnRep_SpectatingTarget();

        auto SpectatorPC = SpawnActor<ABP_SpectatorPC_C>(PawnToSpectate->K2_GetActorLocation());
        SpectatorPC->SetNewCameraType(ESpectatorCameraType::DroneAttach, true);
        SpectatorPC->CurrentCameraType = ESpectatorCameraType::DroneAttach;
        SpectatorPC->ResetCamera();
        SpectatingConnection->PlayerController = SpectatorPC;

        // auto SpectatorPawn = SpawnActor<ABP_SpectatorPawn_C>(PawnToSpectate->K2_GetActorLocation(), PawnToSpectate);

        /* SpectatorPC->SpectatorPawn = SpectatorPawn;
        SpectatorPC->Pawn = SpectatorPawn;
        SpectatorPC->AcknowledgedPawn = SpectatorPawn;
        SpectatorPawn->Owner = SpectatorPC;
        SpectatorPawn->OnRep_Owner();
        SpectatorPC->OnRep_Pawn();
        SpectatorPC->Possess(SpectatorPawn); */

        if (DeadPC->QuickBars)
            DeadPC->QuickBars->K2_DestroyActor();
    }
}

inline void UpdateInventory(AFortPlayerController* PlayerController, int Dirty = 0, bool bRemovedItem = false)
{
    PlayerController->WorldInventory->bRequiresLocalUpdate = true;
    PlayerController->WorldInventory->HandleInventoryLocalUpdate();
    PlayerController->HandleWorldInventoryLocalUpdate();
    PlayerController->ForceUpdateQuickbar(EFortQuickBars::Primary);
    PlayerController->QuickBars->OnRep_PrimaryQuickBar();
    PlayerController->QuickBars->OnRep_SecondaryQuickBar();
    PlayerController->QuickBars->ForceNetUpdate();

    if (RemoveDuplicatesFromInventory(PlayerController) != 0 || bRemovedItem)
        PlayerController->WorldInventory->Inventory.MarkArrayDirty();

    if (Dirty != 0 && PlayerController->WorldInventory->Inventory.ReplicatedEntries.Num() >= Dirty)
        PlayerController->WorldInventory->Inventory.MarkItemDirty(PlayerController->WorldInventory->Inventory.ReplicatedEntries[Dirty]);
}

inline auto AddItem(AFortPlayerController* PC, UFortItemDefinition* Def, int Slot, EFortQuickBars Bars = EFortQuickBars::Primary, int Count = 1, int* Idx = nullptr)
{
    if (!PC || !Def)
        return FFortItemEntry();

    if (Def->IsA(UFortWeaponItemDefinition::StaticClass()))
        Count = 1;

    if (Slot < 0)
        Slot = 1;

    if (Bars == EFortQuickBars::Primary && Slot >= 6)
        Slot = 5;

    auto& QuickBarSlots = PC->QuickBars->PrimaryQuickBar.Slots;

    auto TempItemInstance = (UFortWorldItem*)Def->CreateTemporaryItemInstanceBP(Count, 1);

    if (TempItemInstance)
    {
        TempItemInstance->SetOwningControllerForTemporaryItem(PC);

        TempItemInstance->ItemEntry.Count = Count;
        TempItemInstance->OwnerInventory = PC->WorldInventory;

        auto& ItemEntry = TempItemInstance->ItemEntry;

        auto _Idx = PC->WorldInventory->Inventory.ReplicatedEntries.Add(ItemEntry);

        if (Idx)
            *Idx = _Idx;

        GetItemInstances(PC).Add((UFortWorldItem*)TempItemInstance);
        PC->QuickBars->ServerAddItemInternal(ItemEntry.ItemGuid, Bars, Slot);

        return ItemEntry;
    }

    return FFortItemEntry();
}

inline auto AddItemWithUpdate(AFortPlayerController* PC, UFortItemDefinition* Def, int Slot, EFortQuickBars Bars = EFortQuickBars::Primary, int Count = 1)
{
    int Idx = 0;

    auto ItemEntry = AddItem(PC, Def, Slot, Bars, Count, &Idx);

    UpdateInventory(PC, Idx);

    return ItemEntry;
}

inline UFortItemDefinition* GetDefInSlot(AFortPlayerControllerAthena* PC, int Slot, int Item = 0)
{
    auto& ItemInstances = GetItemInstances(PC);
    auto& QuickBarSlots = PC->QuickBars->PrimaryQuickBar.Slots;
    auto& ToFindGuid = QuickBarSlots[Slot].Items[Item];

    for (int j = 0; j < ItemInstances.Num(); j++)
    {
        auto ItemInstance = ItemInstances[j];

        if (!ItemInstance)
            continue;

        auto Def = ItemInstance->ItemEntry.ItemDefinition;
        auto Guid = ItemInstance->ItemEntry.ItemGuid;

        if (ToFindGuid == Guid)
        {
            return Def;
        }
    }

    return nullptr;
}

inline auto RemoveItem(AFortPlayerControllerAthena* PC, EFortQuickBars QuickBars, int Slot) // IMPORTANT TO FIX THIS
{
    if (Slot == 0 || !PC || PC->IsInAircraft())
        return;

    // UpdateInventory(PC, 0, true);

    auto pcQuickBars = PC->QuickBars;

    // if (false)
    {
        // pcQuickBars->PrimaryQuickBar.Slots[Slot].Items.FreeArray();
        pcQuickBars->EmptySlot(QuickBars, Slot);
        auto& QuickBarSlot = pcQuickBars->PrimaryQuickBar.Slots[Slot];
        // pcQuickBars->PrimaryQuickBar.Slots.RemoveAt(Slot);
        for (int i = 0; i < QuickBarSlot.Items.Num(); i++) // this is what emptyslot does ig
        {
            auto& Item = QuickBarSlot.Items[i];

            Item.A = 0;
            Item.B = 0;
            Item.C = 0;
            Item.D = 0;

            pcQuickBars->PrimaryQuickBar.Slots.RemoveAt(i);
        }

        // QuickBarSlot.Items.Reset();

        auto& Inventory = PC->WorldInventory->Inventory;

        if (Inventory.ReplicatedEntries.Num() >= Slot)
        {
            Inventory.ReplicatedEntries.RemoveAt(Slot);
            std::cout << "Removed from ReplicatedEntries!\n";
        }

        if (Inventory.ItemInstances.Num() >= Slot)
        {
            Inventory.ItemInstances.RemoveAt(Slot);
            std::cout << "Removed from ItemInstances!\n";
        }
    }

    // GetFortKismet()->STATIC_K2_RemoveItemFromPlayer(PC, (UFortWorldItemDefinition*)GetDefInSlot(PC, Slot), 1, true);
    // GetFortKismet()->STATIC_EmptyQuickBarSlot(GetWorld(), EFortQuickBars::Primary, Slot);
    // PC->RemoveItemFromQuickBars((UFortWorldItemDefinition*)GetDefInSlot(PC, Slot));
    // pcQuickBars->ServerRemoveItemInternal(pcQuickBars->PrimaryQuickBar.Slots[Slot].Items[0], false, true);
    // pcQuickBars->EmptySlot(QuickBars, Slot);

    UpdateInventory(PC, 0, true);
}

inline bool IsGuidInInventory(AFortPlayerControllerAthena* Controller, const FGuid& Guid)
{
    auto& QuickBarSlots = Controller->QuickBars->PrimaryQuickBar.Slots;

    for (int i = 0; i < QuickBarSlots.Num(); i++)
    {
        if (QuickBarSlots[i].Items.Data)
        {
            auto items = QuickBarSlots[i].Items;

            for (int i = 0; items.Num(); i++)
            {
                if (items[i] == Guid)
                    return true;
            }
        }
    }

    return false;
}

inline AFortWeapon* EquipWeaponDefinition(APawn* dPawn, UFortWeaponItemDefinition* Definition, const FGuid& Guid) // don't use, use EquipInventoryItem // not too secure
{
    // auto weaponClass = Definition->GetWeaponActorClass();
    auto Pawn = (APlayerPawn_Athena_C*)dPawn;
    if (Pawn && Definition)
    {
        auto Controller = (AFortPlayerControllerAthena*)Pawn->Controller;

        if (!IsGuidInInventory(Controller, Guid))
            return nullptr;

        // auto Weapon = (AFortWeapon*)SpawnActorTrans(weaponClass, {}, Pawn); // Other people can't see their weapon.
        // Weapon->bReplicates = true;
        auto Weapon = Pawn->EquipWeaponDefinition(Definition, Guid);

        if (Weapon)
        {
            Weapon->WeaponData = Definition;
            Weapon->ItemEntryGuid = Guid;
            // Weapon->SetOwner(dPawn);
            Weapon->OnRep_ReplicatedWeaponData();
            Weapon->ClientGivenTo(Pawn);
            Pawn->ClientInternalEquipWeapon(Weapon);
            Pawn->OnRep_CurrentWeapon(); // i dont think this is needed but alr
        }

        return Weapon;
    }

    return nullptr;
}

inline void EquipInventoryItem(AFortPlayerControllerAthena* PC, FGuid& Guid)
{
    if (!PC || PC->IsInAircraft())
        return;

    auto& ItemInstances = GetItemInstances(PC);

    for (int i = 0; i < ItemInstances.Num(); i++)
    {
        auto CurrentItemInstance = ItemInstances[i];

        if (!CurrentItemInstance)
            continue;

        auto Def = (UFortWeaponItemDefinition*)CurrentItemInstance->GetItemDefinitionBP();

        if (CurrentItemInstance->GetItemGuid() == Guid && Def)
        {
            EquipWeaponDefinition((APlayerPawn_Athena_C*)PC->Pawn, Def, Guid);
            break;
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

AFortOnlineBeaconHost* HostBeacon = nullptr;

void Listen()
{
    printf("\n[Listening]\n\n");

    HostBeacon = SpawnActor<AFortOnlineBeaconHost>();
    HostBeacon->ListenPort = 7777;
    auto bInitBeacon = Native::OnlineBeaconHost::InitHost(HostBeacon);
    CheckNullFatal(bInitBeacon, "Failed to initialize the Beacon!");

    HostBeacon->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
    HostBeacon->NetDriver->NetDriverName = FName(282); // REGISTER_NAME(282,GameNetDriver)
    HostBeacon->NetDriver->World = GetWorld();

    GetWorld()->NetDriver = HostBeacon->NetDriver;
    GetWorld()->LevelCollections[0].NetDriver = HostBeacon->NetDriver;
    GetWorld()->LevelCollections[1].NetDriver = HostBeacon->NetDriver;

    Native::OnlineBeacon::PauseBeaconRequests(HostBeacon, false);

    auto GameState = (AAthena_GameState_C*)GetWorld()->GameState;

    // GameState->SpectatorClass = ABP_SpectatorPawn_C::StaticClass();
    // sGameState->OnRep_SpectatorClass();
	
    std::cout << "[PLAYLIST] MaxPlayers: " << std::to_string(GameState->CurrentPlaylistData->MaxPlayers) << '\n';
    ((AAthena_GameMode_C*)GetWorld()->AuthorityGameMode)->GameSession->MaxPlayers = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState)->CurrentPlaylistData->MaxPlayers;
}

static AFortPickup* SummonPickup(AFortPlayerPawn* Pawn, auto ItemDef, int Count, FVector Location)
{
    auto FortPickup = SpawnActor<AFortPickup>(Location, Pawn);

    FortPickup->bReplicates = true; // should be autmoatic but eh

    FortPickup->PrimaryPickupItemEntry.Count = Count;
    FortPickup->PrimaryPickupItemEntry.ItemDefinition = ItemDef;

    FortPickup->OnRep_PrimaryPickupItemEntry();
    FortPickup->TossPickup(Location, Pawn, 6, true);

    return FortPickup;
}

static void SummonPickupFromChest(auto ItemDef, int Count, FVector Location)
{
    auto FortPickup = SpawnActor<AFortPickup>(Location);

    FortPickup->bReplicates = true; // should be autmoatic but eh
    FortPickup->bTossedFromContainer = true;

    FortPickup->PrimaryPickupItemEntry.Count = Count;
    FortPickup->PrimaryPickupItemEntry.ItemDefinition = ItemDef;

    FortPickup->OnRep_PrimaryPickupItemEntry();
    FortPickup->OnRep_TossedFromContainer();
}

inline void SpawnPickupFromFloorLoot(auto ItemDef, int Count, FVector Location)
{
    auto FortPickup = SpawnActor<AFortPickup>(Location);

    FortPickup->bReplicates = true; // should be autmoatic but eh

    FortPickup->PrimaryPickupItemEntry.Count = Count;
    FortPickup->PrimaryPickupItemEntry.ItemDefinition = ItemDef;

    FortPickup->OnRep_PrimaryPickupItemEntry();
}

static void HandlePickup(AFortPlayerPawn* Pawn, void* params, bool bEquip = false)
{
    if (!Pawn || !params)
        return;

    auto Params = (AFortPlayerPawn_ServerHandlePickup_Params*)params;

    auto& ItemInstances = GetItemInstances((AFortPlayerController*)Pawn->Controller);

    if (Params->Pickup)
    {
        if (bEquip && !Params->Pickup->PrimaryPickupItemEntry.ItemDefinition->IsA(UFortWeaponItemDefinition::StaticClass()))
            bEquip = false;

        auto WorldItemDefinition = (UFortWorldItemDefinition*)Params->Pickup->PrimaryPickupItemEntry.ItemDefinition;
        auto Controller = (AFortPlayerControllerAthena*)Pawn->Controller;
        auto& QuickBarSlots = Controller->QuickBars->PrimaryQuickBar.Slots;

        for (int i = 1; i < QuickBarSlots.Num(); i++)
        {
            std::cout << "On Slot: " << i << '\n';

            if (!QuickBarSlots[i].Items.Data) // Checks if the slot is empty
            {
                std::cout << "Empty Slot: " << i << '\n';

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
                            continue;

                        auto Def = ItemInstance->ItemEntry.ItemDefinition;
                        auto Guid = ItemInstance->ItemEntry.ItemGuid;

                        if (FocusedGuid == Guid)
                        {
                            SummonPickup((APlayerPawn_Athena_C*)Pawn, Def, 1/* ItemInstance->ItemEntry.Count */, Pawn->K2_GetActorLocation());
                            break;
                        }
                    }

                    RemoveItem(Controller, EFortQuickBars::Primary, FocusedSlot);
                }

                auto entry = AddItem((AFortPlayerController*)Pawn->Controller, WorldItemDefinition, i, EFortQuickBars::Primary, 1); // Params->Pickup->PrimaryPickupItemEntry.Count);
                Params->Pickup->K2_DestroyActor();

                if (bEquip)
                    EquipInventoryItem(Controller, entry.ItemGuid);

                UpdateInventory((AFortPlayerController*)Pawn->Controller, 0, false);

                break;
            }
        }
    }
}

static void InitInventory(AFortPlayerController* PlayerController)
{
    PlayerController->QuickBars = SpawnActor<AFortQuickBars>({ -280, 400, 3000 }, PlayerController);
    auto QuickBars = PlayerController->QuickBars;
    PlayerController->OnRep_QuickBar();

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
    static auto EditTool = UObject::FindObject<UFortEditToolItemDefinition>("FortEditToolItemDefinition EditTool.EditTool");

    // we should probably only update once

    AddItem(PlayerController, Wall, 0, EFortQuickBars::Secondary, 1);
    AddItem(PlayerController, Floor, 1, EFortQuickBars::Secondary, 1);
    AddItem(PlayerController, Stair, 2, EFortQuickBars::Secondary, 1);
    AddItem(PlayerController, Cone, 3, EFortQuickBars::Secondary, 1);

    AddItem(PlayerController, Wood, 0, EFortQuickBars::Secondary, 999);
    AddItem(PlayerController, Stone, 0, EFortQuickBars::Secondary, 999);
    AddItem(PlayerController, Metal, 0, EFortQuickBars::Secondary, 999);
    AddItem(PlayerController, Medium, 0, EFortQuickBars::Secondary, 999);
    AddItem(PlayerController, Light, 0, EFortQuickBars::Secondary, 999);
    AddItem(PlayerController, Heavy, 0, EFortQuickBars::Secondary, 999);

    AddItemWithUpdate(PlayerController, EditTool, 0, EFortQuickBars::Primary, 1);

    QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 0, 0, true);
}

template <typename Class>
static FFortItemEntry FindItemInInventory(AFortPlayerControllerAthena* PC, bool& bFound)
{
    auto& ItemInstances = GetItemInstances(PC);

    for (int i = 0; i < ItemInstances.Num(); i++)
    {
        auto ItemInstance = ItemInstances[i];

        if (!ItemInstance)
            continue;

        auto Def = ItemInstance->ItemEntry.ItemDefinition;

        if (Def && Def->IsA(Class::StaticClass()))
        {
            bFound = true;
            return ItemInstance->ItemEntry;
        }
    }

    bFound = false;
    return FFortItemEntry();
}

FGameplayAbilitySpec* UAbilitySystemComponent_FindAbilitySpecFromHandle(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle)
{
    auto Specs = AbilitySystemComponent->ActivatableAbilities.Items;

    for (int i = 0; i < Specs.Num(); i++)
    {
        auto& Spec = Specs[i];

        if (Spec.Handle.Handle == Handle.Handle)
        {
            return &Spec;
        }
    }

    return nullptr;
}

void UAbilitySystemComponent_ConsumeAllReplicatedData(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey)
{
    /*
    FGameplayAbilitySpecHandleAndPredictionKey toFind { AbilityHandle, AbilityOriginalPredictionKey.Current };

    auto MapPairsData = AbilitySystemComponent->AbilityTargetDataMap;
    */
}

auto TryActivateAbility(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey* PredictionKey, FGameplayEventData* TriggerEventData)
{
    auto Spec = UAbilitySystemComponent_FindAbilitySpecFromHandle(AbilitySystemComponent, AbilityToActivate);

    if (!Spec)
    {
        printf("InternalServerTryActiveAbility. Rejecting ClientActivation of ability with invalid SpecHandle!\n");
        AbilitySystemComponent->ClientActivateAbilityFailed(AbilityToActivate, PredictionKey->Current);
        return;
    }

    // UAbilitySystemComponent_ConsumeAllReplicatedData(AbilitySystemComponent, AbilityToActivate, *PredictionKey);

    UGameplayAbility* InstancedAbility = nullptr;
    Spec->InputPressed = true;

    if (Native::AbilitySystemComponent::InternalTryActivateAbility(AbilitySystemComponent, AbilityToActivate, *PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
    {
        // TryActivateAbility handles notifying the client of success
    }
    else
    {
        printf("InternalServerTryActiveAbility. Rejecting ClientActivation of %s. InternalTryActivateAbility failed\n", Spec->Ability->GetName().c_str());
        AbilitySystemComponent->ClientActivateAbilityFailed(AbilityToActivate, PredictionKey->Current);
        Spec->InputPressed = false;
        return;
    }

    Native::AbilitySystemComponent::MarkAbilitySpecDirty(AbilitySystemComponent, *Spec);
}

static void GrantGameplayAbility(APlayerPawn_Athena_C* TargetPawn, UClass* GameplayAbilityClass)
{
    auto AbilitySystemComponent = TargetPawn->AbilitySystemComponent;

    if (!AbilitySystemComponent)
        return;

    auto GenerateNewSpec = [&]() -> FGameplayAbilitySpec
    {
        FGameplayAbilitySpecHandle Handle{ rand() };

        FGameplayAbilitySpec Spec
        {
            -1, -1, -1, Handle, (UGameplayAbility*)GameplayAbilityClass->CreateDefaultObject(),
            1, -1, nullptr, 0, false, false, false
        };

        return Spec;
    };

    auto Spec = GenerateNewSpec();

    for (int i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); i++)
    {
        auto& CurrentSpec = AbilitySystemComponent->ActivatableAbilities.Items[i];

        if (CurrentSpec.Ability->GetFullName() == Spec.Ability->GetFullName()) // Player already has this ability // TODO: not do getfullname
			return;
    }

    auto Handle = Native::AbilitySystemComponent::GiveAbility(AbilitySystemComponent, &Spec.Handle, Spec);
}

static void HandleInventoryDrop(AFortPlayerPawn* Pawn, void* params)
{
    auto Params = (AFortPlayerController_ServerAttemptInventoryDrop_Params*)params;

    auto& ItemInstances = GetItemInstances((AFortPlayerControllerAthena*)Pawn->Controller);
    auto Controller = (AFortPlayerControllerAthena*)Pawn->Controller;
    auto QuickBars = Controller->QuickBars;

    auto& PrimaryQuickBarSlots = QuickBars->PrimaryQuickBar.Slots;
    auto& SecondaryQuickBarSlots = QuickBars->SecondaryQuickBar.Slots;

    for (int i = 1; i < PrimaryQuickBarSlots.Num(); i++)
    {
        if (PrimaryQuickBarSlots[i].Items.Data)
        {
            if (PrimaryQuickBarSlots[i].Items[0] == Params->ItemGuid)
            {
                RemoveItem(Controller, EFortQuickBars::Primary, i);
                break;
            }
        }
    }

    for (int i = 0; i < SecondaryQuickBarSlots.Num(); i++)
    {
        if (SecondaryQuickBarSlots[i].Items.Data)
        {
            if (SecondaryQuickBarSlots[i].Items[0] == Params->ItemGuid)
            {
                RemoveItem(Controller, EFortQuickBars::Secondary, i);
                break;
            }
        }
    }

    for (int i = 1; i < ItemInstances.Num(); i++)
    {
        auto ItemInstance = ItemInstances[i];

        if (!ItemInstance)
            continue;

        auto Guid = ItemInstance->GetItemGuid();

        if (Guid == Params->ItemGuid)
        {
            auto def = ItemInstance->ItemEntry.ItemDefinition;

            if (def)
            {
                std::cout << "Matching Guid for " << def->GetFullName() << '\n';
                SummonPickup(Pawn, def, 1, Pawn->K2_GetActorLocation());
                break;
            }
        }
    }

    if (PrimaryQuickBarSlots[0].Items.Data)
        EquipInventoryItem(Controller, PrimaryQuickBarSlots[0].Items[0]); // just select pickaxe for now

    /* for (int i = ItemInstances.Num(); i > 0; i--) // equip the item before until its valid
    {
        auto ItemInstance = ItemInstances[i];

        if (!ItemInstance)
            continue;

        auto Def = ItemInstance->ItemEntry.ItemDefinition;

        if (Def) // && Def->IsA(UFortWeaponItemDefinition::StaticClass()))
        {
            QuickBars->PrimaryQuickBar.CurrentFocusedSlot = i;
            // EquipInventoryItem(Controller, ItemInstance->ItemEntry.ItemGuid, ItemInstance->ItemEntry.Count);
            QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 0, 0, true);
            break;
        }
    } */
}

static void ExecuteConsoleCommand(FString Message)
{
    GetKismetSystem()->STATIC_ExecuteConsoleCommand(GetWorld(), Message, nullptr);
}

static bool KickPlayer(AFortPlayerControllerAthena* PC, FString Message)
{
    FText text = reinterpret_cast<UKismetTextLibrary*>(UKismetTextLibrary::StaticClass())->STATIC_Conv_StringToText(Message);
    return Native::OnlineSession::KickPlayer(GetWorld()->AuthorityGameMode->GameSession, PC, text);
}

auto GetAllActorsOfClass(UClass* Class)
{
    TArray<AActor*> OutActors;

    static auto GameplayStatics = (UGameplayStatics*)UGameplayStatics::StaticClass()->CreateDefaultObject();
    GameplayStatics->STATIC_GetAllActorsOfClass(GetWorld(), Class, &OutActors);

    return OutActors;
}

FTransform GetPlayerStart(AFortPlayerControllerAthena* PC)
{
    TArray<AActor*> OutActors = GetAllActorsOfClass(AFortPlayerStartWarmup::StaticClass());

    auto ActorsNum = OutActors.Num();

    auto SpawnTransform = FTransform();
    SpawnTransform.Scale3D = FVector(1, 1, 1);
    SpawnTransform.Rotation = FQuat();
    SpawnTransform.Translation = FVector{ 1250, 1818, 3284 }; // Next to salty

    auto GamePhase = ((AAthena_GameState_C*)GetWorld()->GameState)->GamePhase;

    if (ActorsNum != 0
        && (GamePhase == EAthenaGamePhase::Setup || GamePhase == EAthenaGamePhase::Warmup))
    {
        auto ActorToUseNum = rand() % ActorsNum;
        auto ActorToUse = (OutActors)[ActorToUseNum];

        while (!ActorToUse)
        {
            ActorToUseNum = rand() % ActorsNum;
            ActorToUse = (OutActors)[ActorToUseNum];
        }

        auto Location = ActorToUse->K2_GetActorLocation();
        SpawnTransform.Translation = ActorToUse->K2_GetActorLocation();

        PC->WarmupPlayerStart = (AFortPlayerStartWarmup*)ActorToUse;
    }

    return SpawnTransform;

    // return (GetWorld()->AuthorityGameMode->FindPlayerStart(PC, IncomingName))->K2_GetActorLocation();
}

inline UKismetMathLibrary* GetMath()
{
    return (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();
}

FVector RotToVec(const FRotator& Rotator)
{
    float CP, SP, CY, SY;
    sinCos(&SP, &CP, GetMath()->STATIC_DegreesToRadians(Rotator.Pitch));
    sinCos(&SY, &CY, GetMath()->STATIC_DegreesToRadians(Rotator.Yaw));
    auto V = FVector(CP * CY, CP * SY, SP);

    return V;
}

inline auto ApplyAbilities(APawn* _Pawn) // TODO: Check if the player already has the ability.
{
    auto Pawn = (APlayerPawn_Athena_C*)_Pawn;

    static auto SprintAbility = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Sprint");
    static auto ReloadAbility = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Reload");
    static auto RangedWeaponAbility = UObject::FindClass("Class FortniteGame.FortGameplayAbility_RangedWeapon");
    static auto JumpAbility = UObject::FindClass("Class FortniteGame.FortGameplayAbility_Jump");
    static auto DeathAbility = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C");
    static auto InteractUseAbility = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C");
    static auto InteractSearchAbility = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C");
    // static auto EmoteAbility = UObject::FindClass("BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C");
    static auto ReviveAbility = UObject::FindClass("BlueprintGeneratedClass GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C");
    static auto ResurrectAbility = UObject::FindClass("BlueprintGeneratedClass GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C");
    static auto AthenaDBNOAbility = UObject::FindClass("BlueprintGeneratedClass GAB_AthenaDBNO.GAB_AthenaDBNO_C");
    static auto PlayerDBNOAbility = UObject::FindClass("BlueprintGeneratedClass GAB_PlayerDBNO.GAB_PlayerDBNO_C");

    GrantGameplayAbility(Pawn, SprintAbility);
    GrantGameplayAbility(Pawn, ReloadAbility);
    GrantGameplayAbility(Pawn, RangedWeaponAbility);
    GrantGameplayAbility(Pawn, JumpAbility);
    GrantGameplayAbility(Pawn, DeathAbility);
    GrantGameplayAbility(Pawn, InteractUseAbility);
    GrantGameplayAbility(Pawn, InteractSearchAbility);
    // GrantGameplayAbility(Pawn, ReviveAbility);
    // GrantGameplayAbility(Pawn, AthenaDBNOAbility);
    // GrantGameplayAbility(Pawn, ResurrectAbility);
    // GrantGameplayAbility(Pawn, PlayerDBNOAbility);
    // GrantGameplayAbility(Pawn, EmoteAbility);
}

void Emote(AFortPlayerControllerAthena* Controller, UAnimMontage* Montage)
{
	
}

static void InitPawn(AFortPlayerControllerAthena* PlayerController, FVector Loc = FVector{ 1250, 1818, 3284 }, FQuat Rotation = FQuat(), bool bRefreshLoadout = true)
{
    if (PlayerController->Pawn)
        PlayerController->Pawn->K2_DestroyActor();

    auto SpawnTransform = FTransform();
    SpawnTransform.Scale3D = FVector(1, 1, 1);
    SpawnTransform.Rotation = Rotation;
    SpawnTransform.Translation = Loc;

    // SpawnTransform = GetPlayerStart(PlayerController);

    auto Pawn = (APlayerPawn_Athena_C*)SpawnActorTrans(APlayerPawn_Athena_C::StaticClass(), SpawnTransform, PlayerController);

    PlayerController->Pawn = Pawn;
    PlayerController->AcknowledgedPawn = Pawn;
    Pawn->Owner = PlayerController;
    Pawn->OnRep_Owner();
    PlayerController->OnRep_Pawn();
    PlayerController->Possess(Pawn);

    Pawn->SetMaxHealth(100);
    Pawn->SetMaxShield(100);

    Pawn->bReplicateMovement = true;
    Pawn->OnRep_ReplicateMovement();
	
    if (bRefreshLoadout)
    {
        static auto FortRegisteredPlayerInfo = UObject::FindObject<UFortRegisteredPlayerInfo>("FortRegisteredPlayerInfo Transient.FortEngine_0_1.FortGameInstance_0_1.FortRegisteredPlayerInfo_0_1");

        auto Hero = FortRegisteredPlayerInfo->AthenaMenuHeroDef;

        auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;

        PlayerState->HeroType = Hero->GetHeroTypeBP();
        PlayerState->OnRep_HeroType();

        for (auto i = 0; i < Hero->CharacterParts.Num(); i++)
        {
            auto Part = Hero->CharacterParts[i];

            if (!Part)
                continue;

            PlayerState->CharacterParts[i] = Part;
        }

        PlayerState->OnRep_CharacterParts();	
    }

    PlayerController->OnRep_QuickBar();
    PlayerController->QuickBars->OnRep_PrimaryQuickBar();
    PlayerController->QuickBars->OnRep_SecondaryQuickBar();

    ApplyAbilities(Pawn);
}

void ChangeItem(AFortPlayerControllerAthena* PC, UFortItemDefinition* Old, UFortItemDefinition* New, int Slot, bool bEquip = false) // we can find the slot too
{
    RemoveItem(PC, EFortQuickBars::Primary, Slot);
    auto NewEntry = AddItemWithUpdate(PC, (UFortWorldItemDefinition*)New, Slot);

    if (bEquip)
        EquipInventoryItem(PC, NewEntry.ItemGuid);
}

void ClientMessage(AFortPlayerControllerAthena* PC, FString Message) // Send a message to the user's console.
{
    PC->ClientMessage(Message, FName(-1), 10000);
}

auto toWStr(const std::string& str)
{
    return std::wstring(str.begin(), str.end());
}

inline UFortWeaponRangedItemDefinition* FindWID(const std::string& WID)
{
    auto Def = UObject::FindObject<UFortWeaponRangedItemDefinition>("FortWeaponRangedItemDefinition " + WID + '.' + WID);

    if (!Def)
    {
        Def = UObject::FindObject<UFortWeaponRangedItemDefinition>("WID_Harvest_" + WID + "_Athena_C_T01" + ".WID_Harvest_" + WID + "_Athena_C_T01");
        if (!Def)
            Def = UObject::FindObject<UFortWeaponRangedItemDefinition>(WID + "." + WID);
    }

    return Def;
}

void EquipLoadout(AFortPlayerControllerAthena* Controller, std::vector<UFortWeaponRangedItemDefinition*> WIDS)
{
    FFortItemEntry pickaxeEntry;

    for (int i = 0; i < WIDS.size(); i++)
    {
        // if (i >= 6)
        // break;

        auto Def = WIDS[i];

        if (Def)
        {
            auto Entry = AddItemWithUpdate(Controller, Def, i);

            if (i == 0)
                pickaxeEntry = Entry;
        }
    }

    EquipInventoryItem(Controller, pickaxeEntry.ItemGuid);
}

auto RandomIntInRange(int min, int max)
{
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    static std::uniform_int_distribution<> distr(min, max); // define the range

    return distr(gen);
}

auto GetRandomWID(int skip = 0)
{
    if (skip == 0)
        skip = RandomIntInRange(4, 100);

    return UObject::FindObject<UFortWeaponRangedItemDefinition>("FortWeaponRangedItemDefinition WID_", skip);
}

DWORD WINAPI SummonFloorLoot(LPVOID)
{
    static auto FloorLootClass = UObject::FindObject<UClass>("BlueprintGeneratedClass Tiered_Athena_FloorLoot_01.Tiered_Athena_FloorLoot_01_C");

    if (!FloorLootClass)
        return 0;

    static auto Scar = FindWID("WID_Assault_AutoHigh_Athena_SR_Ore_T03");
    auto FloorLootActors = GetAllActorsOfClass(FloorLootClass);

    /*

static std::vector<UFortWeaponRangedItemDefinition*> Weapons = {
    GetRandomWID(7),
    GetRandomWID(11),
    GetRandomWID(15),
    GetRandomWID(19),
};

for (int i = 0; i < 100; i++)
{
    // Weapons.push_back(GetRandomWID());
}

*/

    // it also crashes sometimes if you spawn alot on like constructionscript
    auto AmountOfActorsToSpawn = 20; // FloorLootActors.Num(); // For now, without relevancy we just spawn some.
    int AmountSpawned = 0;

    for (int i = 0; i < AmountOfActorsToSpawn; i++)
    {
        auto FloorLootActor = FloorLootActors[i];
        auto weaponToSpawn = Scar; // Weapons[RandomIntInRange(0, 3)];
        auto Location = FloorLootActor->K2_GetActorLocation();

        if (!FloorLootActor || !weaponToSpawn)
            continue;

        // SpawnPickupFromFloorLoot(weaponToSpawn, 1, Location);
        SummonPickupFromChest(weaponToSpawn, 1, Location);
        AmountSpawned++;

        if (false) // (auto Ammo = weaponToSpawn->GetAmmoWorldItemDefinition_BP())
            SpawnPickupFromFloorLoot(nullptr, 10, Location); // Crashes sometimes idk why
    }

    std::cout << "Spawned " << AmountSpawned << " pickups!\n";

    return 0;
}

namespace Inventory // includes quickbars
{
    // todo?: choose a quickbar to update
    inline void Update(AFortPlayerController* Controller, int Dirty = 0, bool bRemovedItem = false) // we automatically do the updating in the inventory so no point of calling this function (besides when adding an item)
    {
        if (!Controller)
            return;

        Controller->WorldInventory->bRequiresLocalUpdate = true;
        Controller->WorldInventory->HandleInventoryLocalUpdate();
        Controller->WorldInventory->ForceNetUpdate();
        Controller->HandleWorldInventoryLocalUpdate();

        Controller->QuickBars->OnRep_PrimaryQuickBar();
        Controller->QuickBars->OnRep_SecondaryQuickBar();
        Controller->QuickBars->ForceNetUpdate();
        Controller->ForceUpdateQuickbar(EFortQuickBars::Primary);
        Controller->ForceUpdateQuickbar(EFortQuickBars::Secondary);

        if (bRemovedItem)
            Controller->WorldInventory->Inventory.MarkArrayDirty();

        if (Dirty != 0 && Controller->WorldInventory->Inventory.ReplicatedEntries.Num() >= Dirty)
            Controller->WorldInventory->Inventory.MarkItemDirty(Controller->WorldInventory->Inventory.ReplicatedEntries[Dirty]);
    }

    inline bool IsValidGuid(AFortPlayerControllerAthena* Controller, const FGuid& Guid)
    {
        if (!Controller)
            return false;

        auto& QuickBarSlots = Controller->QuickBars->PrimaryQuickBar.Slots;

        for (int i = 0; i < QuickBarSlots.Num(); i++)
        {
            if (QuickBarSlots[i].Items.Data)
            {
                auto items = QuickBarSlots[i].Items;

                for (int i = 0; items.Num(); i++)
                {
                    if (items[i] == Guid)
                        return true;
                }
            }
        }

        return false;
    }

    inline UFortItemDefinition* GetDefinitionInSlot(AFortPlayerControllerAthena* Controller, int Slot, int Item = 0, EFortQuickBars QuickBars = EFortQuickBars::Primary)
    {
        if (!Controller)
            return nullptr;

        auto& ItemInstances = Controller->WorldInventory->Inventory.ItemInstances;

        FGuid ToFindGuid;

        if (QuickBars == EFortQuickBars::Primary)
            ToFindGuid = Controller->QuickBars->PrimaryQuickBar.Slots[Slot].Items[Item];
        else if (QuickBars == EFortQuickBars::Secondary)
            ToFindGuid = Controller->QuickBars->SecondaryQuickBar.Slots[Slot].Items[Item];

        for (int j = 0; j < ItemInstances.Num(); j++)
        {
            auto ItemInstance = ItemInstances[j];

            if (!ItemInstance)
                continue;

            auto Def = ItemInstance->ItemEntry.ItemDefinition;
            auto Guid = ItemInstance->ItemEntry.ItemGuid;

            if (ToFindGuid == Guid)
                return Def;
        }

        return nullptr;
    }

    // The Idx is so we can mark it dirty.
    inline FFortItemEntry AddItemToSlot(AFortPlayerControllerAthena* Controller, UFortWorldItemDefinition* Definition, int Slot, EFortQuickBars Bars = EFortQuickBars::Primary, int Count = 1, int* Idx = nullptr)
    {
        if (!Controller || !Definition)
            return FFortItemEntry();

        if (Definition->IsA(UFortWeaponItemDefinition::StaticClass()))
            Count = 1; // dont give more than 1 weapon to the same slot

        if (Slot < 0)
            Slot = 1;

        if (Bars == EFortQuickBars::Primary && Slot >= 6)
            Slot = 5;

        auto& QuickBarSlots = Controller->QuickBars->PrimaryQuickBar.Slots;

        auto TempItemInstance = (UFortWorldItem*)Definition->CreateTemporaryItemInstanceBP(Count, 1);

        if (TempItemInstance)
        {
            TempItemInstance->SetOwningControllerForTemporaryItem(Controller);

            TempItemInstance->ItemEntry.Count = Count;
            TempItemInstance->OwnerInventory = Controller->WorldInventory;

            auto& ItemEntry = TempItemInstance->ItemEntry;

            auto _Idx = Controller->WorldInventory->Inventory.ReplicatedEntries.Add(ItemEntry);

            if (Idx)
                *Idx = _Idx;

            Controller->WorldInventory->Inventory.ItemInstances.Add((UFortWorldItem*)TempItemInstance);
            Controller->QuickBars->ServerAddItemInternal(ItemEntry.ItemGuid, Bars, Slot);

            return ItemEntry;
        }

        return FFortItemEntry();
    }

    inline void EquipSlot(AFortPlayerControllerAthena* Controller, int Slot)
    {
        if (!Controller)
            return;
    }

    inline void RemoveGuidFromInventory(AFortPlayerControllerAthena* Controller, FGuid& Guid) // Note: this does not remove from it from the quickbar
    {
        if (!Controller)
            return;
    }

    inline bool RemoveItemFromSlot(AFortPlayerControllerAthena* Controller, int Slot, EFortQuickBars Quickbars = EFortQuickBars::Primary, int Amount = -1) // -1 for all items in the slot
    {
        if (!Controller)
            return false;

        auto& PrimarySlots = Controller->QuickBars->PrimaryQuickBar.Slots;
        auto& SecondarySlots = Controller->QuickBars->SecondaryQuickBar.Slots;

        bool bPrimaryQuickBar = (Quickbars == EFortQuickBars::Primary);

        if (Amount == -1)
        {
            if (bPrimaryQuickBar)
                Amount = PrimarySlots[Slot].Items.Num();
            else
                Amount = SecondarySlots[Slot].Items.Num();
        }

        bool bWasSuccessful = false;

        for (int i = 0; i < Amount; i++)
        {
            // todo add a check to make sure the slot has that amount of items
            auto& ToRemoveGuid = bPrimaryQuickBar ? PrimarySlots[Slot].Items[i] : SecondarySlots[Slot].Items[i];
            Inventory::RemoveGuidFromInventory(Controller, ToRemoveGuid);

            for (int j = 0; j < Controller->WorldInventory->Inventory.ItemInstances.Num(); j++)
            {
                auto ItemInstance = Controller->WorldInventory->Inventory.ItemInstances[j];

                if (!ItemInstance)
                    continue;

                auto Guid = ItemInstance->ItemEntry.ItemGuid;

                if (ToRemoveGuid == Guid)
                {
                    Controller->WorldInventory->Inventory.ItemInstances.RemoveAt(j);
                    bWasSuccessful = true;
                    // break;
                }
            }

            for (int x = 0; x < Controller->WorldInventory->Inventory.ReplicatedEntries.Num(); x++)
            {
                auto& ItemEntry = Controller->WorldInventory->Inventory.ReplicatedEntries[x];

                if (ItemEntry.ItemGuid == ToRemoveGuid)
                {
                    Controller->WorldInventory->Inventory.ReplicatedEntries.RemoveAt(x);
                    bWasSuccessful = true;

                    // break;
                }
            }

            Controller->QuickBars->ServerRemoveItemInternal(ToRemoveGuid, false, true);
            ToRemoveGuid.Reset();
        }

        if (bWasSuccessful) // Make sure it acutally removed from the ItemInstances and ReplicatedEntries
        {
            Controller->QuickBars->EmptySlot(Quickbars, Slot);

            if (bPrimaryQuickBar)
                PrimarySlots[Slot].Items.FreeArray();
            else
                SecondarySlots[Slot].Items.FreeArray();

            // bPrimaryQuickBar ? PrimarySlots[Slot].Items.FreeArray() : SecondarySlots[Slot].Items.FreeArray();
        }

        Inventory::Update(Controller, 0, true);

        return bWasSuccessful;
    }

    inline bool OnDrop(AFortPlayerControllerAthena* Controller, void* params)
    {
        auto Params = (AFortPlayerController_ServerAttemptInventoryDrop_Params*)params;

        if (!Params || !Controller)
            return false;

        auto& ItemInstances = Controller->WorldInventory->Inventory.ItemInstances;
        auto QuickBars = Controller->QuickBars;

        auto& PrimaryQuickBarSlots = QuickBars->PrimaryQuickBar.Slots;
        auto& SecondaryQuickBarSlots = QuickBars->SecondaryQuickBar.Slots;

        bool bWasSuccessful = false;

        for (int i = 1; i < PrimaryQuickBarSlots.Num(); i++)
        {
            if (PrimaryQuickBarSlots[i].Items.Data)
            {
                for (int j = 0; j < PrimaryQuickBarSlots[i].Items.Num(); j++)
                {
                    if (PrimaryQuickBarSlots[i].Items[j] == Params->ItemGuid)
                    {
                        auto Definition = GetDefinitionInSlot(Controller, i, j, EFortQuickBars::Primary);
                        Inventory::RemoveItemFromSlot(Controller, i, EFortQuickBars::Primary, j + 1);

                        if (Definition)
                        {
                            SummonPickup((AFortPlayerPawn*)Controller->Pawn, Definition, 1, Controller->Pawn->K2_GetActorLocation());
                            bWasSuccessful = true;
                            break;
                        }
                        else
                            std::cout << "Could not find Definition!\n";
                    }
                }
            }
        }

        if (!bWasSuccessful)
        {
            for (int i = 0; i < SecondaryQuickBarSlots.Num(); i++)
            {
                if (SecondaryQuickBarSlots[i].Items.Data)
                {
                    for (int j = 0; j < SecondaryQuickBarSlots[i].Items.Num(); j++)
                    {
                        if (SecondaryQuickBarSlots[i].Items[j] == Params->ItemGuid)
                        {
                            auto Definition = Inventory::GetDefinitionInSlot(Controller, i, j, EFortQuickBars::Secondary);
                            Inventory::RemoveItemFromSlot(Controller, i, EFortQuickBars::Secondary, j + 1);

                            if (Definition)
                            {
                                SummonPickup((AFortPlayerPawn*)Controller->Pawn, Definition, 1, Controller->Pawn->K2_GetActorLocation());
                                bWasSuccessful = true;
                                break;
                            }
                            else
                                std::cout << "Could not find Definition!\n";
                        }
                    }
                }
            }
        }

        if (bWasSuccessful && PrimaryQuickBarSlots[0].Items.Data)
            EquipInventoryItem(Controller, PrimaryQuickBarSlots[0].Items[0]); // just select pickaxe for now

        /* for (int i = ItemInstances.Num(); i > 0; i--) // equip the item before until its valid
        {
            auto ItemInstance = ItemInstances[i];

            if (!ItemInstance)
                continue;

            auto Def = ItemInstance->ItemEntry.ItemDefinition;

            if (Def) // && Def->IsA(UFortWeaponItemDefinition::StaticClass()))
            {
                QuickBars->PrimaryQuickBar.CurrentFocusedSlot = i;
                // EquipInventoryItem(Controller, ItemInstance->ItemEntry.ItemGuid, ItemInstance->ItemEntry.Count);
                QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 0, 0, true);
                break;
            }
        } */

        return bWasSuccessful;
    }

    inline void OnPickup(AFortPlayerControllerAthena* Controller, void* params)
    {
        auto Params = (AFortPlayerPawn_ServerHandlePickup_Params*)params;

        if (!Controller || !Params)
            return;

        auto& ItemInstances = Controller->WorldInventory->Inventory.ItemInstances;

        if (Params->Pickup)
        {
            bool bCanGoInSecondary = true; // todo: rename

            if (Params->Pickup->PrimaryPickupItemEntry.ItemDefinition->IsA(UFortWeaponItemDefinition::StaticClass()))
                bCanGoInSecondary = false;

            auto WorldItemDefinition = (UFortWorldItemDefinition*)Params->Pickup->PrimaryPickupItemEntry.ItemDefinition;

            if (!bCanGoInSecondary)
            {
                auto& PrimaryQuickBarSlots = Controller->QuickBars->PrimaryQuickBar.Slots;

                for (int i = 1; i < PrimaryQuickBarSlots.Num(); i++)
                {
                    if (!PrimaryQuickBarSlots[i].Items.Data) // Checks if the slot is empty
                    {
                        if (i >= 6)
                        {
                            auto QuickBars = Controller->QuickBars;

                            auto FocusedSlot = QuickBars->PrimaryQuickBar.CurrentFocusedSlot;

                            if (FocusedSlot == 0) // don't replace the pickaxe
                                continue;

                            i = FocusedSlot;

                            FGuid& FocusedGuid = PrimaryQuickBarSlots[FocusedSlot].Items[0];

                            for (int j = 0; i < ItemInstances.Num(); j++)
                            {
                                auto ItemInstance = ItemInstances[j];

                                if (!ItemInstance)
                                    continue;

                                auto Def = ItemInstance->ItemEntry.ItemDefinition;
                                auto Guid = ItemInstance->ItemEntry.ItemGuid;

                                if (FocusedGuid == Guid)
                                {
                                    SummonPickup((APlayerPawn_Athena_C*)Controller->Pawn, Def, 1 /* ItemInstance->ItemEntry.Count */, Controller->Pawn->K2_GetActorLocation());
                                    break;
                                }
                            }

                            Inventory::RemoveItemFromSlot(Controller, FocusedSlot, EFortQuickBars::Primary);

                            Inventory::Update(Controller, 0, true); // I don't think this is needed
                        }

                        int Idx = 0;
                        auto entry = Inventory::AddItemToSlot(Controller, WorldItemDefinition, i, EFortQuickBars::Primary, 1, &Idx); // Params->Pickup->PrimaryPickupItemEntry.Count);
                        Params->Pickup->K2_DestroyActor();

                        Inventory::Update(Controller, Idx);

                        break;
                    }
                }
            }

            else
            {
                auto& SecondaryQuickBarSlots = Controller->QuickBars->SecondaryQuickBar.Slots;

                for (int i = 0; i < SecondaryQuickBarSlots.Num(); i++)
                {
                    if (!SecondaryQuickBarSlots[i].Items.Data) // Checks if the slot is empty
                    {
                        int Idx = 0;
                        auto entry = Inventory::AddItemToSlot(Controller, WorldItemDefinition, i, EFortQuickBars::Secondary, 1, &Idx); // Params->Pickup->PrimaryPickupItemEntry.Count);
                        Params->Pickup->K2_DestroyActor();

                        Inventory::Update(Controller, Idx);

                        break;
                    }
                }
            }
        }
    }
}
