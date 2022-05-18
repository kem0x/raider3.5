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

// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.MarkQuestAsSeen
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_EpicQuest_C::MarkQuestAsSeen()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.MarkQuestAsSeen");

	UFrontEndRewards_EpicQuest_C_MarkQuestAsSeen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.HandleTransitionInComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_EpicQuest_C::HandleTransitionInComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.HandleTransitionInComplete");

	UFrontEndRewards_EpicQuest_C_HandleTransitionInComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.HandleContinueAction
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Committed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_EpicQuest_C::HandleContinueAction(bool* Committed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.HandleContinueAction");

	UFrontEndRewards_EpicQuest_C_HandleContinueAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Committed != nullptr)
		*Committed = params.Committed;
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.PopulateFromQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          InQuest                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_EpicQuest_C::PopulateFromQuest(class UFortQuestItem* InQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.PopulateFromQuest");

	UFrontEndRewards_EpicQuest_C_PopulateFromQuest_Params params;
	params.InQuest = InQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.TransitionInBegin
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_EpicQuest_C::TransitionInBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.TransitionInBegin");

	UFrontEndRewards_EpicQuest_C_TransitionInBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.TransitionOutBegin
// (Event, Protected, BlueprintEvent)

void UFrontEndRewards_EpicQuest_C::TransitionOutBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.TransitionOutBegin");

	UFrontEndRewards_EpicQuest_C_TransitionOutBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFrontEndRewards_EpicQuest_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.Construct");

	UFrontEndRewards_EpicQuest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.OnPrimaryAction
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFrontEndRewards_EpicQuest_C::OnPrimaryAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.OnPrimaryAction");

	UFrontEndRewards_EpicQuest_C_OnPrimaryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.ExecuteUbergraph_FrontEndRewards_EpicQuest
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFrontEndRewards_EpicQuest_C::ExecuteUbergraph_FrontEndRewards_EpicQuest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FrontEndRewards_EpicQuest.FrontEndRewards_EpicQuest_C.ExecuteUbergraph_FrontEndRewards_EpicQuest");

	UFrontEndRewards_EpicQuest_C_ExecuteUbergraph_FrontEndRewards_EpicQuest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
