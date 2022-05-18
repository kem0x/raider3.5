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

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_CanActivateAbility
struct UGAB_FlingerThrowHusk_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Completed_B56594C44CE933A96A3E13BDCFC1097D
struct UGAB_FlingerThrowHusk_C_Completed_B56594C44CE933A96A3E13BDCFC1097D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Cancelled_B56594C44CE933A96A3E13BDCFC1097D
struct UGAB_FlingerThrowHusk_C_Cancelled_B56594C44CE933A96A3E13BDCFC1097D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Triggered_B56594C44CE933A96A3E13BDCFC1097D
struct UGAB_FlingerThrowHusk_C_Triggered_B56594C44CE933A96A3E13BDCFC1097D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_OnEndAbility
struct UGAB_FlingerThrowHusk_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_ActivateAbility
struct UGAB_FlingerThrowHusk_C_K2_ActivateAbility_Params
{
};

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.CommitAndEndAbility
struct UGAB_FlingerThrowHusk_C_CommitAndEndAbility_Params
{
};

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.SpawnFX
struct UGAB_FlingerThrowHusk_C_SpawnFX_Params
{
};

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.StopFX
struct UGAB_FlingerThrowHusk_C_StopFX_Params
{
};

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.OnEndPlay
struct UGAB_FlingerThrowHusk_C_OnEndPlay_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.BindOnEndPlay
struct UGAB_FlingerThrowHusk_C_BindOnEndPlay_Params
{
	class AHuskPawn_C*                                 Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.UnbindOnEndPlay
struct UGAB_FlingerThrowHusk_C_UnbindOnEndPlay_Params
{
	class AHuskPawn_C*                                 Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.ExecuteUbergraph_GAB_FlingerThrowHusk
struct UGAB_FlingerThrowHusk_C_ExecuteUbergraph_GAB_FlingerThrowHusk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
