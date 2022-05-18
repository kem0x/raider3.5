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

// Function AthenaSeasonLevelHeaderWidget.AthenaSeasonLevelHeaderWidget_C.OnSetup
struct UAthenaSeasonLevelHeaderWidget_C_OnSetup_Params
{
};

// Function AthenaSeasonLevelHeaderWidget.AthenaSeasonLevelHeaderWidget_C.OnLockedStatusChanged
struct UAthenaSeasonLevelHeaderWidget_C_OnLockedStatusChanged_Params
{
	bool*                                              FreeUnlocked;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              PaidUnlocked;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelHeaderWidget.AthenaSeasonLevelHeaderWidget_C.ExecuteUbergraph_AthenaSeasonLevelHeaderWidget
struct UAthenaSeasonLevelHeaderWidget_C_ExecuteUbergraph_AthenaSeasonLevelHeaderWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
