#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.GetHeightEstimate
struct UMissionTrackerSubEntry_C_GetHeightEstimate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateCompletionAnnouncement
struct UMissionTrackerSubEntry_C_CreateCompletionAnnouncement_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleMissionUIEvent
struct UMissionTrackerSubEntry_C_HandleMissionUIEvent_Params
{
	class AFortMissionState*                           MissionElement;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       EventTags;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.DrawAttention
struct UMissionTrackerSubEntry_C_DrawAttention_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Update
struct UMissionTrackerSubEntry_C_Update_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveCompletionIcon
struct UMissionTrackerSubEntry_C_HideObjectiveCompletionIcon_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ShowObjectiveWidget
struct UMissionTrackerSubEntry_C_ShowObjectiveWidget_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HanldeObjectiveVisiblityOverrideChanged
struct UMissionTrackerSubEntry_C_HanldeObjectiveVisiblityOverrideChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortMissionVisibilityOverride                     New_Visibility_Override;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.CreateObjectiveContentWidget
struct UMissionTrackerSubEntry_C_CreateObjectiveContentWidget_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.StartEndingAnimations
struct UMissionTrackerSubEntry_C_StartEndingAnimations_Params
{
	class UWidgetAnimation*                            Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HideObjectiveWidget
struct UMissionTrackerSubEntry_C_HideObjectiveWidget_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleUpdate
struct UMissionTrackerSubEntry_C_HandleUpdate_Params
{
	class AFortMissionState*                           Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveVisibilityChanged
struct UMissionTrackerSubEntry_C_HandleObjectiveVisibilityChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.HandleObjectiveStatusChanged
struct UMissionTrackerSubEntry_C_HandleObjectiveStatusChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortObjectiveStatus                               NewStatus;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.Setup
struct UMissionTrackerSubEntry_C_Setup_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnObjectiveSet
struct UMissionTrackerSubEntry_C_OnObjectiveSet_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.OnHiddenByHeightConstraintChanged
struct UMissionTrackerSubEntry_C_OnHiddenByHeightConstraintChanged_Params
{
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.ExecuteUbergraph_MissionTrackerSubEntry
struct UMissionTrackerSubEntry_C_ExecuteUbergraph_MissionTrackerSubEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionTrackerSubEntry.MissionTrackerSubEntry_C.WidgetVisibilityChanged__DelegateSignature
struct UMissionTrackerSubEntry_C_WidgetVisibilityChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
