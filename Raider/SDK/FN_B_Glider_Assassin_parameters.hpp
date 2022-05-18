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

// Function B_Glider_Assassin.B_Glider_Assassin_C.UserConstructionScript
struct AB_Glider_Assassin_C_UserConstructionScript_Params
{
};

// Function B_Glider_Assassin.B_Glider_Assassin_C.TailLightSequence__FinishedFunc
struct AB_Glider_Assassin_C_TailLightSequence__FinishedFunc_Params
{
};

// Function B_Glider_Assassin.B_Glider_Assassin_C.TailLightSequence__UpdateFunc
struct AB_Glider_Assassin_C_TailLightSequence__UpdateFunc_Params
{
};

// Function B_Glider_Assassin.B_Glider_Assassin_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0_1
struct AB_Glider_Assassin_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Glider_Assassin.B_Glider_Assassin_C.ReceiveBeginPlay
struct AB_Glider_Assassin_C_ReceiveBeginPlay_Params
{
};

// Function B_Glider_Assassin.B_Glider_Assassin_C.OnParachuteTrailUpdated
struct AB_Glider_Assassin_C_OnParachuteTrailUpdated_Params
{
	float*                                             MovementLengthSquared;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForwardDot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RightDot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RotationalMovementAcceleration;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Glider_Assassin.B_Glider_Assassin_C.ExecuteUbergraph_B_Glider_Assassin
struct AB_Glider_Assassin_C_ExecuteUbergraph_B_Glider_Assassin_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
