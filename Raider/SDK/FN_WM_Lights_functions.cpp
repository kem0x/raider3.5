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

// Function WM_Lights.WM_Lights_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWM_Lights_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Lights.WM_Lights_C.UserConstructionScript");

	AWM_Lights_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Lights.WM_Lights_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWM_Lights_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Lights.WM_Lights_C.ReceiveBeginPlay");

	AWM_Lights_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Lights.WM_Lights_C.WM-Lightcontrol
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWM_Lights_C::WM_Lightcontrol(bool TurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Lights.WM_Lights_C.WM-Lightcontrol");

	AWM_Lights_C_WM_Lightcontrol_Params params;
	params.TurnOn = TurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WM_Lights.WM_Lights_C.ExecuteUbergraph_WM_Lights
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWM_Lights_C::ExecuteUbergraph_WM_Lights(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WM_Lights.WM_Lights_C.ExecuteUbergraph_WM_Lights");

	AWM_Lights_C_ExecuteUbergraph_WM_Lights_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
