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

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetListItemObject
struct UOptionsMenuHudRotator_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.UpdateSize
struct UOptionsMenuHudRotator_C_UpdateSize_Params
{
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Options
struct UOptionsMenuHudRotator_C_Update_Options_Params
{
	TArray<struct FText>                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Center On Widget
struct UOptionsMenuHudRotator_C_Center_On_Widget_Params
{
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Row Selector
struct UOptionsMenuHudRotator_C_Update_Row_Selector_Params
{
	int                                                Currently_Selected;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BP_OnEntryReleased
struct UOptionsMenuHudRotator_C_BP_OnEntryReleased_Params
{
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BP_OnItemExpansionChanged
struct UOptionsMenuHudRotator_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BP_OnItemSelectionChanged
struct UOptionsMenuHudRotator_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Construct
struct UOptionsMenuHudRotator_C_Construct_Params
{
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseLeave
struct UOptionsMenuHudRotator_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseEnter
struct UOptionsMenuHudRotator_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
struct UOptionsMenuHudRotator_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnListItemObjectSet
struct UOptionsMenuHudRotator_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UOptionsMenuHudRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
struct UOptionsMenuHudRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ExecuteUbergraph_OptionsMenuHudRotator
struct UOptionsMenuHudRotator_C_ExecuteUbergraph_OptionsMenuHudRotator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Selection Changed__DelegateSignature
struct UOptionsMenuHudRotator_C_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Gameplay_Tag;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
