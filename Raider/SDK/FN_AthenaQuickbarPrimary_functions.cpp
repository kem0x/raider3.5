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

// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.UpdateQuickBarCaching
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DesireCaching                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarPrimary_C::UpdateQuickBarCaching(bool DesireCaching)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.UpdateQuickBarCaching");

	UAthenaQuickbarPrimary_C_UpdateQuickBarCaching_Params params;
	params.DesireCaching = DesireCaching;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleShowHideWeaponRail
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarPrimary_C::HandleShowHideWeaponRail()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleShowHideWeaponRail");

	UAthenaQuickbarPrimary_C_HandleShowHideWeaponRail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HasOneNonHarvestWeapon
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasNonHarvestWeapon            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarPrimary_C::HasOneNonHarvestWeapon(bool* HasNonHarvestWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HasOneNonHarvestWeapon");

	UAthenaQuickbarPrimary_C_HasOneNonHarvestWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasNonHarvestWeapon != nullptr)
		*HasNonHarvestWeapon = params.HasNonHarvestWeapon;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Show Primary Quickbar Rail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarPrimary_C::Show_Primary_Quickbar_Rail(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Show Primary Quickbar Rail");

	UAthenaQuickbarPrimary_C_Show_Primary_Quickbar_Rail_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarPrimary_C::HandleKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleKeybindsChanged");

	UAthenaQuickbarPrimary_C_HandleKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleInputMethodChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarPrimary_C::HandleInputMethodChanged_Bind(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.HandleInputMethodChanged_Bind");

	UAthenaQuickbarPrimary_C_HandleInputMethodChanged_Bind_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaQuickbarPrimary_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Destruct");

	UAthenaQuickbarPrimary_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickBarSlotFocusChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                 QuickbarIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarPrimary_C::OnQuickBarSlotFocusChanged_Bind(EFortQuickBars QuickbarIndex, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickBarSlotFocusChanged_Bind");

	UAthenaQuickbarPrimary_C_OnQuickBarSlotFocusChanged_Bind_Params params;
	params.QuickbarIndex = QuickbarIndex;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarPrimary_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Maximize");

	UAthenaQuickbarPrimary_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarPrimary_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Minimize");

	UAthenaQuickbarPrimary_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickbarContentsChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars*                QuickbarIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>*                   ChangedSlots                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaQuickbarPrimary_C::OnQuickbarContentsChanged(EFortQuickBars* QuickbarIndex, TArray<int>* ChangedSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.OnQuickbarContentsChanged");

	UAthenaQuickbarPrimary_C_OnQuickbarContentsChanged_Params params;
	params.QuickbarIndex = QuickbarIndex;
	params.ChangedSlots = ChangedSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaQuickbarPrimary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.Construct");

	UAthenaQuickbarPrimary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.AnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UAthenaQuickbarPrimary_C::AnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.AnimationFinished");

	UAthenaQuickbarPrimary_C_AnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.ExecuteUbergraph_AthenaQuickbarPrimary
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuickbarPrimary_C::ExecuteUbergraph_AthenaQuickbarPrimary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuickbarPrimary.AthenaQuickbarPrimary_C.ExecuteUbergraph_AthenaQuickbarPrimary");

	UAthenaQuickbarPrimary_C_ExecuteUbergraph_AthenaQuickbarPrimary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
