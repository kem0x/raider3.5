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

// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.UserConstructionScript
struct ABGA_SuperShielder_Shield_C_UserConstructionScript_Params
{
};

// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.Opacity Control__FinishedFunc
struct ABGA_SuperShielder_Shield_C_Opacity_Control__FinishedFunc_Params
{
};

// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.Opacity Control__UpdateFunc
struct ABGA_SuperShielder_Shield_C_Opacity_Control__UpdateFunc_Params
{
};

// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.OnDamagePlayEffects
struct ABGA_SuperShielder_Shield_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.OnDamageServer
struct ABGA_SuperShielder_Shield_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.OnDeathServer
struct ABGA_SuperShielder_Shield_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.ReceiveBeginPlay
struct ABGA_SuperShielder_Shield_C_ReceiveBeginPlay_Params
{
};

// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.SuperShielderDied
struct ABGA_SuperShielder_Shield_C_SuperShielderDied_Params
{
};

// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.FadeIn
struct ABGA_SuperShielder_Shield_C_FadeIn_Params
{
};

// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.FadeOut
struct ABGA_SuperShielder_Shield_C_FadeOut_Params
{
};

// Function BGA_SuperShielder_Shield.BGA_SuperShielder_Shield_C.ExecuteUbergraph_BGA_SuperShielder_Shield
struct ABGA_SuperShielder_Shield_C_ExecuteUbergraph_BGA_SuperShielder_Shield_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
