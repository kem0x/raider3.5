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

// Function QuickbarSecondary.QuickbarSecondary_C.Show Secondary Quickbar Rail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSecondary_C::Show_Secondary_Quickbar_Rail(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSecondary.QuickbarSecondary_C.Show Secondary Quickbar Rail");

	UQuickbarSecondary_C_Show_Secondary_Quickbar_Rail_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSecondary.QuickbarSecondary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuickbarSecondary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSecondary.QuickbarSecondary_C.Construct");

	UQuickbarSecondary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSecondary.QuickbarSecondary_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarSecondary_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSecondary.QuickbarSecondary_C.Maximize");

	UQuickbarSecondary_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSecondary.QuickbarSecondary_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarSecondary_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSecondary.QuickbarSecondary_C.Minimize");

	UQuickbarSecondary_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSecondary.QuickbarSecondary_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UQuickbarSecondary_C::HandleKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSecondary.QuickbarSecondary_C.HandleKeybindsChanged");

	UQuickbarSecondary_C_HandleKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSecondary.QuickbarSecondary_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSecondary_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSecondary.QuickbarSecondary_C.HandleInputMethodChanged");

	UQuickbarSecondary_C_HandleInputMethodChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSecondary.QuickbarSecondary_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuickbarSecondary_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSecondary.QuickbarSecondary_C.Destruct");

	UQuickbarSecondary_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSecondary.QuickbarSecondary_C.OnPersonalVehicleModeChanged
// (BlueprintCallable, BlueprintEvent)

void UQuickbarSecondary_C::OnPersonalVehicleModeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSecondary.QuickbarSecondary_C.OnPersonalVehicleModeChanged");

	UQuickbarSecondary_C_OnPersonalVehicleModeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSecondary.QuickbarSecondary_C.OnPersonalVehicleMountStarted
// (BlueprintCallable, BlueprintEvent)

void UQuickbarSecondary_C::OnPersonalVehicleMountStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSecondary.QuickbarSecondary_C.OnPersonalVehicleMountStarted");

	UQuickbarSecondary_C_OnPersonalVehicleMountStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSecondary.QuickbarSecondary_C.OnPersonalVehicleMountStopped
// (BlueprintCallable, BlueprintEvent)

void UQuickbarSecondary_C::OnPersonalVehicleMountStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSecondary.QuickbarSecondary_C.OnPersonalVehicleMountStopped");

	UQuickbarSecondary_C_OnPersonalVehicleMountStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuickbarSecondary.QuickbarSecondary_C.ExecuteUbergraph_QuickbarSecondary
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuickbarSecondary_C::ExecuteUbergraph_QuickbarSecondary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuickbarSecondary.QuickbarSecondary_C.ExecuteUbergraph_QuickbarSecondary");

	UQuickbarSecondary_C_ExecuteUbergraph_QuickbarSecondary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
