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

// Function Car_Copper.Car_Copper_C.toggle light visibility
struct ACar_Copper_C_toggle_light_visibility_Params
{
	bool                                               bNewVisibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Car_Copper.Car_Copper_C.Randomize the target brightness levels
struct ACar_Copper_C_Randomize_the_target_brightness_levels_Params
{
};

// Function Car_Copper.Car_Copper_C.Set Light Brightness
struct ACar_Copper_C_Set_Light_Brightness_Params
{
	float                                              _0_1_Intensity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Include_Second_Emissive_Channel;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Car_Copper.Car_Copper_C.MaterialEditorSine
struct ACar_Copper_C_MaterialEditorSine_Params
{
	float                                              Look_up_value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Car_Copper.Car_Copper_C.SetCarAlarmEnabledBasedOnLocation
struct ACar_Copper_C_SetCarAlarmEnabledBasedOnLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Car_Copper.Car_Copper_C.setcanmakebouncingnoisetrue
struct ACar_Copper_C_setcanmakebouncingnoisetrue_Params
{
};

// Function Car_Copper.Car_Copper_C.StopCarAlarmFromPlaying
struct ACar_Copper_C_StopCarAlarmFromPlaying_Params
{
};

// Function Car_Copper.Car_Copper_C.UserConstructionScript
struct ACar_Copper_C_UserConstructionScript_Params
{
};

// Function Car_Copper.Car_Copper_C.Timeline_0__FinishedFunc
struct ACar_Copper_C_Timeline_0__FinishedFunc_Params
{
};

// Function Car_Copper.Car_Copper_C.Timeline_0__UpdateFunc
struct ACar_Copper_C_Timeline_0__UpdateFunc_Params
{
};

// Function Car_Copper.Car_Copper_C.BounceCar__FinishedFunc
struct ACar_Copper_C_BounceCar__FinishedFunc_Params
{
};

// Function Car_Copper.Car_Copper_C.BounceCar__UpdateFunc
struct ACar_Copper_C_BounceCar__UpdateFunc_Params
{
};

// Function Car_Copper.Car_Copper_C.Timeline_2__FinishedFunc
struct ACar_Copper_C_Timeline_2__FinishedFunc_Params
{
};

// Function Car_Copper.Car_Copper_C.Timeline_2__UpdateFunc
struct ACar_Copper_C_Timeline_2__UpdateFunc_Params
{
};

// Function Car_Copper.Car_Copper_C.Timeline_2__FireOffNoise__EventFunc
struct ACar_Copper_C_Timeline_2__FireOffNoise__EventFunc_Params
{
};

// Function Car_Copper.Car_Copper_C.ReceiveBeginPlay
struct ACar_Copper_C_ReceiveBeginPlay_Params
{
};

// Function Car_Copper.Car_Copper_C.ReceiveHit
struct ACar_Copper_C_ReceiveHit_Params
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

// Function Car_Copper.Car_Copper_C.StartSirenLight
struct ACar_Copper_C_StartSirenLight_Params
{
};

// Function Car_Copper.Car_Copper_C.FadeSirenLight
struct ACar_Copper_C_FadeSirenLight_Params
{
};

// Function Car_Copper.Car_Copper_C.TriggerLowHealthParticleEffect
struct ACar_Copper_C_TriggerLowHealthParticleEffect_Params
{
};

// Function Car_Copper.Car_Copper_C.OnDeathPlayEffects
struct ACar_Copper_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Car_Copper.Car_Copper_C.OnDamagePlayEffects
struct ACar_Copper_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Car_Copper.Car_Copper_C.ReceiveEndPlay
struct ACar_Copper_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Car_Copper.Car_Copper_C.OnDamageServer
struct ACar_Copper_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Car_Copper.Car_Copper_C.FireOffCarAlarm
struct ACar_Copper_C_FireOffCarAlarm_Params
{
};

// Function Car_Copper.Car_Copper_C.OnBounceAnimationUpdate
struct ACar_Copper_C_OnBounceAnimationUpdate_Params
{
	struct FFortBounceData*                            Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Car_Copper.Car_Copper_C.Hit Bounce Finished
struct ACar_Copper_C_Hit_Bounce_Finished_Params
{
};

// Function Car_Copper.Car_Copper_C.Player jump based bounce 
struct ACar_Copper_C_Player_jump_based_bounce__Params
{
};

// Function Car_Copper.Car_Copper_C.ExecuteUbergraph_Car_Copper
struct ACar_Copper_C_ExecuteUbergraph_Car_Copper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
