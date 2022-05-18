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

// BlueprintGeneratedClass SmasherPawn.SmasherPawn_C
// 0x018C (0x2168 - 0x1FDC)
class ASmasherPawn_C : public AEnemyPawn_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1FDC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1FE0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               KeepChargingBox;                                          // 0x1FE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ChargeMeleeSwingBox;                                      // 0x1FF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CrushBox;                                                 // 0x1FF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SFX_Club_Drag;                                            // 0x2000(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Club_Drag;                                         // 0x2008(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           PushCapsule;                                              // 0x2010(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_3_ColorFadeOutTrack_676F16694C256D56DC409C8D204D89A8;// 0x2018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_3_FadeInTrack_676F16694C256D56DC409C8D204D89A8;  // 0x201C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_676F16694C256D56DC409C8D204D89A8;   // 0x2020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2021(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3_4;                                             // 0x2028(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RippleTime;                                               // 0x2030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanRippleAgain;                                           // 0x2034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2035(0x0003) MISSED OFFSET
	float                                              CurrentJiggleAnimation;                                   // 0x2038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RippleDamageAmount;                                       // 0x203C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dying;                                                    // 0x2040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2041(0x0003) MISSED OFFSET
	float                                              PushRadius;                                               // 0x2044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OriginalRotationRate;                                     // 0x2048(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               CustomizeEyeColor;                                        // 0x2054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2055(0x0003) MISSED OFFSET
	struct FLinearColor                                EyeColor_PlayerNotBeingTracked;                           // 0x2058(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EyeColor_PlayerBeingTracked;                              // 0x2068(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       Impact_MeleeSocket;                                       // 0x2078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Default;                                  // 0x2080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Wood;                                     // 0x2088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Stone;                                    // 0x2090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Metal;                                    // 0x2098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_HumanFlesh;                               // 0x20A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleeImpact_UseSocketTransforms;                          // 0x20A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x20A9(0x0007) MISSED OFFSET
	class AActor*                                      ActorOverlappingCrushBox;                                 // 0x20B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                CrushTag;                                                 // 0x20B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       SpawnRoarTag;                                             // 0x20C0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                ProhibitBumpDamageTag;                                    // 0x20E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SmasherMaxCrushVolumeMult;                                // 0x20E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugSmasherCrushing;                                     // 0x20EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x20ED(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    Death_Effects;                                            // 0x20F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 Curve_Smasher_EyeClose;                                   // 0x20F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Curve_Smasher_LerpToNewEyeColorToIndicatePlayerTracking;  // 0x2100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           Smasher_RedEyeColorCurve;                                 // 0x2108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Play_Smasher_Eye_Effects_In_Reverse;                      // 0x2110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x2111(0x0003) MISSED OFFSET
	float                                              Smasher_Eye_Close_Animation_Length;                       // 0x2114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FriendlyPawnPushDuration;                                 // 0x2118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FriendlyPawnPushVelocity;                                 // 0x211C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FriendlyPawnPushYawAngle;                                 // 0x2120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnemyPawnKnockbackVelocity;                               // 0x2124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnemyPawnKnockbackZAngle;                                 // 0x2128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnemyPawnKnockbackYawAngle;                               // 0x212C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   PawnBumpedBySmasher;                                      // 0x2130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              ActorsDamagedByCharge;                                    // 0x2138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class USkeletalMeshComponent*                      ShieldSkeletalMesh;                                       // 0x2148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AShielderSpringArm_C*                        ShieldArm;                                                // 0x2150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Smasher_ImpactSound;                                      // 0x2158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Smasher;                                                  // 0x2160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SmasherPawn.SmasherPawn_C");
		return ptr;
	}


	void GetCollisionPredictionComponent(class UShapeComponent** Collision_Prediction_Shape_Component);
	void SetSmasherRotationRate(float YawRate);
	void ResetSmasherRotationRateToDefault();
	void HandleHitEffects(float Damage, struct FHitResult* HitInfo);
	void PaceHitSoundsAndVocalizations(TEnumAsByte<EFortDamageZone> Damage_Zone);
	void CalculateBumpMomentum(float Velocity, float YawAngle, class AFortPawn* BumpedPawn, struct FVector* BumpMomentum);
	void UserConstructionScript();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_3__Spawn__EventFunc();
	void InitializeCrushing();
	void OnCrushBoxBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void HitSoundTimeout();
	void HitSoundVocalTimeout();
	void ReceiveBeginPlay();
	void Trigger_Death_Effect();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void GameplayCue_Impact_Physical_Creature(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void GameplayCue_NPC_Smasher_Charge(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnStartedEncounterSpawn();
	void OnFinishedEncounterSpawn();
	void GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnPushCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_SmasherPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
