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

// Function ChallengeProgressWidget.ChallengeProgressWidget_C.SegmentHack
struct UChallengeProgressWidget_C_SegmentHack_Params
{
	int                                                NumSegments;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeProgressWidget.ChallengeProgressWidget_C.Update
struct UChallengeProgressWidget_C_Update_Params
{
	int                                                Achieved;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Required;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PercentComplete;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdPercent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeProgressWidget.ChallengeProgressWidget_C.Construct
struct UChallengeProgressWidget_C_Construct_Params
{
};

// Function ChallengeProgressWidget.ChallengeProgressWidget_C.PreConstruct
struct UChallengeProgressWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeProgressWidget.ChallengeProgressWidget_C.ExecuteUbergraph_ChallengeProgressWidget
struct UChallengeProgressWidget_C_ExecuteUbergraph_ChallengeProgressWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
