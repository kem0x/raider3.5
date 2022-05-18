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

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.RefreshRenderScale
struct UResolutionScaleSlider_C_RefreshRenderScale_Params
{
};

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.Set Brightness
struct UResolutionScaleSlider_C_Set_Brightness_Params
{
};

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.OnFocusReceived
struct UResolutionScaleSlider_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.Center on Widget
struct UResolutionScaleSlider_C_Center_on_Widget_Params
{
};

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.Update Slider
struct UResolutionScaleSlider_C_Update_Slider_Params
{
	struct FText                                       Slider_Text;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Hover_Text;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                            Tooltip_Text_Block;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.Construct
struct UResolutionScaleSlider_C_Construct_Params
{
};

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.OnMouseLeave
struct UResolutionScaleSlider_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.OnMouseEnter
struct UResolutionScaleSlider_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
struct UResolutionScaleSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
struct UResolutionScaleSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature_Params
{
};

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
struct UResolutionScaleSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
struct UResolutionScaleSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.ExecuteUbergraph_ResolutionScaleSlider
struct UResolutionScaleSlider_C_ExecuteUbergraph_ResolutionScaleSlider_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.SliderChanged__DelegateSignature
struct UResolutionScaleSlider_C_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
