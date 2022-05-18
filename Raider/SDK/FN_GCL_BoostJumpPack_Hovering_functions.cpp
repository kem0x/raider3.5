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

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetLateralThrust
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGCL_BoostJumpPack_Hovering_C::GetLateralThrust()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetLateralThrust");

	AGCL_BoostJumpPack_Hovering_C_GetLateralThrust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetUpwardThrust
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGCL_BoostJumpPack_Hovering_C::GetUpwardThrust()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetUpwardThrust");

	AGCL_BoostJumpPack_Hovering_C_GetUpwardThrust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetMaxFuel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGCL_BoostJumpPack_Hovering_C::GetMaxFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetMaxFuel");

	AGCL_BoostJumpPack_Hovering_C_GetMaxFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetFuel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGCL_BoostJumpPack_Hovering_C::GetFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetFuel");

	AGCL_BoostJumpPack_Hovering_C_GetFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetFuelPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          FuelPercent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCL_BoostJumpPack_Hovering_C::GetFuelPercent(float* FuelPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetFuelPercent");

	AGCL_BoostJumpPack_Hovering_C_GetFuelPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FuelPercent != nullptr)
		*FuelPercent = params.FuelPercent;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.CacheAttributes
// (Public, BlueprintCallable, BlueprintEvent)

void AGCL_BoostJumpPack_Hovering_C::CacheAttributes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.CacheAttributes");

	AGCL_BoostJumpPack_Hovering_C_CacheAttributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.SetJetpackAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_BoostJumpPack_Hovering_C::SetJetpackAudioEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.SetJetpackAudioEnabled");

	AGCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_BoostJumpPack_Hovering_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnRemove");

	AGCL_BoostJumpPack_Hovering_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_BoostJumpPack_Hovering_C::OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnActive");

	AGCL_BoostJumpPack_Hovering_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_BoostJumpPack_Hovering_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.UserConstructionScript");

	AGCL_BoostJumpPack_Hovering_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Jetpack Audio Modulation__FinishedFunc
// (BlueprintEvent)

void AGCL_BoostJumpPack_Hovering_C::Jetpack_Audio_Modulation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Jetpack Audio Modulation__FinishedFunc");

	AGCL_BoostJumpPack_Hovering_C_Jetpack_Audio_Modulation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Jetpack Audio Modulation__UpdateFunc
// (BlueprintEvent)

void AGCL_BoostJumpPack_Hovering_C::Jetpack_Audio_Modulation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Jetpack Audio Modulation__UpdateFunc");

	AGCL_BoostJumpPack_Hovering_C_Jetpack_Audio_Modulation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Jetpack Audio Modulation__FuelWarning__EventFunc
// (BlueprintEvent)

void AGCL_BoostJumpPack_Hovering_C::Jetpack_Audio_Modulation__FuelWarning__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Jetpack Audio Modulation__FuelWarning__EventFunc");

	AGCL_BoostJumpPack_Hovering_C_Jetpack_Audio_Modulation__FuelWarning__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_BoostJumpPack_Hovering_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ReceiveTick");

	AGCL_BoostJumpPack_Hovering_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Audio Tick
// (BlueprintCallable, BlueprintEvent)

void AGCL_BoostJumpPack_Hovering_C::Audio_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Audio Tick");

	AGCL_BoostJumpPack_Hovering_C_Audio_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.On Pawn Landed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGCL_BoostJumpPack_Hovering_C::On_Pawn_Landed(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.On Pawn Landed");

	AGCL_BoostJumpPack_Hovering_C_On_Pawn_Landed_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ResetFX
// (BlueprintCallable, BlueprintEvent)

void AGCL_BoostJumpPack_Hovering_C::ResetFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ResetFX");

	AGCL_BoostJumpPack_Hovering_C_ResetFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ExecuteUbergraph_GCL_BoostJumpPack_Hovering
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_BoostJumpPack_Hovering_C::ExecuteUbergraph_GCL_BoostJumpPack_Hovering(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ExecuteUbergraph_GCL_BoostJumpPack_Hovering");

	AGCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
