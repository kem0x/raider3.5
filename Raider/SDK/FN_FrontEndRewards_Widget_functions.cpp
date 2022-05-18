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

// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnGiftBoxRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSucceeded                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Widget_C::HandleOnGiftBoxRemoved(bool bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnGiftBoxRemoved");

	UFrontEndRewards_Widget_C_HandleOnGiftBoxRemoved_Params params;
	params.bSucceeded = bSucceeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ShowGiftBox
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::ShowGiftBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ShowGiftBox");

	UFrontEndRewards_Widget_C_ShowGiftBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleGiftBoxOpened
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleGiftBoxOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleGiftBoxOpened");

	UFrontEndRewards_Widget_C_HandleGiftBoxOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateGiftBox
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateGiftBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateGiftBox");

	UFrontEndRewards_Widget_C_PopulateGiftBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.StartRewardsMusic
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::StartRewardsMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.StartRewardsMusic");

	UFrontEndRewards_Widget_C_StartRewardsMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnDifficultyIncreaseRewardsClaimFailed
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleOnDifficultyIncreaseRewardsClaimFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnDifficultyIncreaseRewardsClaimFailed");

	UFrontEndRewards_Widget_C_HandleOnDifficultyIncreaseRewardsClaimFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnDifficultyIncreaseRewardsClaimed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::HandleOnDifficultyIncreaseRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnDifficultyIncreaseRewardsClaimed");

	UFrontEndRewards_Widget_C_HandleOnDifficultyIncreaseRewardsClaimed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimDifficultyIncreaseRewards
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::ClaimDifficultyIncreaseRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimDifficultyIncreaseRewards");

	UFrontEndRewards_Widget_C_ClaimDifficultyIncreaseRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateDifficultyIncreaseRewards
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateDifficultyIncreaseRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateDifficultyIncreaseRewards");

	UFrontEndRewards_Widget_C_PopulateDifficultyIncreaseRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimFailed
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleOnMissionRewardsClaimFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimFailed");

	UFrontEndRewards_Widget_C_HandleOnMissionRewardsClaimFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DebugPrintChoiceReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Widget_C::DebugPrintChoiceReward(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DebugPrintChoiceReward");

	UFrontEndRewards_Widget_C_DebugPrintChoiceReward_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SafePop
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::SafePop()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SafePop");

	UFrontEndRewards_Widget_C_SafePop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TriggerUpdateWhenDone
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::TriggerUpdateWhenDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TriggerUpdateWhenDone");

	UFrontEndRewards_Widget_C_TriggerUpdateWhenDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionAlertRewardsClaimed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::HandleOnMissionAlertRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionAlertRewardsClaimed");

	UFrontEndRewards_Widget_C_HandleOnMissionAlertRewardsClaimed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionAlertRewards
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::ClaimMissionAlertRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionAlertRewards");

	UFrontEndRewards_Widget_C_ClaimMissionAlertRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionAlertRewards
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateMissionAlertRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionAlertRewards");

	UFrontEndRewards_Widget_C_PopulateMissionAlertRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitRewardsQueue
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::InitRewardsQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitRewardsQueue");

	UFrontEndRewards_Widget_C_InitRewardsQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitializeRewardsData
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFrontEndRewards_Definition FrontEndRewards_Definition     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFrontEndRewards_Widget_C::InitializeRewardsData(struct FFrontEndRewards_Definition* FrontEndRewards_Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitializeRewardsData");

	UFrontEndRewards_Widget_C_InitializeRewardsData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FrontEndRewards_Definition != nullptr)
		*FrontEndRewards_Definition = params.FrontEndRewards_Definition;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitAdditionalRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFrontEndRewards_Definition Definition                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UFrontEndRewards_Widget_C::InitAdditionalRewards(const struct FFrontEndRewards_Definition& Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitAdditionalRewards");

	UFrontEndRewards_Widget_C_InitAdditionalRewards_Params params;
	params.Definition = Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleBorderShown
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleBorderShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleBorderShown");

	UFrontEndRewards_Widget_C_HandleBorderShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipPopAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::SkipPopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipPopAnimation");

	UFrontEndRewards_Widget_C_SkipPopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipOpenAnimation
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::SkipOpenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SkipOpenAnimation");

	UFrontEndRewards_Widget_C_SkipOpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateVO
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateVO");

	UFrontEndRewards_Widget_C_PopulateVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnNoRewardsToClaim
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleOnNoRewardsToClaim()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnNoRewardsToClaim");

	UFrontEndRewards_Widget_C_HandleOnNoRewardsToClaim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.UnbindEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.UnbindEvents");

	UFrontEndRewards_Widget_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ResetQueueState
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::ResetQueueState()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ResetQueueState");

	UFrontEndRewards_Widget_C_ResetQueueState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TransitionIn
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::TransitionIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.TransitionIn");

	UFrontEndRewards_Widget_C_TransitionIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OpenReward
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::OpenReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OpenReward");

	UFrontEndRewards_Widget_C_OpenReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateChoiceRewardsWidgetFromCardList
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URewards_ItemCard_C*> Cards                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::PopulateChoiceRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateChoiceRewardsWidgetFromCardList");

	UFrontEndRewards_Widget_C_PopulateChoiceRewardsWidgetFromCardList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cards != nullptr)
		*Cards = params.Cards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardTransitionOutComplete
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleCurrentRewardTransitionOutComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardTransitionOutComplete");

	UFrontEndRewards_Widget_C_HandleCurrentRewardTransitionOutComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOpenAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleOpenAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOpenAnimationFinished");

	UFrontEndRewards_Widget_C_HandleOpenAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitSubWidgets
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::InitSubWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitSubWidgets");

	UFrontEndRewards_Widget_C_InitSubWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::HandleOnMissionRewardsClaimed(TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnMissionRewardsClaimed");

	UFrontEndRewards_Widget_C_HandleOnMissionRewardsClaimed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateListRewardsWidgetFromCardList
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URewards_ItemCard_C*> Cards                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::PopulateListRewardsWidgetFromCardList(TArray<class URewards_ItemCard_C*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateListRewardsWidgetFromCardList");

	UFrontEndRewards_Widget_C_PopulateListRewardsWidgetFromCardList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cards != nullptr)
		*Cards = params.Cards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnCollectionBookRewardsClaimed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortCollectionBookRewards RewardRequested                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> ActualRewards                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::HandleOnCollectionBookRewardsClaimed(const struct FFortCollectionBookRewards& RewardRequested, bool Success, TArray<struct FFortItemInstanceQuantityPair>* ActualRewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnCollectionBookRewardsClaimed");

	UFrontEndRewards_Widget_C_HandleOnCollectionBookRewardsClaimed_Params params;
	params.RewardRequested = RewardRequested;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActualRewards != nullptr)
		*ActualRewards = params.ActualRewards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnQuestRewardsClaimed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::HandleOnQuestRewardsClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleOnQuestRewardsClaimed");

	UFrontEndRewards_Widget_C_HandleOnQuestRewardsClaimed_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookChoiceReward
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* NotificationData               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectionIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Widget_C::ClaimCollectionBookChoiceReward(class UFortRewardNotificationData* NotificationData, int SelectionIndex, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookChoiceReward");

	UFrontEndRewards_Widget_C_ClaimCollectionBookChoiceReward_Params params;
	params.NotificationData = NotificationData;
	params.SelectionIndex = SelectionIndex;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookRewards
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::ClaimCollectionBookRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimCollectionBookRewards");

	UFrontEndRewards_Widget_C_ClaimCollectionBookRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestListReward
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::ClaimQuestListReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestListReward");

	UFrontEndRewards_Widget_C_ClaimQuestListReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCollectionBookRewards
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateCollectionBookRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCollectionBookRewards");

	UFrontEndRewards_Widget_C_PopulateCollectionBookRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateExpedition
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateExpedition");

	UFrontEndRewards_Widget_C_PopulateExpedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateNewQuest
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateNewQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateNewQuest");

	UFrontEndRewards_Widget_C_PopulateNewQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateQuestRewards
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateQuestRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateQuestRewards");

	UFrontEndRewards_Widget_C_PopulateQuestRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionRewards
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateMissionRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateMissionRewards");

	UFrontEndRewards_Widget_C_PopulateMissionRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SetHeaderVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::SetHeaderVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.SetHeaderVisibility");

	UFrontEndRewards_Widget_C_SetHeaderVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionRewards
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::ClaimMissionRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimMissionRewards");

	UFrontEndRewards_Widget_C_ClaimMissionRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemInstanceQuantityList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class URewards_ItemCard_C*> Cards                          (Parm, OutParm, ZeroConstructor)

void UFrontEndRewards_Widget_C::CreateCardsFromItemInstanceQuantityList(TArray<struct FFortItemInstanceQuantityPair>* Items, TArray<class URewards_ItemCard_C*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemInstanceQuantityList");

	UFrontEndRewards_Widget_C_CreateCardsFromItemInstanceQuantityList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Cards != nullptr)
		*Cards = params.Cards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemQuantityList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemQuantityPair> Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class URewards_ItemCard_C*> Cards                          (Parm, OutParm, ZeroConstructor)

void UFrontEndRewards_Widget_C::CreateCardsFromItemQuantityList(TArray<struct FFortItemQuantityPair>* Items, TArray<class URewards_ItemCard_C*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemQuantityList");

	UFrontEndRewards_Widget_C_CreateCardsFromItemQuantityList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (Cards != nullptr)
		*Cards = params.Cards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemList
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<TEnumAsByte<EFortInventoryType>> ItemInventoryTypeList          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class URewards_ItemCard_C*> Cards                          (Parm, OutParm, ZeroConstructor)

void UFrontEndRewards_Widget_C::CreateCardsFromItemList(TArray<class UFortItem*>* Items, TArray<TEnumAsByte<EFortInventoryType>>* ItemInventoryTypeList, TArray<class URewards_ItemCard_C*>* Cards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.CreateCardsFromItemList");

	UFrontEndRewards_Widget_C_CreateCardsFromItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (ItemInventoryTypeList != nullptr)
		*ItemInventoryTypeList = params.ItemInventoryTypeList;
	if (Cards != nullptr)
		*Cards = params.Cards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestChoiceReward
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* NotificationData               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectionIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Widget_C::ClaimQuestChoiceReward(class UFortRewardNotificationData* NotificationData, int SelectionIndex, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ClaimQuestChoiceReward");

	UFrontEndRewards_Widget_C_ClaimQuestChoiceReward_Params params;
	params.NotificationData = NotificationData;
	params.SelectionIndex = SelectionIndex;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleChoiceRewardSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RewardIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Widget_C::HandleChoiceRewardSelected(int RewardIndex, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleChoiceRewardSelected");

	UFrontEndRewards_Widget_C_HandleChoiceRewardSelected_Params params;
	params.RewardIndex = RewardIndex;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitInitialRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFrontEndRewards_Definition Definition                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UFrontEndRewards_Widget_C::InitInitialRewards(const struct FFrontEndRewards_Definition& Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InitInitialRewards");

	UFrontEndRewards_Widget_C_InitInitialRewards_Params params;
	params.Definition = Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleExpeditionCompleted
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Succeeded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFrontEndRewards_Widget_C::HandleExpeditionCompleted(bool Succeeded, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleExpeditionCompleted");

	UFrontEndRewards_Widget_C_HandleExpeditionCompleted_Params params;
	params.Succeeded = Succeeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Cleanup");

	UFrontEndRewards_Widget_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ShowCurrentReward
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::ShowCurrentReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ShowCurrentReward");

	UFrontEndRewards_Widget_C_ShowCurrentReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCurrentRewardWidget
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::PopulateCurrentRewardWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopulateCurrentRewardWidget");

	UFrontEndRewards_Widget_C_PopulateCurrentRewardWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.AdjustCurrentRewardPadding
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::AdjustCurrentRewardPadding()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.AdjustCurrentRewardPadding");

	UFrontEndRewards_Widget_C_AdjustCurrentRewardPadding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BindEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::BindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BindEvents");

	UFrontEndRewards_Widget_C_BindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleShowHeaderFinished
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleShowHeaderFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleShowHeaderFinished");

	UFrontEndRewards_Widget_C_HandleShowHeaderFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopNextReward
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::PopNextReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.PopNextReward");

	UFrontEndRewards_Widget_C_PopNextReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DropReward
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRewardNotificationData* InReward                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Widget_C::DropReward(class UFortRewardNotificationData* InReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.DropReward");

	UFrontEndRewards_Widget_C_DropReward_Params params;
	params.InReward = InReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardDisplayed
// (Private, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::HandleCurrentRewardDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HandleCurrentRewardDisplayed");

	UFrontEndRewards_Widget_C_HandleCurrentRewardDisplayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationLeft
// (Event, Public, BlueprintEvent)

void UFrontEndRewards_Widget_C::OnNavigationLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationLeft");

	UFrontEndRewards_Widget_C_OnNavigationLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationRight
// (Event, Public, BlueprintEvent)

void UFrontEndRewards_Widget_C::OnNavigationRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationRight");

	UFrontEndRewards_Widget_C_OnNavigationRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationUp
// (Event, Public, BlueprintEvent)

void UFrontEndRewards_Widget_C::OnNavigationUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationUp");

	UFrontEndRewards_Widget_C_OnNavigationUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationDown
// (Event, Public, BlueprintEvent)

void UFrontEndRewards_Widget_C::OnNavigationDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnNavigationDown");

	UFrontEndRewards_Widget_C_OnNavigationDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionDisabled
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_Widget_C::OnPrimaryActionDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionDisabled");

	UFrontEndRewards_Widget_C_OnPrimaryActionDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionEnabled
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_Widget_C::OnPrimaryActionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionEnabled");

	UFrontEndRewards_Widget_C_OnPrimaryActionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionHidden
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_Widget_C::OnPrimaryActionHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionHidden");

	UFrontEndRewards_Widget_C_OnPrimaryActionHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionTextChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFrontEndRewards_Widget_C::OnPrimaryActionTextChanged(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnPrimaryActionTextChanged");

	UFrontEndRewards_Widget_C_OnPrimaryActionTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_Widget_C::BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature");

	UFrontEndRewards_Widget_C_BndEvt__ButtonOpen_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFrontEndRewards_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Construct");

	UFrontEndRewards_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_Widget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnActivated");

	UFrontEndRewards_Widget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HideStarburst
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Widget_C::HideStarburst(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.HideStarburst");

	UFrontEndRewards_Widget_C_HideStarburst_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_Widget_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnDeactivated");

	UFrontEndRewards_Widget_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InspectItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem**              ItemToInspect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Widget_C::InspectItem(class UFortItem** ItemToInspect)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.InspectItem");

	UFrontEndRewards_Widget_C_InspectItem_Params params;
	params.ItemToInspect = ItemToInspect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.IntroSequence
// (BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::IntroSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.IntroSequence");

	UFrontEndRewards_Widget_C_IntroSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFrontEndRewards_Widget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.Destruct");

	UFrontEndRewards_Widget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnMatchmakingOrLobbyStarted
// (BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::OnMatchmakingOrLobbyStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnMatchmakingOrLobbyStarted");

	UFrontEndRewards_Widget_C_OnMatchmakingOrLobbyStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ExecuteUbergraph_FrontEndRewards_Widget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_Widget_C::ExecuteUbergraph_FrontEndRewards_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.ExecuteUbergraph_FrontEndRewards_Widget");

	UFrontEndRewards_Widget_C_ExecuteUbergraph_FrontEndRewards_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsIgnored__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_Widget_C::OnRewardsIgnored__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsIgnored__DelegateSignature");

	UFrontEndRewards_Widget_C_OnRewardsIgnored__DelegateSignature_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimError__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_Widget_C::OnRewardsClaimError__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimError__DelegateSignature");

	UFrontEndRewards_Widget_C_OnRewardsClaimError__DelegateSignature_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFrontEndRewards_Widget_C::OnRewardsClaimed__DelegateSignature(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnRewardsClaimed__DelegateSignature");

	UFrontEndRewards_Widget_C_OnRewardsClaimed__DelegateSignature_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_Widget_C::OnComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_Widget.FrontEndRewards_Widget_C.OnComplete__DelegateSignature");

	UFrontEndRewards_Widget_C_OnComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
