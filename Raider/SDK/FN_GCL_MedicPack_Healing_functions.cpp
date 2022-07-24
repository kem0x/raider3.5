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

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.WhileActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_MedicPack_Healing_C::WhileActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.WhileActive");

	AGCL_MedicPack_Healing_C_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.CacheRenderingDetailMode
// (Public, BlueprintCallable, BlueprintEvent)

void AGCL_MedicPack_Healing_C::CacheRenderingDetailMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.CacheRenderingDetailMode");

	AGCL_MedicPack_Healing_C_CacheRenderingDetailMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.CalculateFuelPercentage
// (Public, BlueprintCallable, BlueprintEvent)

void AGCL_MedicPack_Healing_C::CalculateFuelPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.CalculateFuelPercentage");

	AGCL_MedicPack_Healing_C_CalculateFuelPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.GetMaxFuel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGCL_MedicPack_Healing_C::GetMaxFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.GetMaxFuel");

	AGCL_MedicPack_Healing_C_GetMaxFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.GetFuel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGCL_MedicPack_Healing_C::GetFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.GetFuel");

	AGCL_MedicPack_Healing_C_GetFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.GetFuelPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          FuelPercent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGCL_MedicPack_Healing_C::GetFuelPercent(float* FuelPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.GetFuelPercent");

	AGCL_MedicPack_Healing_C_GetFuelPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FuelPercent != nullptr)
		*FuelPercent = params.FuelPercent;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.CacheAttributes
// (Public, BlueprintCallable, BlueprintEvent)

void AGCL_MedicPack_Healing_C::CacheAttributes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.CacheAttributes");

	AGCL_MedicPack_Healing_C_CacheAttributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.SetJetpackAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_MedicPack_Healing_C::SetJetpackAudioEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.SetJetpackAudioEnabled");

	AGCL_MedicPack_Healing_C_SetJetpackAudioEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_MedicPack_Healing_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.OnRemove");

	AGCL_MedicPack_Healing_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_MedicPack_Healing_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.UserConstructionScript");

	AGCL_MedicPack_Healing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.Jetpack Audio Modulation__FinishedFunc
// (BlueprintEvent)

void AGCL_MedicPack_Healing_C::Jetpack_Audio_Modulation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.Jetpack Audio Modulation__FinishedFunc");

	AGCL_MedicPack_Healing_C_Jetpack_Audio_Modulation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.Jetpack Audio Modulation__UpdateFunc
// (BlueprintEvent)

void AGCL_MedicPack_Healing_C::Jetpack_Audio_Modulation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.Jetpack Audio Modulation__UpdateFunc");

	AGCL_MedicPack_Healing_C_Jetpack_Audio_Modulation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.Jetpack Audio Modulation__FuelWarning__EventFunc
// (BlueprintEvent)

void AGCL_MedicPack_Healing_C::Jetpack_Audio_Modulation__FuelWarning__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.Jetpack Audio Modulation__FuelWarning__EventFunc");

	AGCL_MedicPack_Healing_C_Jetpack_Audio_Modulation__FuelWarning__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.Audio Tick
// (BlueprintCallable, BlueprintEvent)

void AGCL_MedicPack_Healing_C::Audio_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.Audio Tick");

	AGCL_MedicPack_Healing_C_Audio_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.On Pawn Landed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGCL_MedicPack_Healing_C::On_Pawn_Landed(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.On Pawn Landed");

	AGCL_MedicPack_Healing_C_On_Pawn_Landed_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_MedicPack_Healing_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.ReceiveTick");

	AGCL_MedicPack_Healing_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.ExecuteUbergraph_GCL_MedicPack_Healing
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_MedicPack_Healing_C::ExecuteUbergraph_GCL_MedicPack_Healing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.ExecuteUbergraph_GCL_MedicPack_Healing");

	AGCL_MedicPack_Healing_C_ExecuteUbergraph_GCL_MedicPack_Healing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
