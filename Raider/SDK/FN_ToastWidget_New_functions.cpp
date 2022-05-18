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

// Function ToastWidget_New.ToastWidget_New_C.SetupAnimBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unbind                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToastWidget_New_C::SetupAnimBindings(bool Unbind)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.SetupAnimBindings");

	UToastWidget_New_C_SetupAnimBindings_Params params;
	params.Unbind = Unbind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.ApplyAdditionalStyling
// (Public, BlueprintCallable, BlueprintEvent)

void UToastWidget_New_C::ApplyAdditionalStyling()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.ApplyAdditionalStyling");

	UToastWidget_New_C_ApplyAdditionalStyling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)

void UToastWidget_New_C::SetImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.SetImage");

	UToastWidget_New_C_SetImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.GetOpenButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UToastWidget_New_C::GetOpenButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.GetOpenButtonVisibility");

	UToastWidget_New_C_GetOpenButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ToastWidget_New.ToastWidget_New_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)

void UToastWidget_New_C::StartIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.StartIntro");

	UToastWidget_New_C_StartIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*        TextBlock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UToastWidget_New_C::ShowText(const struct FText& Text, class UCommonTextBlock* TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.ShowText");

	UToastWidget_New_C_ShowText_Params params;
	params.Text = Text;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.SetToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*     Toast                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToastWidget_New_C::SetToast(class UFortUINotification* Toast)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.SetToast");

	UToastWidget_New_C_SetToast_Params params;
	params.Toast = Toast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.PlayOutro
// (BlueprintCallable, BlueprintEvent)

void UToastWidget_New_C::PlayOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.PlayOutro");

	UToastWidget_New_C_PlayOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UToastWidget_New_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.OnMouseEnter");

	UToastWidget_New_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UToastWidget_New_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.OnMouseLeave");

	UToastWidget_New_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UToastWidget_New_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	UToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)

void UToastWidget_New_C::HandleOutroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.HandleOutroFinished");

	UToastWidget_New_C_HandleOutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)

void UToastWidget_New_C::HandleIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.HandleIntroFinished");

	UToastWidget_New_C_HandleIntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToastWidget_New_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.Construct");

	UToastWidget_New_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToastWidget_New_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.Destruct");

	UToastWidget_New_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.ExecuteUbergraph_ToastWidget_New
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToastWidget_New_C::ExecuteUbergraph_ToastWidget_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.ExecuteUbergraph_ToastWidget_New");

	UToastWidget_New_C_ExecuteUbergraph_ToastWidget_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidget_New.ToastWidget_New_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UToastWidget_New_C::OnFinishedToast__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToastWidget_New.ToastWidget_New_C.OnFinishedToast__DelegateSignature");

	UToastWidget_New_C_OnFinishedToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
