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

// Function QuestUpdateEntry.QuestUpdateEntry_C.GetNumDisplayedObjectives
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NumObjectives                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestUpdateEntry_C::GetNumDisplayedObjectives(int* NumObjectives)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.GetNumDisplayedObjectives");

	UQuestUpdateEntry_C_GetNumDisplayedObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumObjectives != nullptr)
		*NumObjectives = params.NumObjectives;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.CreateObjectiveEntryWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LastAchievedCount              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestUpdateEntry_C::CreateObjectiveEntryWidget(class UFortQuestObjectiveInfo* Objective, int LastAchievedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.CreateObjectiveEntryWidget");

	UQuestUpdateEntry_C_CreateObjectiveEntryWidget_Params params;
	params.Objective = Objective;
	params.LastAchievedCount = LastAchievedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnDisappearAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestUpdateEntry_C::OnDisappearAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.OnDisappearAnimationFinished");

	UQuestUpdateEntry_C_OnDisappearAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnPostUpdatesDelayFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestUpdateEntry_C::OnPostUpdatesDelayFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.OnPostUpdatesDelayFinished");

	UQuestUpdateEntry_C_OnPostUpdatesDelayFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.HaveAllUpdatesFinished
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestUpdateEntry_C::HaveAllUpdatesFinished(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.HaveAllUpdatesFinished");

	UQuestUpdateEntry_C_HaveAllUpdatesFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.IsUpdateActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDynamicQuestUpdateInfo Update                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestUpdateEntry_C::IsUpdateActive(struct FDynamicQuestUpdateInfo* Update, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.IsUpdateActive");

	UQuestUpdateEntry_C_IsUpdateActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Update != nullptr)
		*Update = params.Update;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.GetObjectiveWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* QuestObjective                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UQuestObjectiveEntry_C*  ObjectiveWidget                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuestUpdateEntry_C::GetObjectiveWidget(class UFortQuestObjectiveInfo* QuestObjective, class UQuestObjectiveEntry_C** ObjectiveWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.GetObjectiveWidget");

	UQuestUpdateEntry_C_GetObjectiveWidget_Params params;
	params.QuestObjective = QuestObjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectiveWidget != nullptr)
		*ObjectiveWidget = params.ObjectiveWidget;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDynamicQuestUpdateInfo Update                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestUpdateEntry_C::HasUpdateStarted(struct FDynamicQuestUpdateInfo* Update, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateStarted");

	UQuestUpdateEntry_C_HasUpdateStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Update != nullptr)
		*Update = params.Update;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnUpdateFinished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestUpdateEntry_C::OnUpdateFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.OnUpdateFinished");

	UQuestUpdateEntry_C_OnUpdateFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateFinished
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDynamicQuestUpdateInfo Update                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestUpdateEntry_C::HasUpdateFinished(struct FDynamicQuestUpdateInfo* Update, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.HasUpdateFinished");

	UQuestUpdateEntry_C_HasUpdateFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Update != nullptr)
		*Update = params.Update;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.CanStartUpdate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            UpdateIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestUpdateEntry_C::CanStartUpdate(int UpdateIndex, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.CanStartUpdate");

	UQuestUpdateEntry_C_CanStartUpdate_Params params;
	params.UpdateIndex = UpdateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.TryStartUpdates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestUpdateEntry_C::TryStartUpdates()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.TryStartUpdates");

	UQuestUpdateEntry_C_TryStartUpdates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnAppearAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestUpdateEntry_C::OnAppearAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.OnAppearAnimationFinished");

	UQuestUpdateEntry_C_OnAppearAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.CanAddUpdate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDynamicQuestUpdateInfo UpdateToAdd                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestUpdateEntry_C::CanAddUpdate(const struct FDynamicQuestUpdateInfo& UpdateToAdd, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.CanAddUpdate");

	UQuestUpdateEntry_C_CanAddUpdate_Params params;
	params.UpdateToAdd = UpdateToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.OnReceiveQuestUpdate
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestUpdateInfo QuestUpdateInfo                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestUpdateEntry_C::OnReceiveQuestUpdate(const struct FDynamicQuestUpdateInfo& QuestUpdateInfo, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.OnReceiveQuestUpdate");

	UQuestUpdateEntry_C_OnReceiveQuestUpdate_Params params;
	params.QuestUpdateInfo = QuestUpdateInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestUpdateEntry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.Tick");

	UQuestUpdateEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestUpdateEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.Construct");

	UQuestUpdateEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.ExecuteUbergraph_QuestUpdateEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestUpdateEntry_C::ExecuteUbergraph_QuestUpdateEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.ExecuteUbergraph_QuestUpdateEntry");

	UQuestUpdateEntry_C_ExecuteUbergraph_QuestUpdateEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.AllQuestUpdatesFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*     UpdateWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuestUpdateEntry_C::AllQuestUpdatesFinished__DelegateSignature(class UQuestUpdateEntry_C* UpdateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.AllQuestUpdatesFinished__DelegateSignature");

	UQuestUpdateEntry_C_AllQuestUpdatesFinished__DelegateSignature_Params params;
	params.UpdateWidget = UpdateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
