// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBacchusEquippedItemReloadWidget_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.OnTouchStarted");

	UBacchusEquippedItemReloadWidget_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.GetRemainingAmmoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            RemainingAmmoCount             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CurrentAmmoText                (Parm, OutParm)

void UBacchusEquippedItemReloadWidget_C::GetRemainingAmmoText(int RemainingAmmoCount, struct FText* CurrentAmmoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.GetRemainingAmmoText");

	UBacchusEquippedItemReloadWidget_C_GetRemainingAmmoText_Params params;
	params.RemainingAmmoCount = RemainingAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAmmoText != nullptr)
		*CurrentAmmoText = params.CurrentAmmoText;
}


// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.GetCurrentAmmoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            CurrentAmmoCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CurrentAmmoText                (Parm, OutParm)

void UBacchusEquippedItemReloadWidget_C::GetCurrentAmmoText(int CurrentAmmoCount, struct FText* CurrentAmmoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.GetCurrentAmmoText");

	UBacchusEquippedItemReloadWidget_C_GetCurrentAmmoText_Params params;
	params.CurrentAmmoCount = CurrentAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAmmoText != nullptr)
		*CurrentAmmoText = params.CurrentAmmoText;
}


// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.UpdateWidgetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasAmmo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusEquippedItemReloadWidget_C::UpdateWidgetColor(bool HasAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.UpdateWidgetColor");

	UBacchusEquippedItemReloadWidget_C_UpdateWidgetColor_Params params;
	params.HasAmmo = HasAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.ResourceCountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           ResourceCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusEquippedItemReloadWidget_C::ResourceCountChanged(int* ResourceCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.ResourceCountChanged");

	UBacchusEquippedItemReloadWidget_C_ResourceCountChanged_Params params;
	params.ResourceCount = ResourceCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.AmmoTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortWeaponRanged**      RangedWeapon                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWorldItemDefinition** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusEquippedItemReloadWidget_C::AmmoTypeChanged(class AFortWeaponRanged** RangedWeapon, class UFortWorldItemDefinition** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.AmmoTypeChanged");

	UBacchusEquippedItemReloadWidget_C_AmmoTypeChanged_Params params;
	params.RangedWeapon = RangedWeapon;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.ResourceTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortResourceItemDefinition** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ResourceCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusEquippedItemReloadWidget_C::ResourceTypeChanged(class UFortResourceItemDefinition** Item, int* ResourceCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.ResourceTypeChanged");

	UBacchusEquippedItemReloadWidget_C_ResourceTypeChanged_Params params;
	params.Item = Item;
	params.ResourceCount = ResourceCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.WeaponTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEquippedWeaponDisplay*        Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusEquippedItemReloadWidget_C::WeaponTypeChanged(EEquippedWeaponDisplay* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.WeaponTypeChanged");

	UBacchusEquippedItemReloadWidget_C_WeaponTypeChanged_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.HasAmmoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bHasAmmo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusEquippedItemReloadWidget_C::HasAmmoChanged(bool* bHasAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.HasAmmoChanged");

	UBacchusEquippedItemReloadWidget_C_HasAmmoChanged_Params params;
	params.bHasAmmo = bHasAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.AmmoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           MagazineAmmoCount              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           BackupAmmoCount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TotalRemaining                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusEquippedItemReloadWidget_C::AmmoChanged(int* MagazineAmmoCount, int* BackupAmmoCount, int* TotalRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.AmmoChanged");

	UBacchusEquippedItemReloadWidget_C_AmmoChanged_Params params;
	params.MagazineAmmoCount = MagazineAmmoCount;
	params.BackupAmmoCount = BackupAmmoCount;
	params.TotalRemaining = TotalRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.UtilityItemCountChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Remaining                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusEquippedItemReloadWidget_C::UtilityItemCountChanged(int* Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.UtilityItemCountChanged");

	UBacchusEquippedItemReloadWidget_C_UtilityItemCountChanged_Params params;
	params.Remaining = Remaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.UtilityItemTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortWeapon**            Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWeaponItemDefinition** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusEquippedItemReloadWidget_C::UtilityItemTypeChanged(class AFortWeapon** Weapon, class UFortWeaponItemDefinition** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.UtilityItemTypeChanged");

	UBacchusEquippedItemReloadWidget_C_UtilityItemTypeChanged_Params params;
	params.Weapon = Weapon;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.ExecuteUbergraph_BacchusEquippedItemReloadWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBacchusEquippedItemReloadWidget_C::ExecuteUbergraph_BacchusEquippedItemReloadWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BacchusEquippedItemReloadWidget.BacchusEquippedItemReloadWidget_C.ExecuteUbergraph_BacchusEquippedItemReloadWidget");

	UBacchusEquippedItemReloadWidget_C_ExecuteUbergraph_BacchusEquippedItemReloadWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
