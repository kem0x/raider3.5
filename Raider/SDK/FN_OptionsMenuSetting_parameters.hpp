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

// Function OptionsMenuSetting.OptionsMenuSetting_C.GetListItemObject
struct UOptionsMenuSetting_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.Hide Tooltip
struct UOptionsMenuSetting_C_Hide_Tooltip_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.Show Tooltip
struct UOptionsMenuSetting_C_Show_Tooltip_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnGetMenuContent
struct UOptionsMenuSetting_C_OnGetMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.HandlePawnSet
struct UOptionsMenuSetting_C_HandlePawnSet_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSize
struct UOptionsMenuSetting_C_UpdateSize_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.Update Setting
struct UOptionsMenuSetting_C_Update_Setting_Params
{
	class UCommonTextBlock*                            Tooltip_Text_Block;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.Center On Widget
struct UOptionsMenuSetting_C_Center_On_Widget_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemExpansionChanged
struct UOptionsMenuSetting_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemSelectionChanged
struct UOptionsMenuSetting_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.Construct
struct UOptionsMenuSetting_C_Construct_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseLeave
struct UOptionsMenuSetting_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseEnter
struct UOptionsMenuSetting_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_20_OnRotated__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_20_OnRotated__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnListItemObjectSet
struct UOptionsMenuSetting_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnEntryReleased
struct UOptionsMenuSetting_C_BP_OnEntryReleased_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent_22_OnMenuOpenChangedEvent__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent_22_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature
struct UOptionsMenuSetting_C_BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnReleaseToPool_2
struct UOptionsMenuSetting_C_OnReleaseToPool_2_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.ExecuteUbergraph_OptionsMenuSetting
struct UOptionsMenuSetting_C_ExecuteUbergraph_OptionsMenuSetting_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.SettingValueChanged__DelegateSignature
struct UOptionsMenuSetting_C_SettingValueChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
