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

// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.DistanceFromPlayerToPPVolumeCenter
struct AB_Athena_GasGrenade_FXVolume_C_DistanceFromPlayerToPPVolumeCenter_Params
{
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.GetPlayerPawn
struct AB_Athena_GasGrenade_FXVolume_C_GetPlayerPawn_Params
{
};

// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.AdjustedDistanceFromPlayerToPPVolumeCenter
struct AB_Athena_GasGrenade_FXVolume_C_AdjustedDistanceFromPlayerToPPVolumeCenter_Params
{
	float                                              ScopeStateSwappedTime;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceOut;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayerIsUsingScope;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.UserConstructionScript
struct AB_Athena_GasGrenade_FXVolume_C_UserConstructionScript_Params
{
};

// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.FadeSmokeTL__FinishedFunc
struct AB_Athena_GasGrenade_FXVolume_C_FadeSmokeTL__FinishedFunc_Params
{
};

// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.FadeSmokeTL__UpdateFunc
struct AB_Athena_GasGrenade_FXVolume_C_FadeSmokeTL__UpdateFunc_Params
{
};

// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.ReceiveBeginPlay
struct AB_Athena_GasGrenade_FXVolume_C_ReceiveBeginPlay_Params
{
};

// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.FadeIn
struct AB_Athena_GasGrenade_FXVolume_C_FadeIn_Params
{
};

// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.FadeOut
struct AB_Athena_GasGrenade_FXVolume_C_FadeOut_Params
{
};

// Function B_Athena_GasGrenade_FXVolume.B_Athena_GasGrenade_FXVolume_C.ExecuteUbergraph_B_Athena_GasGrenade_FXVolume
struct AB_Athena_GasGrenade_FXVolume_C_ExecuteUbergraph_B_Athena_GasGrenade_FXVolume_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
