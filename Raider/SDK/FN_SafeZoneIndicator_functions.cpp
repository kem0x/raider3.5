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

// Function SafeZoneIndicator.SafeZoneIndicator_C.GetAthenaGameState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAthena_GameState_C*     AthenaGS                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::GetAthenaGameState(class AAthena_GameState_C** AthenaGS)
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.GetAthenaGameState");

	ASafeZoneIndicator_C_GetAthenaGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AthenaGS != nullptr)
		*AthenaGS = params.AthenaGS;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.UpdateAudioComponentLocations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::UpdateAudioComponentLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.UpdateAudioComponentLocations");

	ASafeZoneIndicator_C_UpdateAudioComponentLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix
// (Public, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::HandleInsideOutsideMix()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix");

	ASafeZoneIndicator_C_HandleInsideOutsideMix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::InitClosestPointAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio");

	ASafeZoneIndicator_C_InitClosestPointAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript");

	ASafeZoneIndicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.FadeSafeZoneVisuals__FinishedFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::FadeSafeZoneVisuals__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.FadeSafeZoneVisuals__FinishedFunc");

	ASafeZoneIndicator_C_FadeSafeZoneVisuals__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.FadeSafeZoneVisuals__UpdateFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::FadeSafeZoneVisuals__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.FadeSafeZoneVisuals__UpdateFunc");

	ASafeZoneIndicator_C_FadeSafeZoneVisuals__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__FinishedFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::StormFadeTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__FinishedFunc");

	ASafeZoneIndicator_C_StormFadeTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__UpdateFunc
// (BlueprintEvent)

void ASafeZoneIndicator_C::StormFadeTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__UpdateFunc");

	ASafeZoneIndicator_C_StormFadeTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortSafeZoneState*            NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bInitial                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::OnSafeZoneStateChange(EFortSafeZoneState* NewState, bool* bInitial)
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange");

	ASafeZoneIndicator_C_OnSafeZoneStateChange_Params params;
	params.NewState = NewState;
	params.bInitial = bInitial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.Apply Lowpass to Audio
// (BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::Apply_Lowpass_to_Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.Apply Lowpass to Audio");

	ASafeZoneIndicator_C_Apply_Lowpass_to_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveTick");

	ASafeZoneIndicator_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ResetSafeZoneScale
// (BlueprintCallable, BlueprintEvent)

void ASafeZoneIndicator_C::ResetSafeZoneScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.ResetSafeZoneScale");

	ASafeZoneIndicator_C_ResetSafeZoneScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASafeZoneIndicator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay");

	ASafeZoneIndicator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.stormy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::stormy(float NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.stormy");

	ASafeZoneIndicator_C_stormy_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ASafeZoneIndicator_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveDestroyed");

	ASafeZoneIndicator_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASafeZoneIndicator_C::ExecuteUbergraph_SafeZoneIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator");

	ASafeZoneIndicator_C_ExecuteUbergraph_SafeZoneIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
