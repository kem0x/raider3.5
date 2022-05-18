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

// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.HandleRedeemCodeComplete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERedeemCodeFailureReason       FailureReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemFriendCodeWindow_C::HandleRedeemCodeComplete(bool Success, ERedeemCodeFailureReason FailureReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.HandleRedeemCodeComplete");

	URedeemFriendCodeWindow_C_HandleRedeemCodeComplete_Params params;
	params.Success = Success;
	params.FailureReason = FailureReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void URedeemFriendCodeWindow_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Close");

	URedeemFriendCodeWindow_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.OnActivated
// (Event, Protected, BlueprintEvent)

void URedeemFriendCodeWindow_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.OnActivated");

	URedeemFriendCodeWindow_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URedeemFriendCodeWindow_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature");

	URedeemFriendCodeWindow_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URedeemFriendCodeWindow_C::BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature");

	URedeemFriendCodeWindow_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.OnRedeemFriendCodeComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERedeemCodeFailureReason*      FailureReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemFriendCodeWindow_C::OnRedeemFriendCodeComplete(bool* bSuccess, ERedeemCodeFailureReason* FailureReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.OnRedeemFriendCodeComplete");

	URedeemFriendCodeWindow_C_OnRedeemFriendCodeComplete_Params params;
	params.bSuccess = bSuccess;
	params.FailureReason = FailureReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URedeemFriendCodeWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Construct");

	URedeemFriendCodeWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URedeemFriendCodeWindow_C::BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");

	URedeemFriendCodeWindow_C_BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.ExecuteUbergraph_RedeemFriendCodeWindow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemFriendCodeWindow_C::ExecuteUbergraph_RedeemFriendCodeWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.ExecuteUbergraph_RedeemFriendCodeWindow");

	URedeemFriendCodeWindow_C_ExecuteUbergraph_RedeemFriendCodeWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
