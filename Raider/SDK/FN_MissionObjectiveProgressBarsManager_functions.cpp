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

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.GetHeightEstimate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionObjectiveProgressBarsManager_C::GetHeightEstimate(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.GetHeightEstimate");

	UMissionObjectiveProgressBarsManager_C_GetHeightEstimate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMissionState*       Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionObjectiveProgressBarsManager_C::HandleUpdate(class AFortMissionState* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleUpdate");

	UMissionObjectiveProgressBarsManager_C_HandleUpdate_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           New_Visibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionObjectiveProgressBarsManager_C::HandleObjectiveVisibilityChanged(class AFortObjectiveBase* Objective, bool New_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveVisibilityChanged");

	UMissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged_Params params;
	params.Objective = Objective;
	params.New_Visibility = New_Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveStatusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortObjectiveStatus           New_Status                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionObjectiveProgressBarsManager_C::HandleObjectiveStatusChanged(class AFortObjectiveBase* Objective, EFortObjectiveStatus New_Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveStatusChanged");

	UMissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged_Params params;
	params.Objective = Objective;
	params.New_Status = New_Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.CreateProgressBarWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionObjectiveProgressBarsManager_C::CreateProgressBarWidget(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.CreateProgressBarWidget");

	UMissionObjectiveProgressBarsManager_C_CreateProgressBarWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortObjectiveBase*      TrackedObjective               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInConfigureAsHUD              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionObjectiveProgressBarsManager_C::Setup(class AFortObjectiveBase* TrackedObjective, bool bInConfigureAsHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.Setup");

	UMissionObjectiveProgressBarsManager_C_Setup_Params params;
	params.TrackedObjective = TrackedObjective;
	params.bInConfigureAsHUD = bInConfigureAsHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.UpdateObjectiveProgressBars
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionObjectiveProgressBarsManager_C::UpdateObjectiveProgressBars()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.UpdateObjectiveProgressBars");

	UMissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
