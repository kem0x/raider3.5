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

// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.HideLockoutState
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionStartObjectivePanel_C::HideLockoutState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.HideLockoutState");

	UMissionStartObjectivePanel_C_HideLockoutState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.HandleDifficultyEnded
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVoter>          Voters                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMissionStartObjectivePanel_C::HandleDifficultyEnded(TArray<struct FVoter>* Voters)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.HandleDifficultyEnded");

	UMissionStartObjectivePanel_C_HandleDifficultyEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Voters != nullptr)
		*Voters = params.Voters;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.UpdateLockoutTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionStartObjectivePanel_C::UpdateLockoutTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.UpdateLockoutTimer");

	UMissionStartObjectivePanel_C_UpdateLockoutTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.ShowLockoutState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionStartObjectivePanel_C::ShowLockoutState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.ShowLockoutState");

	UMissionStartObjectivePanel_C_ShowLockoutState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Reward-IntroReset
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionStartObjectivePanel_C::Reward_IntroReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Reward-IntroReset");

	UMissionStartObjectivePanel_C_Reward_IntroReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Reward-IntroRewind
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionStartObjectivePanel_C::Reward_IntroRewind()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Reward-IntroRewind");

	UMissionStartObjectivePanel_C_Reward_IntroRewind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Reward-ListAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionStartObjectivePanel_C::Reward_ListAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Reward-ListAnim");

	UMissionStartObjectivePanel_C_Reward_ListAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Leave-Anim
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionStartObjectivePanel_C::Leave_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Leave-Anim");

	UMissionStartObjectivePanel_C_Leave_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Hover-Anim
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionStartObjectivePanel_C::Hover_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Hover-Anim");

	UMissionStartObjectivePanel_C_Hover_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.UpdateDifficultyRating
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionStartObjectivePanel_C::UpdateDifficultyRating()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.UpdateDifficultyRating");

	UMissionStartObjectivePanel_C_UpdateDifficultyRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.HandleIncreaseDifficultyVote
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortVoteType                  VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortVoteStatus                VoteStatus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            VoteResult                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVoter>          Voters                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMissionStartObjectivePanel_C::HandleIncreaseDifficultyVote(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int VoteResult, TArray<struct FVoter> Voters)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.HandleIncreaseDifficultyVote");

	UMissionStartObjectivePanel_C_HandleIncreaseDifficultyVote_Params params;
	params.VoteType = VoteType;
	params.VoteStatus = VoteStatus;
	params.VoteResult = VoteResult;
	params.Voters = Voters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.UpdateRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionStartObjectivePanel_C::UpdateRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.UpdateRewards");

	UMissionStartObjectivePanel_C_UpdateRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionStartObjectivePanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Construct");

	UMissionStartObjectivePanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.ShowPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceFinalState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionStartObjectivePanel_C::ShowPanel(bool ForceFinalState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.ShowPanel");

	UMissionStartObjectivePanel_C_ShowPanel_Params params;
	params.ForceFinalState = ForceFinalState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.HidePanel
// (BlueprintCallable, BlueprintEvent)

void UMissionStartObjectivePanel_C::HidePanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.HidePanel");

	UMissionStartObjectivePanel_C_HidePanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionStartObjectivePanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.Destruct");

	UMissionStartObjectivePanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.InfoObjectUpdated
// (Event, Protected, BlueprintEvent)

void UMissionStartObjectivePanel_C::InfoObjectUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.InfoObjectUpdated");

	UMissionStartObjectivePanel_C_InfoObjectUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.RewardAnimTrigger
// (BlueprintCallable, BlueprintEvent)

void UMissionStartObjectivePanel_C::RewardAnimTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.RewardAnimTrigger");

	UMissionStartObjectivePanel_C_RewardAnimTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.ExecuteUbergraph_MissionStartObjectivePanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionStartObjectivePanel_C::ExecuteUbergraph_MissionStartObjectivePanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.ExecuteUbergraph_MissionStartObjectivePanel");

	UMissionStartObjectivePanel_C_ExecuteUbergraph_MissionStartObjectivePanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.LockoutEndedAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMissionStartObjectivePanel_C::LockoutEndedAnimFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionStartObjectivePanel.MissionStartObjectivePanel_C.LockoutEndedAnimFinished__DelegateSignature");

	UMissionStartObjectivePanel_C_LockoutEndedAnimFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
