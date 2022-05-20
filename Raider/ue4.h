#pragma once

#include "native.h"

constexpr auto PI = 3.1415926535897932f;
constexpr auto INV_PI = 0.31830988618f;
constexpr auto HALF_PI = 1.57079632679f;

inline bool bTraveled = false;
inline bool bPlayButton = false;
inline bool bDroppedLS = false;
inline bool bListening = false;

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
    typedef TSet<TSharedPtr<FNetworkObjectInfo>> FNetworkObjectSet;

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

inline void UpdateInventory(AFortPlayerController* PlayerController, int Dirty = 0)
{
    PlayerController->WorldInventory->HandleInventoryLocalUpdate();
    PlayerController->HandleWorldInventoryLocalUpdate();
    PlayerController->OnRep_QuickBar();
    PlayerController->QuickBars->OnRep_PrimaryQuickBar();
    PlayerController->QuickBars->OnRep_SecondaryQuickBar();
    PlayerController->WorldInventory->bRequiresLocalUpdate = true;
	
    if (Dirty != 0)
        PlayerController->WorldInventory->Inventory.MarkItemDirty(PlayerController->WorldInventory->Inventory.ReplicatedEntries[Dirty]);
}

inline auto AddItemWithUpdate(AFortPlayerController* PC, UFortWorldItemDefinition* Def, int Slot, EFortQuickBars Bars = EFortQuickBars::Primary, int Count = 1)
{
    auto TempItemInstance = Def->CreateTemporaryItemInstanceBP(Count, 1);
    TempItemInstance->SetOwningControllerForTemporaryItem(PC);

    ((UFortWorldItem*)TempItemInstance)->ItemEntry.Count = Count;

    auto ItemEntry = ((UFortWorldItem*)TempItemInstance)->ItemEntry;
    ItemEntry.bIsDirty = true;

    PC->WorldInventory->Inventory.ReplicatedEntries.Add(ItemEntry);
    auto Idx = PC->WorldInventory->Inventory.ItemInstances.Add((UFortWorldItem*)TempItemInstance);
    PC->QuickBars->ServerAddItemInternal(ItemEntry.ItemGuid, Bars, Slot);

    UpdateInventory(PC, Idx);

    return ItemEntry;
}

inline auto RemoveItem(AFortPlayerController* PC, EFortQuickBars QuickBars, int Slot) // IMPORTANT TO FIX THIS
{
    if (Slot == 0 || !PC)
        return;

    auto Inventory = PC->WorldInventory->Inventory;
    // Inventory.ReplicatedEntries.RemoveAt(Slot, 1);
    // Inventory.ItemInstances.RemoveAt(Slot, 1);
	
    auto pcQuickBars = PC->QuickBars;
    pcQuickBars->EmptySlot(QuickBars, Slot);
	
	UpdateInventory(PC, Slot);
}

inline AFortWeapon* EquipWeaponDefinition(APlayerPawn_Athena_C* Pawn, UFortWeaponItemDefinition* Definition, FGuid& Guid, int Ammo = 0)
{
    // auto weaponClass = Definition->GetWeaponActorClass();
    // if (weaponClass)
    if (Pawn && Definition)
    {
        // auto Weapon = (AFortWeapon*)SpawnActorTrans(weaponClass, {}, Pawn);
        auto Weapon = Pawn->EquipWeaponDefinition(Definition, Guid);
		
        if (Weapon)
        {
            /* Weapon->ItemEntryGuid = Guid;
            Weapon->WeaponData = Definition; */
            if (Ammo == 0)
                Ammo = Weapon->GetMagazineAmmoCount();

            Weapon->AmmoCount = Ammo;
            Weapon->OnRep_ReplicatedWeaponData();
            Weapon->ClientGivenTo(Pawn);
            Pawn->ClientInternalEquipWeapon(Weapon);
            Pawn->OnRep_CurrentWeapon();
        }

        return Weapon;
    }

    return nullptr;
}

