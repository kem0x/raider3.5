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

// BlueprintGeneratedClass GA_Constructor_BullRush.GA_Constructor_BullRush_C
// 0x028E (0x0E48 - 0x0BBA)
class UGA_Constructor_BullRush_C : public UGAT_ConstructorActiveAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0BBA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BC0(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                Event_Activate;                                           // 0x0BC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_Complete;                                           // 0x0BD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                M_BullRush;                                               // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_BullRushDamage;                                        // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EventPush;                                                // 0x0BE8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventPushEnd;                                             // 0x0BF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RunForwardStartTime;                                      // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BullRushDistance;                                         // 0x0BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunForwardDuration;                                       // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BullRushAnimUnitsPerSec;                                  // 0x0C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RiotShieldApplyEndingKnockback;                           // 0x0C08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RiotShield;                                               // 0x0C09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0C0A(0x0006) MISSED OFFSET
	TArray<class AActor*>                              HitTargets;                                               // 0x0C10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              EndingKnockback;                                          // 0x0C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndingKnockbackZAngle;                                    // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_RiotShield;                                            // 0x0C28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_RiotShieldDamage;                                      // 0x0C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_MotionLines;                                            // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    P_MotionLines_Active;                                     // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              UpgradeDistance;                                          // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultDistance;                                          // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchInputScale;                                          // 0x0C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawInputScale;                                            // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SoundImpactEnemy;                                         // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SoundShieldChargeStart;                                   // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SoundChargeKnockback;                                     // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortFeedbackHandle                         BullRushStartFeedback;                                    // 0x0C88(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      ShieldCameraShake;                                        // 0x0CA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ImpactEnemyCameraShake;                                   // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABuildingWall*                               HitBuilding;                                              // 0x0CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_LongRush;                                              // 0x0CB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_AttachedToShield;                                      // 0x0CD8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DashEnded;                                                // 0x0CF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LongRush;                                                 // 0x0CF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0CFA(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       TC_EmergencyOverride;                                     // 0x0D00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               EmergencyOverride;                                        // 0x0D20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0D21(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_BloodyBull;                                            // 0x0D28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BloodyBull;                                               // 0x0D48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0D49(0x0007) MISSED OFFSET
	class UClass*                                      GE_BloodyBullDamage;                                      // 0x0D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DashStartLocation;                                        // 0x0D58(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0D64(0x0004) MISSED OFFSET
	class UForceFeedbackEffect*                        ShieldForceFeedback;                                      // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ImpactEnemyForceFeedback;                                 // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_ChinaShop;                                             // 0x0D78(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ChinaShop;                                                // 0x0D98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayerIsInBullRushAndFalling;                            // 0x0D99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0D9A(0x0006) MISSED OFFSET
	struct FTimerHandle                                FallingTimerHandle;                                       // 0x0DA0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  HitWallSound;                                             // 0x0DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HitWallFX;                                                // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitWallDotProduct;                                        // 0x0DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0DBC(0x0004) MISSED OFFSET
	class UClass*                                      GE_Disarm;                                                // 0x0DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_StandardDamage;                                        // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_ChinaShop;                                             // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Count;                                                    // 0x0DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0DDC(0x0004) MISSED OFFSET
	struct FTimerHandle                                CheckForDistanceHandle;                                   // 0x0DE0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CurrentRunForwardDuration;                                // 0x0DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0DEC(0x0004) MISSED OFFSET
	class UClass*                                      GE_Charging;                                              // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TC_StopSmasherCharge;                                     // 0x0DF8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortAIPawn*                                 LocalOverlap;                                             // 0x0E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAIType>                               CurrentAIType;                                            // 0x0E08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0E09(0x0007) MISSED OFFSET
	TArray<struct FFortCharacterPartMontageInfo>       CharacterPartMontages;                                    // 0x0E10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              F_Slide_FailSafe;                                         // 0x0E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0E24(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       NPC_Survivor;                                             // 0x0E28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_BullRush.GA_Constructor_BullRush_C");
		return ptr;
	}


	bool HighOffGround(const struct FVector& ImpactPoint);
	bool NotBuilding(class AActor* InActor);
	void HasShieldCharacterPiece(bool* HasCharm);
	void NotADefender(class AFortPawn* InPawn, bool* NotADefender);
	void GetAppliedDamage(class UClass** Applied);
	void GetAIType(class AFortAIPawn* InPawn, TEnumAsByte<EAIType>* OutType);
	void ApplyDamageToTarget(class AActor* Actor, class UClass* Applied);
	void ForceAttachClose();
	bool IsAShielder(class AFortPawn* Actor);
	struct FVector GetCharacterNormalizedVelocity();
	void HideToggledDecoTools();
	void HandleBigMonsterCollide(class UObject* Object, bool* Success);
	void LaunchPawn(class AFortAIPawn* InputPin, bool ApplyDamage);
	void IsBigMonster(const TScriptInterface<class UGameplayTagAssetInterface>& InPawn, bool* IsSmasher);
	void DetachPawn(class AFortAIPawn* InPawn);
	void EndPushingAll();
	void ApplyPushToPawn(class AFortPawn* InPawn);
	float AbilityRemainingTime();
	void IgnoreCollisionWith(class ABuildingActor* InActor, bool* ShouldIgnore);
	bool ShouldForceCollision(class AActor* InActor);
	void GetAnimationNameForHusk(struct FName* AnimName);
	void IncrementAnimCount(int* Output_Get);
	void PrepareAbilityValues();
	void EndPushingAllCollideWall(const struct FVector& HitNormal, const struct FVector& HitLocation);
	void RunChinaShop(class AActor* InOverlap, bool* PassThroughWall);
	void ToggleCapsuleCollision(bool Enable);
	void FX_ImpactEnemy();
	void ToggleSteeringReduction(bool bEnableSteeringReduction);
	void FX_MotionLines_Deactivate();
	void FX_MotionLines_Activate();
	void ApplyEndingDamage();
	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	void OnChange_67D8F5D643B13C19C65EEBAC7E806B43(TEnumAsByte<EMovementMode> NewMovementMode);
	void Completed_81268963444013D8ABD8329A74FC2BA7(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_81268963444013D8ABD8329A74FC2BA7(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_81268963444013D8ABD8329A74FC2BA7(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_C1DD435D421925C851371490B466988E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_C1DD435D421925C851371490B466988E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_C1DD435D421925C851371490B466988E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_91555FE04FDFE9F5B7F3CB96A10864D5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_91555FE04FDFE9F5B7F3CB96A10864D5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_91555FE04FDFE9F5B7F3CB96A10864D5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EventReceived_C1DB76B7444372BAD736AFB207F3A2D2(const struct FGameplayEventData& Payload);
	void Completed_763E234D46424B8B9BF854AD480CB4DE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_763E234D46424B8B9BF854AD480CB4DE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_763E234D46424B8B9BF854AD480CB4DE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_58E7CF8B45CF32A479A6C5AF0380A969(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_58E7CF8B45CF32A479A6C5AF0380A969(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_58E7CF8B45CF32A479A6C5AF0380A969(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_A67F8C7741932B2C145CA08ECC81FA13(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_A67F8C7741932B2C145CA08ECC81FA13(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_A67F8C7741932B2C145CA08ECC81FA13(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void CheckDashDistance(float InDelta);
	void BeginFallingTimer();
	void OnPawnLanded_Event_0_1(const struct FHitResult& Hit);
	void BindOnPawnLanded();
	void EndFallingTimer();
	void EndAbilitySlide();
	void EndAbilityHitWall();
	void DistanceCheckTimer();
	void HitWall(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BindHitWall();
	void UnBindHitWall();
	void OverlapEnemyCallback(class AFortPawn* InOverlapped);
	void BindShieldOverlaps();
	void ShieldOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UnbindShieldOverlaps();
	void ForceEndAbility();
	void ConstructorPawnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Hit();
	void UnbindHit();
	void ForceAttach(class AFortAIPawn* LocalOverlap);
	void ExecuteUbergraph_GA_Constructor_BullRush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
