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

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.CalculateFiringAngle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DotResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_SoundIndicator_01_C::CalculateFiringAngle(float* DotResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator_01.B_SoundIndicator_01_C.CalculateFiringAngle");

	AB_SoundIndicator_01_C_CalculateFiringAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DotResult != nullptr)
		*DotResult = params.DotResult;
}


// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetWeaponCurve
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRuntimeFloatCurve      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRuntimeFloatCurve AB_SoundIndicator_01_C::GetWeaponCurve()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetWeaponCurve");

	AB_SoundIndicator_01_C_GetWeaponCurve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_SoundIndicator_01.B_SoundIndicator_01_C.UpdateEmitterStates
// (Public, BlueprintCallable, BlueprintEvent)

void AB_SoundIndicator_01_C::UpdateEmitterStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator_01.B_SoundIndicator_01_C.UpdateEmitterStates");

	AB_SoundIndicator_01_C_UpdateEmitterStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SoundIndicator_01.B_SoundIndicator_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_SoundIndicator_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator_01.B_SoundIndicator_01_C.UserConstructionScript");

	AB_SoundIndicator_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SoundIndicator_01.B_SoundIndicator_01_C.OnEffectActivated
// (Event, Public, BlueprintEvent)

void AB_SoundIndicator_01_C::OnEffectActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator_01.B_SoundIndicator_01_C.OnEffectActivated");

	AB_SoundIndicator_01_C_OnEffectActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SoundIndicator_01.B_SoundIndicator_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_SoundIndicator_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator_01.B_SoundIndicator_01_C.ReceiveBeginPlay");

	AB_SoundIndicator_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_SoundIndicator_01.B_SoundIndicator_01_C.ExecuteUbergraph_B_SoundIndicator_01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_SoundIndicator_01_C::ExecuteUbergraph_B_SoundIndicator_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_SoundIndicator_01.B_SoundIndicator_01_C.ExecuteUbergraph_B_SoundIndicator_01");

	AB_SoundIndicator_01_C_ExecuteUbergraph_B_SoundIndicator_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
