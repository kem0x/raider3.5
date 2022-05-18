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

// Function OptionsMenuSetting.OptionsMenuSetting_C.DoesItemHaveChildren
struct UOptionsMenuSetting_C_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.GetIndentLevel
struct UOptionsMenuSetting_C_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.IsItemExpanded
struct UOptionsMenuSetting_C_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.GetData
struct UOptionsMenuSetting_C_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
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

// Function OptionsMenuSetting.OptionsMenuSetting_C.Center on Widget
struct UOptionsMenuSetting_C_Center_on_Widget_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnAcquireFromPool
struct UOptionsMenuSetting_C_OnAcquireFromPool_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.Private_OnExpanderArrowShiftClicked
struct UOptionsMenuSetting_C_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.RegisterOnClicked
struct UOptionsMenuSetting_C_RegisterOnClicked_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.SetExpanded
struct UOptionsMenuSetting_C_SetExpanded_Params
{
	bool                                               bExpanded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.SetIndexInList
struct UOptionsMenuSetting_C_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.SetSelected
struct UOptionsMenuSetting_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.ToggleExpansion
struct UOptionsMenuSetting_C_ToggleExpansion_Params
{
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.Reset
struct UOptionsMenuSetting_C_Reset_Params
{
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

// Function OptionsMenuSetting.OptionsMenuSetting_C.SetData
struct UOptionsMenuSetting_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonListView*                             OwningList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnReleaseToPool
struct UOptionsMenuSetting_C_OnReleaseToPool_Params
{
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
