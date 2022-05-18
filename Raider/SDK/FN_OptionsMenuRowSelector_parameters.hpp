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

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Button Hovered
struct UOptionsMenuRowSelector_C_Button_Hovered_Params
{
	class UCommonButton*                               Button_Hovered;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Deselect All Rows
struct UOptionsMenuRowSelector_C_Deselect_All_Rows_Params
{
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Update Row Selector
struct UOptionsMenuRowSelector_C_Update_Row_Selector_Params
{
	int                                                Tab_Number;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Initialize Row Selector
struct UOptionsMenuRowSelector_C_Initialize_Row_Selector_Params
{
	struct FText                                       Row_Text;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FText>                               Buttons;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FText>                               Hover_Texts;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Require_Selection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonTextBlock*                            Tab_Tooltip;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Construct
struct UOptionsMenuRowSelector_C_Construct_Params
{
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnSelectedButtonChanged_Event_0_1
struct UOptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_0_1_Params
{
	class UCommonButton*                               AssociatedButton;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseLeave
struct UOptionsMenuRowSelector_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Destruct
struct UOptionsMenuRowSelector_C_Destruct_Params
{
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.PreConstruct
struct UOptionsMenuRowSelector_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.ExecuteUbergraph_OptionsMenuRowSelector
struct UOptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Selector Button Selected__DelegateSignature
struct UOptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature_Params
{
	int                                                Tab_ID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
