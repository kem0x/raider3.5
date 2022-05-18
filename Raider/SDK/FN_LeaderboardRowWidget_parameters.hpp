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

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.Refresh
struct ULeaderboardRowWidget_C_Refresh_Params
{
	class UFortLeaderboardRowProxyInstance*            RowObject;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.SetDataDirect
struct ULeaderboardRowWidget_C_SetDataDirect_Params
{
	class UFortLeaderboardRowProxyInstance*            NewData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnLeaderboardEntryDataSet
struct ULeaderboardRowWidget_C_OnLeaderboardEntryDataSet_Params
{
};

// Function LeaderboardRowWidget.LeaderboardRowWidget_C.ExecuteUbergraph_LeaderboardRowWidget
struct ULeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
