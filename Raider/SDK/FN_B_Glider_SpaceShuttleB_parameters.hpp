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

// Function B_Glider_SpaceShuttleB.B_Glider_SpaceShuttleB_C.UserConstructionScript
struct AB_Glider_SpaceShuttleB_C_UserConstructionScript_Params
{
};

// Function B_Glider_SpaceShuttleB.B_Glider_SpaceShuttleB_C.OnParachuteTrailUpdated
struct AB_Glider_SpaceShuttleB_C_OnParachuteTrailUpdated_Params
{
	float*                                             MovementLengthSquared;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForwardDot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RightDot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RotationalMovementAcceleration;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Glider_SpaceShuttleB.B_Glider_SpaceShuttleB_C.ReceiveEndPlay
struct AB_Glider_SpaceShuttleB_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Glider_SpaceShuttleB.B_Glider_SpaceShuttleB_C.ExecuteUbergraph_B_Glider_SpaceShuttleB
struct AB_Glider_SpaceShuttleB_C_ExecuteUbergraph_B_Glider_SpaceShuttleB_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
