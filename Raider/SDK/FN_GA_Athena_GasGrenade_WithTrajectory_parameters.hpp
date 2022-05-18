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

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch
struct UGA_Athena_GasGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch_Params
{
	float                                              AimPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeSpeed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.UpdateTrajectorySpline
struct UGA_Athena_GasGrenade_WithTrajectory_C_UpdateTrajectorySpline_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SetupDummyProjectile
struct UGA_Athena_GasGrenade_WithTrajectory_C_SetupDummyProjectile_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SpawnLocationAndRotation
struct UGA_Athena_GasGrenade_WithTrajectory_C_SpawnLocationAndRotation_Params
{
	struct FVector                                     OutLoc;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRot;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SetupGrenade
struct UGA_Athena_GasGrenade_WithTrajectory_C_SetupGrenade_Params
{
	float                                              AimPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Base_Grenade;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Projectile_Speed;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            Explosion_Gameplay_Spec;                                  // (Parm, OutParm)
	float                                              Projectile_Gravity_Scale;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Destroyed_0ABD0A2949396977EDE0E0A3A923210A
struct UGA_Athena_GasGrenade_WithTrajectory_C_Destroyed_0ABD0A2949396977EDE0E0A3A923210A_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Exploded_0ABD0A2949396977EDE0E0A3A923210A
struct UGA_Athena_GasGrenade_WithTrajectory_C_Exploded_0ABD0A2949396977EDE0E0A3A923210A_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Stopped_0ABD0A2949396977EDE0E0A3A923210A
struct UGA_Athena_GasGrenade_WithTrajectory_C_Stopped_0ABD0A2949396977EDE0E0A3A923210A_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Bounced_0ABD0A2949396977EDE0E0A3A923210A
struct UGA_Athena_GasGrenade_WithTrajectory_C_Bounced_0ABD0A2949396977EDE0E0A3A923210A_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Touched_0ABD0A2949396977EDE0E0A3A923210A
struct UGA_Athena_GasGrenade_WithTrajectory_C_Touched_0ABD0A2949396977EDE0E0A3A923210A_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Created_0ABD0A2949396977EDE0E0A3A923210A
struct UGA_Athena_GasGrenade_WithTrajectory_C_Created_0ABD0A2949396977EDE0E0A3A923210A_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Completed_2A6F61E14EAA329CE4DDE59F6D3984BB
struct UGA_Athena_GasGrenade_WithTrajectory_C_Completed_2A6F61E14EAA329CE4DDE59F6D3984BB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Cancelled_2A6F61E14EAA329CE4DDE59F6D3984BB
struct UGA_Athena_GasGrenade_WithTrajectory_C_Cancelled_2A6F61E14EAA329CE4DDE59F6D3984BB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Triggered_2A6F61E14EAA329CE4DDE59F6D3984BB
struct UGA_Athena_GasGrenade_WithTrajectory_C_Triggered_2A6F61E14EAA329CE4DDE59F6D3984BB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_B638634A4C406D60FB73F0A0F89C4172
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_B638634A4C406D60FB73F0A0F89C4172_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_C93035F048A7F05615196098CE2551EB
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_C93035F048A7F05615196098CE2551EB_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnCancelled_BC60A2D44E56ED883DEE30B8A0207898
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnCancelled_BC60A2D44E56ED883DEE30B8A0207898_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnInterrupted_BC60A2D44E56ED883DEE30B8A0207898
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnInterrupted_BC60A2D44E56ED883DEE30B8A0207898_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnBlendOut_BC60A2D44E56ED883DEE30B8A0207898
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnBlendOut_BC60A2D44E56ED883DEE30B8A0207898_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnCompleted_BC60A2D44E56ED883DEE30B8A0207898
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnCompleted_BC60A2D44E56ED883DEE30B8A0207898_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_F1120C8E4A077A38FB26EF90055BE75E
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_F1120C8E4A077A38FB26EF90055BE75E_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_EB9D493748A5D5BAD2487FB3E67C618F
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_EB9D493748A5D5BAD2487FB3E67C618F_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.K2_ActivateAbility
struct UGA_Athena_GasGrenade_WithTrajectory_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Server_SpawnProjectile
struct UGA_Athena_GasGrenade_WithTrajectory_C_Server_SpawnProjectile_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnAbilityInputReleased
struct UGA_Athena_GasGrenade_WithTrajectory_C_OnAbilityInputReleased_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.K2_OnEndAbility
struct UGA_Athena_GasGrenade_WithTrajectory_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.CleanupTrajectoryDisplay
struct UGA_Athena_GasGrenade_WithTrajectory_C_CleanupTrajectoryDisplay_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.TossGrenade
struct UGA_Athena_GasGrenade_WithTrajectory_C_TossGrenade_Params
{
};

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.ExecuteUbergraph_GA_Athena_GasGrenade_WithTrajectory
struct UGA_Athena_GasGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Athena_GasGrenade_WithTrajectory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
