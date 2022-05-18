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

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.UpdateStyling
struct UAthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling_Params
{
};

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.OnSetup
struct UAthenaSeasonLevelFreeRewardsWidget_C_OnSetup_Params
{
};

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.OnLockedStatusChanged
struct UAthenaSeasonLevelFreeRewardsWidget_C_OnLockedStatusChanged_Params
{
	bool*                                              FreeUnlocked;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              PaidUnlocked;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.PlayIntro
struct UAthenaSeasonLevelFreeRewardsWidget_C_PlayIntro_Params
{
};

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget
struct UAthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
