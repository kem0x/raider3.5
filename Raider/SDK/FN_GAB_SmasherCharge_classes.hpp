#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GAB_SmasherCharge.GAB_SmasherCharge_C
// 0x01B8 (0x0CA8 - 0x0AF0)
class UGAB_SmasherCharge_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	class ASmasherPawn_C*                              SmasherPawn;                                              // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      BumpedActor;                                              // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BumpedActorNormal;                                        // 0x0B08(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BumpedActorImpactPoint;                                   // 0x0B14(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BumpedActorImpactBufferHeight;                            // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BumpedActorSmasherVelocity;                               // 0x0B24(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BumpedActorExceptionZNormalThreshold;                     // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0B34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChargingSpeedReached;                                     // 0x0B35(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastCheckWasSlow;                                         // 0x0B36(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SmasherFaceplanted;                                       // 0x0B37(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitingForMeleeSwingTargetSelection;                      // 0x0B38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitingForChargeDamageTargetSelection;                    // 0x0B39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChargeDamageTargetSelectionDamagedSomething;              // 0x0B3A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbilityShouldEndASAP;                                     // 0x0B3B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbilityEndingNow;                                         // 0x0B3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B3D(0x0003) MISSED OFFSET
	TArray<class AActor*>                              ActorsDamagedBySmasherCharge;                             // 0x0B40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UClass*                                      GE_SmasherReachedChargeSpeed;                             // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_SmasherFaceplant;                                      // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EC_NPCAbilityAttackMeleeCharge;                           // 0x0B60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MinYawAngleToLaunchPawnsFromSmasherCharge;                // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchAngleToLaunchPawnsFromSmasherCharge;                 // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmasherChargeLaunchPawnVelocity;                          // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChargeTimeoutTime;                                        // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              CachedArrayOfHitActors;                                   // 0x0B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bTryingToPlayMeleeSwing;                                  // 0x0B88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCancelledMontage;                                        // 0x0B89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0B8A(0x0002) MISSED OFFSET
	float                                              SmasherChargeRotationRate;                                // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      PreviouslyBumpedActor;                                    // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      LastDamagedActor;                                         // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChargeMovementReachedGoalActor;                           // 0x0BA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChargeHitGoalActor;                                       // 0x0BA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0BA2(0x0002) MISSED OFFSET
	float                                              FaceplantCheckTime;                                       // 0x0BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastCheckWasSlowTime;                                     // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmasherFaceplantedTime;                                   // 0x0BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_NPCBehaviorProhibitsAbilityAttackMeleeBump;            // 0x0BB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NPCBehaviorProbibitsAbilityAttackAny;                  // 0x0BD0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_GameplayCueNPCSmasherCharge;                           // 0x0BF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortFeedbackHandle                         SmasherChargingFeedback;                                  // 0x0BF8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NPCBehaviorDBNO;                                       // 0x0C10(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_GameplayStatusDBNO;                                    // 0x0C30(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      FaceplantActorIAmStandingOn;                              // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     ChargeMoveLocation;                                       // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortAbilityTask_MoveAI*                     ChargeMove;                                               // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_ConstructorBullrushing;                                // 0x0C68(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              OverlappingFortPawns;                                     // 0x0C88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              OverlappingBuildingActors;                                // 0x0C98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherCharge.GAB_SmasherCharge_C");
		return ptr;
	}


	void EnableHotspots(bool Enable);
	void DamageThisActor(class AActor* Actor);
	void Slow_Speed_Faceplant_Check(bool* Standing_On_Bumped_Actor_We_Previously_Ignored);
	void UpdateChargingSpeedReached();
	void InitializeAbility();
	void Completed_0B8569504C1E876E723C499B4462A584(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_0B8569504C1E876E723C499B4462A584(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_0B8569504C1E876E723C499B4462A584(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnMoveFinished_2B1380284EE36AB4C4A04DBDFF3C24C9(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_2B1380284EE36AB4C4A04DBDFF3C24C9();
	void OnCancelled_2B1380284EE36AB4C4A04DBDFF3C24C9();
	void OnInterrupted_2B1380284EE36AB4C4A04DBDFF3C24C9();
	void OnComplete_2B1380284EE36AB4C4A04DBDFF3C24C9();
	void OnMoveFinished_1048ADC34DB8C17033C4B9A1C116D220(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_1048ADC34DB8C17033C4B9A1C116D220();
	void OnCancelled_1048ADC34DB8C17033C4B9A1C116D220();
	void OnInterrupted_1048ADC34DB8C17033C4B9A1C116D220();
	void OnComplete_1048ADC34DB8C17033C4B9A1C116D220();
	void Cancelled_9066C547446CB68FD5A3D5BB83B00491(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_9066C547446CB68FD5A3D5BB83B00491(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_26E7DFC34C3008718C4C46A45D67C637(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_26E7DFC34C3008718C4C46A45D67C637(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_C216669A4D935722E29A339C9C0ADB50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_C216669A4D935722E29A339C9C0ADB50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_C216669A4D935722E29A339C9C0ADB50(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EventReceived_51CE074748CA749955FE2CA61620188A(const struct FGameplayEventData& Payload);
	void MoveToLoop();
	void K2_ActivateAbility();
	void SmasherBumpsSomething(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void K2_OnEndAbility(bool* bWasCancelled);
	void ChargeTimeOut();
	void AttemptEndAbility(const struct FString& From);
	void StopLoopingOverList();
	void EnableCrushBox();
	void DisableCrushBox();
	void CrushBoxOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void EnableSmasherBump();
	void DisableSmasherBump();
	void MeleeSwingComplete();
	void MeleeSwingBoxOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AttemptToFindActorsToMeleeSwingAt();
	void AttemptChargeDamage();
	void Faceplant();
	void FaceplantCheck();
	void ChargeSpeedCheck();
	void CheckForActorsThatShouldBeDamagedWhenChargeBegins();
	void Attempt_to_Melee_Swing_And_Deal_Charge_Damage(const struct FString& CallerDebugString);
	void ExecuteUbergraph_GAB_SmasherCharge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
