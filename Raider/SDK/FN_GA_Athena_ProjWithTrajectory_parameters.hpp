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

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.CalcGrenadeSpeedFromPitch
struct UGA_Athena_ProjWithTrajectory_C_CalcGrenadeSpeedFromPitch_Params
{
	float                                              AimPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeSpeed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.UpdateTrajectorySpline
struct UGA_Athena_ProjWithTrajectory_C_UpdateTrajectorySpline_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SetupDummyProjectile
struct UGA_Athena_ProjWithTrajectory_C_SetupDummyProjectile_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SpawnLocationAndRotation
struct UGA_Athena_ProjWithTrajectory_C_SpawnLocationAndRotation_Params
{
	struct FVector                                     OutLoc;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRot;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SetupGrenade
struct UGA_Athena_ProjWithTrajectory_C_SetupGrenade_Params
{
	float                                              AimPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Base_Grenade;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Projectile_Speed;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            Explosion_Gameplay_Spec;                                  // (Parm, OutParm)
	float                                              Projectile_Gravity_Scale;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Destroyed_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
struct UGA_Athena_ProjWithTrajectory_C_Destroyed_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Exploded_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
struct UGA_Athena_ProjWithTrajectory_C_Exploded_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Stopped_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
struct UGA_Athena_ProjWithTrajectory_C_Stopped_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Bounced_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
struct UGA_Athena_ProjWithTrajectory_C_Bounced_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Touched_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
struct UGA_Athena_ProjWithTrajectory_C_Touched_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Created_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
struct UGA_Athena_ProjWithTrajectory_C_Created_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Completed_1EDA62904AD9995FD9ABFE99B3E783C8
struct UGA_Athena_ProjWithTrajectory_C_Completed_1EDA62904AD9995FD9ABFE99B3E783C8_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Cancelled_1EDA62904AD9995FD9ABFE99B3E783C8
struct UGA_Athena_ProjWithTrajectory_C_Cancelled_1EDA62904AD9995FD9ABFE99B3E783C8_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Triggered_1EDA62904AD9995FD9ABFE99B3E783C8
struct UGA_Athena_ProjWithTrajectory_C_Triggered_1EDA62904AD9995FD9ABFE99B3E783C8_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_74A6C2A243F8F5710A8F04AD536F05F9
struct UGA_Athena_ProjWithTrajectory_C_OnFinish_74A6C2A243F8F5710A8F04AD536F05F9_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_096929144FF7E14AFEB2B388A786D6BD
struct UGA_Athena_ProjWithTrajectory_C_OnFinish_096929144FF7E14AFEB2B388A786D6BD_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnCancelled_FEC68BA94D83D96FDD282EB15935D61B
struct UGA_Athena_ProjWithTrajectory_C_OnCancelled_FEC68BA94D83D96FDD282EB15935D61B_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnInterrupted_FEC68BA94D83D96FDD282EB15935D61B
struct UGA_Athena_ProjWithTrajectory_C_OnInterrupted_FEC68BA94D83D96FDD282EB15935D61B_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnBlendOut_FEC68BA94D83D96FDD282EB15935D61B
struct UGA_Athena_ProjWithTrajectory_C_OnBlendOut_FEC68BA94D83D96FDD282EB15935D61B_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnCompleted_FEC68BA94D83D96FDD282EB15935D61B
struct UGA_Athena_ProjWithTrajectory_C_OnCompleted_FEC68BA94D83D96FDD282EB15935D61B_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_D9A850F94B9C369C67CCD89C7B5492BD
struct UGA_Athena_ProjWithTrajectory_C_OnFinish_D9A850F94B9C369C67CCD89C7B5492BD_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_8B217C0E49D2D455A906EA8EEC307D0B
struct UGA_Athena_ProjWithTrajectory_C_OnFinish_8B217C0E49D2D455A906EA8EEC307D0B_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.K2_ActivateAbility
struct UGA_Athena_ProjWithTrajectory_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Server_SpawnProjectile
struct UGA_Athena_ProjWithTrajectory_C_Server_SpawnProjectile_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnAbilityInputReleased
struct UGA_Athena_ProjWithTrajectory_C_OnAbilityInputReleased_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.K2_OnEndAbility
struct UGA_Athena_ProjWithTrajectory_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.CleanupTrajectoryDisplay
struct UGA_Athena_ProjWithTrajectory_C_CleanupTrajectoryDisplay_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.TossGrenade
struct UGA_Athena_ProjWithTrajectory_C_TossGrenade_Params
{
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.AthenaGrenadeSpawned
struct UGA_Athena_ProjWithTrajectory_C_AthenaGrenadeSpawned_Params
{
	class AFortProjectileBase*                         GrenadeReference;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.ExecuteUbergraph_GA_Athena_ProjWithTrajectory
struct UGA_Athena_ProjWithTrajectory_C_ExecuteUbergraph_GA_Athena_ProjWithTrajectory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
