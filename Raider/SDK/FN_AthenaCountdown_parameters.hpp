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

// Function AthenaCountdown.AthenaCountdown_C.Construct
struct UAthenaCountdown_C_Construct_Params
{
};

// Function AthenaCountdown.AthenaCountdown_C.OnCountdownUpdate
struct UAthenaCountdown_C_OnCountdownUpdate_Params
{
	int*                                               TimeRemaining;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      CountdownUpdateText;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaCountdown.AthenaCountdown_C.OnCountdownFinished
struct UAthenaCountdown_C_OnCountdownFinished_Params
{
};

// Function AthenaCountdown.AthenaCountdown_C.Tick
struct UAthenaCountdown_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCountdown.AthenaCountdown_C.Set Countdown Loop Audio Enabled
struct UAthenaCountdown_C_Set_Countdown_Loop_Audio_Enabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaCountdown.AthenaCountdown_C.InitializeCountdown
struct UAthenaCountdown_C_InitializeCountdown_Params
{
	int                                                TimeRemaining;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaCountdown.AthenaCountdown_C.OnDisplayWarningMessage
struct UAthenaCountdown_C_OnDisplayWarningMessage_Params
{
	struct FText*                                      FirstLineText;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      SecondLineText;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaCountdown.AthenaCountdown_C.ExecuteUbergraph_AthenaCountdown
struct UAthenaCountdown_C_ExecuteUbergraph_AthenaCountdown_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
