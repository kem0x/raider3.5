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

// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.HandleBack
struct UProfileStatsWeaponsSubScreen_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.Construct
struct UProfileStatsWeaponsSubScreen_C_Construct_Params
{
};

// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.HandleStatViewChanged
struct UProfileStatsWeaponsSubScreen_C_HandleStatViewChanged_Params
{
	class UAthenaBaseStatView*                         StatView;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProfileStatsWeaponsSubScreen.ProfileStatsWeaponsSubScreen_C.ExecuteUbergraph_ProfileStatsWeaponsSubScreen
struct UProfileStatsWeaponsSubScreen_C_ExecuteUbergraph_ProfileStatsWeaponsSubScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
