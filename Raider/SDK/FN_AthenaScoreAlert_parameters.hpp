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

// Function AthenaScoreAlert.AthenaScoreAlert_C.PlaySoundFromType
struct UAthenaScoreAlert_C_PlaySoundFromType_Params
{
	EAthenaWinConditionMsgType                         Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaScoreAlert.AthenaScoreAlert_C.OnWinConditionMsgEvent
struct UAthenaScoreAlert_C_OnWinConditionMsgEvent_Params
{
	struct FText*                                      MESSAGE;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EAthenaWinConditionMsgType*                        MsgType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaScoreAlert.AthenaScoreAlert_C.CustomEvent
struct UAthenaScoreAlert_C_CustomEvent_Params
{
};

// Function AthenaScoreAlert.AthenaScoreAlert_C.PreConstruct
struct UAthenaScoreAlert_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaScoreAlert.AthenaScoreAlert_C.Construct
struct UAthenaScoreAlert_C_Construct_Params
{
};

// Function AthenaScoreAlert.AthenaScoreAlert_C.ExecuteUbergraph_AthenaScoreAlert
struct UAthenaScoreAlert_C_ExecuteUbergraph_AthenaScoreAlert_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
