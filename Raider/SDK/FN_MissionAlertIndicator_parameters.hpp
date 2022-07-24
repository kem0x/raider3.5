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

// Function MissionAlertIndicator.MissionAlertIndicator_C.Get Mission Alert Visual Icon
struct UMissionAlertIndicator_C_Get_Mission_Alert_Visual_Icon_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSlateBrush                                 OutBrush;                                                 // (Parm, OutParm)
};

// Function MissionAlertIndicator.MissionAlertIndicator_C.Config
struct UMissionAlertIndicator_C_Config_Params
{
	struct FGameplayTagContainer                       AlertVisualTags;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MissionAlertIndicator.MissionAlertIndicator_C.Update
struct UMissionAlertIndicator_C_Update_Params
{
};

// Function MissionAlertIndicator.MissionAlertIndicator_C.ToggleTimer
struct UMissionAlertIndicator_C_ToggleTimer_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
