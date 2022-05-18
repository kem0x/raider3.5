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

// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateNewGiftBoxes
// (Public, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateNewGiftBoxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateNewGiftBoxes");

	ACheckFrontEndRewardsAction_C_PopulateNewGiftBoxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateDifficultyIncreaseRewards
// (Public, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateDifficultyIncreaseRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateDifficultyIncreaseRewards");

	ACheckFrontEndRewardsAction_C_PopulateDifficultyIncreaseRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsIgnored
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ACheckFrontEndRewardsAction_C::HandleRewardsIgnored(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsIgnored");

	ACheckFrontEndRewardsAction_C_HandleRewardsIgnored_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CanShowFrontendRewards
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACheckFrontEndRewardsAction_C::CanShowFrontendRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CanShowFrontendRewards");

	ACheckFrontEndRewardsAction_C_CanShowFrontendRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Is FrontEndRewards Running
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRunning                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACheckFrontEndRewardsAction_C::Is_FrontEndRewards_Running(bool* bRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Is FrontEndRewards Running");

	ACheckFrontEndRewardsAction_C_Is_FrontEndRewards_Running_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRunning != nullptr)
		*bRunning = params.bRunning;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionAlertRewards
// (Public, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateMissionAlertRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionAlertRewards");

	ACheckFrontEndRewardsAction_C_PopulateMissionAlertRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ACheckFrontEndRewardsAction_C::HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimError");

	ACheckFrontEndRewardsAction_C_HandleRewardsClaimError_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Clear
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndRewardsAction_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Clear");

	ACheckFrontEndRewardsAction_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ACheckFrontEndRewardsAction_C::HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.HandleRewardsClaimed");

	ACheckFrontEndRewardsAction_C_HandleRewardsClaimed_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateCollectionBookRewards
// (Public, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateCollectionBookRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateCollectionBookRewards");

	ACheckFrontEndRewardsAction_C_PopulateCollectionBookRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateRewards
// (Private, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateRewards");

	ACheckFrontEndRewardsAction_C_PopulateRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.OpenFrontEndRewards
// (Private, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndRewardsAction_C::OpenFrontEndRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.OpenFrontEndRewards");

	ACheckFrontEndRewardsAction_C_OpenFrontEndRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateUnseenQuests
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuestType                 QuestType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckFrontEndRewardsAction_C::PopulateUnseenQuests(EFortQuestType QuestType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateUnseenQuests");

	ACheckFrontEndRewardsAction_C_PopulateUnseenQuests_Params params;
	params.QuestType = QuestType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.GetCompletedQuests
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  Completed_Quests               (Parm, OutParm, ZeroConstructor)

void ACheckFrontEndRewardsAction_C::GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.GetCompletedQuests");

	ACheckFrontEndRewardsAction_C_GetCompletedQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Completed_Quests != nullptr)
		*Completed_Quests = params.Completed_Quests;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateNewQuests
// (Private, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateNewQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateNewQuests");

	ACheckFrontEndRewardsAction_C_PopulateNewQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateQuestRewards
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateQuestRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateQuestRewards");

	ACheckFrontEndRewardsAction_C_PopulateQuestRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionRewards
// (Private, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndRewardsAction_C::PopulateMissionRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.PopulateMissionRewards");

	ACheckFrontEndRewardsAction_C_PopulateMissionRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CompleteRewardsAction
// (Private, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndRewardsAction_C::CompleteRewardsAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.CompleteRewardsAction");

	ACheckFrontEndRewardsAction_C_CompleteRewardsAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndRewardsAction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.UserConstructionScript");

	ACheckFrontEndRewardsAction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Execute
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams* Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ACheckFrontEndRewardsAction_C::Execute(struct FFortScriptedActionParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.Execute");

	ACheckFrontEndRewardsAction_C_Execute_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.ExecuteUbergraph_CheckFrontEndRewardsAction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckFrontEndRewardsAction_C::ExecuteUbergraph_CheckFrontEndRewardsAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndRewardsAction.CheckFrontEndRewardsAction_C.ExecuteUbergraph_CheckFrontEndRewardsAction");

	ACheckFrontEndRewardsAction_C_ExecuteUbergraph_CheckFrontEndRewardsAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
