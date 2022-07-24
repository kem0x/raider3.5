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

// Function TouchLookStick.TouchLookStick_C.SetBrushForStatus
struct UTouchLookStick_C_SetBrushForStatus_Params
{
	bool                                               InBuild_or_Edit_Mode;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_RC_Pawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found_Context;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TouchLookStick.TouchLookStick_C.CheckForTag
struct UTouchLookStick_C_CheckForTag_Params
{
	struct FGameplayTag                                TagToCheck;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               HasTag;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TouchLookStick.TouchLookStick_C.HandleWeaponChanged
struct UTouchLookStick_C_HandleWeaponChanged_Params
{
	bool                                               In_Build_or_Edit_Mode;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RC_Pawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TouchLookStick.TouchLookStick_C.IsFireButtonUnderTouch
struct UTouchLookStick_C_IsFireButtonUnderTouch_Params
{
	struct FVector2D*                                  TouchPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TouchLookStick.TouchLookStick_C.HandleTouchEnded
struct UTouchLookStick_C_HandleTouchEnded_Params
{
};

// Function TouchLookStick.TouchLookStick_C.HandleTouchStarted
struct UTouchLookStick_C_HandleTouchStarted_Params
{
};

// Function TouchLookStick.TouchLookStick_C.SetStickPosition
struct UTouchLookStick_C_SetStickPosition_Params
{
	struct FVector2D                                   NewPosition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TouchLookStick.TouchLookStick_C.PreConstruct
struct UTouchLookStick_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TouchLookStick.TouchLookStick_C.Construct
struct UTouchLookStick_C_Construct_Params
{
};

// Function TouchLookStick.TouchLookStick_C.SetFiringState
struct UTouchLookStick_C_SetFiringState_Params
{
	bool*                                              IsFiring;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TouchLookStick.TouchLookStick_C.Weapon Change
struct UTouchLookStick_C_Weapon_Change_Params
{
	class AFortWeapon*                                 NewWeapon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 PrevWeapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TouchLookStick.TouchLookStick_C.OnHUDStateUpdate
struct UTouchLookStick_C_OnHUDStateUpdate_Params
{
	struct FFortHUDState*                              NewState;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TouchLookStick.TouchLookStick_C.ExecuteUbergraph_TouchLookStick
struct UTouchLookStick_C_ExecuteUbergraph_TouchLookStick_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
