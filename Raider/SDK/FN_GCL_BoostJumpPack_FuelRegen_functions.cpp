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

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.GetFuel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGCL_BoostJumpPack_FuelRegen_C::GetFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.GetFuel");

	AGCL_BoostJumpPack_FuelRegen_C_GetFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.SetFuelRechargeAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_BoostJumpPack_FuelRegen_C::SetFuelRechargeAudioEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.SetFuelRechargeAudioEnabled");

	AGCL_BoostJumpPack_FuelRegen_C_SetFuelRechargeAudioEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.GetFuelPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          FuelPercent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCL_BoostJumpPack_FuelRegen_C::GetFuelPercent(float* FuelPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.GetFuelPercent");

	AGCL_BoostJumpPack_FuelRegen_C_GetFuelPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FuelPercent != nullptr)
		*FuelPercent = params.FuelPercent;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.CacheAttributes
// (Public, BlueprintCallable, BlueprintEvent)

void AGCL_BoostJumpPack_FuelRegen_C::CacheAttributes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.CacheAttributes");

	AGCL_BoostJumpPack_FuelRegen_C_CacheAttributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_BoostJumpPack_FuelRegen_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.OnRemove");

	AGCL_BoostJumpPack_FuelRegen_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_BoostJumpPack_FuelRegen_C::OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.OnActive");

	AGCL_BoostJumpPack_FuelRegen_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_BoostJumpPack_FuelRegen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.UserConstructionScript");

	AGCL_BoostJumpPack_FuelRegen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__FinishedFunc
// (BlueprintEvent)

void AGCL_BoostJumpPack_FuelRegen_C::FullBlinkTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__FinishedFunc");

	AGCL_BoostJumpPack_FuelRegen_C_FullBlinkTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__UpdateFunc
// (BlueprintEvent)

void AGCL_BoostJumpPack_FuelRegen_C::FullBlinkTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__UpdateFunc");

	AGCL_BoostJumpPack_FuelRegen_C_FullBlinkTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_BoostJumpPack_FuelRegen_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ReceiveTick");

	AGCL_BoostJumpPack_FuelRegen_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.Audio Tick
// (BlueprintCallable, BlueprintEvent)

void AGCL_BoostJumpPack_FuelRegen_C::Audio_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.Audio Tick");

	AGCL_BoostJumpPack_FuelRegen_C_Audio_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ResetBlink
// (BlueprintCallable, BlueprintEvent)

void AGCL_BoostJumpPack_FuelRegen_C::ResetBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ResetBlink");

	AGCL_BoostJumpPack_FuelRegen_C_ResetBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.Start Fuel Blink FX
// (BlueprintCallable, BlueprintEvent)

void AGCL_BoostJumpPack_FuelRegen_C::Start_Fuel_Blink_FX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.Start Fuel Blink FX");

	AGCL_BoostJumpPack_FuelRegen_C_Start_Fuel_Blink_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_BoostJumpPack_FuelRegen_C::ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen");

	AGCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
