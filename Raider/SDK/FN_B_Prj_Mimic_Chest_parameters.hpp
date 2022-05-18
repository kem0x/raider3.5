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

// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.SpawnBottleRocket
struct AB_Prj_Mimic_Chest_C_SpawnBottleRocket_Params
{
	struct FFortGameplayEffectContainerSpec            EffectContainerSpec;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.OnRep_MuzzleFlashCounter
struct AB_Prj_Mimic_Chest_C_OnRep_MuzzleFlashCounter_Params
{
};

// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.TriggerMuzzleFlashFX
struct AB_Prj_Mimic_Chest_C_TriggerMuzzleFlashFX_Params
{
};

// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.UserConstructionScript
struct AB_Prj_Mimic_Chest_C_UserConstructionScript_Params
{
};

// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.FlashShield
struct AB_Prj_Mimic_Chest_C_FlashShield_Params
{
};

// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.OnStop
struct AB_Prj_Mimic_Chest_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ReceiveAnyDamage
struct AB_Prj_Mimic_Chest_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ReceiveBeginPlay
struct AB_Prj_Mimic_Chest_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ReceiveEndPlay
struct AB_Prj_Mimic_Chest_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ReceiveHit
struct AB_Prj_Mimic_Chest_C_ReceiveHit_Params
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

// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ExecuteUbergraph_B_Prj_Mimic_Chest
struct AB_Prj_Mimic_Chest_C_ExecuteUbergraph_B_Prj_Mimic_Chest_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
