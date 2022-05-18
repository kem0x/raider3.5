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

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ImpactOnHit
struct AProjectileHuskLobber_C_ImpactOnHit_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.UserConstructionScript
struct AProjectileHuskLobber_C_UserConstructionScript_Params
{
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ReceiveHit
struct AProjectileHuskLobber_C_ReceiveHit_Params
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

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ProjectileShot_Event
struct AProjectileHuskLobber_C_ProjectileShot_Event_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.OnShot
struct AProjectileHuskLobber_C_OnShot_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ExecuteUbergraph_ProjectileHuskLobber
struct AProjectileHuskLobber_C_ExecuteUbergraph_ProjectileHuskLobber_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ProjectileShot__DelegateSignature
struct AProjectileHuskLobber_C_ProjectileShot__DelegateSignature_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
