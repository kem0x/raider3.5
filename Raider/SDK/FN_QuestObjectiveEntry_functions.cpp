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

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.PlayAppearAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestObjectiveEntry_C::PlayAppearAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestObjectiveEntry.QuestObjectiveEntry_C.PlayAppearAnimation");

	UQuestObjectiveEntry_C_PlayAppearAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AchievedCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestObjectiveEntry_C::Update(class UFortQuestObjectiveInfo* Objective, int AchievedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestObjectiveEntry.QuestObjectiveEntry_C.Update");

	UQuestObjectiveEntry_C_Update_Params params;
	params.Objective = Objective;
	params.AchievedCount = AchievedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AchievedCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestObjectiveEntry_C::UpdateProgress(class UFortQuestObjectiveInfo* Objective, int AchievedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestObjectiveEntry.QuestObjectiveEntry_C.UpdateProgress");

	UQuestObjectiveEntry_C_UpdateProgress_Params params;
	params.Objective = Objective;
	params.AchievedCount = AchievedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestObjectiveEntry_C::SetData(class UObject* InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestObjectiveEntry.QuestObjectiveEntry_C.SetData");

	UQuestObjectiveEntry_C_SetData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.ExecuteUbergraph_QuestObjectiveEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestObjectiveEntry_C::ExecuteUbergraph_QuestObjectiveEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestObjectiveEntry.QuestObjectiveEntry_C.ExecuteUbergraph_QuestObjectiveEntry");

	UQuestObjectiveEntry_C_ExecuteUbergraph_QuestObjectiveEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
