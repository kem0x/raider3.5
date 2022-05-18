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

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.SetSuspendInput
struct ATheaterCamera_Blueprint_C_SetSuspendInput_Params
{
	bool                                               SuspendInput;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.IsInputSuspended
struct ATheaterCamera_Blueprint_C_IsInputSuspended_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.NewFunction_0_1
struct ATheaterCamera_Blueprint_C_NewFunction_0_1_Params
{
	class AActor*                                      self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PanCamera
struct ATheaterCamera_Blueprint_C_PanCamera_Params
{
	float                                              DeltaX;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaY;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.HandleTheaterSelected
struct ATheaterCamera_Blueprint_C_HandleTheaterSelected_Params
{
	struct FString                                     TheaterId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ZoomCameraStep
struct ATheaterCamera_Blueprint_C_ZoomCameraStep_Params
{
	bool                                               Forward;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.UserConstructionScript
struct ATheaterCamera_Blueprint_C_UserConstructionScript_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__FinishedFunc
struct ATheaterCamera_Blueprint_C_FocusTimeline__FinishedFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__UpdateFunc
struct ATheaterCamera_Blueprint_C_FocusTimeline__UpdateFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__FinishedFunc
struct ATheaterCamera_Blueprint_C_DebugZoomTL__FinishedFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__UpdateFunc
struct ATheaterCamera_Blueprint_C_DebugZoomTL__UpdateFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__FinishedFunc
struct ATheaterCamera_Blueprint_C_InitializeFX_TL__FinishedFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__UpdateFunc
struct ATheaterCamera_Blueprint_C_InitializeFX_TL__UpdateFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__FinishedFunc
struct ATheaterCamera_Blueprint_C_DEBUGFOVA__FinishedFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__UpdateFunc
struct ATheaterCamera_Blueprint_C_DEBUGFOVA__UpdateFunc_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3_4
struct ATheaterCamera_Blueprint_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_3
struct ATheaterCamera_Blueprint_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1_2
struct ATheaterCamera_Blueprint_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0_1
struct ATheaterCamera_Blueprint_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnActivated
struct ATheaterCamera_Blueprint_C_OnActivated_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDeactivated
struct ATheaterCamera_Blueprint_C_OnDeactivated_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.SetTileFocus
struct ATheaterCamera_Blueprint_C_SetTileFocus_Params
{
	class AFortTheaterMapTile**                        TargetTile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ReceiveTick
struct ATheaterCamera_Blueprint_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragBegin
struct ATheaterCamera_Blueprint_C_OnDragBegin_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragEnd
struct ATheaterCamera_Blueprint_C_OnDragEnd_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.StopFocusTimeline
struct ATheaterCamera_Blueprint_C_StopFocusTimeline_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ForceTileFocus
struct ATheaterCamera_Blueprint_C_ForceTileFocus_Params
{
	struct FVector                                     HexWorldLoc;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PingFromHex
struct ATheaterCamera_Blueprint_C_PingFromHex_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.RefreshCloudMask
struct ATheaterCamera_Blueprint_C_RefreshCloudMask_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.MaskFinished
struct ATheaterCamera_Blueprint_C_MaskFinished_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PinnedPing
struct ATheaterCamera_Blueprint_C_PinnedPing_Params
{
};

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ExecuteUbergraph_TheaterCamera_Blueprint
struct ATheaterCamera_Blueprint_C_ExecuteUbergraph_TheaterCamera_Blueprint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
