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

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetLateralThrust
struct AGCL_BoostJumpPack_Hovering_C_GetLateralThrust_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetUpwardThrust
struct AGCL_BoostJumpPack_Hovering_C_GetUpwardThrust_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetMaxFuel
struct AGCL_BoostJumpPack_Hovering_C_GetMaxFuel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetFuel
struct AGCL_BoostJumpPack_Hovering_C_GetFuel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.GetFuelPercent
struct AGCL_BoostJumpPack_Hovering_C_GetFuelPercent_Params
{
	float                                              FuelPercent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.CacheAttributes
struct AGCL_BoostJumpPack_Hovering_C_CacheAttributes_Params
{
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.SetJetpackAudioEnabled
struct AGCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnRemove
struct AGCL_BoostJumpPack_Hovering_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnActive
struct AGCL_BoostJumpPack_Hovering_C_OnActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.UserConstructionScript
struct AGCL_BoostJumpPack_Hovering_C_UserConstructionScript_Params
{
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Jetpack Audio Modulation__FinishedFunc
struct AGCL_BoostJumpPack_Hovering_C_Jetpack_Audio_Modulation__FinishedFunc_Params
{
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Jetpack Audio Modulation__UpdateFunc
struct AGCL_BoostJumpPack_Hovering_C_Jetpack_Audio_Modulation__UpdateFunc_Params
{
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Jetpack Audio Modulation__FuelWarning__EventFunc
struct AGCL_BoostJumpPack_Hovering_C_Jetpack_Audio_Modulation__FuelWarning__EventFunc_Params
{
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ReceiveTick
struct AGCL_BoostJumpPack_Hovering_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.Audio Tick
struct AGCL_BoostJumpPack_Hovering_C_Audio_Tick_Params
{
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.On Pawn Landed
struct AGCL_BoostJumpPack_Hovering_C_On_Pawn_Landed_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ResetFX
struct AGCL_BoostJumpPack_Hovering_C_ResetFX_Params
{
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ExecuteUbergraph_GCL_BoostJumpPack_Hovering
struct AGCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
