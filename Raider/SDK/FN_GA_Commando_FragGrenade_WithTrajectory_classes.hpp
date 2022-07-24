#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
// 0x035A (0x0D4C - 0x09F2)
class UGA_Commando_FragGrenade_WithTrajectory_C : public UGAT_CommandoActiveAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x09F2(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09F8(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                          // 0x0A00(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                            // 0x0A08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Prj_Grenade;                                              // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrenadeSpeedMin;                                          // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrenadeSpeedMax;                                          // 0x0A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A24(0x0004) MISSED OFFSET
	class USoundBase*                                  GrenadeSound;                                             // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_ClusterBomb;                                           // 0x0A30(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MaxClusterGrenades;                                       // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A54(0x0004) MISSED OFFSET
	class UClass*                                      Prj_Cluster;                                              // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClusterSpeedMax;                                          // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A64(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_BiggerIsBetter;                                        // 0x0A68(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_DefaultExplosion;                                      // 0x0A88(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_IncreasedRadius;                                       // 0x0A90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec            EC_ReturnedEffect;                                        // 0x0A98(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ExplosionRadius;                                          // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalThrowAngle;                                     // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClusterMinPitch;                                          // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClusterMaxPitch;                                          // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EC_ClusterExplosion;                                      // 0x0B28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ClusterSpeedMin;                                          // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	struct FFortFeedbackHandle                         GrenadeDialogFeedback;                                    // 0x0B38(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_KeepOut;                                               // 0x0B50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_KeepOut;                                               // 0x0B70(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AOE_KeepOut;                                              // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BiggerIsBetter;                                           // 0x0B80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClusterBomb;                                              // 0x0B81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KeepOut;                                                  // 0x0B82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0B83(0x0005) MISSED OFFSET
	struct FGameplayTagContainer                       TC_GrenadeAmmo;                                           // 0x0B88(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_GrenadeCost;                                           // 0x0BA8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_GrenadeDamage;                                         // 0x0BC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               GrenadeAmmo;                                              // 0x0BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrenadeCost;                                              // 0x0BE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrenadeDamage;                                            // 0x0BEA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0BEB(0x0001) MISSED OFFSET
	int                                                GrenadeAmmoUpgrade;                                       // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GrenadeAmmoDefault;                                       // 0x0BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxGrenadeAmmo;                                           // 0x0BF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionRadiusTooltip;                                   // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionRadiusDefault;                                   // 0x0BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionRadiusUpgrade;                                   // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0C04(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_PlasmaGrenades;                                        // 0x0C08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlasmaGrenades;                                           // 0x0C28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0C29(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Flashbang;                                             // 0x0C30(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Flashbang;                                                // 0x0C50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0C51(0x0003) MISSED OFFSET
	struct FVector                                     GrenadeTargetingOriginOffset;                             // 0x0C54(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         DummyProjectile;                                          // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DummyShouldBounce;                                        // 0x0C68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0C69(0x0003) MISSED OFFSET
	float                                              DummyBounciness;                                          // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyFriction;                                            // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrajectoryUpdateInterval;                                 // 0x0C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyMaxSpeed;                                            // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyGravity;                                             // 0x0C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyTimeStep;                                            // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyExtent;                                              // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InThrowWindup;                                            // 0x0C88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0C89(0x0007) MISSED OFFSET
	class ABP_ProjectileTrajectory_C*                  TrajectoryIndicator;                                      // 0x0C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TrajectoryIndicatorClass;                                 // 0x0C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayAbilityMontageInfo             ThrowWindupMontage;                                       // 0x0CA0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AbilityKeyPressed;                                        // 0x0D00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0D01(0x0003) MISSED OFFSET
	float                                              MaxSpeedPitch;                                            // 0x0D04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpeedPitch;                                            // 0x0D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTossPitch;                                             // 0x0D0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTrajectoryBounces;                                     // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0D14(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Tactical_Clusterbomb;                                  // 0x0D18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Tactical_Clusterbomb;                                     // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0D39(0x0007) MISSED OFFSET
	struct FGameplayTag                                EC_ClusterExplosion_Tactical;                             // 0x0D40(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              F_FrameDelay;                                             // 0x0D48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C");
		return ptr;
	}


	void SpawnFragGrenade(class UClass* ProjectileClass, const struct FRotator& InputPin, const struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnExplode, float InitialSpeed, float GravityScale, struct FVector* SpawnLocation);
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed);
	void UpdateTrajectorySpline();
	void SetupDummyProjectile();
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystemComponentRef);
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale);
	void Completed_C3E84D8940567A046A8F48A21D386165(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_C3E84D8940567A046A8F48A21D386165(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_C3E84D8940567A046A8F48A21D386165(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_F5D87C9E46378707AE4C79B3A42F5A45();
	void OnCancelled_854170AF4268B06A435A3AA33232C5BF();
	void OnInterrupted_854170AF4268B06A435A3AA33232C5BF();
	void OnBlendOut_854170AF4268B06A435A3AA33232C5BF();
	void OnCompleted_854170AF4268B06A435A3AA33232C5BF();
	void OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool* bWasCancelled);
	void CleanupTrajectoryDisplay();
	void TossGrenade();
	void K2_ActivateAbility();
	void CommitOnSever();
	void ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
