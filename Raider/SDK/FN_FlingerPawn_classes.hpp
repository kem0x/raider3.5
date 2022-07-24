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

// BlueprintGeneratedClass FlingerPawn.FlingerPawn_C
// 0x0144 (0x1C04 - 0x1AC0)
class AFlingerPawn_C : public AFortPawn_Flinger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1AC0(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<ETimelineDirection>                    UpdateMaterialParamsTL__Direction_6C35BAD84D71F4DBDE216893257CE551;// 0x1AC8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1AC9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          UpdateMaterialParamsTL;                                   // 0x1AD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_ColorFadeOutTrack_FF5DFFCA47FEE11FBE8FFF9B5CFA3D28;// 0x1AD8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_FadeInTrack_FF5DFFCA47FEE11FBE8FFF9B5CFA3D28;  // 0x1ADC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_FF5DFFCA47FEE11FBE8FFF9B5CFA3D28;   // 0x1AE0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1AE1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x1AE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MontagePlayTime;                                          // 0x1AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1AF4(0x0004) MISSED OFFSET
	class AFortAIPawn*                                 PawnHeldByFlinger;                                        // 0x1AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_WasThisAMeleeStrike;                                   // 0x1B00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<ElementalEnum>                         ElementalType;                                            // 0x1B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1B21(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    AmbientParticleEffect;                                    // 0x1B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       ImpactMeleeSocket;                                        // 0x1B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Default;                                  // 0x1B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Wood;                                     // 0x1B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Stone;                                    // 0x1B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_Metal;                                    // 0x1B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactParticles_HumanFlesh;                               // 0x1B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleeImpact_UseSocketTransforms;                          // 0x1B60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x1B61(0x0007) MISSED OFFSET
	struct FName                                       Impact_MeleeSocket;                                       // 0x1B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_NPCAbilityNonAttackRoar;                               // 0x1B70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    FlingerRangedFX;                                          // 0x1B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             FlingerRangedSkullFXTemplate;                             // 0x1B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FlingerRangedHuskFXTemplate;                              // 0x1BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance;                                // 0x1BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Death_Effects;                                            // 0x1BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             HQ_Death_Particle_System;                                 // 0x1BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LQ_Death_Particle_System;                                 // 0x1BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID1;                                                     // 0x1BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   PawnBumpedByFlinger;                                      // 0x1BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PushDuration;                                             // 0x1BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PushYawAngle;                                             // 0x1BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PushVelocity;                                             // 0x1BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isEnraged;                                                // 0x1BE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1BE5(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance_Accessory_1;                    // 0x1BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShielderSpringArm_C*                        ShieldArm;                                                // 0x1BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      ShieldSkeletalMesh;                                       // 0x1BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Slow_Shackle_Scale;                                       // 0x1C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FlingerPawn.FlingerPawn_C");
		return ptr;
	}


	bool IsReadyToReceiveNewSpawnGroup();
	bool OnReceiveSpawnGroup();
	void StopMaterialTimeline();
	void StopDeathFX();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__Spawn__EventFunc();
	void UpdateMaterialParamsTL__FinishedFunc();
	void UpdateMaterialParamsTL__UpdateFunc();
	void FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy);
	void CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked);
	void FlingerCanSpawnAnEnemy();
	void FlingerCan_tSpawnAnEnemy();
	void FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile);
	void FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile);
	void AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger);
	void FlingerEnemyDied(class APawn* PawnThatDied);
	void MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall);
	void MantleEnd();
	void HuskEvadeStart();
	void VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal);
	void ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal);
	void BeginTakerSwoopAttack();
	void EndTakerSwoopAttack();
	void TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug);
	void IsTakerWallPortalAvailable(bool Portal_Available_);
	void TakerAttackFSM(bool SuccessfulHit);
	void TakerSoulSuckSoundBegin(bool Success);
	void TakerSoulSuckSoundEnd();
	void PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>* BuildingActorList);
	void PortalClear();
	void TakerSoulSuckInterrupted();
	void PortalGet(class ABuildingActor* BuildingActor, class AActor* BT, TArray<class ABuildingActor*>* BuildingActorList);
	void PortalFX();
	void PortalCollision(bool Collide_);
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void AdditiveHitReactDelay();
	void ReceiveBeginPlay();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void GameplayCue_Impact_Physical_Creature(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void GameplayCue_NPC_Ranged_Grab(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_NPC_Ranged_Throw(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_NPC_Flinger_Ranged_Grab_NPC(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void SpawnDeathFX();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnStartedEncounterSpawn();
	void OnFinishedEncounterSpawn();
	void GameplayCue_GameplayModifiers_OnLowHealth_Enrage(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_FlingerPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
