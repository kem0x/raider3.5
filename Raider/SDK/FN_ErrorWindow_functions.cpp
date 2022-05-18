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
// (Public, BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.Initialize");

	UErrorWindow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.AddError
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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


// Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow
// ()
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
