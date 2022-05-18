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

// Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.UserConstructionScript
struct AB_Glider_Rusty_Raider_C_UserConstructionScript_Params
{
};

// Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.ReceiveBeginPlay
struct AB_Glider_Rusty_Raider_C_ReceiveBeginPlay_Params
{
};

// Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.OnParachuteTrailUpdated
struct AB_Glider_Rusty_Raider_C_OnParachuteTrailUpdated_Params
{
	float*                                             MovementLengthSquared;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForwardDot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RightDot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RotationalMovementAcceleration;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.ExecuteUbergraph_B_Glider_Rusty_Raider
struct AB_Glider_Rusty_Raider_C_ExecuteUbergraph_B_Glider_Rusty_Raider_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
