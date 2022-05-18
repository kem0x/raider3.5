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

// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.SetStatNameText
struct ULeaderboardHeaderRowWidget_C_SetStatNameText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.Construct
struct ULeaderboardHeaderRowWidget_C_Construct_Params
{
};

// Function LeaderboardHeaderRowWidget.LeaderboardHeaderRowWidget_C.ExecuteUbergraph_LeaderboardHeaderRowWidget
struct ULeaderboardHeaderRowWidget_C_ExecuteUbergraph_LeaderboardHeaderRowWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