inline void EquipInventoryItem(AFortPlayerController* PC, FGuid& Guid)
{
    auto ItemInstances = PC->WorldInventory->Inventory.ItemInstances;

    for (int i = 0; i < ItemInstances.Num(); i++)
    {
        auto CurrentItemInstance = ItemInstances[i];

        if (!CurrentItemInstance)
            continue;

        auto Def = (UFortWeaponItemDefinition*)CurrentItemInstance->GetItemDefinitionBP();

        if (IsMatchingGuid(CurrentItemInstance->GetItemGuid(), Guid) && Def)
        {
            EquipWeaponDefinition((APlayerPawn_Athena_C*)PC->Pawn, Def, Guid);
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
        if (bEquip && !Params->Pickup->PrimaryPickupItemEntry.ItemDefinition->IsA(UFortWeaponItemDefinition::StaticClass()))
            bEquip = false;

        auto WorldItemDefinition = (UFortWorldItemDefinition*)Params->Pickup->PrimaryPickupItemEntry.ItemDefinition;
        auto Controller = (AFortPlayerControllerAthena*)Pawn->Controller;
        auto QuickBarSlots = Controller->QuickBars->PrimaryQuickBar.Slots;

        for (int i = 0; i < QuickBarSlots.Num(); i++)
        {
            if (QuickBarSlots[i].Items.Data)
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
                            continue;

                        auto Def = ItemInstance->ItemEntry.ItemDefinition;
                        auto Guid = ItemInstance->ItemEntry.ItemGuid;

                        if (IsMatchingGuid(FocusedGuid, Guid))
                            SummonPickup((APlayerPawn_Athena_C*)Pawn, Def, 1, Pawn->K2_GetActorLocation());
                    }

                    RemoveItem(Controller, EFortQuickBars::Primary, FocusedSlot);
                }

                auto entry = AddItemWithUpdate((AFortPlayerController*)Pawn->Controller, WorldItemDefinition, i, EFortQuickBars::Primary, Params->Pickup->PrimaryPickupItemEntry.Count);
                Params->Pickup->K2_DestroyActor(); // this does not work I have no idea why

                if (bEquip)
                    EquipWeaponDefinition((APlayerPawn_Athena_C*)Pawn, (UFortWeaponItemDefinition*)WorldItemDefinition, entry.ItemGuid);
            }
        }
    }
}

static void InitInventory(AFortPlayerController* PlayerController, bool bSpawnInventory = true)
{
    PlayerController->QuickBars = SpawnActor<AFortQuickBars>({ -280, 400, 3000 }, PlayerController);
    auto QuickBars = PlayerController->QuickBars;
    PlayerController->OnRep_QuickBar();

    if (bSpawnInventory)
    {
        PlayerController->WorldInventory = SpawnActor<AFortInventory>({ -280, 400, 3000 }, PlayerController);
        PlayerController->WorldInventory->InventoryType = EFortInventoryType::World;
        PlayerController->WorldInventory->Inventory = FFortItemList();

        PlayerController->WorldInventory->bReplicates = true;
        PlayerController->bHasInitializedWorldInventory = true;

        auto OutpostInventory = SpawnActor<AFortInventory>({}, PlayerController);
        OutpostInventory->bReplicates = true;
        OutpostInventory->InventoryType = EFortInventoryType::Outpost;
        PlayerController->OutpostInventory = OutpostInventory;
        PlayerController->HandleOutpostInventoryLocalUpdate();
    }

    // not sure if this enable stuff is acutally needed
    QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 0);
    QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 1);
    QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 2);
    QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 3);
    QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 4);
    QuickBars->ServerEnableSlot(EFortQuickBars::Secondary, 5);
    QuickBars->ServerEnableSlot(EFortQuickBars::Primary, 1);
    QuickBars->ServerEnableSlot(EFortQuickBars::Primary, 2);
    QuickBars->ServerEnableSlot(EFortQuickBars::Primary, 3);

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

    AddItemWithUpdate(PlayerController, EditTool, 0, EFortQuickBars::Primary, 1);

    QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 0, 0, true);
}

template <typename Class>
static Class* FindItemInInventory(AFortPlayerControllerAthena* PC)
{
    auto ItemInstances = PC->WorldInventory->Inventory.ItemInstances;

    for (int i = 0; i < ItemInstances.Num(); i++)
    {
        auto ItemInstance = ItemInstances[i];

        if (!ItemInstance)
            continue;

        auto Def = ItemInstance->ItemEntry.ItemDefinition;

        if (Def->IsA(Class::StaticClass()))
        {
            return (Class*)ItemInstance;
        }
    }

    return nullptr;
}

