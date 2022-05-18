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

// Function ScrollingTextButton.ScrollingTextButton_C.SetInitialMouseKeyboardStyle
struct UScrollingTextButton_C_SetInitialMouseKeyboardStyle_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextStyle
struct UScrollingTextButton_C_UpdateTextStyle_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.SetContentAlignment
struct UScrollingTextButton_C_SetContentAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateContentAlignment
struct UScrollingTextButton_C_UpdateContentAlignment_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.SetMouseKeyboardStyle
struct UScrollingTextButton_C_SetMouseKeyboardStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateStyle
struct UScrollingTextButton_C_UpdateStyle_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateText
struct UScrollingTextButton_C_UpdateText_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.SetControllerStyle
struct UScrollingTextButton_C_SetControllerStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextAndStyle
struct UScrollingTextButton_C_UpdateTextAndStyle_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.InitializeButton
struct UScrollingTextButton_C_InitializeButton_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.Set Icon
struct UScrollingTextButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ScrollingTextButton.ScrollingTextButton_C.Set Text
struct UScrollingTextButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ScrollingTextButton.ScrollingTextButton_C.OnCurrentTextStyleChanged
struct UScrollingTextButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.PreConstruct
struct UScrollingTextButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.SetTabLabelInfo
struct UScrollingTextButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ScrollingTextButton.ScrollingTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UScrollingTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.OnTriggeredInputActionChanged
struct UScrollingTextButton_C_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle*                        NewTriggeredAction;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ScrollingTextButton.ScrollingTextButton_C.OnActionProgress
struct UScrollingTextButton_C_OnActionProgress_Params
{
	float*                                             HeldPercent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollingTextButton.ScrollingTextButton_C.OnActionComplete
struct UScrollingTextButton_C_OnActionComplete_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.Construct
struct UScrollingTextButton_C_Construct_Params
{
};

// Function ScrollingTextButton.ScrollingTextButton_C.ExecuteUbergraph_ScrollingTextButton
struct UScrollingTextButton_C_ExecuteUbergraph_ScrollingTextButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
