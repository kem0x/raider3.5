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

// Function LoginUnavailable.LoginUnavailable_C.BndEvt__Button_Status_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULoginUnavailable_C::BndEvt__Button_Status_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginUnavailable.LoginUnavailable_C.BndEvt__Button_Status_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	ULoginUnavailable_C_BndEvt__Button_Status_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginUnavailable.LoginUnavailable_C.OnMessageSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bDisableMessage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginUnavailable_C::OnMessageSet(bool* bDisableMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginUnavailable.LoginUnavailable_C.OnMessageSet");

	ULoginUnavailable_C_OnMessageSet_Params params;
	params.bDisableMessage = bDisableMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginUnavailable.LoginUnavailable_C.ExecuteUbergraph_LoginUnavailable
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginUnavailable_C::ExecuteUbergraph_LoginUnavailable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginUnavailable.LoginUnavailable_C.ExecuteUbergraph_LoginUnavailable");

	ULoginUnavailable_C_ExecuteUbergraph_LoginUnavailable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
