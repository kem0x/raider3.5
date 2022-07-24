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

// Function AthenaScorePopup.AthenaScorePopup_C.ResetSoundPitch
struct UAthenaScorePopup_C_ResetSoundPitch_Params
{
};

// Function AthenaScorePopup.AthenaScorePopup_C.IncrementSoundPitch
struct UAthenaScorePopup_C_IncrementSoundPitch_Params
{
};

// Function AthenaScorePopup.AthenaScorePopup_C.Construct
struct UAthenaScorePopup_C_Construct_Params
{
};

// Function AthenaScorePopup.AthenaScorePopup_C.OnNewScoreEarned
struct UAthenaScorePopup_C_OnNewScoreEarned_Params
{
	int*                                               NewScoreValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      NewScoreTypeText;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int*                                               BigScoreThreshold;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaScorePopup.AthenaScorePopup_C.Timeout
struct UAthenaScorePopup_C_Timeout_Params
{
};

// Function AthenaScorePopup.AthenaScorePopup_C.ScoreComplete
struct UAthenaScorePopup_C_ScoreComplete_Params
{
};

// Function AthenaScorePopup.AthenaScorePopup_C.PreConstruct
struct UAthenaScorePopup_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaScorePopup.AthenaScorePopup_C.ExecuteUbergraph_AthenaScorePopup
struct UAthenaScorePopup_C_ExecuteUbergraph_AthenaScorePopup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
