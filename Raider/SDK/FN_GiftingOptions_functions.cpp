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

// Function GiftingOptions.GiftingOptions_C.BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGiftingOptions_C::BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingOptions.GiftingOptions_C.BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature");

	UGiftingOptions_C_BndEvt__BackToRecipientButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingOptions.GiftingOptions_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGiftingOptions_C::BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingOptions.GiftingOptions_C.BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature");

	UGiftingOptions_C_BndEvt__ButtonContinue_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingOptions.GiftingOptions_C.ShowFriendSelection
// (Event, Protected, BlueprintEvent)

void UGiftingOptions_C::ShowFriendSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingOptions.GiftingOptions_C.ShowFriendSelection");

	UGiftingOptions_C_ShowFriendSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingOptions.GiftingOptions_C.AllowGiftWrapSelection
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsAllowed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingOptions_C::AllowGiftWrapSelection(bool* bIsAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingOptions.GiftingOptions_C.AllowGiftWrapSelection");

	UGiftingOptions_C_AllowGiftWrapSelection_Params params;
	params.bIsAllowed = bIsAllowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingOptions.GiftingOptions_C.ExecuteUbergraph_GiftingOptions
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingOptions_C::ExecuteUbergraph_GiftingOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftingOptions.GiftingOptions_C.ExecuteUbergraph_GiftingOptions");

	UGiftingOptions_C_ExecuteUbergraph_GiftingOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
