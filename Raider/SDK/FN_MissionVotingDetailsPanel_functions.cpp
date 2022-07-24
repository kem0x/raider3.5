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

// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.GetRemainingTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionVotingDetailsPanel_C::GetRemainingTime(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.GetRemainingTime");

	UMissionVotingDetailsPanel_C_GetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.CanStartObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionVotingDetailsPanel_C::CanStartObjective(bool* CanStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.CanStartObjective");

	UMissionVotingDetailsPanel_C_CanStartObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanStart != nullptr)
		*CanStart = params.CanStart;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.GetAvailableBluGloCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMissionVotingDetailsPanel_C::GetAvailableBluGloCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.GetAvailableBluGloCount");

	UMissionVotingDetailsPanel_C_GetAvailableBluGloCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateObjectiveReadyTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionVotingDetailsPanel_C::UpdateObjectiveReadyTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateObjectiveReadyTime");

	UMissionVotingDetailsPanel_C_UpdateObjectiveReadyTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateVoteButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionVotingDetailsPanel_C::UpdateVoteButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateVoteButton");

	UMissionVotingDetailsPanel_C_UpdateVoteButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateVoteInstigatorInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionVotingDetailsPanel_C::UpdateVoteInstigatorInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateVoteInstigatorInfo");

	UMissionVotingDetailsPanel_C_UpdateVoteInstigatorInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.IsInstigatorOfCurrentVote
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsInstigator                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionVotingDetailsPanel_C::IsInstigatorOfCurrentVote(bool* IsInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.IsInstigatorOfCurrentVote");

	UMissionVotingDetailsPanel_C_IsInstigatorOfCurrentVote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInstigator != nullptr)
		*IsInstigator = params.IsInstigator;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.IsCurrentVoteActive
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionVotingDetailsPanel_C::IsCurrentVoteActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.IsCurrentVoteActive");

	UMissionVotingDetailsPanel_C_IsCurrentVoteActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateRemainingVoteTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionVotingDetailsPanel_C::UpdateRemainingVoteTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.UpdateRemainingVoteTime");

	UMissionVotingDetailsPanel_C_UpdateRemainingVoteTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.RefreshPanel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVoter>          Voters                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMissionVotingDetailsPanel_C::RefreshPanel(TArray<struct FVoter>* Voters)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.RefreshPanel");

	UMissionVotingDetailsPanel_C_RefreshPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Voters != nullptr)
		*Voters = params.Voters;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.HandleVotesUpdated
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortVoteType                  VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortVoteStatus                VoteStatus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            VoteResult                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVoter>          Voters                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMissionVotingDetailsPanel_C::HandleVotesUpdated(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int VoteResult, TArray<struct FVoter>* Voters)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.HandleVotesUpdated");

	UMissionVotingDetailsPanel_C_HandleVotesUpdated_Params params;
	params.VoteType = VoteType;
	params.VoteStatus = VoteStatus;
	params.VoteResult = VoteResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Voters != nullptr)
		*Voters = params.Voters;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.InitializePanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortVoteType                  InVoteType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionVotingDetailsPanel_C::InitializePanel(EFortVoteType InVoteType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.InitializePanel");

	UMissionVotingDetailsPanel_C_InitializePanel_Params params;
	params.InVoteType = InVoteType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.BndEvt__StartVoteButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionVotingDetailsPanel_C::BndEvt__StartVoteButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.BndEvt__StartVoteButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature");

	UMissionVotingDetailsPanel_C_BndEvt__StartVoteButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionVotingDetailsPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.Construct");

	UMissionVotingDetailsPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionVotingDetailsPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.Destruct");

	UMissionVotingDetailsPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.BndEvt__YesVoteButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionVotingDetailsPanel_C::BndEvt__YesVoteButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.BndEvt__YesVoteButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UMissionVotingDetailsPanel_C_BndEvt__YesVoteButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.BndEvt__NoVoteButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionVotingDetailsPanel_C::BndEvt__NoVoteButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.BndEvt__NoVoteButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature");

	UMissionVotingDetailsPanel_C_BndEvt__NoVoteButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.ShowVoteResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionVotingDetailsPanel_C::ShowVoteResult(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.ShowVoteResult");

	UMissionVotingDetailsPanel_C_ShowVoteResult_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.HandleBeginLockout
// (BlueprintCallable, BlueprintEvent)

void UMissionVotingDetailsPanel_C::HandleBeginLockout()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.HandleBeginLockout");

	UMissionVotingDetailsPanel_C_HandleBeginLockout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.ExecuteUbergraph_MissionVotingDetailsPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionVotingDetailsPanel_C::ExecuteUbergraph_MissionVotingDetailsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.ExecuteUbergraph_MissionVotingDetailsPanel");

	UMissionVotingDetailsPanel_C_ExecuteUbergraph_MissionVotingDetailsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OnVoteLockedOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMissionVotingDetailsPanel_C::OnVoteLockedOut__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OnVoteLockedOut__DelegateSignature");

	UMissionVotingDetailsPanel_C_OnVoteLockedOut__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OnRecepientVoted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMissionVotingDetailsPanel_C::OnRecepientVoted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionVotingDetailsPanel.MissionVotingDetailsPanel_C.OnRecepientVoted__DelegateSignature");

	UMissionVotingDetailsPanel_C_OnRecepientVoted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
