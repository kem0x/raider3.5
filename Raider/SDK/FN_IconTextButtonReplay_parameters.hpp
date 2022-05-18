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

// Function IconTextButtonReplay.IconTextButtonReplay_C.ActivateButton
struct UIconTextButtonReplay_C_ActivateButton_Params
{
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateTextStyle
struct UIconTextButtonReplay_C_UpdateTextStyle_Params
{
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.SetContentAlignment
struct UIconTextButtonReplay_C_SetContentAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateContentAlignment
struct UIconTextButtonReplay_C_UpdateContentAlignment_Params
{
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.SetMouseKeyboardStyle
struct UIconTextButtonReplay_C_SetMouseKeyboardStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateStyle
struct UIconTextButtonReplay_C_UpdateStyle_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateText
struct UIconTextButtonReplay_C_UpdateText_Params
{
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.SetControllerStyle
struct UIconTextButtonReplay_C_SetControllerStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateTextAndStyle
struct UIconTextButtonReplay_C_UpdateTextAndStyle_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.InitializeButton
struct UIconTextButtonReplay_C_InitializeButton_Params
{
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.Set Icon
struct UIconTextButtonReplay_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.Set Text
struct UIconTextButtonReplay_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.OnCurrentTextStyleChanged
struct UIconTextButtonReplay_C_OnCurrentTextStyleChanged_Params
{
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.PreConstruct
struct UIconTextButtonReplay_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.SetTabLabelInfo
struct UIconTextButtonReplay_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UIconTextButtonReplay_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.OnTriggeredInputActionChanged
struct UIconTextButtonReplay_C_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle*                        NewTriggeredAction;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.OnActionProgress
struct UIconTextButtonReplay_C_OnActionProgress_Params
{
	float*                                             HeldPercent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.OnActionComplete
struct UIconTextButtonReplay_C_OnActionComplete_Params
{
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.Construct
struct UIconTextButtonReplay_C_Construct_Params
{
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.OnHovered
struct UIconTextButtonReplay_C_OnHovered_Params
{
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.OnUnhovered
struct UIconTextButtonReplay_C_OnUnhovered_Params
{
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.OnSelected
struct UIconTextButtonReplay_C_OnSelected_Params
{
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.OnDeselected
struct UIconTextButtonReplay_C_OnDeselected_Params
{
};

// Function IconTextButtonReplay.IconTextButtonReplay_C.ExecuteUbergraph_IconTextButtonReplay
struct UIconTextButtonReplay_C_ExecuteUbergraph_IconTextButtonReplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
