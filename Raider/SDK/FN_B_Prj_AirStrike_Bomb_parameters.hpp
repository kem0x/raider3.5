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

// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.StopProjectile
struct AB_Prj_AirStrike_Bomb_C_StopProjectile_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.UserConstructionScript
struct AB_Prj_AirStrike_Bomb_C_UserConstructionScript_Params
{
};

// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.ReceiveBeginPlay
struct AB_Prj_AirStrike_Bomb_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.ReceiveAnyDamage
struct AB_Prj_AirStrike_Bomb_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.ReceiveHit
struct AB_Prj_AirStrike_Bomb_C_ReceiveHit_Params
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

// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.OnExploded
struct AB_Prj_AirStrike_Bomb_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.OnStoppedOnServer
struct AB_Prj_AirStrike_Bomb_C_OnStoppedOnServer_Params
{
};

// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.ExecuteUbergraph_B_Prj_AirStrike_Bomb
struct AB_Prj_AirStrike_Bomb_C_ExecuteUbergraph_B_Prj_AirStrike_Bomb_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
