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

// Function AthenaSeasonBPTrackerSimpleWidget.AthenaSeasonBPTrackerSimpleWidget_C.OnAccountInfoChanged
struct UAthenaSeasonBPTrackerSimpleWidget_C_OnAccountInfoChanged_Params
{
	struct FFortPublicAccountInfo*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaSeasonBPTrackerSimpleWidget.AthenaSeasonBPTrackerSimpleWidget_C.ExecuteUbergraph_AthenaSeasonBPTrackerSimpleWidget
struct UAthenaSeasonBPTrackerSimpleWidget_C_ExecuteUbergraph_AthenaSeasonBPTrackerSimpleWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
