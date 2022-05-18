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

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HighOffGround
struct UGA_Constructor_BullRush_C_HighOffGround_Params
{
	struct FVector                                     ImpactPoint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.NotBuilding
struct UGA_Constructor_BullRush_C_NotBuilding_Params
{
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HasShieldCharacterPiece
struct UGA_Constructor_BullRush_C_HasShieldCharacterPiece_Params
{
	bool                                               HasCharm;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.NotADefender
struct UGA_Constructor_BullRush_C_NotADefender_Params
{
	class AFortPawn*                                   InPawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NotADefender;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAppliedDamage
struct UGA_Constructor_BullRush_C_GetAppliedDamage_Params
{
	class UClass*                                      Applied;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAIType
struct UGA_Constructor_BullRush_C_GetAIType_Params
{
	class AFortAIPawn*                                 InPawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIType>                               OutType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyDamageToTarget
struct UGA_Constructor_BullRush_C_ApplyDamageToTarget_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Applied;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceAttachClose
struct UGA_Constructor_BullRush_C_ForceAttachClose_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IsAShielder
struct UGA_Constructor_BullRush_C_IsAShielder_Params
{
	class AFortPawn*                                   Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetCharacterNormalizedVelocity
struct UGA_Constructor_BullRush_C_GetCharacterNormalizedVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HideToggledDecoTools
struct UGA_Constructor_BullRush_C_HideToggledDecoTools_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HandleBigMonsterCollide
struct UGA_Constructor_BullRush_C_HandleBigMonsterCollide_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.LaunchPawn
struct UGA_Constructor_BullRush_C_LaunchPawn_Params
{
	class AFortAIPawn*                                 InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IsBigMonster
struct UGA_Constructor_BullRush_C_IsBigMonster_Params
{
	TScriptInterface<class UGameplayTagAssetInterface> InPawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSmasher;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.DetachPawn
struct UGA_Constructor_BullRush_C_DetachPawn_Params
{
	class AFortAIPawn*                                 InPawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndPushingAll
struct UGA_Constructor_BullRush_C_EndPushingAll_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyPushToPawn
struct UGA_Constructor_BullRush_C_ApplyPushToPawn_Params
{
	class AFortPawn*                                   InPawn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.AbilityRemainingTime
struct UGA_Constructor_BullRush_C_AbilityRemainingTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IgnoreCollisionWith
struct UGA_Constructor_BullRush_C_IgnoreCollisionWith_Params
{
	class ABuildingActor*                              InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldIgnore;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ShouldForceCollision
struct UGA_Constructor_BullRush_C_ShouldForceCollision_Params
{
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAnimationNameForHusk
struct UGA_Constructor_BullRush_C_GetAnimationNameForHusk_Params
{
	struct FName                                       AnimName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IncrementAnimCount
struct UGA_Constructor_BullRush_C_IncrementAnimCount_Params
{
	int                                                Output_Get;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.PrepareAbilityValues
struct UGA_Constructor_BullRush_C_PrepareAbilityValues_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndPushingAllCollideWall
struct UGA_Constructor_BullRush_C_EndPushingAllCollideWall_Params
{
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.RunChinaShop
struct UGA_Constructor_BullRush_C_RunChinaShop_Params
{
	class AActor*                                      InOverlap;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PassThroughWall;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleCapsuleCollision
struct UGA_Constructor_BullRush_C_ToggleCapsuleCollision_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_ImpactEnemy
struct UGA_Constructor_BullRush_C_FX_ImpactEnemy_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleSteeringReduction
struct UGA_Constructor_BullRush_C_ToggleSteeringReduction_Params
{
	bool                                               bEnableSteeringReduction;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Deactivate
struct UGA_Constructor_BullRush_C_FX_MotionLines_Deactivate_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Activate
struct UGA_Constructor_BullRush_C_FX_MotionLines_Activate_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyEndingDamage
struct UGA_Constructor_BullRush_C_ApplyEndingDamage_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.SetupAbility
struct UGA_Constructor_BullRush_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnChange_67D8F5D643B13C19C65EEBAC7E806B43
struct UGA_Constructor_BullRush_C_OnChange_67D8F5D643B13C19C65EEBAC7E806B43_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_81268963444013D8ABD8329A74FC2BA7
struct UGA_Constructor_BullRush_C_Completed_81268963444013D8ABD8329A74FC2BA7_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_81268963444013D8ABD8329A74FC2BA7
struct UGA_Constructor_BullRush_C_Cancelled_81268963444013D8ABD8329A74FC2BA7_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_81268963444013D8ABD8329A74FC2BA7
struct UGA_Constructor_BullRush_C_Triggered_81268963444013D8ABD8329A74FC2BA7_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_C1DD435D421925C851371490B466988E
struct UGA_Constructor_BullRush_C_Completed_C1DD435D421925C851371490B466988E_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_C1DD435D421925C851371490B466988E
struct UGA_Constructor_BullRush_C_Cancelled_C1DD435D421925C851371490B466988E_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_C1DD435D421925C851371490B466988E
struct UGA_Constructor_BullRush_C_Triggered_C1DD435D421925C851371490B466988E_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_91555FE04FDFE9F5B7F3CB96A10864D5
struct UGA_Constructor_BullRush_C_Completed_91555FE04FDFE9F5B7F3CB96A10864D5_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_91555FE04FDFE9F5B7F3CB96A10864D5
struct UGA_Constructor_BullRush_C_Cancelled_91555FE04FDFE9F5B7F3CB96A10864D5_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_91555FE04FDFE9F5B7F3CB96A10864D5
struct UGA_Constructor_BullRush_C_Triggered_91555FE04FDFE9F5B7F3CB96A10864D5_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EventReceived_C1DB76B7444372BAD736AFB207F3A2D2
struct UGA_Constructor_BullRush_C_EventReceived_C1DB76B7444372BAD736AFB207F3A2D2_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_763E234D46424B8B9BF854AD480CB4DE
struct UGA_Constructor_BullRush_C_Completed_763E234D46424B8B9BF854AD480CB4DE_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_763E234D46424B8B9BF854AD480CB4DE
struct UGA_Constructor_BullRush_C_Cancelled_763E234D46424B8B9BF854AD480CB4DE_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_763E234D46424B8B9BF854AD480CB4DE
struct UGA_Constructor_BullRush_C_Triggered_763E234D46424B8B9BF854AD480CB4DE_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_58E7CF8B45CF32A479A6C5AF0380A969
struct UGA_Constructor_BullRush_C_Completed_58E7CF8B45CF32A479A6C5AF0380A969_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_58E7CF8B45CF32A479A6C5AF0380A969
struct UGA_Constructor_BullRush_C_Cancelled_58E7CF8B45CF32A479A6C5AF0380A969_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_58E7CF8B45CF32A479A6C5AF0380A969
struct UGA_Constructor_BullRush_C_Triggered_58E7CF8B45CF32A479A6C5AF0380A969_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_A67F8C7741932B2C145CA08ECC81FA13
struct UGA_Constructor_BullRush_C_Completed_A67F8C7741932B2C145CA08ECC81FA13_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_A67F8C7741932B2C145CA08ECC81FA13
struct UGA_Constructor_BullRush_C_Cancelled_A67F8C7741932B2C145CA08ECC81FA13_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_A67F8C7741932B2C145CA08ECC81FA13
struct UGA_Constructor_BullRush_C_Triggered_A67F8C7741932B2C145CA08ECC81FA13_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_ActivateAbility
struct UGA_Constructor_BullRush_C_K2_ActivateAbility_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_OnEndAbility
struct UGA_Constructor_BullRush_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.CheckDashDistance
struct UGA_Constructor_BullRush_C_CheckDashDistance_Params
{
	float                                              InDelta;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BeginFallingTimer
struct UGA_Constructor_BullRush_C_BeginFallingTimer_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnPawnLanded_Event_0_1
struct UGA_Constructor_BullRush_C_OnPawnLanded_Event_0_1_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindOnPawnLanded
struct UGA_Constructor_BullRush_C_BindOnPawnLanded_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndFallingTimer
struct UGA_Constructor_BullRush_C_EndFallingTimer_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndAbilitySlide
struct UGA_Constructor_BullRush_C_EndAbilitySlide_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndAbilityHitWall
struct UGA_Constructor_BullRush_C_EndAbilityHitWall_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.DistanceCheckTimer
struct UGA_Constructor_BullRush_C_DistanceCheckTimer_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HitWall
struct UGA_Constructor_BullRush_C_HitWall_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindHitWall
struct UGA_Constructor_BullRush_C_BindHitWall_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnBindHitWall
struct UGA_Constructor_BullRush_C_UnBindHitWall_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OverlapEnemyCallback
struct UGA_Constructor_BullRush_C_OverlapEnemyCallback_Params
{
	class AFortPawn*                                   InOverlapped;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindShieldOverlaps
struct UGA_Constructor_BullRush_C_BindShieldOverlaps_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ShieldOverlap
struct UGA_Constructor_BullRush_C_ShieldOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnbindShieldOverlaps
struct UGA_Constructor_BullRush_C_UnbindShieldOverlaps_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceEndAbility
struct UGA_Constructor_BullRush_C_ForceEndAbility_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ConstructorPawnHit
struct UGA_Constructor_BullRush_C_ConstructorPawnHit_Params
{
	class AActor*                                      SelfActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Hit
struct UGA_Constructor_BullRush_C_Hit_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnbindHit
struct UGA_Constructor_BullRush_C_UnbindHit_Params
{
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceAttach
struct UGA_Constructor_BullRush_C_ForceAttach_Params
{
	class AFortAIPawn*                                 LocalOverlap;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ExecuteUbergraph_GA_Constructor_BullRush
struct UGA_Constructor_BullRush_C_ExecuteUbergraph_GA_Constructor_BullRush_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
