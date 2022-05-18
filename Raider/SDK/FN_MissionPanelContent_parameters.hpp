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

// Function MissionPanelContent.MissionPanelContent_C.Setup Mission Rewards
struct UMissionPanelContent_C_Setup_Mission_Rewards_Params
{
	TArray<class UFortItem*>                           Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<ERewardListEntryType>                  RewardType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionPanelContent.MissionPanelContent_C.UpdateOverviewObjectives
struct UMissionPanelContent_C_UpdateOverviewObjectives_Params
{
};

// Function MissionPanelContent.MissionPanelContent_C.UpdateMissionRewards
struct UMissionPanelContent_C_UpdateMissionRewards_Params
{
};

// Function MissionPanelContent.MissionPanelContent_C.UpdateMissionDisplay
struct UMissionPanelContent_C_UpdateMissionDisplay_Params
{
};

// Function MissionPanelContent.MissionPanelContent_C.Construct
struct UMissionPanelContent_C_Construct_Params
{
};

// Function MissionPanelContent.MissionPanelContent_C.ExecuteUbergraph_MissionPanelContent
struct UMissionPanelContent_C_ExecuteUbergraph_MissionPanelContent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
