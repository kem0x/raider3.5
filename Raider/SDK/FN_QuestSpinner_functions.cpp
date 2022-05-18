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

// Function QuestSpinner.QuestSpinner_C.IncrementPoolIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestSpinner_C::IncrementPoolIndex(int* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestSpinner.QuestSpinner_C.IncrementPoolIndex");

	UQuestSpinner_C_IncrementPoolIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewValue != nullptr)
		*NewValue = params.NewValue;
}


// Function QuestSpinner.QuestSpinner_C.OnSpinDelayTimerComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestSpinner_C::OnSpinDelayTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestSpinner.QuestSpinner_C.OnSpinDelayTimerComplete");

	UQuestSpinner_C_OnSpinDelayTimerComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestSpinner.QuestSpinner_C.BeginSpinDelayTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestSpinner_C::BeginSpinDelayTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestSpinner.QuestSpinner_C.BeginSpinDelayTimer");

	UQuestSpinner_C_BeginSpinDelayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestSpinner.QuestSpinner_C.SetQuests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  Quests                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          SpinPeriod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestSpinner_C::SetQuests(float SpinPeriod, TArray<class UFortQuestItem*>* Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestSpinner.QuestSpinner_C.SetQuests");

	UQuestSpinner_C_SetQuests_Params params;
	params.SpinPeriod = SpinPeriod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quests != nullptr)
		*Quests = params.Quests;
}


// Function QuestSpinner.QuestSpinner_C.OnSpinComplete
// (BlueprintCallable, BlueprintEvent)

void UQuestSpinner_C::OnSpinComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestSpinner.QuestSpinner_C.OnSpinComplete");

	UQuestSpinner_C_OnSpinComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestSpinner.QuestSpinner_C.ExecuteUbergraph_QuestSpinner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestSpinner_C::ExecuteUbergraph_QuestSpinner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestSpinner.QuestSpinner_C.ExecuteUbergraph_QuestSpinner");

	UQuestSpinner_C_ExecuteUbergraph_QuestSpinner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
