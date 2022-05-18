#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.IsGameplayCamera
struct ABP_ReplayPC_Athena_C_IsGameplayCamera_Params
{
	bool                                               IsGameplayCamera;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.SetSkydivingAudioEnabled
struct ABP_ReplayPC_Athena_C_SetSkydivingAudioEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.GetSkydivingSound
struct ABP_ReplayPC_Athena_C_GetSkydivingSound_Params
{
	class USoundBase*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.UserConstructionScript
struct ABP_ReplayPC_Athena_C_UserConstructionScript_Params
{
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.ReceiveBeginPlay
struct ABP_ReplayPC_Athena_C_ReceiveBeginPlay_Params
{
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnNotifyNewPlaybackMultiplier
struct ABP_ReplayPC_Athena_C_OnNotifyNewPlaybackMultiplier_Params
{
	float*                                             NewMultiplier;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C. Speedup Loops
struct ABP_ReplayPC_Athena_C__Speedup_Loops_Params
{
	float                                              Playback_Multiplier;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnReplayHudVisibilityChanged
struct ABP_ReplayPC_Athena_C_OnReplayHudVisibilityChanged_Params
{
	EHudVisibilityState                                IsVisible;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomOutEnd
struct ABP_ReplayPC_Athena_C_OnZoomOutEnd_Params
{
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomOutBegin
struct ABP_ReplayPC_Athena_C_OnZoomOutBegin_Params
{
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomInEnd
struct ABP_ReplayPC_Athena_C_OnZoomInEnd_Params
{
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomInBegin
struct ABP_ReplayPC_Athena_C_OnZoomInBegin_Params
{
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.On Pause State Changed
struct ABP_ReplayPC_Athena_C_On_Pause_State_Changed_Params
{
	bool                                               bPaused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Handle Parachute Audio State
struct ABP_ReplayPC_Athena_C_Handle_Parachute_Audio_State_Params
{
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Looping Audio Update
struct ABP_ReplayPC_Athena_C_Looping_Audio_Update_Params
{
};

// Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.ExecuteUbergraph_BP_ReplayPC_Athena
struct ABP_ReplayPC_Athena_C_ExecuteUbergraph_BP_ReplayPC_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
