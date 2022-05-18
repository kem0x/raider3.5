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

// Function MTXButton.MTXButton_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)

void UMTXButton_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.UpdateState");

	UMTXButton_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MTXButton.MTXButton_C.Get_Button_ToolTipWidget_0_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UMTXButton_C::Get_Button_ToolTipWidget_0_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.Get_Button_ToolTipWidget_0_1");

	UMTXButton_C_Get_Button_ToolTipWidget_0_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MTXButton.MTXButton_C.UpdateAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPrivateAccountInfo FortPrivateAccountInfo         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMTXButton_C::UpdateAmount(struct FFortPrivateAccountInfo* FortPrivateAccountInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.UpdateAmount");

	UMTXButton_C_UpdateAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPrivateAccountInfo != nullptr)
		*FortPrivateAccountInfo = params.FortPrivateAccountInfo;
}


// Function MTXButton.MTXButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMTXButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.Construct");

	UMTXButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MTXButton.MTXButton_C.HandleLocalAccountInfoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPrivateAccountInfo NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UMTXButton_C::HandleLocalAccountInfoChanged(const struct FFortPrivateAccountInfo& NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.HandleLocalAccountInfoChanged");

	UMTXButton_C_HandleLocalAccountInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MTXButton.MTXButton_C.BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMTXButton_C::BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	UMTXButton_C_BndEvt__VBucksButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MTXButton.MTXButton_C.HandleInputActionChnaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMTXButton_C::HandleInputActionChnaged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.HandleInputActionChnaged");

	UMTXButton_C_HandleInputActionChnaged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MTXButton.MTXButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMTXButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.Destruct");

	UMTXButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMTXButton_C::ExecuteUbergraph_MTXButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton");

	UMTXButton_C_ExecuteUbergraph_MTXButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
