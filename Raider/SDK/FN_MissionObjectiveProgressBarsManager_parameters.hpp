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

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.GetHeightEstimate
struct UMissionObjectiveProgressBarsManager_C_GetHeightEstimate_Params
{
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleUpdate
struct UMissionObjectiveProgressBarsManager_C_HandleUpdate_Params
{
	class AFortMissionState*                           Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveVisibilityChanged
struct UMissionObjectiveProgressBarsManager_C_HandleObjectiveVisibilityChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               New_Visibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.HandleObjectiveStatusChanged
struct UMissionObjectiveProgressBarsManager_C_HandleObjectiveStatusChanged_Params
{
	class AFortObjectiveBase*                          Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortObjectiveStatus                               New_Status;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.CreateProgressBarWidget
struct UMissionObjectiveProgressBarsManager_C_CreateProgressBarWidget_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.Setup
struct UMissionObjectiveProgressBarsManager_C_Setup_Params
{
	class AFortObjectiveBase*                          TrackedObjective;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInConfigureAsHUD;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionObjectiveProgressBarsManager.MissionObjectiveProgressBarsManager_C.UpdateObjectiveProgressBars
struct UMissionObjectiveProgressBarsManager_C_UpdateObjectiveProgressBars_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
