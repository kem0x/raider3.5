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

// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.OnEnterVehicleDriver_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaVehicleFeedback_C::OnEnterVehicleDriver_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.OnEnterVehicleDriver_Bind");

	UAthenaVehicleFeedback_C_OnEnterVehicleDriver_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.OnEnterVehiclePassenger_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaVehicleFeedback_C::OnEnterVehiclePassenger_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.OnEnterVehiclePassenger_Bind");

	UAthenaVehicleFeedback_C_OnEnterVehiclePassenger_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.HideFeedback
// (BlueprintCallable, BlueprintEvent)

void UAthenaVehicleFeedback_C::HideFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.HideFeedback");

	UAthenaVehicleFeedback_C_HideFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.ShowFeedback
// (BlueprintCallable, BlueprintEvent)

void UAthenaVehicleFeedback_C::ShowFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.ShowFeedback");

	UAthenaVehicleFeedback_C_ShowFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaVehicleFeedback_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.Construct");

	UAthenaVehicleFeedback_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.OnKeybindsChanged_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaVehicleFeedback_C::OnKeybindsChanged_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.OnKeybindsChanged_Bind");

	UAthenaVehicleFeedback_C_OnKeybindsChanged_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.OnExitVehicle_Bind
// (BlueprintCallable, BlueprintEvent)

void UAthenaVehicleFeedback_C::OnExitVehicle_Bind()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.OnExitVehicle_Bind");

	UAthenaVehicleFeedback_C_OnExitVehicle_Bind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.ExecuteUbergraph_AthenaVehicleFeedback
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaVehicleFeedback_C::ExecuteUbergraph_AthenaVehicleFeedback(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaVehicleFeedback.AthenaVehicleFeedback_C.ExecuteUbergraph_AthenaVehicleFeedback");

	UAthenaVehicleFeedback_C_ExecuteUbergraph_AthenaVehicleFeedback_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
