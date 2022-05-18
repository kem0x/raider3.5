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

// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Clear
struct UAthenaReplayBrowserMatchStats_C_Clear_Params
{
};

// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Refresh
struct UAthenaReplayBrowserMatchStats_C_Refresh_Params
{
};

// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Construct
struct UAthenaReplayBrowserMatchStats_C_Construct_Params
{
};

// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.SetReplayInfo
struct UAthenaReplayBrowserMatchStats_C_SetReplayInfo_Params
{
	class UAthenaReplayBrowserRowProxyInstance*        ReplayInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.ExecuteUbergraph_AthenaReplayBrowserMatchStats
struct UAthenaReplayBrowserMatchStats_C_ExecuteUbergraph_AthenaReplayBrowserMatchStats_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
