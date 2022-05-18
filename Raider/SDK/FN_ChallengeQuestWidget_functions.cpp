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

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsInvalid
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeQuestWidget_C::StyleAsInvalid()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsInvalid");

	UChallengeQuestWidget_C_StyleAsInvalid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChallengeQuestWidget_C::UpdateName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateName");

	UChallengeQuestWidget_C_UpdateName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetAchievedCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OutTotalAchievedCount          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutTotalRequiredCount          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallengeQuestWidget_C::GetAchievedCount(int* OutTotalAchievedCount, int* OutTotalRequiredCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetAchievedCount");

	UChallengeQuestWidget_C_GetAchievedCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTotalAchievedCount != nullptr)
		*OutTotalAchievedCount = params.OutTotalAchievedCount;
	if (OutTotalRequiredCount != nullptr)
		*OutTotalRequiredCount = params.OutTotalRequiredCount;
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetQuestState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuestState                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EFortQuestState UChallengeQuestWidget_C::GetQuestState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetQuestState");

	UChallengeQuestWidget_C_GetQuestState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChallengeQuestWidget_C::UpdateProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateProgress");

	UChallengeQuestWidget_C_UpdateProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsIncomplete
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeQuestWidget_C::StyleAsIncomplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsIncomplete");

	UChallengeQuestWidget_C_StyleAsIncomplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeQuestWidget_C::StyleAsComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsComplete");

	UChallengeQuestWidget_C_StyleAsComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeQuestWidget.ChallengeQuestWidget_C.SetQuestItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* QuestDefinition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeQuestWidget_C::SetQuestItem(class UFortQuestItem* Quest, class UFortQuestItemDefinition* QuestDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeQuestWidget.ChallengeQuestWidget_C.SetQuestItem");

	UChallengeQuestWidget_C_SetQuestItem_Params params;
	params.Quest = Quest;
	params.QuestDefinition = QuestDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
