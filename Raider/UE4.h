#pragma once

#include <unordered_set>
#include <random>

#include "Util.h"
#include "json.hpp"
#include "Native.h"

typedef std::array<UFortWeaponRangedItemDefinition*, 6> PlayerLoadout;

inline bool bTraveled = false;
inline bool bPlayButton = false;
inline bool bListening = false;
static bool bSpawnedFloorLoot = false;

static std::unordered_set<ABuildingSMActor*> Buildings;
static AFortOnlineBeaconHost* HostBeacon = nullptr;

inline UWorld* GetWorld()
{
    return GetEngine()->GameViewport->World;
}

inline AAthena_PlayerController_C* GetPlayerController(int32 Index = 0)
{
    if (Index > GetWorld()->OwningGameInstance->LocalPlayers.Num())
    {
        return static_cast<AAthena_PlayerController_C*>(GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController);
    }

    return static_cast<AAthena_PlayerController_C*>(GetWorld()->OwningGameInstance->LocalPlayers[Index]->PlayerController);
}

struct FObjectKey
{
public:
    UObject* ResolveObjectPtr() const
    {
        FWeakObjectPtr WeakPtr;
        WeakPtr.ObjectIndex = ObjectIndex;
        WeakPtr.ObjectSerialNumber = ObjectSerialNumber;

        return WeakPtr.Get();
    }

    int32 ObjectIndex;
    int32 ObjectSerialNumber;
};

FORCEINLINE auto& GetClassRepNodePolicies(UObject* ReplicationDriver)
{
    return *reinterpret_cast<TMap<FObjectKey, EClassRepNodeMapping>*>(__int64(ReplicationDriver) + 0x3B8);
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
    SpawnTransform.Scale3D = FVector { 1, 1, 1 };
    SpawnTransform.Rotation = Utils::RotToQuat(Rotation);

    return SpawnActorTrans(ActorClass, SpawnTransform, Owner, Flags);
}

template <typename RetActorType = AActor>
RetActorType* SpawnActor(FVector Location = { 0.0f, 0.0f, 0.0f }, AActor* Owner = nullptr, FQuat Rotation = { 0, 0, 0 }, ESpawnActorCollisionHandlingMethod Flags = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn)
{
    FTransform SpawnTransform;

    SpawnTransform.Translation = Location;
    SpawnTransform.Scale3D = FVector { 1, 1, 1 };
    SpawnTransform.Rotation = Rotation;

    return static_cast<RetActorType*>(SpawnActorTrans(RetActorType::StaticClass(), SpawnTransform, Owner, Flags));
}

inline ABuildingSMActor* SpawnBuilding(UClass* BGAClass, FVector& Location, FRotator& Rotation, APlayerPawn_Athena_C* Pawn)
{
    FTransform Transform;
    Transform.Translation = Location;
    Transform.Scale3D = FVector { 1, 1, 1 };
    Transform.Rotation = Utils::RotToQuat(Rotation);

    return (ABuildingSMActor*)GetFortKismet()->STATIC_SpawnBuildingGameplayActor(BGAClass, Transform, Pawn);
}

inline void CreateConsole()
{
    GetEngine()->GameViewport->ViewportConsole = static_cast<UConsole*>(GetGameplayStatics()->STATIC_SpawnObject(UConsole::StaticClass(), GetEngine()->GameViewport));
}

inline auto CreateCheatManager(APlayerController* Controller)
{
    if (!Controller->CheatManager)
    {
        Controller->CheatManager = static_cast<UCheatManager*>(GetGameplayStatics()->STATIC_SpawnObject(UFortCheatManager::StaticClass(), Controller)); // lets just assume its gamemode athena
    }

    return static_cast<UFortCheatManager*>(Controller->CheatManager);
}

