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

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.GetFuel
struct AGCL_BoostJumpPack_FuelRegen_C_GetFuel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.SetFuelRechargeAudioEnabled
struct AGCL_BoostJumpPack_FuelRegen_C_SetFuelRechargeAudioEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.GetFuelPercent
struct AGCL_BoostJumpPack_FuelRegen_C_GetFuelPercent_Params
{
	float                                              FuelPercent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.CacheAttributes
struct AGCL_BoostJumpPack_FuelRegen_C_CacheAttributes_Params
{
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.OnRemove
struct AGCL_BoostJumpPack_FuelRegen_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.OnActive
struct AGCL_BoostJumpPack_FuelRegen_C_OnActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.UserConstructionScript
struct AGCL_BoostJumpPack_FuelRegen_C_UserConstructionScript_Params
{
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__FinishedFunc
struct AGCL_BoostJumpPack_FuelRegen_C_FullBlinkTimeline__FinishedFunc_Params
{
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__UpdateFunc
struct AGCL_BoostJumpPack_FuelRegen_C_FullBlinkTimeline__UpdateFunc_Params
{
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ReceiveTick
struct AGCL_BoostJumpPack_FuelRegen_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.Audio Tick
struct AGCL_BoostJumpPack_FuelRegen_C_Audio_Tick_Params
{
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ResetBlink
struct AGCL_BoostJumpPack_FuelRegen_C_ResetBlink_Params
{
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.Start Fuel Blink FX
struct AGCL_BoostJumpPack_FuelRegen_C_Start_Fuel_Blink_FX_Params
{
};

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen
struct AGCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
