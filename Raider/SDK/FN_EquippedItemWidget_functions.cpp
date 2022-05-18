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

// Function EquippedItemWidget.EquippedItemWidget_C.GetCurrentAmmoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            CurrentAmmoCount               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CurrentAmmoText                (Parm, OutParm)

void UEquippedItemWidget_C::GetCurrentAmmoText(int CurrentAmmoCount, struct FText* CurrentAmmoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.GetCurrentAmmoText");

	UEquippedItemWidget_C_GetCurrentAmmoText_Params params;
	params.CurrentAmmoCount = CurrentAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAmmoText != nullptr)
		*CurrentAmmoText = params.CurrentAmmoText;
}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateResourceCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEquippedItemWidget_C::UpdateResourceCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.UpdateResourceCount");

	UEquippedItemWidget_C_UpdateResourceCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateCurrentAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LocalCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LocalRemaining                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEquippedItemWidget_C::UpdateCurrentAmmo(int LocalCount, int LocalRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.UpdateCurrentAmmo");

	UEquippedItemWidget_C_UpdateCurrentAmmo_Params params;
	params.LocalCount = LocalCount;
	params.LocalRemaining = LocalRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateAmmoCapacity
// (Public, BlueprintCallable, BlueprintEvent)

void UEquippedItemWidget_C::UpdateAmmoCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.UpdateAmmoCapacity");

	UEquippedItemWidget_C_UpdateAmmoCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateWidgetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasAmmo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEquippedItemWidget_C::UpdateWidgetColor(bool HasAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.UpdateWidgetColor");

	UEquippedItemWidget_C_UpdateWidgetColor_Params params;
	params.HasAmmo = HasAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UEquippedItemWidget_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.UpdateVisibility");

	UEquippedItemWidget_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.FullUpdateResourceDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEquippedItemWidget_C::FullUpdateResourceDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.FullUpdateResourceDisplay");

	UEquippedItemWidget_C_FullUpdateResourceDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.FullUpdateAmmoDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UEquippedItemWidget_C::FullUpdateAmmoDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.FullUpdateAmmoDisplay");

	UEquippedItemWidget_C_FullUpdateAmmoDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEquippedItemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.Construct");

	UEquippedItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.OnWeaponEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             PrevWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEquippedItemWidget_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.OnWeaponEquipped");

	UEquippedItemWidget_C_OnWeaponEquipped_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.OnLocalAmmoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LocalCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LocalRemaining                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEquippedItemWidget_C::OnLocalAmmoChanged(int LocalCount, int LocalRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.OnLocalAmmoChanged");

	UEquippedItemWidget_C_OnLocalAmmoChanged_Params params;
	params.LocalCount = LocalCount;
	params.LocalRemaining = LocalRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.OnWorldItemsChanged
// (BlueprintCallable, BlueprintEvent)

void UEquippedItemWidget_C::OnWorldItemsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.OnWorldItemsChanged");

	UEquippedItemWidget_C_OnWorldItemsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.OnBuildingMaterialCycled
// (BlueprintCallable, BlueprintEvent)

void UEquippedItemWidget_C::OnBuildingMaterialCycled()
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.OnBuildingMaterialCycled");

	UEquippedItemWidget_C_OnBuildingMaterialCycled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItemWidget.EquippedItemWidget_C.ExecuteUbergraph_EquippedItemWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEquippedItemWidget_C::ExecuteUbergraph_EquippedItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItemWidget.EquippedItemWidget_C.ExecuteUbergraph_EquippedItemWidget");

	UEquippedItemWidget_C_ExecuteUbergraph_EquippedItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
