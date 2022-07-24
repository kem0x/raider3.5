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

// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.QuestFillCurveFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaQuestObjectiveEntry_C::QuestFillCurveFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.QuestFillCurveFinished");

	UAthenaQuestObjectiveEntry_C_QuestFillCurveFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.UpdateProgressQuest
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuestObjectiveEntry_C::UpdateProgressQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.UpdateProgressQuest");

	UAthenaQuestObjectiveEntry_C_UpdateProgressQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.CompleteObjectiveAnimationFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaQuestObjectiveEntry_C::CompleteObjectiveAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.CompleteObjectiveAnimationFinished");

	UAthenaQuestObjectiveEntry_C_CompleteObjectiveAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.FinishedDisplayTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuestObjectiveEntry_C::FinishedDisplayTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.FinishedDisplayTimer");

	UAthenaQuestObjectiveEntry_C_FinishedDisplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.ObjectiveFillCurveFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaQuestObjectiveEntry_C::ObjectiveFillCurveFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.ObjectiveFillCurveFinished");

	UAthenaQuestObjectiveEntry_C_ObjectiveFillCurveFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.SetProgressText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Current_Value                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Total_Value                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestObjectiveEntry_C::SetProgressText(int Current_Value, int Total_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.SetProgressText");

	UAthenaQuestObjectiveEntry_C_SetProgressText_Params params;
	params.Current_Value = Current_Value;
	params.Total_Value = Total_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.UpdateProgressObjective
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaQuestObjectiveEntry_C::UpdateProgressObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.UpdateProgressObjective");

	UAthenaQuestObjectiveEntry_C_UpdateProgressObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.StartDisplayingObjective
// (Event, Public, BlueprintEvent)

void UAthenaQuestObjectiveEntry_C::StartDisplayingObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.StartDisplayingObjective");

	UAthenaQuestObjectiveEntry_C_StartDisplayingObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.ObjectiveInfoSet
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo** ObjectiveInfo                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsAnnouncement                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestObjectiveEntry_C::ObjectiveInfoSet(class UFortQuestObjectiveInfo** ObjectiveInfo, bool* IsAnnouncement)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.ObjectiveInfoSet");

	UAthenaQuestObjectiveEntry_C_ObjectiveInfoSet_Params params;
	params.ObjectiveInfo = ObjectiveInfo;
	params.IsAnnouncement = IsAnnouncement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.ExecuteUbergraph_AthenaQuestObjectiveEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestObjectiveEntry_C::ExecuteUbergraph_AthenaQuestObjectiveEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.ExecuteUbergraph_AthenaQuestObjectiveEntry");

	UAthenaQuestObjectiveEntry_C_ExecuteUbergraph_AthenaQuestObjectiveEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
