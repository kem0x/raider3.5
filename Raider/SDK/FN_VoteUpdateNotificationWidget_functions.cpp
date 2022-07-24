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

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::UpdateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateTimer");

	UVoteUpdateNotificationWidget_C_UpdateTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteCounts
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVoter>          Voters                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UVoteUpdateNotificationWidget_C::UpdateVoteCounts(TArray<struct FVoter>* Voters)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteCounts");

	UVoteUpdateNotificationWidget_C_UpdateVoteCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Voters != nullptr)
		*Voters = params.Voters;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.HandleVoteUpdated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortVoteType                  VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortVoteStatus                VoteStatus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            VoteResult                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVoter>          Voters                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UVoteUpdateNotificationWidget_C::HandleVoteUpdated(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int VoteResult, TArray<struct FVoter>* Voters)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.HandleVoteUpdated");

	UVoteUpdateNotificationWidget_C_HandleVoteUpdated_Params params;
	params.VoteType = VoteType;
	params.VoteStatus = VoteStatus;
	params.VoteResult = VoteResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Voters != nullptr)
		*Voters = params.Voters;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.SetToast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*     Toast                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteUpdateNotificationWidget_C::SetToast(class UFortUINotification* Toast)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.SetToast");

	UVoteUpdateNotificationWidget_C_SetToast_Params params;
	params.Toast = Toast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Destruct");

	UVoteUpdateNotificationWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ToastFinished
// (BlueprintCallable, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::ToastFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ToastFinished");

	UVoteUpdateNotificationWidget_C_ToastFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Cleanup
// (BlueprintCallable, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Cleanup");

	UVoteUpdateNotificationWidget_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ExecuteUbergraph_VoteUpdateNotificationWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVoteUpdateNotificationWidget_C::ExecuteUbergraph_VoteUpdateNotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ExecuteUbergraph_VoteUpdateNotificationWidget");

	UVoteUpdateNotificationWidget_C_ExecuteUbergraph_VoteUpdateNotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnToastFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UVoteUpdateNotificationWidget_C::OnToastFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnToastFinished__DelegateSignature");

	UVoteUpdateNotificationWidget_C_OnToastFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
