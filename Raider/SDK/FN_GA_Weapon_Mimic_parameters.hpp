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

// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.SetupBottleRocket
struct UGA_Weapon_Mimic_C_SetupBottleRocket_Params
{
	struct FVector                                     Spawn_Location;                                           // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Spawn_Rotation;                                           // (Parm, OutParm, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            Holder_Explosion;                                         // (Parm, OutParm)
	struct FFortGameplayEffectContainerSpec            BottleRocket_Explosion;                                   // (Parm, OutParm)
};

// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Destroyed_B3D1CBD84767EEBE300B609957138606
struct UGA_Weapon_Mimic_C_Destroyed_B3D1CBD84767EEBE300B609957138606_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Exploded_B3D1CBD84767EEBE300B609957138606
struct UGA_Weapon_Mimic_C_Exploded_B3D1CBD84767EEBE300B609957138606_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Stopped_B3D1CBD84767EEBE300B609957138606
struct UGA_Weapon_Mimic_C_Stopped_B3D1CBD84767EEBE300B609957138606_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Bounced_B3D1CBD84767EEBE300B609957138606
struct UGA_Weapon_Mimic_C_Bounced_B3D1CBD84767EEBE300B609957138606_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Touched_B3D1CBD84767EEBE300B609957138606
struct UGA_Weapon_Mimic_C_Touched_B3D1CBD84767EEBE300B609957138606_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Created_B3D1CBD84767EEBE300B609957138606
struct UGA_Weapon_Mimic_C_Created_B3D1CBD84767EEBE300B609957138606_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Completed_43984B0A46B0D598E56025AEA6D640D0
struct UGA_Weapon_Mimic_C_Completed_43984B0A46B0D598E56025AEA6D640D0_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Cancelled_43984B0A46B0D598E56025AEA6D640D0
struct UGA_Weapon_Mimic_C_Cancelled_43984B0A46B0D598E56025AEA6D640D0_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Triggered_43984B0A46B0D598E56025AEA6D640D0
struct UGA_Weapon_Mimic_C_Triggered_43984B0A46B0D598E56025AEA6D640D0_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.K2_ActivateAbility
struct UGA_Weapon_Mimic_C_K2_ActivateAbility_Params
{
};

// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.ExecuteUbergraph_GA_Weapon_Mimic
struct UGA_Weapon_Mimic_C_ExecuteUbergraph_GA_Weapon_Mimic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
