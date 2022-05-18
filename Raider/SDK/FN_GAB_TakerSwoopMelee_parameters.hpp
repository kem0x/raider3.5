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

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_CanActivateAbility
struct UGAB_TakerSwoopMelee_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnMoveFinished_A8D9EDC44514CE30149C4C924AB5FB2A
struct UGAB_TakerSwoopMelee_C_OnMoveFinished_A8D9EDC44514CE30149C4C924AB5FB2A_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnRequestFailed_A8D9EDC44514CE30149C4C924AB5FB2A
struct UGAB_TakerSwoopMelee_C_OnRequestFailed_A8D9EDC44514CE30149C4C924AB5FB2A_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCancelled_A8D9EDC44514CE30149C4C924AB5FB2A
struct UGAB_TakerSwoopMelee_C_OnCancelled_A8D9EDC44514CE30149C4C924AB5FB2A_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnInterrupted_A8D9EDC44514CE30149C4C924AB5FB2A
struct UGAB_TakerSwoopMelee_C_OnInterrupted_A8D9EDC44514CE30149C4C924AB5FB2A_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnComplete_A8D9EDC44514CE30149C4C924AB5FB2A
struct UGAB_TakerSwoopMelee_C_OnComplete_A8D9EDC44514CE30149C4C924AB5FB2A_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Completed_90CCC07C4CF88E3BB6C7268A426DBA5F
struct UGAB_TakerSwoopMelee_C_Completed_90CCC07C4CF88E3BB6C7268A426DBA5F_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Cancelled_90CCC07C4CF88E3BB6C7268A426DBA5F
struct UGAB_TakerSwoopMelee_C_Cancelled_90CCC07C4CF88E3BB6C7268A426DBA5F_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Triggered_90CCC07C4CF88E3BB6C7268A426DBA5F
struct UGAB_TakerSwoopMelee_C_Triggered_90CCC07C4CF88E3BB6C7268A426DBA5F_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Cancelled_DE47BE5C495BECAF17E854B5C7774E8D
struct UGAB_TakerSwoopMelee_C_Cancelled_DE47BE5C495BECAF17E854B5C7774E8D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Targeted_DE47BE5C495BECAF17E854B5C7774E8D
struct UGAB_TakerSwoopMelee_C_Targeted_DE47BE5C495BECAF17E854B5C7774E8D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCancelled_A05A301D40A4F2A62FAD9A94D3EB7A15
struct UGAB_TakerSwoopMelee_C_OnCancelled_A05A301D40A4F2A62FAD9A94D3EB7A15_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnInterrupted_A05A301D40A4F2A62FAD9A94D3EB7A15
struct UGAB_TakerSwoopMelee_C_OnInterrupted_A05A301D40A4F2A62FAD9A94D3EB7A15_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnBlendOut_A05A301D40A4F2A62FAD9A94D3EB7A15
struct UGAB_TakerSwoopMelee_C_OnBlendOut_A05A301D40A4F2A62FAD9A94D3EB7A15_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCompleted_A05A301D40A4F2A62FAD9A94D3EB7A15
struct UGAB_TakerSwoopMelee_C_OnCompleted_A05A301D40A4F2A62FAD9A94D3EB7A15_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_ActivateAbility
struct UGAB_TakerSwoopMelee_C_K2_ActivateAbility_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Taker Overlapped An Actor
struct UGAB_TakerSwoopMelee_C_Taker_Overlapped_An_Actor_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.BeginOutroDeceleration
struct UGAB_TakerSwoopMelee_C_BeginOutroDeceleration_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.SwoopTimeoutComplete
struct UGAB_TakerSwoopMelee_C_SwoopTimeoutComplete_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_OnEndAbility
struct UGAB_TakerSwoopMelee_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.SlowSpeedCancel
struct UGAB_TakerSwoopMelee_C_SlowSpeedCancel_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.ExecuteUbergraph_GAB_TakerSwoopMelee
struct UGAB_TakerSwoopMelee_C_ExecuteUbergraph_GAB_TakerSwoopMelee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