FGameplayAbilitySpec* UAbilitySystemComponent_FindAbilitySpecFromHandle(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle)
{
    auto Specs = AbilitySystemComponent->ActivatableAbilities.Items;

    for (int i = 0; i < Specs.Num(); i++)
    {
        auto Spec = Specs[i];

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

    //UAbilitySystemComponent_ConsumeAllReplicatedData(AbilitySystemComponent, AbilityToActivate, *PredictionKey);

    UGameplayAbility* InstancedAbility = nullptr;
    Spec->InputPressed = true;

    if (Native::AbilitySystemComponent::InternalTryActivateAbility(AbilitySystemComponent, AbilityToActivate, *PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
    {
        // TryActivateAbility handles notifying the client of success
    }
    else
    {
        printf("InternalServerTryActiveAbility. Rejecting ClientActivation of %s. InternalTryActivateAbility failed", Spec->Ability->GetName().c_str());
        AbilitySystemComponent->ClientActivateAbilityFailed(AbilityToActivate, PredictionKey->Current);
        Spec->InputPressed = false;
        return;
    }

    Native::AbilitySystemComponent::MarkAbilitySpecDirty(AbilitySystemComponent, *Spec);
}

static auto GrantGameplayAbility(APlayerPawn_Athena_C* TargetPawn, UClass* GameplayAbilityClass)
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
    auto Handle = Native::AbilitySystemComponent::GiveAbility(AbilitySystemComponent, &Spec.Handle, Spec);
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
                RemoveItem(Controller, EFortQuickBars::Primary, i);
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

static bool KickPlayer(AFortPlayerControllerAthena* PC, FString Message)
{
    FText text = reinterpret_cast<UKismetTextLibrary*>(UKismetTextLibrary::StaticClass())->STATIC_Conv_StringToText(Message);
    return Native::OnlineSession::KickPlayer(GetWorld()->AuthorityGameMode->GameSession, PC, text);
}

FTransform GetPlayerStart(AFortPlayerControllerAthena* PC, FString IncomingName = L"")
{
    /* const TArray<AActor*> OutActors(150);
    std::cout << "a\n";
    GetGameplayStatics()->STATIC_GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), &OutActors);

    auto ActorsNum = OutActors.Num();
    std::cout << "Num: " << ActorsNum << '\n';

    auto ActorToUseNum = rand() % ActorsNum;
    auto ActorToUse = (OutActors)[ActorToUseNum];

    if (!ActorToUse)
        std::cout << "Invalid Actor!\n";
    else
        std::cout << "Valid Actor!\n";

	while (!ActorToUse)
    {
        ActorToUseNum = rand() % ActorsNum;
		ActorToUse = (OutActors)[ActorToUseNum];
    } */

    auto SpawnTransform = FTransform();
    SpawnTransform.Scale3D = FVector(1, 1, 1);
    SpawnTransform.Rotation = FQuat();
    SpawnTransform.Translation = FVector { 1250, 1818, 3284 };
    // SpawnTransform.Translation = ActorToUse->K2_GetActorLocation();
	
    return SpawnTransform;
	
    // return (GetWorld()->AuthorityGameMode->FindPlayerStart(PC, IncomingName))->K2_GetActorLocation();
}

static void InitPawn(AFortPlayerControllerAthena* PlayerController, FVector Loc = FVector { 1250, 1818, 3284 }, FQuat Rotation = FQuat())
{
    auto SpawnTransform = FTransform();
    SpawnTransform.Scale3D = FVector(1, 1, 1);
    SpawnTransform.Rotation = Rotation;
    SpawnTransform.Translation = Loc;

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

    static auto FortRegisteredPlayerInfo = UObject::FindObject<UFortRegisteredPlayerInfo>("FortRegisteredPlayerInfo Transient.FortEngine_0_1.FortGameInstance_0_1.FortRegisteredPlayerInfo_0_1");

    auto Hero = FortRegisteredPlayerInfo->AthenaMenuHeroDef;

    PlayerController->StrongMyHero = Hero;

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