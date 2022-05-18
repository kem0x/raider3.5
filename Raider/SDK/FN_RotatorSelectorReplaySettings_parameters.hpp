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

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.OnFocusReceived
struct URotatorSelectorReplaySettings_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Update Options
struct URotatorSelectorReplaySettings_C_Update_Options_Params
{
	TArray<struct FText>                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Center on Widget
struct URotatorSelectorReplaySettings_C_Center_on_Widget_Params
{
};

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Initialize
struct URotatorSelectorReplaySettings_C_Initialize_Params
{
	struct FText                                       Display_Text;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FText>                               Options;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       Hover_Text;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                            Tab_Tooltip;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Update Row Selector
struct URotatorSelectorReplaySettings_C_Update_Row_Selector_Params
{
	int                                                Currently_Selected;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Construct
struct URotatorSelectorReplaySettings_C_Construct_Params
{
};

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.OnMouseLeave
struct URotatorSelectorReplaySettings_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.OnMouseEnter
struct URotatorSelectorReplaySettings_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
struct URotatorSelectorReplaySettings_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct URotatorSelectorReplaySettings_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
struct URotatorSelectorReplaySettings_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.ExecuteUbergraph_RotatorSelectorReplaySettings
struct URotatorSelectorReplaySettings_C_ExecuteUbergraph_RotatorSelectorReplaySettings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Selection Changed__DelegateSignature
struct URotatorSelectorReplaySettings_C_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
