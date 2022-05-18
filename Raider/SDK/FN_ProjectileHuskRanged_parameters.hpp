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

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.UserConstructionScript
struct AProjectileHuskRanged_C_UserConstructionScript_Params
{
};

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveHit
struct AProjectileHuskRanged_C_ReceiveHit_Params
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

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveBeginPlay
struct AProjectileHuskRanged_C_ReceiveBeginPlay_Params
{
};

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ProjectileCheck
struct AProjectileHuskRanged_C_ProjectileCheck_Params
{
};

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.StopHoming
struct AProjectileHuskRanged_C_StopHoming_Params
{
};

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnExploded
struct AProjectileHuskRanged_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnStoppedOnServer
struct AProjectileHuskRanged_C_OnStoppedOnServer_Params
{
};

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ExecuteUbergraph_ProjectileHuskRanged
struct AProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