bool CanBuild(ABuildingSMActor* BuildingActor)
{
    /*
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

        if (Building->K2_GetActorLocation() == BuildingActor->K2_GetActorLocation()) // If we use a vector of locations, I do not know how to track if the actor has been destroyed. // Maybe we could use a map so we dont get the location everytime
        {
            // if (!BuildingClass->IsA(APBWA_W1_StairW_C::StaticClass()) || (BuildingClass->IsA(APBWA_W1_StairW_C::StaticClass()) && Building->BuildingType == EFortBuildingType::Stairs))
            {
                return false;
            }
        }
    }

    return true;
}

bool CanBuild2(ABuildingSMActor* BuildingActor)
{
    static auto GameState = reinterpret_cast<AAthena_GameState_C*>(GetWorld()->GameState);

    TArray<ABuildingActor*> ExistingBuildings;
    EFortStructuralGridQueryResults bCanBuild = GameState->StructuralSupportSystem->K2_CanAddBuildingActorToGrid(GetWorld(), BuildingActor, BuildingActor->K2_GetActorLocation(), BuildingActor->K2_GetActorRotation(), false, false, &ExistingBuildings);

    if (bCanBuild == EFortStructuralGridQueryResults::CanAdd || ExistingBuildings.Num() == 0)
        return true;

    return false;
}

inline FFortItemEntry GetEntryInSlot(AFortPlayerControllerAthena* Controller, int Slot, int Item = 0, EFortQuickBars QuickBars = EFortQuickBars::Primary)
{
    if (!Controller)
        return FFortItemEntry();

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

        auto Guid = ItemInstance->ItemEntry.ItemGuid;

        if (ToFindGuid == Guid)
            return ItemInstance->ItemEntry;
    }

    return FFortItemEntry();
}

bool IsCurrentlyDisconnecting(UNetConnection* Connection)
{
    return false;
}

void SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC)
{
    if (OldPC && NewPC && OldPC->Player)
    {
        NewPC->NetPlayerIndex = OldPC->NetPlayerIndex;
        NewPC->NetConnection = OldPC->NetConnection;

        GetWorld()->AuthorityGameMode->K2_OnSwapPlayerControllers(OldPC, NewPC);

        OldPC->PendingSwapConnection = reinterpret_cast<UNetConnection*>(OldPC->Player);
    }
}

void Spectate(UNetConnection* SpectatingConnection, AFortPlayerStateAthena* StateToSpectate)
{
    if (!SpectatingConnection || !StateToSpectate)
        return;

    auto PawnToSpectate = StateToSpectate->GetCurrentPawn();
    auto DeadPC = static_cast<AFortPlayerControllerAthena*>(SpectatingConnection->PlayerController);

    if (!DeadPC)
        return;

    auto DeadPlayerState = static_cast<AFortPlayerStateAthena*>(DeadPC->PlayerState);

    if (!IsCurrentlyDisconnecting(SpectatingConnection) && DeadPlayerState && PawnToSpectate)
    {
        //ABP_SpectatorPC_C and ABP_SpectatorPawn_C stuff are for live spectating not for normal spectating.
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

    if (bRemovedItem)
        PlayerController->WorldInventory->Inventory.MarkArrayDirty();
}

inline auto AddItem(AFortPlayerController* PC, UFortItemDefinition* Def, int Slot, EFortQuickBars Bars = EFortQuickBars::Primary, int Count = 1)
{
    if (!PC || !Def)
        return FFortItemEntry();

    if (Def->IsA(UFortWeaponItemDefinition::StaticClass()))
        Count = 1;

    if (Slot < 0)
        Slot = 1;

    if (Bars == EFortQuickBars::Primary && Slot >= 6)
        Slot = 5;

    auto TempItemInstance = static_cast<UFortWorldItem*>(Def->CreateTemporaryItemInstanceBP(Count, 1));

    if (TempItemInstance)
    {
        TempItemInstance->SetOwningControllerForTemporaryItem(PC);

        TempItemInstance->ItemEntry.Count = Count;
        TempItemInstance->OwnerInventory = PC->WorldInventory;

        auto& ItemEntry = TempItemInstance->ItemEntry;

        auto Idx = PC->WorldInventory->Inventory.ReplicatedEntries.Add(ItemEntry);

        GetItemInstances(PC).Add(TempItemInstance);
        PC->QuickBars->ServerAddItemInternal(ItemEntry.ItemGuid, Bars, Slot);

        if (Idx && PC->WorldInventory->Inventory.ReplicatedEntries.Num() >= Idx)
            PC->WorldInventory->Inventory.MarkItemDirty(PC->WorldInventory->Inventory.ReplicatedEntries[Idx]);

        return ItemEntry;
    }

    return FFortItemEntry();
}

inline auto AddItemWithUpdate(AFortPlayerController* PC, UFortItemDefinition* Def, int Slot, EFortQuickBars Bars = EFortQuickBars::Primary, int Count = 1)
{
    auto ItemEntry = AddItem(PC, Def, Slot, Bars, Count);

    UpdateInventory(PC);

    return ItemEntry;
}

inline UFortWorldItem* GetInstanceFromGuid(AController* PC, const FGuid& ToFindGuid)
{
    auto& ItemInstances = GetItemInstances(static_cast<AFortPlayerController*>(PC));
    for (int j = 0; j < ItemInstances.Num(); j++)
    {
        auto ItemInstance = ItemInstances[j];

        if (!ItemInstance)
            continue;

        auto Guid = ItemInstance->ItemEntry.ItemGuid;

        if (ToFindGuid == Guid)
        {
            return ItemInstance;
        }
    }

    return nullptr;
}

inline FFortItemEntry GetEntryFromGuid(AController* PC, const FGuid& ToFindGuid)
{
    return GetInstanceFromGuid(PC, ToFindGuid)->ItemEntry;
}

inline UFortItemDefinition* GetDefInSlot(AFortPlayerControllerAthena* PC, int Slot, int Item = 0)
{
    return GetEntryFromGuid(PC, PC->QuickBars->PrimaryQuickBar.Slots[Slot].Items[Item]).ItemDefinition;
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

inline AFortWeapon* EquipWeaponDefinition(APawn* dPawn, UFortWeaponItemDefinition* Definition, const FGuid& Guid, int Ammo = -1, bool bEquipWithMaxAmmo = false) // don't use, use EquipInventoryItem // not too secure
{
    auto weaponClass = Definition->GetWeaponActorClass();
    auto Pawn = static_cast<APlayerPawn_Athena_C*>(dPawn);
    if (Pawn && Definition && weaponClass)
    {
        auto Controller = static_cast<AFortPlayerControllerAthena*>(Pawn->Controller);
        auto Instance = GetInstanceFromGuid(Controller, Guid);

        if (!IsGuidInInventory(Controller, Guid))
            return nullptr;

        AFortWeapon* Weapon = nullptr;

        // we have to do this for the traptool idk why

        if (weaponClass->GetFullName() == "BlueprintGeneratedClass TrapTool.TrapTool_C") // (weaponClass->IsA(AFortTrapTool::StaticClass()))
        {
            Weapon = static_cast<AFortWeapon*>(SpawnActorTrans(weaponClass, {}, Pawn)); // Other people can't see their weapon.

            if (Weapon)
            {
                Weapon->bReplicates = true;
                Weapon->bOnlyRelevantToOwner = false;

                static_cast<AFortTrapTool*>(Weapon)->ItemDefinition = Definition;
            }
        }

        else
            Weapon = Pawn->EquipWeaponDefinition(Definition, Guid);

        if (Weapon)
        {
            Weapon->WeaponData = Definition;
            Weapon->ItemEntryGuid = Guid;

            if (bEquipWithMaxAmmo)
                Weapon->AmmoCount = Weapon->GetBulletsPerClip();
            else if (Ammo != -1)
                Weapon->AmmoCount = Instance->ItemEntry.LoadedAmmo;

            Instance->ItemEntry.LoadedAmmo = Weapon->AmmoCount;

            Weapon->SetOwner(dPawn);
            Weapon->OnRep_ReplicatedWeaponData();
            Weapon->OnRep_AmmoCount();
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

        auto Def = static_cast<UFortWeaponItemDefinition*>(CurrentItemInstance->GetItemDefinitionBP());

        if (CurrentItemInstance->GetItemGuid() == Guid && Def)
        {
            EquipWeaponDefinition(PC->Pawn, Def, Guid); // CurrentItemInstance->ItemEntry.LoadedAmmo);
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

void SpawnPickupFromFloorLoot(auto ItemDef, int Count, FVector Location)
{
    auto FortPickup = SpawnActor<AFortPickup>(Location);

    FortPickup->bReplicates = true; // should be autmoatic but eh

    FortPickup->PrimaryPickupItemEntry.Count = Count;
    FortPickup->PrimaryPickupItemEntry.ItemDefinition = ItemDef;

    FortPickup->OnRep_PrimaryPickupItemEntry();
}

static void InitInventory(AFortPlayerController* PlayerController)
{
    PlayerController->QuickBars = SpawnActor<AFortQuickBars>({ -280, 400, 3000 }, PlayerController);
    PlayerController->OnRep_QuickBar();

    static std::vector<UFortWorldItemDefinition*> Items = {
        UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Wall.BuildingItemData_Wall"),
        UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Floor.BuildingItemData_Floor"),
        UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Stair_W.BuildingItemData_Stair_W"),
        UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_RoofS.BuildingItemData_RoofS"),

        UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition WoodItemData.WoodItemData"),
        UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition StoneItemData.StoneItemData"),
        UObject::FindObject<UFortResourceItemDefinition>("FortResourceItemDefinition MetalItemData.MetalItemData"),

        UObject::FindObject<UFortAmmoItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataShells.AthenaAmmoDataShells"),
        UObject::FindObject<UFortAmmoItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataEnergyCell.AthenaAmmoDataEnergyCell"),
        UObject::FindObject<UFortAmmoItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium"),
        UObject::FindObject<UFortAmmoItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight"),
        UObject::FindObject<UFortAmmoItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsHeavy.AthenaAmmoDataBulletsHeavy"),
        UObject::FindObject<UFortAmmoItemDefinition>("FortAmmoItemDefinition AmmoDataRockets.AmmoDataRockets"),
    };

    int Slot = 0;
    for (auto& Item : Items)
    {
        if (Item->IsA(UFortAmmoItemDefinition::StaticClass()) || Item->IsA(UFortResourceItemDefinition::StaticClass()))
        {
            AddItem(PlayerController, Item, 0, EFortQuickBars::Secondary, 999);
            continue;
        }

        AddItem(PlayerController, Item, Slot, EFortQuickBars::Secondary, 1);
        Slot++;
    }

    static UFortAmmoItemDefinition* EditTool = UObject::FindObject<UFortAmmoItemDefinition>("FortEditToolItemDefinition EditTool.EditTool");
    AddItemWithUpdate(PlayerController, EditTool, 0, EFortQuickBars::Primary, 1);

    PlayerController->QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 0, 0, false);
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
        LOG_WARN("InternalServerTryActiveAbility. Rejecting ClientActivation of ability with invalid SpecHandle!");
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
        LOG_WARN("InternalServerTryActiveAbility. Rejecting ClientActivation of {}. InternalTryActivateAbility failed!", Spec->Ability->GetName());
        AbilitySystemComponent->ClientActivateAbilityFailed(AbilityToActivate, PredictionKey->Current);
        Spec->InputPressed = false;

        return;
    }

    Native::AbilitySystemComponent::MarkAbilitySpecDirty(AbilitySystemComponent, *Spec);
}

void GrantGameplayAbility(APlayerPawn_Athena_C* TargetPawn, UClass* GameplayAbilityClass)
{
    auto AbilitySystemComponent = TargetPawn->AbilitySystemComponent;

    if (!AbilitySystemComponent)
        return;

    auto GenerateNewSpec = [&]() -> FGameplayAbilitySpec
    {
        FGameplayAbilitySpecHandle Handle { rand() };

        FGameplayAbilitySpec Spec { -1, -1, -1, Handle, (UGameplayAbility*)GameplayAbilityClass->CreateDefaultObject(), 1, -1, nullptr, 0, false, false, false };

        return Spec;
    };

    auto Spec = GenerateNewSpec();

    for (int i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); i++)
    {
        auto& CurrentSpec = AbilitySystemComponent->ActivatableAbilities.Items[i];

        if (CurrentSpec.Ability == Spec.Ability)
            return;
    }

    Native::AbilitySystemComponent::GiveAbility(AbilitySystemComponent, &Spec.Handle, Spec);
    return;
}

static bool KickController(APlayerController* PC, FString Message)
{
    if (PC && Message.Data)
    {
        FText text = reinterpret_cast<UKismetTextLibrary*>(UKismetTextLibrary::StaticClass())->STATIC_Conv_StringToText(Message);
        return Native::OnlineSession::KickPlayer(GetWorld()->AuthorityGameMode->GameSession, PC, text);
    }

    return false;
}

// template <typename SoftType>
UObject* SoftObjectToObject(TSoftObjectPtr<UObject*> SoftPtr)
{
    static auto KismetSystem = GetKismetSystem();
    static auto fn = UObject::FindObject<UFunction>("Function Engine.KismetSystemLibrary.Conv_SoftClassReferenceToClass");

    struct
    {
        TSoftObjectPtr<UObject*> SoftClassReference;
        UObject* Class;
    } params;

    params.SoftClassReference = SoftPtr;

    auto flags = fn->FunctionFlags;
    fn->FunctionFlags |= 0x400;

    ProcessEvent(KismetSystem, fn, &params);

    fn->FunctionFlags = flags;

    return params.Class;
}

auto GetAllActorsOfClass(UClass* Class)
{
    // You have to free this!!!
    TArray<AActor*> OutActors;

    static auto GameplayStatics = static_cast<UGameplayStatics*>(UGameplayStatics::StaticClass()->CreateDefaultObject());
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
    SpawnTransform.Translation = FVector { 1250, 1818, 3284 }; // Next to salty

    auto GamePhase = static_cast<AAthena_GameState_C*>(GetWorld()->GameState)->GamePhase;

    if (ActorsNum != 0 && (GamePhase == EAthenaGamePhase::Setup || GamePhase == EAthenaGamePhase::Warmup))
    {
        auto ActorToUseNum = Utils::RandomIntInRange(0, ActorsNum);
        auto ActorToUse = (OutActors)[ActorToUseNum];

        while (!ActorToUse)
        {
            ActorToUseNum = Utils::RandomIntInRange(0, ActorsNum);
            ActorToUse = (OutActors)[ActorToUseNum];
        }

        SpawnTransform.Translation = ActorToUse->K2_GetActorLocation();

        PC->WarmupPlayerStart = static_cast<AFortPlayerStartWarmup*>(ActorToUse);
    }

    OutActors.FreeArray();

    return SpawnTransform;
}

inline UKismetMathLibrary* GetMath()
{
    return (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();
}

FVector RotToVec(const FRotator& Rotator)
{
    float CP, SP, CY, SY;
    Utils::sinCos(&SP, &CP, GetMath()->STATIC_DegreesToRadians(Rotator.Pitch));
    Utils::sinCos(&SY, &CY, GetMath()->STATIC_DegreesToRadians(Rotator.Yaw));
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
    static auto EmoteAbility = UObject::FindClass("BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C");
    static auto TrapAbility = UObject::FindClass("BlueprintGeneratedClass GA_TrapBuildGeneric.GA_TrapBuildGeneric_C");
    static auto DanceGrenadeAbility = UObject::FindClass("BlueprintGeneratedClass GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C");

    GrantGameplayAbility(Pawn, SprintAbility);
    GrantGameplayAbility(Pawn, ReloadAbility);
    GrantGameplayAbility(Pawn, RangedWeaponAbility);
    GrantGameplayAbility(Pawn, JumpAbility);
    GrantGameplayAbility(Pawn, DeathAbility);
    GrantGameplayAbility(Pawn, InteractUseAbility);
    GrantGameplayAbility(Pawn, InteractSearchAbility);
    GrantGameplayAbility(Pawn, EmoteAbility);
    GrantGameplayAbility(Pawn, TrapAbility);
    GrantGameplayAbility(Pawn, DanceGrenadeAbility);
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

void EquipLoadout(AFortPlayerControllerAthena* Controller, PlayerLoadout WIDS)
{
    FFortItemEntry pickaxeEntry;

    for (int i = 0; i < WIDS.size(); i++)
    {
        auto Def = WIDS[i];

        if (Def)
        {
            auto entry = AddItemWithUpdate(Controller, Def, i);
            EquipWeaponDefinition(Controller->Pawn, Def, entry.ItemGuid, -1, true); // kms

            if (i == 0)
                pickaxeEntry = entry;
        }
    }

    EquipInventoryItem(Controller, pickaxeEntry.ItemGuid);
}

auto GetRandomWID(int skip = 0)
{
    if (skip == 0)
        skip = Utils::RandomIntInRange(4, 100);

    return UObject::FindObject<UFortWeaponRangedItemDefinition>("FortWeaponRangedItemDefinition WID_", skip);
}

DWORD WINAPI SummonFloorLoot(LPVOID)
{
    if (!bSpawnedFloorLoot)
    {
        static auto FloorLootClass = UObject::FindObject<UClass>("BlueprintGeneratedClass Tiered_Athena_FloorLoot_01.Tiered_Athena_FloorLoot_01_C");

        if (!FloorLootClass) // your summoning it too early
            return 1;

        static auto Scar = FindWID("WID_Assault_AutoHigh_Athena_SR_Ore_T03");
        auto FloorLootActors = GetAllActorsOfClass(FloorLootClass);

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

            if constexpr (false) // (auto Ammo = weaponToSpawn->GetAmmoWorldItemDefinition_BP())
                SpawnPickupFromFloorLoot(nullptr, 10, Location); // Crashes sometimes idk why
        }
    }

    bSpawnedFloorLoot = true;

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

    inline auto GetDefinitionInSlot(AFortPlayerControllerAthena* Controller, int Slot, int Item = 0, EFortQuickBars QuickBars = EFortQuickBars::Primary)
    {
        return GetEntryInSlot(Controller, Slot, Item, QuickBars).ItemDefinition;
    }

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

        auto TempItemInstance = static_cast<UFortWorldItem*>(Definition->CreateTemporaryItemInstanceBP(Count, 1));

        if (TempItemInstance)
        {
            TempItemInstance->SetOwningControllerForTemporaryItem(Controller);

            TempItemInstance->ItemEntry.Count = Count;
            TempItemInstance->OwnerInventory = Controller->WorldInventory;

            auto& ItemEntry = TempItemInstance->ItemEntry;

            auto _Idx = Controller->WorldInventory->Inventory.ReplicatedEntries.Add(ItemEntry);

            if (Idx)
                *Idx = _Idx;

            Controller->WorldInventory->Inventory.ItemInstances.Add(TempItemInstance);
            Controller->QuickBars->ServerAddItemInternal(ItemEntry.ItemGuid, Bars, Slot);

            Update(Controller, _Idx);

            return ItemEntry;
        }

        return FFortItemEntry();
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

        Update(Controller, 0, true);

        return bWasSuccessful;
    }

    inline bool OnDrop(AFortPlayerControllerAthena* Controller, void* params)
    {
        auto Params = static_cast<AFortPlayerController_ServerAttemptInventoryDrop_Params*>(params);

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
                        auto Instance = GetInstanceFromGuid(Controller, Params->ItemGuid);

                        if (Instance)
                        {
                            auto Definition = Instance->ItemEntry.ItemDefinition;
                            auto SuccessfullyRemoved = RemoveItemFromSlot(Controller, i, EFortQuickBars::Primary, j + 1);

                            if (Definition && SuccessfullyRemoved)
                            {
                                auto Pickup = SummonPickup(static_cast<AFortPlayerPawn*>(Controller->Pawn), Definition, 1, Controller->Pawn->K2_GetActorLocation());
                                Pickup->PrimaryPickupItemEntry.LoadedAmmo = Instance->GetLoadedAmmo();
                                bWasSuccessful = true;
                                break;
                            }

                            LOG_ERROR("Couldn't find a definition for the dropped item!");
                        }
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
                            auto Definition = GetDefinitionInSlot(Controller, i, j, EFortQuickBars::Secondary);
                            auto bSucceeded = RemoveItemFromSlot(Controller, i, EFortQuickBars::Secondary, j + 1);

                            if (Definition && bSucceeded)
                            {
                                SummonPickup(static_cast<AFortPlayerPawn*>(Controller->Pawn), Definition, 1, Controller->Pawn->K2_GetActorLocation());
                                bWasSuccessful = true;
                                break;
                            }
                            LOG_ERROR("Couldn't find a definition for the dropped item!");
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
        auto Params = static_cast<AFortPlayerPawn_ServerHandlePickup_Params*>(params);

        if (!Controller || !Params)
            return;

        auto& ItemInstances = Controller->WorldInventory->Inventory.ItemInstances;

        if (Params->Pickup)
        {
            bool bCanGoInSecondary = true; // there is no way this is how you do it // todo: rename

            if (Params->Pickup->PrimaryPickupItemEntry.ItemDefinition->IsA(UFortWeaponItemDefinition::StaticClass()) && !Params->Pickup->PrimaryPickupItemEntry.ItemDefinition->IsA(UFortDecoItemDefinition::StaticClass()))
                bCanGoInSecondary = false;

            auto WorldItemDefinition = static_cast<UFortWorldItemDefinition*>(Params->Pickup->PrimaryPickupItemEntry.ItemDefinition);

            if (!bCanGoInSecondary)
            {
                auto& PrimaryQuickBarSlots = Controller->QuickBars->PrimaryQuickBar.Slots;

                for (int i = 1; i < PrimaryQuickBarSlots.Num(); i++)
                {
                    if (!PrimaryQuickBarSlots[i].Items.Data) // Checks if the slot is empty
                    {
                        if (Params->Pickup->IsActorBeingDestroyed() || Params->Pickup->bPickedUp)
                            return;

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
                                    // if (Params->Pickup->MultiItemPickupEntries)
                                    SummonPickup(static_cast<APlayerPawn_Athena_C*>(Controller->Pawn), Def, 1 /* ItemInstance->ItemEntry.Count */, Controller->Pawn->K2_GetActorLocation());
                                    break;
                                }
                            }

                            RemoveItemFromSlot(Controller, FocusedSlot, EFortQuickBars::Primary);
                        }

                        int Idx = 0;
                        auto entry = AddItemToSlot(Controller, WorldItemDefinition, i, EFortQuickBars::Primary, Params->Pickup->PrimaryPickupItemEntry.Count, &Idx);
                        // auto& Entry = Controller->WorldInventory->Inventory.ReplicatedEntries[Idx];
                        auto Instance = GetInstanceFromGuid(Controller, entry.ItemGuid);
                        Params->Pickup->K2_DestroyActor();

                        Params->Pickup->bPickedUp = true;
                        Params->Pickup->OnRep_bPickedUp();

                        Instance->ItemEntry.LoadedAmmo = Params->Pickup->PrimaryPickupItemEntry.LoadedAmmo;

                        Update(Controller);

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
                        auto entry = AddItemToSlot(Controller, WorldItemDefinition, i, EFortQuickBars::Secondary, Params->Pickup->PrimaryPickupItemEntry.Count);
                        Params->Pickup->K2_DestroyActor();

                        break;
                    }
                }
            }
        }
    }
}

