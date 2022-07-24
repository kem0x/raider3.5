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

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.GetListItemObject
struct UOptionsMenuInputOneKey_C_GetListItemObject_Params
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

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Center On Widget
struct UOptionsMenuInputOneKey_C_Center_On_Widget_Params
{
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnListItemObjectSet
struct UOptionsMenuInputOneKey_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BP_OnItemSelectionChanged
struct UOptionsMenuInputOneKey_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BP_OnItemExpansionChanged
struct UOptionsMenuInputOneKey_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BP_OnEntryReleased
struct UOptionsMenuInputOneKey_C_BP_OnEntryReleased_Params
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
	int                                                Number_in_List;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOptionsMenuInputOneKey_C*                   Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Input Clicked__DelegateSignature
struct UOptionsMenuInputOneKey_C_Input_Clicked__DelegateSignature_Params
{
	int                                                Number_in_List;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Primary_Button;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
