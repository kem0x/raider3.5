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

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C. ChangeToFriendlyMaterial
struct ATrap_Ceiling_Spikes_C__ChangeToFriendlyMaterial_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.MaterialSweepOnSpikes
struct ATrap_Ceiling_Spikes_C_MaterialSweepOnSpikes_Params
{
	float                                              SweepSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SweepColor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              SweepExponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.SetSpikePosition
struct ATrap_Ceiling_Spikes_C_SetSpikePosition_Params
{
	float                                              NewSpikePosition;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.UserConstructionScript
struct ATrap_Ceiling_Spikes_C_UserConstructionScript_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.Fire__FinishedFunc
struct ATrap_Ceiling_Spikes_C_Fire__FinishedFunc_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.Fire__UpdateFunc
struct ATrap_Ceiling_Spikes_C_Fire__UpdateFunc_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.Retract__FinishedFunc
struct ATrap_Ceiling_Spikes_C_Retract__FinishedFunc_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.Retract__UpdateFunc
struct ATrap_Ceiling_Spikes_C_Retract__UpdateFunc_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.Retract__Sounds__EventFunc
struct ATrap_Ceiling_Spikes_C_Retract__Sounds__EventFunc_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.ResetSpikes__FinishedFunc
struct ATrap_Ceiling_Spikes_C_ResetSpikes__FinishedFunc_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.ResetSpikes__UpdateFunc
struct ATrap_Ceiling_Spikes_C_ResetSpikes__UpdateFunc_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.OnReloadEnd
struct ATrap_Ceiling_Spikes_C_OnReloadEnd_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.OnPlaced
struct ATrap_Ceiling_Spikes_C_OnPlaced_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.OnFinishedBuilding
struct ATrap_Ceiling_Spikes_C_OnFinishedBuilding_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Ceiling_Spikes_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.OnOutOfDurability
struct ATrap_Ceiling_Spikes_C_OnOutOfDurability_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.OnWorldReady
struct ATrap_Ceiling_Spikes_C_OnWorldReady_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.OnInitTeam
struct ATrap_Ceiling_Spikes_C_OnInitTeam_Params
{
};

// Function Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.ExecuteUbergraph_Trap_Ceiling_Spikes
struct ATrap_Ceiling_Spikes_C_ExecuteUbergraph_Trap_Ceiling_Spikes_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
