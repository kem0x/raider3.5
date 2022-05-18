// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetRemainingAmmoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            RemainingAmmoCount             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CurrentAmmoText                (Parm, OutParm)

void UAthenaEquippedItemWidget_C::GetRemainingAmmoText(int RemainingAmmoCount, struct FText* CurrentAmmoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetRemainingAmmoText");

	UAthenaEquippedItemWidget_C_GetRemainingAmmoText_Params params;
	params.RemainingAmmoCount = RemainingAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAmmoText != nullptr)
		*CurrentAmmoText = params.CurrentAmmoText;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetCurrentAmmoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            CurrentAmmoCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CurrentAmmoText                (Parm, OutParm)

void UAthenaEquippedItemWidget_C::GetCurrentAmmoText(int CurrentAmmoCount, struct FText* CurrentAmmoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.GetCurrentAmmoText");

	UAthenaEquippedItemWidget_C_GetCurrentAmmoText_Params params;
	params.CurrentAmmoCount = CurrentAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAmmoText != nullptr)
		*CurrentAmmoText = params.CurrentAmmoText;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateWidgetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasAmmo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::UpdateWidgetColor(bool HasAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UpdateWidgetColor");

	UAthenaEquippedItemWidget_C_UpdateWidgetColor_Params params;
	params.HasAmmo = HasAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ResourceCountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           ResourceCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::ResourceCountChanged(int* ResourceCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ResourceCountChanged");

	UAthenaEquippedItemWidget_C_ResourceCountChanged_Params params;
	params.ResourceCount = ResourceCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.AmmoTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortWeaponRanged**      RangedWeapon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWorldItemDefinition** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::AmmoTypeChanged(class AFortWeaponRanged** RangedWeapon, class UFortWorldItemDefinition** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.AmmoTypeChanged");

	UAthenaEquippedItemWidget_C_AmmoTypeChanged_Params params;
	params.RangedWeapon = RangedWeapon;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ResourceTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortResourceItemDefinition** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ResourceCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::ResourceTypeChanged(class UFortResourceItemDefinition** Item, int* ResourceCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ResourceTypeChanged");

	UAthenaEquippedItemWidget_C_ResourceTypeChanged_Params params;
	params.Item = Item;
	params.ResourceCount = ResourceCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.WeaponTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEquippedWeaponDisplay*        Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::WeaponTypeChanged(EEquippedWeaponDisplay* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.WeaponTypeChanged");

	UAthenaEquippedItemWidget_C_WeaponTypeChanged_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.HasAmmoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bHasAmmo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::HasAmmoChanged(bool* bHasAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.HasAmmoChanged");

	UAthenaEquippedItemWidget_C_HasAmmoChanged_Params params;
	params.bHasAmmo = bHasAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.AmmoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           MagazineAmmoCount              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           BackupAmmoCount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TotalRemaining                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::AmmoChanged(int* MagazineAmmoCount, int* BackupAmmoCount, int* TotalRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.AmmoChanged");

	UAthenaEquippedItemWidget_C_AmmoChanged_Params params;
	params.MagazineAmmoCount = MagazineAmmoCount;
	params.BackupAmmoCount = BackupAmmoCount;
	params.TotalRemaining = TotalRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UtilityItemCountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Remaining                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::UtilityItemCountChanged(int* Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UtilityItemCountChanged");

	UAthenaEquippedItemWidget_C_UtilityItemCountChanged_Params params;
	params.Remaining = Remaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UtilityItemTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortWeapon**            Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWeaponItemDefinition** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::UtilityItemTypeChanged(class AFortWeapon** Weapon, class UFortWeaponItemDefinition** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.UtilityItemTypeChanged");

	UAthenaEquippedItemWidget_C_UtilityItemTypeChanged_Params params;
	params.Weapon = Weapon;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ExecuteUbergraph_AthenaEquippedItemWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaEquippedItemWidget_C::ExecuteUbergraph_AthenaEquippedItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEquippedItemWidget.AthenaEquippedItemWidget_C.ExecuteUbergraph_AthenaEquippedItemWidget");

	UAthenaEquippedItemWidget_C_ExecuteUbergraph_AthenaEquippedItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
