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

// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.IsInInvalidSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           InInvalidSlot                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFortHeroSupportPerkWidget_C::IsInInvalidSlot(bool* InInvalidSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.IsInInvalidSlot");

	UFortHeroSupportPerkWidget_C_IsInInvalidSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InInvalidSlot != nullptr)
		*InInvalidSlot = params.InInvalidSlot;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateComparisonVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UFortHeroSupportPerkWidget_C::UpdateComparisonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateComparisonVisibility");

	UFortHeroSupportPerkWidget_C_UpdateComparisonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateEmptyVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UFortHeroSupportPerkWidget_C::UpdateEmptyVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateEmptyVisibility");

	UFortHeroSupportPerkWidget_C_UpdateEmptyVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateActiveDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFortHeroSupportPerkWidget_C::UpdateActiveDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateActiveDisplay");

	UFortHeroSupportPerkWidget_C_UpdateActiveDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateLockedVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFortHeroSupportPerkWidget_C::UpdateLockedVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateLockedVisibility");

	UFortHeroSupportPerkWidget_C_UpdateLockedVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UFortHeroSupportPerkWidget_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.UpdateVisibility");

	UFortHeroSupportPerkWidget_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisplayedOutsideOfHeroSquad    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortSupportBonusType          TargetedSupportType            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortHeroSupportPerkWidget_C::Update(bool DisplayedOutsideOfHeroSquad, EFortSupportBonusType TargetedSupportType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.Update");

	UFortHeroSupportPerkWidget_C_Update_Params params;
	params.DisplayedOutsideOfHeroSquad = DisplayedOutsideOfHeroSquad;
	params.TargetedSupportType = TargetedSupportType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnHeroUpdated
// (Event, Public, BlueprintEvent)

void UFortHeroSupportPerkWidget_C::OnHeroUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnHeroUpdated");

	UFortHeroSupportPerkWidget_C_OnHeroUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnSupportTypeUpdated
// (Event, Public, BlueprintEvent)

void UFortHeroSupportPerkWidget_C::OnSupportTypeUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnSupportTypeUpdated");

	UFortHeroSupportPerkWidget_C_OnSupportTypeUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFortHeroSupportPerkWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.Construct");

	UFortHeroSupportPerkWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnStateChanged
// (Event, Public, BlueprintEvent)

void UFortHeroSupportPerkWidget_C::OnStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.OnStateChanged");

	UFortHeroSupportPerkWidget_C_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.ExecuteUbergraph_FortHeroSupportPerkWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortHeroSupportPerkWidget_C::ExecuteUbergraph_FortHeroSupportPerkWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortHeroSupportPerkWidget.FortHeroSupportPerkWidget_C.ExecuteUbergraph_FortHeroSupportPerkWidget");

	UFortHeroSupportPerkWidget_C_ExecuteUbergraph_FortHeroSupportPerkWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
