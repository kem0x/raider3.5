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

// Function QuickbarSlot.QuickbarSlot_C.InitializeInvalidation
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::InitializeInvalidation()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.InitializeInvalidation");

	UQuickbarSlot_C_InitializeInvalidation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.UpdateItemBoxSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::UpdateItemBoxSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.UpdateItemBoxSize");

	UQuickbarSlot_C_UpdateItemBoxSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStopped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortItemCooldownType          CooldownType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::OnCooldownStopped(EFortItemCooldownType CooldownType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.OnCooldownStopped");

	UQuickbarSlot_C_OnCooldownStopped_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortItemCooldownType          CooldownType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::OnCooldownStarted(EFortItemCooldownType CooldownType)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.OnCooldownStarted");

	UQuickbarSlot_C_OnCooldownStarted_Params params;
	params.CooldownType = CooldownType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.InitializeCooldowns
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::InitializeCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.InitializeCooldowns");

	UQuickbarSlot_C_InitializeCooldowns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeStarted
// (BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::HandleMaximizeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeStarted");

	UQuickbarSlot_C_HandleMaximizeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeFinished
// (BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::HandleMinimizeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeFinished");

	UQuickbarSlot_C_HandleMinimizeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeFinished
// (BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::HandleMaximizeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeFinished");

	UQuickbarSlot_C_HandleMaximizeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeStarted
// (BlueprintCallable, BlueprintEvent)

void UQuickbarSlot_C::HandleMinimizeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeStarted");

	UQuickbarSlot_C_HandleMinimizeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuickbarSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.Construct");

	UQuickbarSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.PreConstruct");

	UQuickbarSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.SetAnimatedBoxScaleFactor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AnimatedBoxScaleFactor         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::SetAnimatedBoxScaleFactor(float AnimatedBoxScaleFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.SetAnimatedBoxScaleFactor");

	UQuickbarSlot_C_SetAnimatedBoxScaleFactor_Params params;
	params.AnimatedBoxScaleFactor = AnimatedBoxScaleFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.MaximizeSlot
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShouldSkipAnimation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::MaximizeSlot(bool* bShouldSkipAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.MaximizeSlot");

	UQuickbarSlot_C_MaximizeSlot_Params params;
	params.bShouldSkipAnimation = bShouldSkipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.MinimizeSlot
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShouldSkipAnimation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::MinimizeSlot(bool* bShouldSkipAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.MinimizeSlot");

	UQuickbarSlot_C_MinimizeSlot_Params params;
	params.bShouldSkipAnimation = bShouldSkipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.SetSlotSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::SetSlotSelected(bool* bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.SetSlotSelected");

	UQuickbarSlot_C_SetSlotSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSlot.QuickbarSlot_C.ExecuteUbergraph_QuickbarSlot
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSlot_C::ExecuteUbergraph_QuickbarSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSlot.QuickbarSlot_C.ExecuteUbergraph_QuickbarSlot");

	UQuickbarSlot_C_ExecuteUbergraph_QuickbarSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
