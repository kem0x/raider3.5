// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ResolutionScaleSlider.ResolutionScaleSlider_C.RefreshRenderScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResolutionScaleSlider_C::RefreshRenderScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.RefreshRenderScale");

	UResolutionScaleSlider_C_RefreshRenderScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.Set Brightness
// (Public, BlueprintCallable, BlueprintEvent)

void UResolutionScaleSlider_C::Set_Brightness()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.Set Brightness");

	UResolutionScaleSlider_C_Set_Brightness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UResolutionScaleSlider_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.OnFocusReceived");

	UResolutionScaleSlider_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.Center on Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UResolutionScaleSlider_C::Center_on_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.Center on Widget");

	UResolutionScaleSlider_C_Center_on_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.Update Slider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Slider_Text                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Hover_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*        Tooltip_Text_Block             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResolutionScaleSlider_C::Update_Slider(const struct FText& Slider_Text, const struct FText& Hover_Text, class UCommonTextBlock* Tooltip_Text_Block)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.Update Slider");

	UResolutionScaleSlider_C_Update_Slider_Params params;
	params.Slider_Text = Slider_Text;
	params.Hover_Text = Hover_Text;
	params.Tooltip_Text_Block = Tooltip_Text_Block;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResolutionScaleSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.Construct");

	UResolutionScaleSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResolutionScaleSlider_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.OnMouseLeave");

	UResolutionScaleSlider_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResolutionScaleSlider_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.OnMouseEnter");

	UResolutionScaleSlider_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UResolutionScaleSlider_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature");

	UResolutionScaleSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UResolutionScaleSlider_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature");

	UResolutionScaleSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResolutionScaleSlider_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature");

	UResolutionScaleSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResolutionScaleSlider_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");

	UResolutionScaleSlider_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.ExecuteUbergraph_ResolutionScaleSlider
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResolutionScaleSlider_C::ExecuteUbergraph_ResolutionScaleSlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.ExecuteUbergraph_ResolutionScaleSlider");

	UResolutionScaleSlider_C_ExecuteUbergraph_ResolutionScaleSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResolutionScaleSlider.ResolutionScaleSlider_C.SliderChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResolutionScaleSlider_C::SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResolutionScaleSlider.ResolutionScaleSlider_C.SliderChanged__DelegateSignature");

	UResolutionScaleSlider_C_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
