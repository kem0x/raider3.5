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

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.EnableHotspots
struct UGAB_SmasherCharge_C_EnableHotspots_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.DamageThisActor
struct UGAB_SmasherCharge_C_DamageThisActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.Slow Speed Faceplant Check
struct UGAB_SmasherCharge_C_Slow_Speed_Faceplant_Check_Params
{
	bool                                               Standing_On_Bumped_Actor_We_Previously_Ignored;           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.UpdateChargingSpeedReached
struct UGAB_SmasherCharge_C_UpdateChargingSpeedReached_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.InitializeAbility
struct UGAB_SmasherCharge_C_InitializeAbility_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.Completed_0B8569504C1E876E723C499B4462A584
struct UGAB_SmasherCharge_C_Completed_0B8569504C1E876E723C499B4462A584_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.Cancelled_0B8569504C1E876E723C499B4462A584
struct UGAB_SmasherCharge_C_Cancelled_0B8569504C1E876E723C499B4462A584_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.Triggered_0B8569504C1E876E723C499B4462A584
struct UGAB_SmasherCharge_C_Triggered_0B8569504C1E876E723C499B4462A584_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.OnMoveFinished_2B1380284EE36AB4C4A04DBDFF3C24C9
struct UGAB_SmasherCharge_C_OnMoveFinished_2B1380284EE36AB4C4A04DBDFF3C24C9_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.OnRequestFailed_2B1380284EE36AB4C4A04DBDFF3C24C9
struct UGAB_SmasherCharge_C_OnRequestFailed_2B1380284EE36AB4C4A04DBDFF3C24C9_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.OnCancelled_2B1380284EE36AB4C4A04DBDFF3C24C9
struct UGAB_SmasherCharge_C_OnCancelled_2B1380284EE36AB4C4A04DBDFF3C24C9_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.OnInterrupted_2B1380284EE36AB4C4A04DBDFF3C24C9
struct UGAB_SmasherCharge_C_OnInterrupted_2B1380284EE36AB4C4A04DBDFF3C24C9_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.OnComplete_2B1380284EE36AB4C4A04DBDFF3C24C9
struct UGAB_SmasherCharge_C_OnComplete_2B1380284EE36AB4C4A04DBDFF3C24C9_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.OnMoveFinished_1048ADC34DB8C17033C4B9A1C116D220
struct UGAB_SmasherCharge_C_OnMoveFinished_1048ADC34DB8C17033C4B9A1C116D220_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.OnRequestFailed_1048ADC34DB8C17033C4B9A1C116D220
struct UGAB_SmasherCharge_C_OnRequestFailed_1048ADC34DB8C17033C4B9A1C116D220_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.OnCancelled_1048ADC34DB8C17033C4B9A1C116D220
struct UGAB_SmasherCharge_C_OnCancelled_1048ADC34DB8C17033C4B9A1C116D220_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.OnInterrupted_1048ADC34DB8C17033C4B9A1C116D220
struct UGAB_SmasherCharge_C_OnInterrupted_1048ADC34DB8C17033C4B9A1C116D220_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.OnComplete_1048ADC34DB8C17033C4B9A1C116D220
struct UGAB_SmasherCharge_C_OnComplete_1048ADC34DB8C17033C4B9A1C116D220_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.Cancelled_9066C547446CB68FD5A3D5BB83B00491
struct UGAB_SmasherCharge_C_Cancelled_9066C547446CB68FD5A3D5BB83B00491_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.Targeted_9066C547446CB68FD5A3D5BB83B00491
struct UGAB_SmasherCharge_C_Targeted_9066C547446CB68FD5A3D5BB83B00491_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.Cancelled_26E7DFC34C3008718C4C46A45D67C637
struct UGAB_SmasherCharge_C_Cancelled_26E7DFC34C3008718C4C46A45D67C637_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.Targeted_26E7DFC34C3008718C4C46A45D67C637
struct UGAB_SmasherCharge_C_Targeted_26E7DFC34C3008718C4C46A45D67C637_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.Completed_C216669A4D935722E29A339C9C0ADB50
struct UGAB_SmasherCharge_C_Completed_C216669A4D935722E29A339C9C0ADB50_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.Cancelled_C216669A4D935722E29A339C9C0ADB50
struct UGAB_SmasherCharge_C_Cancelled_C216669A4D935722E29A339C9C0ADB50_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.Triggered_C216669A4D935722E29A339C9C0ADB50
struct UGAB_SmasherCharge_C_Triggered_C216669A4D935722E29A339C9C0ADB50_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.EventReceived_51CE074748CA749955FE2CA61620188A
struct UGAB_SmasherCharge_C_EventReceived_51CE074748CA749955FE2CA61620188A_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.MoveToLoop
struct UGAB_SmasherCharge_C_MoveToLoop_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.K2_ActivateAbility
struct UGAB_SmasherCharge_C_K2_ActivateAbility_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.SmasherBumpsSomething
struct UGAB_SmasherCharge_C_SmasherBumpsSomething_Params
{
	class AActor*                                      SelfActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.K2_OnEndAbility
struct UGAB_SmasherCharge_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.ChargeTimeOut
struct UGAB_SmasherCharge_C_ChargeTimeOut_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.AttemptEndAbility
struct UGAB_SmasherCharge_C_AttemptEndAbility_Params
{
	struct FString                                     From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.StopLoopingOverList
struct UGAB_SmasherCharge_C_StopLoopingOverList_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.EnableCrushBox
struct UGAB_SmasherCharge_C_EnableCrushBox_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.DisableCrushBox
struct UGAB_SmasherCharge_C_DisableCrushBox_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.CrushBoxOverlap
struct UGAB_SmasherCharge_C_CrushBoxOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.EnableSmasherBump
struct UGAB_SmasherCharge_C_EnableSmasherBump_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.DisableSmasherBump
struct UGAB_SmasherCharge_C_DisableSmasherBump_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.MeleeSwingComplete
struct UGAB_SmasherCharge_C_MeleeSwingComplete_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.MeleeSwingBoxOverlap
struct UGAB_SmasherCharge_C_MeleeSwingBoxOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.AttemptToFindActorsToMeleeSwingAt
struct UGAB_SmasherCharge_C_AttemptToFindActorsToMeleeSwingAt_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.AttemptChargeDamage
struct UGAB_SmasherCharge_C_AttemptChargeDamage_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.Faceplant
struct UGAB_SmasherCharge_C_Faceplant_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.FaceplantCheck
struct UGAB_SmasherCharge_C_FaceplantCheck_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.ChargeSpeedCheck
struct UGAB_SmasherCharge_C_ChargeSpeedCheck_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.CheckForActorsThatShouldBeDamagedWhenChargeBegins
struct UGAB_SmasherCharge_C_CheckForActorsThatShouldBeDamagedWhenChargeBegins_Params
{
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.Attempt to Melee Swing And Deal Charge Damage
struct UGAB_SmasherCharge_C_Attempt_to_Melee_Swing_And_Deal_Charge_Damage_Params
{
	struct FString                                     CallerDebugString;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GAB_SmasherCharge.GAB_SmasherCharge_C.ExecuteUbergraph_GAB_SmasherCharge
struct UGAB_SmasherCharge_C_ExecuteUbergraph_GAB_SmasherCharge_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
