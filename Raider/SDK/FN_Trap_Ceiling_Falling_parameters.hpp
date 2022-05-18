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

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleTiresAndFX
struct ATrap_Ceiling_Falling_C_ToggleTiresAndFX_Params
{
};

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleDoors
struct ATrap_Ceiling_Falling_C_ToggleDoors_Params
{
	bool                                               bToggle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OnRep_bActivated
struct ATrap_Ceiling_Falling_C_OnRep_bActivated_Params
{
};

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleTireVisibility
struct ATrap_Ceiling_Falling_C_ToggleTireVisibility_Params
{
	bool                                               NewHidden;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.UserConstructionScript
struct ATrap_Ceiling_Falling_C_UserConstructionScript_Params
{
};

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoor__FinishedFunc
struct ATrap_Ceiling_Falling_C_OpenDoor__FinishedFunc_Params
{
};

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoor__UpdateFunc
struct ATrap_Ceiling_Falling_C_OpenDoor__UpdateFunc_Params
{
};

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OnPlaced
struct ATrap_Ceiling_Falling_C_OnPlaced_Params
{
};

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.TrapActivated
struct ATrap_Ceiling_Falling_C_TrapActivated_Params
{
	float*                                             CooldownDuration;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ShowTires
struct ATrap_Ceiling_Falling_C_ShowTires_Params
{
};

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.FireDustFX
struct ATrap_Ceiling_Falling_C_FireDustFX_Params
{
};

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoors
struct ATrap_Ceiling_Falling_C_OpenDoors_Params
{
};

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.CloseDoors
struct ATrap_Ceiling_Falling_C_CloseDoors_Params
{
};

// Function Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ExecuteUbergraph_Trap_Ceiling_Falling
struct ATrap_Ceiling_Falling_C_ExecuteUbergraph_Trap_Ceiling_Falling_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
