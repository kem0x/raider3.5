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

// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.OnFocusReceived
struct UAthena_Matchmaking_SpecialEventButton_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.SetupLTM
struct UAthena_Matchmaking_SpecialEventButton_C_SetupLTM_Params
{
};

// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.SetLTMSplashArt
struct UAthena_Matchmaking_SpecialEventButton_C_SetLTMSplashArt_Params
{
};

// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.FirstTime_NewBang
struct UAthena_Matchmaking_SpecialEventButton_C_FirstTime_NewBang_Params
{
};

// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.PlayFirstTimeBang
struct UAthena_Matchmaking_SpecialEventButton_C_PlayFirstTimeBang_Params
{
};

// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.Construct
struct UAthena_Matchmaking_SpecialEventButton_C_Construct_Params
{
};

// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.PreConstruct
struct UAthena_Matchmaking_SpecialEventButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton
struct UAthena_Matchmaking_SpecialEventButton_C_ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
