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

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.UpdateStyling
struct UAthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling_Params
{
};

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnSetup
struct UAthenaSeasonLevelPaidRewardsWidget_C_OnSetup_Params
{
};

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnLockedStatusChanged
struct UAthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged_Params
{
	bool*                                              FreeUnlocked;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              PaidUnlocked;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnNavigateTo
struct UAthenaSeasonLevelPaidRewardsWidget_C_OnNavigateTo_Params
{
};

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.PlayIntro
struct UAthenaSeasonLevelPaidRewardsWidget_C_PlayIntro_Params
{
};

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget
struct UAthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
