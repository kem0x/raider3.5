#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.Rewind IntroAnim
struct UMissionRewardDeltaWidget_C_Rewind_IntroAnim_Params
{
};

// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.Reset IntroAnim
struct UMissionRewardDeltaWidget_C_Reset_IntroAnim_Params
{
};

// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.IntroAnim
struct UMissionRewardDeltaWidget_C_IntroAnim_Params
{
};

// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.SetDeltaReward
struct UMissionRewardDeltaWidget_C_SetDeltaReward_Params
{
	struct FFortItemDelta                              DeltaReward;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
