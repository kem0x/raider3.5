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

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SpawnFragGrenade
struct UGA_Commando_FragGrenade_WithTrajectory_C_SpawnFragGrenade_Params
{
	class UClass*                                      ProjectileClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            EffectContainerSpecToApplyOnExplode;                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              InitialSpeed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch
struct UGA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch_Params
{
	float                                              AimPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeSpeed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.UpdateTrajectorySpline
struct UGA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline_Params
{
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupDummyProjectile
struct UGA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile_Params
{
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SpawnLocationAndRotation
struct UGA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation_Params
{
	struct FVector                                     OutLoc;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRot;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupAbility
struct UGA_Commando_FragGrenade_WithTrajectory_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponentRef;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupGrenade
struct UGA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade_Params
{
	float                                              AimPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Base_Grenade;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Projectile_Speed;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            Explosion_Gameplay_Spec;                                  // (Parm, OutParm)
	float                                              Projectile_Gravity_Scale;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Completed_C3E84D8940567A046A8F48A21D386165
struct UGA_Commando_FragGrenade_WithTrajectory_C_Completed_C3E84D8940567A046A8F48A21D386165_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Cancelled_C3E84D8940567A046A8F48A21D386165
struct UGA_Commando_FragGrenade_WithTrajectory_C_Cancelled_C3E84D8940567A046A8F48A21D386165_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Triggered_C3E84D8940567A046A8F48A21D386165
struct UGA_Commando_FragGrenade_WithTrajectory_C_Triggered_C3E84D8940567A046A8F48A21D386165_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_F5D87C9E46378707AE4C79B3A42F5A45
struct UGA_Commando_FragGrenade_WithTrajectory_C_OnFinish_F5D87C9E46378707AE4C79B3A42F5A45_Params
{
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCancelled_854170AF4268B06A435A3AA33232C5BF
struct UGA_Commando_FragGrenade_WithTrajectory_C_OnCancelled_854170AF4268B06A435A3AA33232C5BF_Params
{
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnInterrupted_854170AF4268B06A435A3AA33232C5BF
struct UGA_Commando_FragGrenade_WithTrajectory_C_OnInterrupted_854170AF4268B06A435A3AA33232C5BF_Params
{
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnBlendOut_854170AF4268B06A435A3AA33232C5BF
struct UGA_Commando_FragGrenade_WithTrajectory_C_OnBlendOut_854170AF4268B06A435A3AA33232C5BF_Params
{
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCompleted_854170AF4268B06A435A3AA33232C5BF
struct UGA_Commando_FragGrenade_WithTrajectory_C_OnCompleted_854170AF4268B06A435A3AA33232C5BF_Params
{
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB
struct UGA_Commando_FragGrenade_WithTrajectory_C_OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB_Params
{
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Server_SpawnProjectile
struct UGA_Commando_FragGrenade_WithTrajectory_C_Server_SpawnProjectile_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnAbilityInputReleased
struct UGA_Commando_FragGrenade_WithTrajectory_C_OnAbilityInputReleased_Params
{
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_OnEndAbility
struct UGA_Commando_FragGrenade_WithTrajectory_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CleanupTrajectoryDisplay
struct UGA_Commando_FragGrenade_WithTrajectory_C_CleanupTrajectoryDisplay_Params
{
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_ActivateAbility
struct UGA_Commando_FragGrenade_WithTrajectory_C_K2_ActivateAbility_Params
{
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.TossGrenade
struct UGA_Commando_FragGrenade_WithTrajectory_C_TossGrenade_Params
{
};

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory
struct UGA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
