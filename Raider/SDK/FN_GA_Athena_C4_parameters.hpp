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

// Function GA_Athena_C4.GA_Athena_C4_C.SetupDummyProjectile
struct UGA_Athena_C4_C_SetupDummyProjectile_Params
{
};

// Function GA_Athena_C4.GA_Athena_C4_C.CalcGrenadeSpeedFromPitch
struct UGA_Athena_C4_C_CalcGrenadeSpeedFromPitch_Params
{
	float                                              AimPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeSpeed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_C4.GA_Athena_C4_C.UpdateTrajectorySpline
struct UGA_Athena_C4_C_UpdateTrajectorySpline_Params
{
};

// Function GA_Athena_C4.GA_Athena_C4_C.SpawnLocationAndRotation
struct UGA_Athena_C4_C_SpawnLocationAndRotation_Params
{
	struct FVector                                     OutLoc;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRot;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function GA_Athena_C4.GA_Athena_C4_C.Completed_C84858EE4C8DF3AD547017AE92DD2D25
struct UGA_Athena_C4_C_Completed_C84858EE4C8DF3AD547017AE92DD2D25_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_C4.GA_Athena_C4_C.Cancelled_C84858EE4C8DF3AD547017AE92DD2D25
struct UGA_Athena_C4_C_Cancelled_C84858EE4C8DF3AD547017AE92DD2D25_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_C4.GA_Athena_C4_C.Triggered_C84858EE4C8DF3AD547017AE92DD2D25
struct UGA_Athena_C4_C_Triggered_C84858EE4C8DF3AD547017AE92DD2D25_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_C4.GA_Athena_C4_C.OnFinish_A4C94A3649D1AB25587D6FB932B0FB1A
struct UGA_Athena_C4_C_OnFinish_A4C94A3649D1AB25587D6FB932B0FB1A_Params
{
};

// Function GA_Athena_C4.GA_Athena_C4_C.OnFinish_F3EE7C7A41D0D02E5385ED9F13BBC693
struct UGA_Athena_C4_C_OnFinish_F3EE7C7A41D0D02E5385ED9F13BBC693_Params
{
};

// Function GA_Athena_C4.GA_Athena_C4_C.OnFinish_01A70CBD4A577C13B81445B3B305B7EF
struct UGA_Athena_C4_C_OnFinish_01A70CBD4A577C13B81445B3B305B7EF_Params
{
};

// Function GA_Athena_C4.GA_Athena_C4_C.OnFinish_D5C0750D468D5EC1DF1F15815C808778
struct UGA_Athena_C4_C_OnFinish_D5C0750D468D5EC1DF1F15815C808778_Params
{
};

// Function GA_Athena_C4.GA_Athena_C4_C.K2_ActivateAbility
struct UGA_Athena_C4_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_C4.GA_Athena_C4_C.Server_SpawnProjectile
struct UGA_Athena_C4_C_Server_SpawnProjectile_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function GA_Athena_C4.GA_Athena_C4_C.K2_OnEndAbility
struct UGA_Athena_C4_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_C4.GA_Athena_C4_C.CleanupTrajectoryDisplay
struct UGA_Athena_C4_C_CleanupTrajectoryDisplay_Params
{
};

// Function GA_Athena_C4.GA_Athena_C4_C.TossGrenade
struct UGA_Athena_C4_C_TossGrenade_Params
{
};

// Function GA_Athena_C4.GA_Athena_C4_C.OnAbilityInputReleased
struct UGA_Athena_C4_C_OnAbilityInputReleased_Params
{
};

// Function GA_Athena_C4.GA_Athena_C4_C.ExecuteUbergraph_GA_Athena_C4
struct UGA_Athena_C4_C_ExecuteUbergraph_GA_Athena_C4_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
