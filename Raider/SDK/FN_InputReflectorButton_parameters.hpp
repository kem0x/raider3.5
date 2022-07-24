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

// Function InputReflectorButton.InputReflectorButton_C.ShowIcon
struct UInputReflectorButton_C_ShowIcon_Params
{
	bool                                               bShouldShow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputReflectorButton.InputReflectorButton_C.SetTextInternal
struct UInputReflectorButton_C_SetTextInternal_Params
{
	struct FText                                       InButtonText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InputReflectorButton.InputReflectorButton_C.SetInitialMouseKeyboardStyle
struct UInputReflectorButton_C_SetInitialMouseKeyboardStyle_Params
{
};

// Function InputReflectorButton.InputReflectorButton_C.UpdateTextStyle
struct UInputReflectorButton_C_UpdateTextStyle_Params
{
};

// Function InputReflectorButton.InputReflectorButton_C.SetContentAlignment
struct UInputReflectorButton_C_SetContentAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputReflectorButton.InputReflectorButton_C.UpdateContentAlignment
struct UInputReflectorButton_C_UpdateContentAlignment_Params
{
};

// Function InputReflectorButton.InputReflectorButton_C.SetMouseKeyboardStyle
struct UInputReflectorButton_C_SetMouseKeyboardStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputReflectorButton.InputReflectorButton_C.UpdateStyle
struct UInputReflectorButton_C_UpdateStyle_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputReflectorButton.InputReflectorButton_C.UpdateText
struct UInputReflectorButton_C_UpdateText_Params
{
};

// Function InputReflectorButton.InputReflectorButton_C.SetControllerStyle
struct UInputReflectorButton_C_SetControllerStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputReflectorButton.InputReflectorButton_C.UpdateTextAndStyle
struct UInputReflectorButton_C_UpdateTextAndStyle_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputReflectorButton.InputReflectorButton_C.InitializeButton
struct UInputReflectorButton_C_InitializeButton_Params
{
};

// Function InputReflectorButton.InputReflectorButton_C.Set Icon
struct UInputReflectorButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InputReflectorButton.InputReflectorButton_C.Set Text
struct UInputReflectorButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InputReflectorButton.InputReflectorButton_C.OnCurrentTextStyleChanged
struct UInputReflectorButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function InputReflectorButton.InputReflectorButton_C.PreConstruct
struct UInputReflectorButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputReflectorButton.InputReflectorButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UInputReflectorButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputReflectorButton.InputReflectorButton_C.OnTriggeredInputActionChanged
struct UInputReflectorButton_C_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle*                        NewTriggeredAction;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function InputReflectorButton.InputReflectorButton_C.OnActionProgress
struct UInputReflectorButton_C_OnActionProgress_Params
{
	float*                                             HeldPercent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputReflectorButton.InputReflectorButton_C.OnActionComplete
struct UInputReflectorButton_C_OnActionComplete_Params
{
};

// Function InputReflectorButton.InputReflectorButton_C.Construct
struct UInputReflectorButton_C_Construct_Params
{
};

// Function InputReflectorButton.InputReflectorButton_C.Destruct
struct UInputReflectorButton_C_Destruct_Params
{
};

// Function InputReflectorButton.InputReflectorButton_C.ExecuteUbergraph_InputReflectorButton
struct UInputReflectorButton_C_ExecuteUbergraph_InputReflectorButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
