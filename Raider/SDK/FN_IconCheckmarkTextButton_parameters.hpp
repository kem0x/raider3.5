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

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateCheckmark
struct UIconCheckmarkTextButton_C_UpdateCheckmark_Params
{
	bool                                               Checked;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.ShowIcon
struct UIconCheckmarkTextButton_C_ShowIcon_Params
{
	bool                                               bShouldShow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetTextInternal
struct UIconCheckmarkTextButton_C_SetTextInternal_Params
{
	struct FText                                       InButtonText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetInitialMouseKeyboardStyle
struct UIconCheckmarkTextButton_C_SetInitialMouseKeyboardStyle_Params
{
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateTextStyle
struct UIconCheckmarkTextButton_C_UpdateTextStyle_Params
{
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetContentAlignment
struct UIconCheckmarkTextButton_C_SetContentAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateContentAlignment
struct UIconCheckmarkTextButton_C_UpdateContentAlignment_Params
{
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetMouseKeyboardStyle
struct UIconCheckmarkTextButton_C_SetMouseKeyboardStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateStyle
struct UIconCheckmarkTextButton_C_UpdateStyle_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateText
struct UIconCheckmarkTextButton_C_UpdateText_Params
{
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetControllerStyle
struct UIconCheckmarkTextButton_C_SetControllerStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateTextAndStyle
struct UIconCheckmarkTextButton_C_UpdateTextAndStyle_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.InitializeButton
struct UIconCheckmarkTextButton_C_InitializeButton_Params
{
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.Set Icon
struct UIconCheckmarkTextButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.Set Text
struct UIconCheckmarkTextButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.OnCurrentTextStyleChanged
struct UIconCheckmarkTextButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.PreConstruct
struct UIconCheckmarkTextButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetTabLabelInfo
struct UIconCheckmarkTextButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UIconCheckmarkTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.OnTriggeredInputActionChanged
struct UIconCheckmarkTextButton_C_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle*                        NewTriggeredAction;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.OnActionProgress
struct UIconCheckmarkTextButton_C_OnActionProgress_Params
{
	float*                                             HeldPercent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.OnActionComplete
struct UIconCheckmarkTextButton_C_OnActionComplete_Params
{
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.Construct
struct UIconCheckmarkTextButton_C_Construct_Params
{
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.Destruct
struct UIconCheckmarkTextButton_C_Destruct_Params
{
};

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.ExecuteUbergraph_IconCheckmarkTextButton
struct UIconCheckmarkTextButton_C_ExecuteUbergraph_IconCheckmarkTextButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
