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

// Function QuestUpdatesLog.QuestUpdatesLog_C.CanDisplayAnotherObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestUpdatesLog_C::CanDisplayAnotherObjective(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.CanDisplayAnotherObjective");

	UQuestUpdatesLog_C_CanDisplayAnotherObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.GetTotalDisplayedObjectives
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NumObjectives                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestUpdatesLog_C::GetTotalDisplayedObjectives(int* NumObjectives)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.GetTotalDisplayedObjectives");

	UQuestUpdatesLog_C_GetTotalDisplayedObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumObjectives != nullptr)
		*NumObjectives = params.NumObjectives;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.CreateAnnouncementUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestUpdateInfo UpdateInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestUpdatesLog_C::CreateAnnouncementUpdate(const struct FDynamicQuestUpdateInfo& UpdateInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.CreateAnnouncementUpdate");

	UQuestUpdatesLog_C_CreateAnnouncementUpdate_Params params;
	params.UpdateInfo = UpdateInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.HandleQuestUpdateWidgetFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*     UpdateWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuestUpdatesLog_C::HandleQuestUpdateWidgetFinished(class UQuestUpdateEntry_C* UpdateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.HandleQuestUpdateWidgetFinished");

	UQuestUpdatesLog_C_HandleQuestUpdateWidgetFinished_Params params;
	params.UpdateWidget = UpdateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.GetAvailableQuestUpdateWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestUpdateInfo UpdateInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UQuestUpdateEntry_C*     AvailableWIdget                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuestUpdatesLog_C::GetAvailableQuestUpdateWidget(const struct FDynamicQuestUpdateInfo& UpdateInfo, class UQuestUpdateEntry_C** AvailableWIdget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.GetAvailableQuestUpdateWidget");

	UQuestUpdatesLog_C_GetAvailableQuestUpdateWidget_Params params;
	params.UpdateInfo = UpdateInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableWIdget != nullptr)
		*AvailableWIdget = params.AvailableWIdget;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.TryDisplayDynamicQuestStatusUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestUpdatesLog_C::TryDisplayDynamicQuestStatusUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.TryDisplayDynamicQuestStatusUpdate");

	UQuestUpdatesLog_C_TryDisplayDynamicQuestStatusUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.CreateQuestUpdateWIdgets
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestUpdatesLog_C::CreateQuestUpdateWIdgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.CreateQuestUpdateWIdgets");

	UQuestUpdatesLog_C_CreateQuestUpdateWIdgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.HandleDisplayDynamicQuestUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* QuestObjective                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisplayStatusUpdate           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisplayAnnouncementUpdate     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestUpdatesLog_C::HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo* QuestObjective, bool bDisplayStatusUpdate, bool bDisplayAnnouncementUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.HandleDisplayDynamicQuestUpdate");

	UQuestUpdatesLog_C_HandleDisplayDynamicQuestUpdate_Params params;
	params.QuestObjective = QuestObjective;
	params.bDisplayStatusUpdate = bDisplayStatusUpdate;
	params.bDisplayAnnouncementUpdate = bDisplayAnnouncementUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestUpdatesLog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.Construct");

	UQuestUpdatesLog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.ExecuteUbergraph_QuestUpdatesLog
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestUpdatesLog_C::ExecuteUbergraph_QuestUpdatesLog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.ExecuteUbergraph_QuestUpdatesLog");

	UQuestUpdatesLog_C_ExecuteUbergraph_QuestUpdatesLog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