void SpawnDeco(AFortDecoTool* Tool, void* _Params)
{
    if (!_Params)
        return;

    auto Params = static_cast<AFortDecoTool_ServerSpawnDeco_Params*>(_Params);

    FTransform Transform {};
    Transform.Scale3D = FVector(1, 1, 1);
    Transform.Rotation = Utils::RotToQuat(Params->Rotation);
    Transform.Translation = Params->Location;

    auto TrapDef = static_cast<UFortTrapItemDefinition*>(Tool->ItemDefinition);

    if (TrapDef)
    {
        auto Trap = static_cast<ABuildingTrap*>(SpawnActorTrans(TrapDef->GetBlueprintClass(), Transform));

        if (Trap)
        {
            Trap->TrapData = TrapDef;

            auto Pawn = static_cast<APlayerPawn_Athena_C*>(Tool->Owner);

            Trap->InitializeKismetSpawnedBuildingActor(Trap, static_cast<AFortPlayerController*>(Pawn->Controller));

            Trap->AttachedTo = Params->AttachedActor;
            Trap->OnRep_AttachedTo();

            auto TrapAbilitySet = Trap->AbilitySet;

            for (int i = 0; i < TrapAbilitySet->GameplayAbilities.Num(); i++) // this fixes traps crashing the game // don't ask how
            {
                auto Ability = TrapAbilitySet->GameplayAbilities[i];

                if (!Ability)
                    continue;

                GrantGameplayAbility(Pawn, Ability);
            }
        }
    }
}
