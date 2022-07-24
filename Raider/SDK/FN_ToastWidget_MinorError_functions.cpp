// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ToastWidget_MinorError.ToastWidget_MinorError_C.SetupAnimBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unbind                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToastWidget_MinorError_C::SetupAnimBindings(bool Unbind)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.SetupAnimBindings");

	UToastWidget_MinorError_C_SetupAnimBindings_Params params;
	params.Unbind = Unbind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.ApplyAdditionalStyling
// (Public, BlueprintCallable, BlueprintEvent)

void UToastWidget_MinorError_C::ApplyAdditionalStyling()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.ApplyAdditionalStyling");

	UToastWidget_MinorError_C_ApplyAdditionalStyling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)

void UToastWidget_MinorError_C::SetImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.SetImage");

	UToastWidget_MinorError_C_SetImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.GetOpenButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UToastWidget_MinorError_C::GetOpenButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.GetOpenButtonVisibility");

	UToastWidget_MinorError_C_GetOpenButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)

void UToastWidget_MinorError_C::StartIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.StartIntro");

	UToastWidget_MinorError_C_StartIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*        TextBlock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UToastWidget_MinorError_C::ShowText(const struct FText& Text, class UCommonTextBlock* TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.ShowText");

	UToastWidget_MinorError_C_ShowText_Params params;
	params.Text = Text;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.SetToast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*     Toast                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToastWidget_MinorError_C::SetToast(class UFortUINotification* Toast)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.SetToast");

	UToastWidget_MinorError_C_SetToast_Params params;
	params.Toast = Toast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.PlayOutro
// (BlueprintCallable, BlueprintEvent)

void UToastWidget_MinorError_C::PlayOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.PlayOutro");

	UToastWidget_MinorError_C_PlayOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UToastWidget_MinorError_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseEnter");

	UToastWidget_MinorError_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UToastWidget_MinorError_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseLeave");

	UToastWidget_MinorError_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UToastWidget_MinorError_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	UToastWidget_MinorError_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)

void UToastWidget_MinorError_C::HandleOutroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.HandleOutroFinished");

	UToastWidget_MinorError_C_HandleOutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)

void UToastWidget_MinorError_C::HandleIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.HandleIntroFinished");

	UToastWidget_MinorError_C_HandleIntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToastWidget_MinorError_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.Construct");

	UToastWidget_MinorError_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToastWidget_MinorError_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.Destruct");

	UToastWidget_MinorError_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.ExecuteUbergraph_ToastWidget_MinorError
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToastWidget_MinorError_C::ExecuteUbergraph_ToastWidget_MinorError(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.ExecuteUbergraph_ToastWidget_MinorError");

	UToastWidget_MinorError_C_ExecuteUbergraph_ToastWidget_MinorError_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UToastWidget_MinorError_C::OnFinishedToast__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnFinishedToast__DelegateSignature");

	UToastWidget_MinorError_C_OnFinishedToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
