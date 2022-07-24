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

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.UpdateLerp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestObjectiveEntry_C::UpdateLerp()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestObjectiveEntry.QuestObjectiveEntry_C.UpdateLerp");

	UQuestObjectiveEntry_C_UpdateLerp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.LerpProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestObjectiveEntry_C::LerpProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestObjectiveEntry.QuestObjectiveEntry_C.LerpProgress");

	UQuestObjectiveEntry_C_LerpProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.AppearAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestObjectiveEntry_C::AppearAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestObjectiveEntry.QuestObjectiveEntry_C.AppearAnimationFinished");

	UQuestObjectiveEntry_C_AppearAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.UpdateProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestObjectiveEntry_C::UpdateProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestObjectiveEntry.QuestObjectiveEntry_C.UpdateProgress");

	UQuestObjectiveEntry_C_UpdateProgress_Params params;

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


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.StartDisplayingObjective
// (Event, Public, BlueprintEvent)

void UQuestObjectiveEntry_C::StartDisplayingObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestObjectiveEntry.QuestObjectiveEntry_C.StartDisplayingObjective");

	UQuestObjectiveEntry_C_StartDisplayingObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.ObjectiveInfoSet
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo** ObjectiveInfo                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsAnnouncement                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestObjectiveEntry_C::ObjectiveInfoSet(class UFortQuestObjectiveInfo** ObjectiveInfo, bool* IsAnnouncement)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestObjectiveEntry.QuestObjectiveEntry_C.ObjectiveInfoSet");

	UQuestObjectiveEntry_C_ObjectiveInfoSet_Params params;
	params.ObjectiveInfo = ObjectiveInfo;
	params.IsAnnouncement = IsAnnouncement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestObjectiveEntry.QuestObjectiveEntry_C.ExecuteUbergraph_QuestObjectiveEntry
// (HasDefaults)
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
