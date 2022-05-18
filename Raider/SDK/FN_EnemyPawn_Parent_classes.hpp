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

// BlueprintGeneratedClass EnemyPawn_Parent.EnemyPawn_Parent_C
// 0x03FC (0x1FDC - 0x1BE0)
class AEnemyPawn_Parent_C : public AFortAIPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1BE0(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           WeaponCapsuleCollision;                                   // 0x1BE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Elemental_Layer_Audio_Loop;                               // 0x1BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeMiniBossLightOutTL_Fade_2CE2533F4858E8E5F1A8D39F9CE6D9F4;// 0x1BF8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeMiniBossLightOutTL__Direction_2CE2533F4858E8E5F1A8D39F9CE6D9F4;// 0x1BFC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1BFD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeMiniBossLightOutTL;                                   // 0x1C00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Enemy_Spawn_Out_TL_ColorFadeOutTrack_999FBE184F147A4FE3025AB553DBFA9C;// 0x1C08(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Enemy_Spawn_Out_TL_FadeInTrack_999FBE184F147A4FE3025AB553DBFA9C;// 0x1C0C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Enemy_Spawn_Out_TL__Direction_999FBE184F147A4FE3025AB553DBFA9C;// 0x1C10(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1C11(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Enemy_Spawn_Out_TL;                                       // 0x1C18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EnemySpawnInTL_MiniBossFadeLight_5C7376B04DFAE1465B97F1BB1B873D88;// 0x1C20(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemySpawnInTL_ColorFadeOutTrack_5C7376B04DFAE1465B97F1BB1B873D88;// 0x1C24(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemySpawnInTL_FadeInTrack_5C7376B04DFAE1465B97F1BB1B873D88;// 0x1C28(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EnemySpawnInTL__Direction_5C7376B04DFAE1465B97F1BB1B873D88;// 0x1C2C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1C2D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EnemySpawnInTL;                                           // 0x1C30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance_0;                              // 0x1C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Death_Effects;                                            // 0x1C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             HQ_Death_Particle_System;                                 // 0x1C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathFX_SpawnRateScale;                                   // 0x1C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HQ_DeathFX_MaxDistance;                                   // 0x1C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LQ_Death_Particle_System;                                 // 0x1C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_CylinderHeight;                                // 0x1C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_CylinderRadius;                                // 0x1C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_SpawnRateScale;                                // 0x1C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1C6C(0x0004) MISSED OFFSET
	struct FName                                       LQ_PS_Socket_Attach;                                      // 0x1C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Death_Socket;                                             // 0x1C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePOCScaleAndMaterials;                                  // 0x1C80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               POCShouldOverrideMaterial;                                // 0x1C81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               POCShouldOverrideMaterialValues;                          // 0x1C82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x1C83(0x0005) MISSED OFFSET
	class UMaterialInterface*                          POCOverrideMaterial;                                      // 0x1C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                POCMaterialHairColor;                                     // 0x1C90(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                POCMaterialSkinColor;                                     // 0x1CA0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                POCMaterialPantColor;                                     // 0x1CB0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                POCMaterialShirtColor;                                    // 0x1CC0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // 0x1CD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PseudoRandomNetworkedFloat;                               // 0x1CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseRandomColorVariation;                                  // 0x1CDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1CDD(0x0003) MISSED OFFSET
	TArray<struct FLinearColor>                        MaleHuskHairColors;                                       // 0x1CE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskSkinColors;                                       // 0x1CF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskPantColors;                                       // 0x1D00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskShirtColors;                                      // 0x1D10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 HieghtDistributionCurve;                                  // 0x1D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RandomizeMeshScale;                                       // 0x1D28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x1D29(0x0007) MISSED OFFSET
	struct FTransform                                  SpawnParticlesTransform;                                  // 0x1D30(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance_1;                              // 0x1D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpawnParticles;                                           // 0x1D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CharacterElementalParticles;                              // 0x1D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               AllowHeadshot;                                            // 0x1D78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x1D79(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_RangedWeapon;                                          // 0x1D80(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    HeadshotParticleSystemComp;                               // 0x1DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                Additive_Hit_React_Montage;                               // 0x1DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Death_Normal_Sound;                                       // 0x1DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Elemental_Audio_Layer_Sound;                              // 0x1DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpecialEventHalloweenPumpkinHead;                         // 0x1DC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpecialEventHalloweenPumpkinHeadApplied;                  // 0x1DC1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x1DC2(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       TC_NPCCharacterTypeHuskBasic;                             // 0x1DC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SpecialEventHalloweenPumpkinHead;                      // 0x1DE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PumpkinHeadPercentage;                                    // 0x1E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x1E0C(0x0004) MISSED OFFSET
	class UClass*                                      GE_SpecialEvent_Halloween_PumpkinHead;                    // 0x1E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        Pumpkin_Head_Mesh;                                        // 0x1E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Pumpkin_Eyeglow_Mesh;                                     // 0x1E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FRotator                                    PumpkinHeadRotation;                                      // 0x1E28(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PumpkinHeadScale;                                         // 0x1E34(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PumpkinHeadOffset;                                        // 0x1E40(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1E4C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    PumpkinEyesFX;                                            // 0x1E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       Headshot_FX_Socket;                                       // 0x1E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material_Alteration_0;                                    // 0x1E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material_Alteration_1;                                    // 0x1E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SleepParticleSystemComp;                                  // 0x1E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Husk_Sleeping_Sound;                                      // 0x1E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             HuskSleepSound;                                           // 0x1E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    WakeUpParticleSystemComp;                                 // 0x1E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              AwokenMaxDistance;                                        // 0x1E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x1E94(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      AwokenSkeletalMesh;                                       // 0x1E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AwokenSkelMeshMID;                                        // 0x1EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwokenFadeInTime;                                         // 0x1EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwokenFadeOutTime;                                        // 0x1EAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwokenDuration;                                           // 0x1EB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sleeping;                                                 // 0x1EB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasGlowColorsAssigned;                                    // 0x1EB5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnInTimelineCompletedSuccessfully;                     // 0x1EB6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x1EB7(0x0001) MISSED OFFSET
	struct FTimerHandle                                CharacterSpawnInSafetyCheckHandle;                        // 0x1EB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Base_MID_0;                                               // 0x1EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Previous_MID_0;                                           // 0x1EC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CharacterElementalParticlesTemplate;                      // 0x1ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FrozenHuskMeshScale;                                      // 0x1ED8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               SpawnFrozenHuskMesh;                                      // 0x1EE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1EE5(0x0003) MISSED OFFSET
	class UParticleSystem*                             CharacterAmbientParticlesTemplate;                        // 0x1EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CharacterAmbientParticles;                                // 0x1EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TMap<struct FString, class UMaterialInterface*>    MaterialModifierMap;                                      // 0x1EF8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, class UMaterialInterface*>    MaterialModifierMapDefaults;                              // 0x1F48(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class USkeletalMeshComponent*                      DuplicateCharacterMesh;                                   // 0x1F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DuplicateCharacterMID;                                    // 0x1FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BoneRefPosePosition;                                      // 0x1FA8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MiniBossSizeScale;                                        // 0x1FB4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UPointLightComponent*                        MiniBossLight;                                            // 0x1FC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MinibossPSComponent;                                      // 0x1FC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              MiniBossLightIntensity;                                   // 0x1FD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterParticlesMaxDrawDistance;                        // 0x1FD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slow_Shackle_Scale;                                       // 0x1FD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EnemyPawn_Parent.EnemyPawn_Parent_C");
		return ptr;
	}


	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);
	void SetMinibossLightHiddenInGame(bool Hidden);
	void SpawnMinibossLight();
	void SetScalarParameterOnAllCharacterMIDsByMap(TMap<struct FName, float> Map);
	void SetVectorParameterOnAllCharacterMIDsByMap(TMap<struct FName, struct FLinearColor> Map);
	void TransformHitLocationWorldSpaceToPreskinnedLocalSpace(struct FVector* PreskinnedLS);
	void SetParticlesOnCharacterMeshHiddenInGame(bool Hidden);
	void SetDuplicateCharacterMeshHiddenInGame(bool Hidden);
	void CreateDuplicateCharacterMesh(class UMaterialInterface* Material_to_Apply);
	void RestoreMaterialMapToDefaults();
	void OverwriteKeysInMaterialMap(class UMaterialInterface* Fire, class UMaterialInterface* Ice, class UMaterialInterface* Lightning, class UMaterialInterface* Default);
	void OverrideMaterialFromMapByMeshTag();
	void OnRep_SpecialEventHalloweenPumpkinHeadApplied();
	void SpecialEventHalloweenPumpkinHeadHusk(bool ApplyPumpkinHeadMesh, bool DebugApplicationOrRemoval_);
	void SpawnMeshAttachedToCharacter(class UStaticMesh* Static_Mesh, const struct FName& Socket_Name, const struct FTransform& Relative_Transform, bool Absolute_Location, bool Absolute_Rotation, bool Absolute_Scale, class UStaticMeshComponent** Static_Mesh_Component_Reference);
	void RestorePreviousMaterialOnCharacterMesh(float Delay_in_Seconds);
	void CharacterSpawnInSafetyCheck();
	void SetCharacterEyeColors(const struct FLinearColor& Eye_Color_Inner, const struct FLinearColor& Eye_Color_Outer);
	void SetCharacterFresnelGlowColors(const struct FLinearColor& Inner_Color, const struct FLinearColor& Outer_Color);
	void SpawnParticleSystemOnCharacterMesh(class UParticleSystem* ParticleSystemTemplate, class UParticleSystemComponent* ParticleSystemComponentReferenceVar, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, TArray<struct FParticleSysParam>* InstanceParameters, class UParticleSystemComponent** PSComponentReference);
	void OverridePhysicalMaterialOnCharacterMesh(class UPhysicalMaterial* Physical_Material_Override);
	void DestroyAwokenSkeletalMesh();
	void OverrideMaterialAndCopyParametersOnCharacterMesh(class UMaterialInterface* New_Material_To_Apply);
	void PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage);
	void SetActiveParticlesOnCharacterMesh(bool Active, bool Reset);
	void SetScalarParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, float Scalar_Value);
	void SetVectorParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, const struct FLinearColor& Linear_Color);
	void PickColorFromAnArrayOfColors(TArray<struct FLinearColor>* ArrayOfColors, struct FLinearColor* Color);
	void StopDeathFX();
	void EnemyDeathVisuals(bool* HQ);
	void UserConstructionScript();
	void FadeMiniBossLightOutTL__FinishedFunc();
	void FadeMiniBossLightOutTL__UpdateFunc();
	void Enemy_Spawn_Out_TL__FinishedFunc();
	void Enemy_Spawn_Out_TL__UpdateFunc();
	void EnemySpawnInTL__FinishedFunc();
	void EnemySpawnInTL__UpdateFunc();
	void EnemySpawnInTL__Spawn__EventFunc();
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BeginDeathFX();
	void ManualDespawnEnemy(const struct FVector& RiftLocationWS);
	void ManualEnemySpawnIn(const struct FVector& RiftLocationWS);
	void FadeMiniBossLightOut();
	void SpawnInSafetyCheck();
	void PostSpawnIn();
	void DespawnEnemy(const struct FVector& RiftLocationWS);
	void DebugEnemySpawnIn();
	void OnFinishedEncounterSpawn();
	void OnStartedEncounterSpawn();
	void PawnUniqueIDSet();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void AdditiveHitReactDelay();
	void OnBeginSleepEffects();
	void OnEndSleepEffects();
	void RestorePreviousMaterialDelayCompleted();
	void RestorePreviousMaterialDelay(float Delay_Amount);
	void OnCheatUpdateSpecialEventGE(bool* bShouldUseSpecialEventGE);
	void ExecuteUbergraph_EnemyPawn_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
