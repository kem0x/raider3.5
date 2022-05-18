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

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.ChangeToFriendlyMaterial
struct ATrap_Wall_Spikes_Metal_C_ChangeToFriendlyMaterial_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.MaterialSweepOnSpikes
struct ATrap_Wall_Spikes_Metal_C_MaterialSweepOnSpikes_Params
{
	float                                              SweepSpeed_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SweepColor_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              SweepExponent_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.SetSpikePosition
struct ATrap_Wall_Spikes_Metal_C_SetSpikePosition_Params
{
	float                                              SpikePosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.UserConstructionScript
struct ATrap_Wall_Spikes_Metal_C_UserConstructionScript_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Fire__FinishedFunc
struct ATrap_Wall_Spikes_Metal_C_Fire__FinishedFunc_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Fire__UpdateFunc
struct ATrap_Wall_Spikes_Metal_C_Fire__UpdateFunc_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Retract__FinishedFunc
struct ATrap_Wall_Spikes_Metal_C_Retract__FinishedFunc_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Retract__UpdateFunc
struct ATrap_Wall_Spikes_Metal_C_Retract__UpdateFunc_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Retract__Sounds__EventFunc
struct ATrap_Wall_Spikes_Metal_C_Retract__Sounds__EventFunc_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.ResetSpikes__FinishedFunc
struct ATrap_Wall_Spikes_Metal_C_ResetSpikes__FinishedFunc_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.ResetSpikes__UpdateFunc
struct ATrap_Wall_Spikes_Metal_C_ResetSpikes__UpdateFunc_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnReloadEnd
struct ATrap_Wall_Spikes_Metal_C_OnReloadEnd_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnPlaced
struct ATrap_Wall_Spikes_Metal_C_OnPlaced_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnFinishedBuilding
struct ATrap_Wall_Spikes_Metal_C_OnFinishedBuilding_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Wall_Spikes_Metal_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnOutOfDurability
struct ATrap_Wall_Spikes_Metal_C_OnOutOfDurability_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnWorldReady
struct ATrap_Wall_Spikes_Metal_C_OnWorldReady_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnInitTeam
struct ATrap_Wall_Spikes_Metal_C_OnInitTeam_Params
{
};

// Function Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.ExecuteUbergraph_Trap_Wall_Spikes_Metal
struct ATrap_Wall_Spikes_Metal_C_ExecuteUbergraph_Trap_Wall_Spikes_Metal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
