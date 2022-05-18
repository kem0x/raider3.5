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

// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Find First Valid Player Controller
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerController*   FoundPC1                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACheckExpeditionRewardsAction_C::Find_First_Valid_Player_Controller(class AFortPlayerController** FoundPC1)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Find First Valid Player Controller");

	ACheckExpeditionRewardsAction_C_Find_First_Valid_Player_Controller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundPC1 != nullptr)
		*FoundPC1 = params.FoundPC1;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Is FrontEndRewards Running
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRunning                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACheckExpeditionRewardsAction_C::Is_FrontEndRewards_Running(bool* bRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Is FrontEndRewards Running");

	ACheckExpeditionRewardsAction_C_Is_FrontEndRewards_Running_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRunning != nullptr)
		*bRunning = params.bRunning;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.HandleRewardsClaimError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ACheckExpeditionRewardsAction_C::HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.HandleRewardsClaimError");

	ACheckExpeditionRewardsAction_C_HandleRewardsClaimError_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Clear
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACheckExpeditionRewardsAction_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Clear");

	ACheckExpeditionRewardsAction_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.HandleRewardsClaimed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontEndRewards_Widget_C* RewardsWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ACheckExpeditionRewardsAction_C::HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.HandleRewardsClaimed");

	ACheckExpeditionRewardsAction_C_HandleRewardsClaimed_Params params;
	params.RewardsWidget = RewardsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateExpeditionRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACheckExpeditionRewardsAction_C::PopulateExpeditionRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateExpeditionRewards");

	ACheckExpeditionRewardsAction_C_PopulateExpeditionRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateRewards
// (Private, BlueprintCallable, BlueprintEvent)

void ACheckExpeditionRewardsAction_C::PopulateRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateRewards");

	ACheckExpeditionRewardsAction_C_PopulateRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.OpenFrontEndRewards
// (Private, BlueprintCallable, BlueprintEvent)

void ACheckExpeditionRewardsAction_C::OpenFrontEndRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.OpenFrontEndRewards");

	ACheckExpeditionRewardsAction_C_OpenFrontEndRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateCompletedQuests
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACheckExpeditionRewardsAction_C::PopulateCompletedQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.PopulateCompletedQuests");

	ACheckExpeditionRewardsAction_C_PopulateCompletedQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.GetCompletedQuests
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  Completed_Quests               (Parm, OutParm, ZeroConstructor)

void ACheckExpeditionRewardsAction_C::GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.GetCompletedQuests");

	ACheckExpeditionRewardsAction_C_GetCompletedQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Completed_Quests != nullptr)
		*Completed_Quests = params.Completed_Quests;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.CompleteRewardsAction
// (Private, BlueprintCallable, BlueprintEvent)

void ACheckExpeditionRewardsAction_C::CompleteRewardsAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.CompleteRewardsAction");

	ACheckExpeditionRewardsAction_C_CompleteRewardsAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACheckExpeditionRewardsAction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.UserConstructionScript");

	ACheckExpeditionRewardsAction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Execute
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams* Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ACheckExpeditionRewardsAction_C::Execute(struct FFortScriptedActionParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Execute");

	ACheckExpeditionRewardsAction_C_Execute_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Handle Rewards Running
// (BlueprintCallable, BlueprintEvent)

void ACheckExpeditionRewardsAction_C::Handle_Rewards_Running()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.Handle Rewards Running");

	ACheckExpeditionRewardsAction_C_Handle_Rewards_Running_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.ExecuteUbergraph_CheckExpeditionRewardsAction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckExpeditionRewardsAction_C::ExecuteUbergraph_CheckExpeditionRewardsAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C.ExecuteUbergraph_CheckExpeditionRewardsAction");

	ACheckExpeditionRewardsAction_C_ExecuteUbergraph_CheckExpeditionRewardsAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
