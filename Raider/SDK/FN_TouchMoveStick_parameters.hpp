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

// Function TouchMoveStick.TouchMoveStick_C.PreConstruct
struct UTouchMoveStick_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TouchMoveStick.TouchMoveStick_C.Construct
struct UTouchMoveStick_C_Construct_Params
{
};

// Function TouchMoveStick.TouchMoveStick_C.Tick
struct UTouchMoveStick_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TouchMoveStick.TouchMoveStick_C.SetStickPosition
struct UTouchMoveStick_C_SetStickPosition_Params
{
	struct FVector2D*                                  NewPosition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TouchMoveStick.TouchMoveStick_C.SetMovementLockStatus
struct UTouchMoveStick_C_SetMovementLockStatus_Params
{
	bool*                                              MovementIsLocked;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TouchMoveStick.TouchMoveStick_C.HandleTouchStarted
struct UTouchMoveStick_C_HandleTouchStarted_Params
{
};

// Function TouchMoveStick.TouchMoveStick_C.HandleTouchEnded
struct UTouchMoveStick_C_HandleTouchEnded_Params
{
};

// Function TouchMoveStick.TouchMoveStick_C.ExecuteUbergraph_TouchMoveStick
struct UTouchMoveStick_C_ExecuteUbergraph_TouchMoveStick_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
