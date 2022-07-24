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

// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.SetToast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*     Toast                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteResultNotificationWidget_C::SetToast(class UFortUINotification* Toast)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.SetToast");

	UVoteResultNotificationWidget_C_SetToast_Params params;
	params.Toast = Toast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortVoteType                  VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           VoteResult                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteResultNotificationWidget_C::Initialize(EFortVoteType VoteType, bool VoteResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.Initialize");

	UVoteResultNotificationWidget_C_Initialize_Params params;
	params.VoteType = VoteType;
	params.VoteResult = VoteResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.ToastFinished
// (BlueprintCallable, BlueprintEvent)

void UVoteResultNotificationWidget_C::ToastFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.ToastFinished");

	UVoteResultNotificationWidget_C_ToastFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.ExecuteUbergraph_VoteResultNotificationWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteResultNotificationWidget_C::ExecuteUbergraph_VoteResultNotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.ExecuteUbergraph_VoteResultNotificationWidget");

	UVoteResultNotificationWidget_C_ExecuteUbergraph_VoteResultNotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.OnToastFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UVoteResultNotificationWidget_C::OnToastFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteResultNotificationWidget.VoteResultNotificationWidget_C.OnToastFinished__DelegateSignature");

	UVoteResultNotificationWidget_C_OnToastFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
