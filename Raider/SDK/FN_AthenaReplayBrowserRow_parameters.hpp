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

// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.FormatLengthText
struct UAthenaReplayBrowserRow_C_FormatLengthText_Params
{
	float                                              Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.Refresh
struct UAthenaReplayBrowserRow_C_Refresh_Params
{
};

// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.OnReplayBrowserEntryDataSet
struct UAthenaReplayBrowserRow_C_OnReplayBrowserEntryDataSet_Params
{
};

// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.PreConstruct
struct UAthenaReplayBrowserRow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.ExecuteUbergraph_AthenaReplayBrowserRow
struct UAthenaReplayBrowserRow_C_ExecuteUbergraph_AthenaReplayBrowserRow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
