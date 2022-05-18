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

// Function OptionsMenuInput.OptionsMenuInput_C.DoesItemHaveChildren
struct UOptionsMenuInput_C_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.GetIndentLevel
struct UOptionsMenuInput_C_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.IsItemExpanded
struct UOptionsMenuInput_C_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.GetData
struct UOptionsMenuInput_C_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.Change Key
struct UOptionsMenuInput_C_Change_Key_Params
{
	bool                                               Primary_Key;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Key_To_Sets;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsMenuInput.OptionsMenuInput_C.Center on Widget
struct UOptionsMenuInput_C_Center_on_Widget_Params
{
};

// Function OptionsMenuInput.OptionsMenuInput_C.SetIndexInList
struct UOptionsMenuInput_C_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.SetSelected
struct UOptionsMenuInput_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.ToggleExpansion
struct UOptionsMenuInput_C_ToggleExpansion_Params
{
};

// Function OptionsMenuInput.OptionsMenuInput_C.Reset
struct UOptionsMenuInput_C_Reset_Params
{
};

// Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
struct UOptionsMenuInput_C_BndEvt__PrimaryInput_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
struct UOptionsMenuInput_C_BndEvt__SecondaryInput_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.SetData
struct UOptionsMenuInput_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonListView*                             OwningList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.OnMouseLeave
struct UOptionsMenuInput_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuInput.OptionsMenuInput_C.OnMouseEnter
struct UOptionsMenuInput_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuInput.OptionsMenuInput_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature
struct UOptionsMenuInput_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.SetExpanded
struct UOptionsMenuInput_C_SetExpanded_Params
{
	bool                                               bExpanded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.RegisterOnClicked
struct UOptionsMenuInput_C_RegisterOnClicked_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OptionsMenuInput.OptionsMenuInput_C.Private_OnExpanderArrowShiftClicked
struct UOptionsMenuInput_C_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function OptionsMenuInput.OptionsMenuInput_C.OnReleaseToPool
struct UOptionsMenuInput_C_OnReleaseToPool_Params
{
};

// Function OptionsMenuInput.OptionsMenuInput_C.OnAcquireFromPool
struct UOptionsMenuInput_C_OnAcquireFromPool_Params
{
};

// Function OptionsMenuInput.OptionsMenuInput_C.ExecuteUbergraph_OptionsMenuInput
struct UOptionsMenuInput_C_ExecuteUbergraph_OptionsMenuInput_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.UnbindClicked__DelegateSignature
struct UOptionsMenuInput_C_UnbindClicked__DelegateSignature_Params
{
	int                                                Number_In_List;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInput.OptionsMenuInput_C.Input Clicked__DelegateSignature
struct UOptionsMenuInput_C_Input_Clicked__DelegateSignature_Params
{
	int                                                Number_In_List;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Primary_Button;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
