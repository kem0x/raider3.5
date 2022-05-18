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

// Function FortReplayTimeline.FortReplayTimeline_C.OnHUDVisibilityChanged
struct UFortReplayTimeline_C_OnHUDVisibilityChanged_Params
{
	EHudVisibilityState                                VisibilityState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayTimeline.FortReplayTimeline_C.OnPressCancel
struct UFortReplayTimeline_C_OnPressCancel_Params
{
	bool                                               bHandled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayTimeline.FortReplayTimeline_C.OnPressConfirm
struct UFortReplayTimeline_C_OnPressConfirm_Params
{
	bool                                               bHandled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayTimeline.FortReplayTimeline_C.OnTimelineInputFocusChanged
struct UFortReplayTimeline_C_OnTimelineInputFocusChanged_Params
{
	bool                                               bHasInputFocus;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayTimeline.FortReplayTimeline_C.GetProgressBarWidget
struct UFortReplayTimeline_C_GetProgressBarWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FortReplayTimeline.FortReplayTimeline_C.SetReplayContext
struct UFortReplayTimeline_C_SetReplayContext_Params
{
	class UFortReplayContext*                          InReplayContext;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayTimeline.FortReplayTimeline_C.UpdateFillBar
struct UFortReplayTimeline_C_UpdateFillBar_Params
{
	float                                              InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayTimeline.FortReplayTimeline_C.InitializeBar
struct UFortReplayTimeline_C_InitializeBar_Params
{
};

// Function FortReplayTimeline.FortReplayTimeline_C.PreConstruct
struct UFortReplayTimeline_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayTimeline.FortReplayTimeline_C.CurrentTimeChangedFromNative
struct UFortReplayTimeline_C_CurrentTimeChangedFromNative_Params
{
	float                                              TimeNow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayTimeline.FortReplayTimeline_C.BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_95_OnMouseCaptureEndEvent__DelegateSignature
struct UFortReplayTimeline_C_BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_95_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function FortReplayTimeline.FortReplayTimeline_C.BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_110_OnControllerCaptureEndEvent__DelegateSignature
struct UFortReplayTimeline_C_BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_110_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function FortReplayTimeline.FortReplayTimeline_C.ExecuteUbergraph_FortReplayTimeline
struct UFortReplayTimeline_C_ExecuteUbergraph_FortReplayTimeline_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
