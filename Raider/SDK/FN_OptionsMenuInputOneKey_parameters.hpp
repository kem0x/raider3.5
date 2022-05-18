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

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.DoesItemHaveChildren
struct UOptionsMenuInputOneKey_C_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.GetIndentLevel
struct UOptionsMenuInputOneKey_C_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.IsItemExpanded
struct UOptionsMenuInputOneKey_C_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.GetData
struct UOptionsMenuInputOneKey_C_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetClearButtonVisibility
struct UOptionsMenuInputOneKey_C_SetClearButtonVisibility_Params
{
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnFocusReceived
struct UOptionsMenuInputOneKey_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Center on Widget
struct UOptionsMenuInputOneKey_C_Center_on_Widget_Params
{
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetExpanded
struct UOptionsMenuInputOneKey_C_SetExpanded_Params
{
	bool                                               bExpanded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetIndexInList
struct UOptionsMenuInputOneKey_C_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetSelected
struct UOptionsMenuInputOneKey_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.ToggleExpansion
struct UOptionsMenuInputOneKey_C_ToggleExpansion_Params
{
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Reset
struct UOptionsMenuInputOneKey_C_Reset_Params
{
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetData
struct UOptionsMenuInputOneKey_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonListView*                             OwningList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnMouseLeave
struct UOptionsMenuInputOneKey_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnMouseEnter
struct UOptionsMenuInputOneKey_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature
struct UOptionsMenuInputOneKey_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature
struct UOptionsMenuInputOneKey_C_BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.RegisterOnClicked
struct UOptionsMenuInputOneKey_C_RegisterOnClicked_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Private_OnExpanderArrowShiftClicked
struct UOptionsMenuInputOneKey_C_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnReleaseToPool
struct UOptionsMenuInputOneKey_C_OnReleaseToPool_Params
{
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnAcquireFromPool
struct UOptionsMenuInputOneKey_C_OnAcquireFromPool_Params
{
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.ExecuteUbergraph_OptionsMenuInputOneKey
struct UOptionsMenuInputOneKey_C_ExecuteUbergraph_OptionsMenuInputOneKey_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.UnbindClicked__DelegateSignature
struct UOptionsMenuInputOneKey_C_UnbindClicked__DelegateSignature_Params
{
	int                                                Number_In_List;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOptionsMenuInputOneKey_C*                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Input Clicked__DelegateSignature
struct UOptionsMenuInputOneKey_C_Input_Clicked__DelegateSignature_Params
{
	int                                                Number_In_List;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Primary_Button;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
