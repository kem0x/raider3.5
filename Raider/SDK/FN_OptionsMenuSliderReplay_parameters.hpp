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

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.GetSliderValueText
struct UOptionsMenuSliderReplay_C_GetSliderValueText_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ValueText;                                                // (Parm, OutParm)
};

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.OnFocusReceived
struct UOptionsMenuSliderReplay_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.Center on Widget
struct UOptionsMenuSliderReplay_C_Center_on_Widget_Params
{
};

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.Update Slider
struct UOptionsMenuSliderReplay_C_Update_Slider_Params
{
	struct FText                                       Slider_Text;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Hover_Text;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                            Tooltip_Text_Block;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   Min_Max_Value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.Construct
struct UOptionsMenuSliderReplay_C_Construct_Params
{
};

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.OnMouseLeave
struct UOptionsMenuSliderReplay_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.OnMouseEnter
struct UOptionsMenuSliderReplay_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
struct UOptionsMenuSliderReplay_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
struct UOptionsMenuSliderReplay_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuSliderReplay_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
struct UOptionsMenuSliderReplay_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.ExecuteUbergraph_OptionsMenuSliderReplay
struct UOptionsMenuSliderReplay_C_ExecuteUbergraph_OptionsMenuSliderReplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenuSliderReplay.OptionsMenuSliderReplay_C.SliderChanged__DelegateSignature
struct UOptionsMenuSliderReplay_C_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
