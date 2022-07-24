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

// BlueprintGeneratedClass B_BGA_Athena_C4.B_BGA_Athena_C4_C
// 0x00DC (0x0784 - 0x06A8)
class AB_BGA_Athena_C4_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06A8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_ProximityMine_Beacon_01;                                // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_C4_Explosive;                                          // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Root_Sphere_Collision;                                    // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement1;                                      // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Land_Sound;                                               // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Impact_Loc;                                               // 0x06D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x06E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EventExplosion;                                           // 0x06F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                ExplosionRangeDefaultTag;                                 // 0x06F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Activation_Radius;                                        // 0x0700(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Activation_Delay;                                         // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultDelay;                                             // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExploded;                                                // 0x0710(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDead_;                                                  // 0x0711(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0712(0x0006) MISSED OFFSET
	class AFortPlayerPawn*                             Player_Owner;                                             // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionLevel;                                           // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0724(0x0004) MISSED OFFSET
	class UForceFeedbackEffect*                        ExplosionForceFeedbackNear;                               // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackFar;                                // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Explosion_Sound;                                          // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PreExplosion_Sound;                                       // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotationInAir;                                            // 0x0748(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExplodeOnDeath;                                          // 0x0754(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestroyOnDeath;                                          // 0x0755(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0756(0x0002) MISSED OFFSET
	TArray<class AActor*>                              FoundBuildingOnDied;                                      // 0x0758(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bResumeSimulation;                                        // 0x0768(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTriggeredExplosion;                                      // 0x0769(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x076A(0x0006) MISSED OFFSET
	class AFortPlayerPawn*                             Original_Player_Owner;                                    // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               HandleHitPassed;                                          // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0779(0x0003) MISSED OFFSET
	float                                              SphereOverlapRadius;                                      // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBetweenStructureDestruction;                         // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_BGA_Athena_C4.B_BGA_Athena_C4_C");
		return ptr;
	}


	void HandleHits(class UObject* Object, class UPrimitiveComponent* Comp);
	void HandleHitSupplyDrop(class UObject* Object, class UPrimitiveComponent* Component);
	void HandleHitVehicle(class UObject* Object, class USceneComponent* Component);
	void OnRep_bTriggeredExplosion();
	void OnRep_bResumeSimulation();
	void HandleWasAttachedToWall(class UObject* Object);
	void HandleHitBuildingWall(class UObject* Object, class UPrimitiveComponent* Comp);
	void OnRep_IsDead_();
	void UserConstructionScript();
	void SetProjectile(float Init_Speed, float Gravity, float Activation_Delay);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void DamageExplode(class AFortPlayerPawnAthena* DamageOwner);
	void SetExplosion(int Explosion_Level, float Activation_Radius, class AFortPlayerPawn* PlayerPawn);
	void BaseDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void BaseDestroyed(class AActor* DestroyedActor);
	void TriggeredExplosion(float DelayForChainExplode);
	void ExplodeOnOwnerDeath(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void Delete_another_actor();
	void ExecuteUbergraph_B_BGA_Athena_C4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
