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

// Function B_Glider_SpaceShuttleA.B_Glider_SpaceShuttleA_C.UserConstructionScript
struct AB_Glider_SpaceShuttleA_C_UserConstructionScript_Params
{
};

// Function B_Glider_SpaceShuttleA.B_Glider_SpaceShuttleA_C.ReceiveBeginPlay
struct AB_Glider_SpaceShuttleA_C_ReceiveBeginPlay_Params
{
};

// Function B_Glider_SpaceShuttleA.B_Glider_SpaceShuttleA_C.OnParachuteTrailUpdated
struct AB_Glider_SpaceShuttleA_C_OnParachuteTrailUpdated_Params
{
	float*                                             MovementLengthSquared;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForwardDot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RightDot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RotationalMovementAcceleration;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Glider_SpaceShuttleA.B_Glider_SpaceShuttleA_C.ReceiveEndPlay
struct AB_Glider_SpaceShuttleA_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Glider_SpaceShuttleA.B_Glider_SpaceShuttleA_C.ExecuteUbergraph_B_Glider_SpaceShuttleA
struct AB_Glider_SpaceShuttleA_C_ExecuteUbergraph_B_Glider_SpaceShuttleA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
