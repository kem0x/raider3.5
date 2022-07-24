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

// Function TabInputOptions.TabInputOptions_C.NewFunction_1
struct UTabInputOptions_C_NewFunction_1_Params
{
};

// Function TabInputOptions.TabInputOptions_C.Set Input Enabled
struct UTabInputOptions_C_Set_Input_Enabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabInputOptions.TabInputOptions_C.Overlay Key Pressed
struct UTabInputOptions_C_Overlay_Key_Pressed_Params
{
	struct FKey                                        NewKey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TabInputOptions.TabInputOptions_C.CenterOnTab
struct UTabInputOptions_C_CenterOnTab_Params
{
};

// Function TabInputOptions.TabInputOptions_C.BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature
struct UTabInputOptions_C_BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabInputOptions.TabInputOptions_C.HandleUsingGamepadChanged
struct UTabInputOptions_C_HandleUsingGamepadChanged_Params
{
	ECommonInputType*                                  bNewInputType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabInputOptions.TabInputOptions_C.UnbindClicked
struct UTabInputOptions_C_UnbindClicked_Params
{
	int                                                Number_in_List;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOptionsMenuInput_C*                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabInputOptions.TabInputOptions_C.ClearAndConstructKeybindList
struct UTabInputOptions_C_ClearAndConstructKeybindList_Params
{
};

// Function TabInputOptions.TabInputOptions_C.Input Clicked
struct UTabInputOptions_C_Input_Clicked_Params
{
	int                                                Number_in_List;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Primary_Button;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabInputOptions.TabInputOptions_C.Construct
struct UTabInputOptions_C_Construct_Params
{
};

// Function TabInputOptions.TabInputOptions_C.UpdateOptionsTab
struct UTabInputOptions_C_UpdateOptionsTab_Params
{
};

// Function TabInputOptions.TabInputOptions_C.ExecuteUbergraph_TabInputOptions
struct UTabInputOptions_C_ExecuteUbergraph_TabInputOptions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabInputOptions.TabInputOptions_C.Gamepad Changed__DelegateSignature
struct UTabInputOptions_C_Gamepad_Changed__DelegateSignature_Params
{
	bool                                               Gamepad_Enabled;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabInputOptions.TabInputOptions_C.Disable Overlay__DelegateSignature
struct UTabInputOptions_C_Disable_Overlay__DelegateSignature_Params
{
};

// Function TabInputOptions.TabInputOptions_C.Enable Overlay__DelegateSignature
struct UTabInputOptions_C_Enable_Overlay__DelegateSignature_Params
{
	bool                                               Accept_Input;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Overlay_Text;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
