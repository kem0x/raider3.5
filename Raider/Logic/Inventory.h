#pragma once

#include "../UE4.h"
#include "Spawners.h"

namespace Inventory
{
    static void Update(AFortPlayerController* Controller, int Dirty = 0, bool bRemovedItem = false)
    {
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

    static bool IsValidGuid(AFortPlayerControllerAthena* Controller, const FGuid& Guid)
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

    static FFortItemEntry GetEntryInSlot(AFortPlayerControllerAthena* Controller, int Slot, int Item = 0, EFortQuickBars QuickBars = EFortQuickBars::Primary)
    {
        auto ret = FFortItemEntry();

        auto& ItemInstances = Controller->WorldInventory->Inventory.ItemInstances;

        FGuid ToFindGuid;

        if (QuickBars == EFortQuickBars::Primary)
        {
            ToFindGuid = Controller->QuickBars->PrimaryQuickBar.Slots[Slot].Items[Item];
        }

        else if (QuickBars == EFortQuickBars::Secondary)
        {
            ToFindGuid = Controller->QuickBars->SecondaryQuickBar.Slots[Slot].Items[Item];
        }

        for (int j = 0; j < ItemInstances.Num(); j++)
        {
            auto ItemInstance = ItemInstances[j];

            if (!ItemInstance)
                continue;

            auto Guid = ItemInstance->ItemEntry.ItemGuid;

            if (ToFindGuid == Guid)
                ret = ItemInstance->ItemEntry;
        }

        return ret;
    }

    inline auto GetDefinitionInSlot(AFortPlayerControllerAthena* Controller, int Slot, int Item = 0, EFortQuickBars QuickBars = EFortQuickBars::Primary)
    {
        return GetEntryInSlot(Controller, Slot, Item, QuickBars).ItemDefinition;
    }

    static UFortWorldItem* GetInstanceFromGuid(AController* PC, const FGuid& ToFindGuid)
    {
        auto& ItemInstances = static_cast<AFortPlayerController*>(PC)->WorldInventory->Inventory.ItemInstances;

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

    static auto AddItemToSlot(AFortPlayerControllerAthena* Controller, UFortWorldItemDefinition* Definition, int Slot, EFortQuickBars Bars = EFortQuickBars::Primary, int Count = 1, int* Idx = nullptr)
    {
        auto ret = FFortItemEntry();

        if (Definition->IsA(UFortWeaponItemDefinition::StaticClass()))
        {
            Count = 1;
        }

        if (Slot < 0)
        {
            Slot = 1;
        }

        if (Bars == EFortQuickBars::Primary && Slot >= 6)
        {
            Slot = 5;
        }

        if (auto TempItemInstance = static_cast<UFortWorldItem*>(Definition->CreateTemporaryItemInstanceBP(Count, 1)))
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

            ret = ItemEntry;
        }

        return ret;
    }

    static bool RemoveItemFromSlot(AFortPlayerControllerAthena* Controller, int Slot, EFortQuickBars Quickbars = EFortQuickBars::Primary, int Amount = -1) // -1 for all items in the slot
    {
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

    static bool IsGuidInInventory(AFortPlayerControllerAthena* Controller, const FGuid& Guid)
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

    static AFortWeapon* EquipWeaponDefinition(APawn* dPawn, UFortWeaponItemDefinition* Definition, const FGuid& Guid, int Ammo = -1, bool bEquipWithMaxAmmo = false) // don't use, use EquipInventoryItem // not too secure
    {
        AFortWeapon* Weapon = nullptr;

        auto weaponClass = Definition->GetWeaponActorClass();
        auto Pawn = static_cast<APlayerPawn_Athena_C*>(dPawn);

        if (Pawn && Definition && weaponClass)
        {
            auto Controller = static_cast<AFortPlayerControllerAthena*>(Pawn->Controller);
            auto Instance = GetInstanceFromGuid(Controller, Guid);

            if (!Inventory::IsGuidInInventory(Controller, Guid))
                return Weapon;

            if (weaponClass == ATrapTool_C::StaticClass())
            {
                Weapon = static_cast<AFortWeapon*>(Spawners::SpawnActor(weaponClass, {}, Pawn)); // Other people can't see their weapon.

                if (Weapon)
                {
                    Weapon->bReplicates = true;
                    Weapon->bOnlyRelevantToOwner = false;

                    static_cast<AFortTrapTool*>(Weapon)->ItemDefinition = Definition;
                }
            }
            else
            {
                Weapon = Pawn->EquipWeaponDefinition(Definition, Guid);
            }

            if (Weapon)
            {
                Weapon->WeaponData = Definition;
                Weapon->ItemEntryGuid = Guid;

                if (bEquipWithMaxAmmo)
                {
                    Weapon->AmmoCount = Weapon->GetBulletsPerClip();
                }
                else if (Ammo != -1)
                {
                    Weapon->AmmoCount = Instance->ItemEntry.LoadedAmmo;
                }

                Instance->ItemEntry.LoadedAmmo = Weapon->AmmoCount;

                Weapon->SetOwner(dPawn);
                Weapon->OnRep_ReplicatedWeaponData();
                Weapon->OnRep_AmmoCount();
                Weapon->ClientGivenTo(Pawn);
                Pawn->ClientInternalEquipWeapon(Weapon);
                Pawn->OnRep_CurrentWeapon(); // i dont think this is needed but alr
            }
        }

        return Weapon;
    }

    static void EquipInventoryItem(AFortPlayerControllerAthena* PC, FGuid& Guid)
    {
        if (!PC || PC->IsInAircraft())
            return;

        auto& ItemInstances = PC->WorldInventory->Inventory.ItemInstances;

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

    void EquipLoadout(AFortPlayerControllerAthena* Controller, PlayerLoadout WIDS)
    {
        FFortItemEntry pickaxeEntry;

        for (int i = 0; i < WIDS.size(); i++)
        {
            auto Def = WIDS[i];

            if (Def)
            {
                auto entry = AddItemToSlot(Controller, Def, i);
                EquipWeaponDefinition(Controller->Pawn, Def, entry.ItemGuid, -1, true); // kms

                if (i == 0)
                    pickaxeEntry = entry;
            }
        }

        EquipInventoryItem(Controller, pickaxeEntry.ItemGuid);
    }

    static bool OnDrop(AFortPlayerControllerAthena* Controller, void* params)
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
                                auto Pickup = Spawners::SummonPickup(static_cast<AFortPlayerPawn*>(Controller->Pawn), Definition, 1, Controller->Pawn->K2_GetActorLocation());
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
                                Spawners::SummonPickup(static_cast<AFortPlayerPawn*>(Controller->Pawn), Definition, 1, Controller->Pawn->K2_GetActorLocation());
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
                                    Spawners::SummonPickup(static_cast<APlayerPawn_Athena_C*>(Controller->Pawn), Def, 1 /* ItemInstance->ItemEntry.Count */, Controller->Pawn->K2_GetActorLocation());
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

    template <typename Class>
    static FFortItemEntry FindItemInInventory(AFortPlayerControllerAthena* PC, bool& bFound)
    {
        auto ret = FFortItemEntry();

        auto& ItemInstances = PC->WorldInventory->Inventory.ItemInstances;

        bFound = false;

        for (int i = 0; i < ItemInstances.Num(); i++)
        {
            auto ItemInstance = ItemInstances[i];

            if (!ItemInstance)
                continue;

            auto Def = ItemInstance->ItemEntry.ItemDefinition;

            if (Def && Def->IsA(Class::StaticClass()))
            {
                bFound = true;
                ret = ItemInstance->ItemEntry;
            }
        }

        return ret;
    }

    static void Init(AFortPlayerControllerAthena* PlayerController)
    {
        PlayerController->QuickBars = Spawners::SpawnActor<AFortQuickBars>({ -280, 400, 3000 }, PlayerController);
        PlayerController->OnRep_QuickBar();

        static std::vector<UFortWorldItemDefinition*> Items = {
            UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Wall.BuildingItemData_Wall"),
            UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Floor.BuildingItemData_Floor"),
            UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Stair_W.BuildingItemData_Stair_W"),
            UObject::FindObject<UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_RoofS.BuildingItemData_RoofS"),

            UObject::FindObject<UFortTrapItemDefinition>("FortTrapItemDefinition TID_Floor_Player_Launch_Pad_Athena.TID_Floor_Player_Launch_Pad_Athena"),
            UObject::FindObject<UFortTrapItemDefinition>("FortTrapItemDefinition TID_Wall_Electric_Athena_R_T03.TID_Wall_Electric_Athena_R_T03"),
            UObject::FindObject<UFortTrapItemDefinition>("FortTrapItemDefinition TID_Floor_Spikes_Athena_R_T03.TID_Floor_Spikes_Athena_R_T03"),
            UObject::FindObject<UFortTrapItemDefinition>("FortTrapItemDefinition TID_Floor_Player_Campfire_Athena.TID_Floor_Player_Campfire_Athena"),

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
                AddItemToSlot(PlayerController, Item, 0, EFortQuickBars::Secondary, 999);
                continue;
            }

            AddItemToSlot(PlayerController, Item, Slot, EFortQuickBars::Secondary, 1);
            Slot++;
        }

        static UFortAmmoItemDefinition* EditTool = UObject::FindObject<UFortAmmoItemDefinition>("FortEditToolItemDefinition EditTool.EditTool");
        AddItemToSlot(PlayerController, EditTool, 0, EFortQuickBars::Primary, 1);

        PlayerController->QuickBars->ServerActivateSlotInternal(EFortQuickBars::Primary, 0, 0, false);
    }
}