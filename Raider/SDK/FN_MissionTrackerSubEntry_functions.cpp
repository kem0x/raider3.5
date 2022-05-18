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

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.GetHeightEstimate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMissionTrackerSubEntry_C::GetHeightEstimate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.GetHeightEstimate");

	UMissionTrackerSubEntry_C_GetHeightEstimate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateCompletionAnnouncement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionTrackerSubEntry_C::CreateCompletionAnnouncement()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateCompletionAnnouncement");

	UMissionTrackerSubEntry_C_CreateCompletionAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleMissionUIEvent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMissionState*       MissionElement                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   EventTags                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMissionTrackerSubEntry_C::HandleMissionUIEvent(class AFortMissionState* MissionElement, struct FGameplayTagContainer* EventTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleMissionUIEvent");

	UMissionTrackerSubEntry_C_HandleMissionUIEvent_Params params;
	params.MissionElement = MissionElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventTags != nullptr)
		*EventTags = params.EventTags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.DrawAttention
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionTrackerSubEntry_C::DrawAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.DrawAttention");

	UMissionTrackerSubEntry_C_DrawAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionTrackerSubEntry_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Update");

	UMissionTrackerSubEntry_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveCompletionIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionTrackerSubEntry_C::HideObjectiveCompletionIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveCompletionIcon");

	UMissionTrackerSubEntry_C_HideObjectiveCompletionIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ShowObjectiveWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionTrackerSubEntry_C::ShowObjectiveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ShowObjectiveWidget");

	UMissionTrackerSubEntry_C_ShowObjectiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HanldeObjectiveVisiblityOverrideChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortMissionVisibilityOverride New_Visibility_Override        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionTrackerSubEntry_C::HanldeObjectiveVisiblityOverrideChanged(class AFortObjectiveBase* Objective, EFortMissionVisibilityOverride New_Visibility_Override)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HanldeObjectiveVisiblityOverrideChanged");

	UMissionTrackerSubEntry_C_HanldeObjectiveVisiblityOverrideChanged_Params params;
	params.Objective = Objective;
	params.New_Visibility_Override = New_Visibility_Override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateObjectiveContentWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionTrackerSubEntry_C::CreateObjectiveContentWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateObjectiveContentWidget");

	UMissionTrackerSubEntry_C_CreateObjectiveContentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.StartEndingAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionTrackerSubEntry_C::StartEndingAnimations(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.StartEndingAnimations");

	UMissionTrackerSubEntry_C_StartEndingAnimations_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionTrackerSubEntry_C::HideObjectiveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveWidget");

	UMissionTrackerSubEntry_C_HideObjectiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMissionState*       Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionTrackerSubEntry_C::HandleUpdate(class AFortMissionState* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleUpdate");

	UMissionTrackerSubEntry_C_HandleUpdate_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionTrackerSubEntry_C::HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveVisibilityChanged");

	UMissionTrackerSubEntry_C_HandleObjectiveVisibilityChanged_Params params;
	params.Objective = Objective;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveStatusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortObjectiveStatus           NewStatus                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionTrackerSubEntry_C::HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, EFortObjectiveStatus NewStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveStatusChanged");

	UMissionTrackerSubEntry_C_HandleObjectiveStatusChanged_Params params;
	params.Objective = Objective;
	params.NewStatus = NewStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionTrackerSubEntry_C::Setup(class AFortObjectiveBase* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Setup");

	UMissionTrackerSubEntry_C_Setup_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnObjectiveSet
// (Event, Protected, BlueprintEvent)

void UMissionTrackerSubEntry_C::OnObjectiveSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnObjectiveSet");

	UMissionTrackerSubEntry_C_OnObjectiveSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnHiddenByHeightConstraintChanged
// (Event, Protected, BlueprintEvent)

void UMissionTrackerSubEntry_C::OnHiddenByHeightConstraintChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnHiddenByHeightConstraintChanged");

	UMissionTrackerSubEntry_C_OnHiddenByHeightConstraintChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ExecuteUbergraph_MissionTrackerSubEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionTrackerSubEntry_C::ExecuteUbergraph_MissionTrackerSubEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ExecuteUbergraph_MissionTrackerSubEntry");

	UMissionTrackerSubEntry_C_ExecuteUbergraph_MissionTrackerSubEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.WidgetVisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMissionTrackerSubEntry_C::WidgetVisibilityChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.WidgetVisibilityChanged__DelegateSignature");

	UMissionTrackerSubEntry_C_WidgetVisibilityChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
