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

// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.IsFrontEndRewards Running
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRunning                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACheckFrontEndDailyRewardsAction_C::IsFrontEndRewards_Running(bool* IsRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.IsFrontEndRewards Running");

	ACheckFrontEndDailyRewardsAction_C_IsFrontEndRewards_Running_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsRunning != nullptr)
		*IsRunning = params.IsRunning;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Daily Rewards Open
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bRunning                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACheckFrontEndDailyRewardsAction_C::Daily_Rewards_Open(bool* bRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Daily Rewards Open");

	ACheckFrontEndDailyRewardsAction_C_Daily_Rewards_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRunning != nullptr)
		*bRunning = params.bRunning;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.CompleteDailyRewardAction
// (Public, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndDailyRewardsAction_C::CompleteDailyRewardAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.CompleteDailyRewardAction");

	ACheckFrontEndDailyRewardsAction_C_CompleteDailyRewardAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ShowDailyRewards
// (Public, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndDailyRewardsAction_C::ShowDailyRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ShowDailyRewards");

	ACheckFrontEndDailyRewardsAction_C_ShowDailyRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACheckFrontEndDailyRewardsAction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.UserConstructionScript");

	ACheckFrontEndDailyRewardsAction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Execute
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortScriptedActionParams* Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ACheckFrontEndDailyRewardsAction_C::Execute(struct FFortScriptedActionParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.Execute");

	ACheckFrontEndDailyRewardsAction_C_Execute_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.HandleClientEvent_FinishedModalQueue
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ACheckFrontEndDailyRewardsAction_C::HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.HandleClientEvent_FinishedModalQueue");

	ACheckFrontEndDailyRewardsAction_C_HandleClientEvent_FinishedModalQueue_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ExecuteUbergraph_CheckFrontEndDailyRewardsAction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckFrontEndDailyRewardsAction_C::ExecuteUbergraph_CheckFrontEndDailyRewardsAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C.ExecuteUbergraph_CheckFrontEndDailyRewardsAction");

	ACheckFrontEndDailyRewardsAction_C_ExecuteUbergraph_CheckFrontEndDailyRewardsAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
