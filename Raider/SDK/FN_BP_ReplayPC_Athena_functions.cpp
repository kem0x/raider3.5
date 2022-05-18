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

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.IsGameplayCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsGameplayCamera               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ReplayPC_Athena_C::IsGameplayCamera(bool* IsGameplayCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.IsGameplayCamera");

	ABP_ReplayPC_Athena_C_IsGameplayCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGameplayCamera != nullptr)
		*IsGameplayCamera = params.IsGameplayCamera;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.SetSkydivingAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReplayPC_Athena_C::SetSkydivingAudioEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.SetSkydivingAudioEnabled");

	ABP_ReplayPC_Athena_C_SetSkydivingAudioEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.GetSkydivingSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundBase* ABP_ReplayPC_Athena_C::GetSkydivingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.GetSkydivingSound");

	ABP_ReplayPC_Athena_C_GetSkydivingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ReplayPC_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.UserConstructionScript");

	ABP_ReplayPC_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ReplayPC_Athena_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.ReceiveBeginPlay");

	ABP_ReplayPC_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnNotifyNewPlaybackMultiplier
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         NewMultiplier                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReplayPC_Athena_C::OnNotifyNewPlaybackMultiplier(float* NewMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnNotifyNewPlaybackMultiplier");

	ABP_ReplayPC_Athena_C_OnNotifyNewPlaybackMultiplier_Params params;
	params.NewMultiplier = NewMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C. Speedup Loops
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Playback_Multiplier            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReplayPC_Athena_C::_Speedup_Loops(float Playback_Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C. Speedup Loops");

	ABP_ReplayPC_Athena_C__Speedup_Loops_Params params;
	params.Playback_Multiplier = Playback_Multiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnReplayHudVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EHudVisibilityState            IsVisible                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReplayPC_Athena_C::OnReplayHudVisibilityChanged(EHudVisibilityState IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnReplayHudVisibilityChanged");

	ABP_ReplayPC_Athena_C_OnReplayHudVisibilityChanged_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomOutEnd
// (Event, Public, BlueprintEvent)

void ABP_ReplayPC_Athena_C::OnZoomOutEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomOutEnd");

	ABP_ReplayPC_Athena_C_OnZoomOutEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomOutBegin
// (Event, Public, BlueprintEvent)

void ABP_ReplayPC_Athena_C::OnZoomOutBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomOutBegin");

	ABP_ReplayPC_Athena_C_OnZoomOutBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomInEnd
// (Event, Public, BlueprintEvent)

void ABP_ReplayPC_Athena_C::OnZoomInEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomInEnd");

	ABP_ReplayPC_Athena_C_OnZoomInEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomInBegin
// (Event, Public, BlueprintEvent)

void ABP_ReplayPC_Athena_C::OnZoomInBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomInBegin");

	ABP_ReplayPC_Athena_C_OnZoomInBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.On Pause State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPaused                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReplayPC_Athena_C::On_Pause_State_Changed(bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.On Pause State Changed");

	ABP_ReplayPC_Athena_C_On_Pause_State_Changed_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Handle Parachute Audio State
// (BlueprintCallable, BlueprintEvent)

void ABP_ReplayPC_Athena_C::Handle_Parachute_Audio_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Handle Parachute Audio State");

	ABP_ReplayPC_Athena_C_Handle_Parachute_Audio_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Looping Audio Update
// (BlueprintCallable, BlueprintEvent)

void ABP_ReplayPC_Athena_C::Looping_Audio_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Looping Audio Update");

	ABP_ReplayPC_Athena_C_Looping_Audio_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.ExecuteUbergraph_BP_ReplayPC_Athena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ReplayPC_Athena_C::ExecuteUbergraph_BP_ReplayPC_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.ExecuteUbergraph_BP_ReplayPC_Athena");

	ABP_ReplayPC_Athena_C_ExecuteUbergraph_BP_ReplayPC_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
