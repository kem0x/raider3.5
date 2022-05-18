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

// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.UserConstructionScript
struct AB_Proj_Athena_Bandage_C_UserConstructionScript_Params
{
};

// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.ReceiveBeginPlay
struct AB_Proj_Athena_Bandage_C_ReceiveBeginPlay_Params
{
};

// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.ReceiveHit
struct AB_Proj_Athena_Bandage_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.OnStop
struct AB_Proj_Athena_Bandage_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.OnBounce
struct AB_Proj_Athena_Bandage_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C.ExecuteUbergraph_B_Proj_Athena_Bandage
struct AB_Proj_Athena_Bandage_C_ExecuteUbergraph_B_Proj_Athena_Bandage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
