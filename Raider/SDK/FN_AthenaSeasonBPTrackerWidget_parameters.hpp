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

// Function AthenaSeasonBPTrackerWidget.AthenaSeasonBPTrackerWidget_C.OnAccountInfoChanged
struct UAthenaSeasonBPTrackerWidget_C_OnAccountInfoChanged_Params
{
	struct FFortPublicAccountInfo*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaSeasonBPTrackerWidget.AthenaSeasonBPTrackerWidget_C.ExecuteUbergraph_AthenaSeasonBPTrackerWidget
struct UAthenaSeasonBPTrackerWidget_C_ExecuteUbergraph_AthenaSeasonBPTrackerWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
