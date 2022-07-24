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

// BlueprintGeneratedClass GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C
// 0x0268 (0x0B78 - 0x0910)
class UGA_Athena_Grenade_WithTrajectory_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                          // 0x0918(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                            // 0x0920(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Prj_Grenade;                                              // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeSpeedMin;                                          // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrenadeSpeedMax;                                          // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x093C(0x0004) MISSED OFFSET
	class USoundBase*                                  GrenadeSound;                                             // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EC_DefaultExplosion;                                      // 0x0948(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec            EC_ReturnedEffect;                                        // 0x0950(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ExplosionRadius;                                          // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalThrowAngle;                                     // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortFeedbackHandle                         GrenadeDialogFeedback;                                    // 0x09D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               GrenadeAmmo;                                              // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlasmaGrenades;                                           // 0x09F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Flashbang;                                                // 0x09F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x09F3(0x0001) MISSED OFFSET
	struct FVector                                     GrenadeTargetingOriginOffset;                             // 0x09F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         DummyProjectile;                                          // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DummyShouldBounce;                                        // 0x0A08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A09(0x0003) MISSED OFFSET
	float                                              DummyBounciness;                                          // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyFriction;                                            // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrajectoryUpdateInterval;                                 // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyMaxSpeed;                                            // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyGravity;                                             // 0x0A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyTimeStep;                                            // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyExtent;                                              // 0x0A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrenadeTargetingOriginOffset_Crouched;                    // 0x0A28(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               InThrowWindup;                                            // 0x0A34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A35(0x0003) MISSED OFFSET
	class ABP_ProjectileTrajectory_C*                  TrajectoryIndicator;                                      // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TrajectoryIndicatorClass;                                 // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayAbilityMontageInfo             ThrowWindupMontage;                                       // 0x0A48(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AbilityKeyPressed;                                        // 0x0AA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0AA9(0x0003) MISSED OFFSET
	float                                              MaxSpeedPitch;                                            // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpeedPitch;                                            // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0AB4(0x0004) MISSED OFFSET
	struct FGameplayEventData                          Event_Data;                                               // 0x0AB8(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTossPitch;                                             // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTrajectoryBounces;                                     // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostThrowCancelDelay;                                     // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostThrowEndDelay;                                        // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C");
		return ptr;
	}


	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents);
	class UClass* GetProjectileTrajectoryActor();
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn);
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed);
	void UpdateTrajectorySpline();
	void SetupDummyProjectile();
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot);
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale);
	void Destroyed_40FE015D40E881984FE611B980B75D52(const struct FProjectileEventData& ProjectileData);
	void Exploded_40FE015D40E881984FE611B980B75D52(const struct FProjectileEventData& ProjectileData);
	void Stopped_40FE015D40E881984FE611B980B75D52(const struct FProjectileEventData& ProjectileData);
	void Bounced_40FE015D40E881984FE611B980B75D52(const struct FProjectileEventData& ProjectileData);
	void Touched_40FE015D40E881984FE611B980B75D52(const struct FProjectileEventData& ProjectileData);
	void Created_40FE015D40E881984FE611B980B75D52(const struct FProjectileEventData& ProjectileData);
	void Completed_B08560984B3818F6EECB3C9A92E61ADC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B08560984B3818F6EECB3C9A92E61ADC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B08560984B3818F6EECB3C9A92E61ADC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_E8F8DC5A465F19B633AF0E8888171F5A();
	void OnFinish_4B1D92B7427697E6BD9D58ACA0F87155();
	void OnCancelled_758AC809498064C01C71318E141D1E46();
	void OnInterrupted_758AC809498064C01C71318E141D1E46();
	void OnBlendOut_758AC809498064C01C71318E141D1E46();
	void OnCompleted_758AC809498064C01C71318E141D1E46();
	void OnFinish_C70D988C492A7EF3B105DC8DADDBD86D();
	void OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C();
	void K2_ActivateAbility();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool* bWasCancelled);
	void CleanupTrajectoryDisplay();
	void TossGrenade();
	void InitTrajectoryVariables();
	void ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
