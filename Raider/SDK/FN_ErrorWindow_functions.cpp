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

// Function ErrorWindow.ErrorWindow_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UErrorWindow_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.OnAnalogValueChanged");

	UErrorWindow_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ErrorWindow.ErrorWindow_C.SetupSeverSeverity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::SetupSeverSeverity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.SetupSeverSeverity");

	UErrorWindow_C_SetupSeverSeverity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.SetupMediumSeverity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::SetupMediumSeverity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.SetupMediumSeverity");

	UErrorWindow_C_SetupMediumSeverity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.CloseErrorWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::CloseErrorWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.CloseErrorWindow");

	UErrorWindow_C_CloseErrorWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.GetShouldLogout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UErrorWindow_C::GetShouldLogout(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.GetShouldLogout");

	UErrorWindow_C_GetShouldLogout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ErrorWindow.ErrorWindow_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.Initialize");

	UErrorWindow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.AddError
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortErrorInfo          ErrorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           First_Error                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UErrorWindow_C::AddError(bool First_Error, struct FFortErrorInfo* ErrorInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.AddError");

	UErrorWindow_C_AddError_Params params;
	params.First_Error = First_Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorInfo != nullptr)
		*ErrorInfo = params.ErrorInfo;
}


// Function ErrorWindow.ErrorWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UErrorWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.Construct");

	UErrorWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UErrorWindow_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.Destruct");

	UErrorWindow_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.OnBeginOutro
// (Event, Public, BlueprintEvent)

void UErrorWindow_C::OnBeginOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.OnBeginOutro");

	UErrorWindow_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UErrorWindow_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.OnBeginIntro");

	UErrorWindow_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.IntroEnded
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::IntroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.IntroEnded");

	UErrorWindow_C_IntroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.OutroEnded
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::OutroEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.OutroEnded");

	UErrorWindow_C_OutroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UErrorWindow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.PreConstruct");

	UErrorWindow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UErrorWindow_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.OnActivated");

	UErrorWindow_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.HandleLlamaAnimFinish
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::HandleLlamaAnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.HandleLlamaAnimFinish");

	UErrorWindow_C_HandleLlamaAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.LlamaReverse
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::LlamaReverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.LlamaReverse");

	UErrorWindow_C_LlamaReverse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.HandleLlamaCycleFinished
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::HandleLlamaCycleFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.HandleLlamaCycleFinished");

	UErrorWindow_C_HandleLlamaCycleFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.PlayRandomAmbientLlama
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::PlayRandomAmbientLlama()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.PlayRandomAmbientLlama");

	UErrorWindow_C_PlayRandomAmbientLlama_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.StartAmbientLlamaSequence
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::StartAmbientLlamaSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.StartAmbientLlamaSequence");

	UErrorWindow_C_StartAmbientLlamaSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UErrorWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature");

	UErrorWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.ResetLlamas
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::ResetLlamas()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.ResetLlamas");

	UErrorWindow_C_ResetLlamas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UErrorWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");

	UErrorWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UErrorWindow_C::ExecuteUbergraph_ErrorWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow");

	UErrorWindow_C_ExecuteUbergraph_ErrorWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
