#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.WhileActive
struct AGCL_MedicPack_Healing_C_WhileActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.CacheRenderingDetailMode
struct AGCL_MedicPack_Healing_C_CacheRenderingDetailMode_Params
{
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.CalculateFuelPercentage
struct AGCL_MedicPack_Healing_C_CalculateFuelPercentage_Params
{
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.GetMaxFuel
struct AGCL_MedicPack_Healing_C_GetMaxFuel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.GetFuel
struct AGCL_MedicPack_Healing_C_GetFuel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.GetFuelPercent
struct AGCL_MedicPack_Healing_C_GetFuelPercent_Params
{
	float                                              FuelPercent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.CacheAttributes
struct AGCL_MedicPack_Healing_C_CacheAttributes_Params
{
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.SetJetpackAudioEnabled
struct AGCL_MedicPack_Healing_C_SetJetpackAudioEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.OnRemove
struct AGCL_MedicPack_Healing_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.UserConstructionScript
struct AGCL_MedicPack_Healing_C_UserConstructionScript_Params
{
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.Jetpack Audio Modulation__FinishedFunc
struct AGCL_MedicPack_Healing_C_Jetpack_Audio_Modulation__FinishedFunc_Params
{
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.Jetpack Audio Modulation__UpdateFunc
struct AGCL_MedicPack_Healing_C_Jetpack_Audio_Modulation__UpdateFunc_Params
{
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.Jetpack Audio Modulation__FuelWarning__EventFunc
struct AGCL_MedicPack_Healing_C_Jetpack_Audio_Modulation__FuelWarning__EventFunc_Params
{
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.Audio Tick
struct AGCL_MedicPack_Healing_C_Audio_Tick_Params
{
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.On Pawn Landed
struct AGCL_MedicPack_Healing_C_On_Pawn_Landed_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.ReceiveTick
struct AGCL_MedicPack_Healing_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_MedicPack_Healing.GCL_MedicPack_Healing_C.ExecuteUbergraph_GCL_MedicPack_Healing
struct AGCL_MedicPack_Healing_C_ExecuteUbergraph_GCL_MedicPack_Healing_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
