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

// BlueprintGeneratedClass EnemyPawn_Parent.EnemyPawn_Parent_C
// 0x0410 (0x1ED0 - 0x1AC0)
class AEnemyPawn_Parent_C : public AFortAIPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1AC0(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           WeaponCapsuleCollision;                                   // 0x1AC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Elemental_Layer_Audio_Loop;                               // 0x1AD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeMiniBossLightOutTL_Fade_2CE2533F4858E8E5F1A8D39F9CE6D9F4;// 0x1AD8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeMiniBossLightOutTL__Direction_2CE2533F4858E8E5F1A8D39F9CE6D9F4;// 0x1ADC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1ADD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeMiniBossLightOutTL;                                   // 0x1AE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Enemy_Spawn_Out_TL_ColorFadeOutTrack_999FBE184F147A4FE3025AB553DBFA9C;// 0x1AE8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Enemy_Spawn_Out_TL_FadeInTrack_999FBE184F147A4FE3025AB553DBFA9C;// 0x1AEC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Enemy_Spawn_Out_TL__Direction_999FBE184F147A4FE3025AB553DBFA9C;// 0x1AF0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1AF1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Enemy_Spawn_Out_TL;                                       // 0x1AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EnemySpawnInTL_MiniBossFadeLight_5C7376B04DFAE1465B97F1BB1B873D88;// 0x1B00(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemySpawnInTL_ColorFadeOutTrack_5C7376B04DFAE1465B97F1BB1B873D88;// 0x1B04(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemySpawnInTL_FadeInTrack_5C7376B04DFAE1465B97F1BB1B873D88;// 0x1B08(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EnemySpawnInTL__Direction_5C7376B04DFAE1465B97F1BB1B873D88;// 0x1B0C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1B0D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EnemySpawnInTL;                                           // 0x1B10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material_Instance_0;                              // 0x1B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Death_Effects;                                            // 0x1B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             HQ_Death_Particle_System;                                 // 0x1B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathFX_SpawnRateScale;                                   // 0x1B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HQ_DeathFX_MaxDistance;                                   // 0x1B34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LQ_Death_Particle_System;                                 // 0x1B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_CylinderHeight;                                // 0x1B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_CylinderRadius;                                // 0x1B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LQ_DeathFX_SpawnRateScale;                                // 0x1B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1B4C(0x0004) MISSED OFFSET
	struct FName                                       LQ_PS_Socket_Attach;                                      // 0x1B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Death_Socket;                                             // 0x1B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePOCScaleAndMaterials;                                  // 0x1B60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               POCShouldOverrideMaterial;                                // 0x1B61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               POCShouldOverrideMaterialValues;                          // 0x1B62(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x1B63(0x0005) MISSED OFFSET
	class UMaterialInterface*                          POCOverrideMaterial;                                      // 0x1B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                POCMaterialHairColor;                                     // 0x1B70(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                POCMaterialSkinColor;                                     // 0x1B80(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                POCMaterialPantColor;                                     // 0x1B90(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                POCMaterialShirtColor;                                    // 0x1BA0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // 0x1BB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PseudoRandomNetworkedFloat;                               // 0x1BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseRandomColorVariation;                                  // 0x1BBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x1BBD(0x0003) MISSED OFFSET
	TArray<struct FLinearColor>                        MaleHuskHairColors;                                       // 0x1BC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskSkinColors;                                       // 0x1BD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskPantColors;                                       // 0x1BE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLinearColor>                        MaleHuskShirtColors;                                      // 0x1BF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 HieghtDistributionCurve;                                  // 0x1C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RandomizeMeshScale;                                       // 0x1C08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x1C09(0x0007) MISSED OFFSET
	struct FTransform                                  SpawnParticlesTransform;                                  // 0x1C10(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Pumpkin_Head_MID;                                         // 0x1C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpawnParticles;                                           // 0x1C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CharacterElementalParticles;                              // 0x1C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               AllowHeadshot;                                            // 0x1C58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x1C59(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_RangedWeapon;                                          // 0x1C60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    HeadshotParticleSystemComp;                               // 0x1C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                Additive_Hit_React_Montage;                               // 0x1C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Death_Normal_Sound;                                       // 0x1C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Elemental_Audio_Layer_Sound;                              // 0x1C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpecialEventHalloweenPumpkinHead;                         // 0x1CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x1CA1(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_NPCCharacterTypeHuskBasic;                             // 0x1CA8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_SpecialEventHalloweenPumpkinHead;                      // 0x1CC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PumpkinHeadPercentage;                                    // 0x1CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x1CEC(0x0004) MISSED OFFSET
	class UClass*                                      GE_SpecialEvent_Halloween_PumpkinHead;                    // 0x1CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PumpkinHeadRotation;                                      // 0x1CF8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PumpkinHeadScale;                                         // 0x1D04(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PumpkinHeadOffset;                                        // 0x1D10(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1D1C(0x0004) MISSED OFFSET
	struct FName                                       Headshot_FX_Socket;                                       // 0x1D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material_Alteration_0;                                    // 0x1D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material_Alteration_1;                                    // 0x1D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SleepParticleSystemComp;                                  // 0x1D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Husk_Sleeping_Sound;                                      // 0x1D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             HuskSleepSound;                                           // 0x1D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    WakeUpParticleSystemComp;                                 // 0x1D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              AwokenMaxDistance;                                        // 0x1D58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x1D5C(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      AwokenSkeletalMesh;                                       // 0x1D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AwokenSkelMeshMID;                                        // 0x1D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwokenFadeInTime;                                         // 0x1D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwokenFadeOutTime;                                        // 0x1D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwokenDuration;                                           // 0x1D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sleeping;                                                 // 0x1D7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasGlowColorsAssigned;                                    // 0x1D7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnInTimelineCompletedSuccessfully;                     // 0x1D7E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x1D7F(0x0001) MISSED OFFSET
	struct FTimerHandle                                CharacterSpawnInSafetyCheckHandle;                        // 0x1D80(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Base_MID_0;                                               // 0x1D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Previous_MID;                                             // 0x1D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FrozenHuskMeshScale;                                      // 0x1D98(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               SpawnFrozenHuskMesh;                                      // 0x1DA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1DA5(0x0003) MISSED OFFSET
	class UParticleSystem*                             CharacterAmbientParticlesTemplate;                        // 0x1DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CharacterAmbientParticles;                                // 0x1DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateCharacterMesh;                                   // 0x1DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DuplicateCharacterMID;                                    // 0x1DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BoneRefPosePosition;                                      // 0x1DC8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MiniBossSizeScale;                                        // 0x1DD4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UPointLightComponent*                        MiniBossLight;                                            // 0x1DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MinibossPSComponent;                                      // 0x1DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              MiniBossLightIntensity;                                   // 0x1DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterParticlesMaxDrawDistance;                        // 0x1DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slow_Shackle_Scale;                                       // 0x1DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x1DFC(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           Original_Phys_Material;                                   // 0x1E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            Elemental_FXs;                                            // 0x1E08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsMiniBoss;                                               // 0x1E18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x1E19(0x0003) MISSED OFFSET
	struct FVector                                     SizeScale_FireElemental;                                  // 0x1E1C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SizeScale_FireElemental_Head;                             // 0x1E28(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x1E34(0x0004) MISSED OFFSET
	class UMaterialInterface*                          DeathFX_MID_Index0;                                       // 0x1E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Death_FX_MID_Index_1;                                     // 0x1E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeathFX_Use_Strands;                                      // 0x1E48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x1E49(0x0003) MISSED OFFSET
	struct FLinearColor                                DeathFX_EmissiveHot;                                      // 0x1E4C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Death_FX_Emissive_Soft_Color;                             // 0x1E5C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeathFX_Change_Emissive;                                  // 0x1E6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeathFX_Customize_Visuals;                                // 0x1E6D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x1E6E(0x0002) MISSED OFFSET
	struct FLinearColor                                Ice_HandL;                                                // 0x1E70(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Ice_HandR;                                                // 0x1E80(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Ice_HandL_Name;                                           // 0x1E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Ice_HandR_Name;                                           // 0x1E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Ice_SpawnRateScale;                                       // 0x1EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lightning_ElecFresExp;                                    // 0x1EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lightning_SizeScale;                                      // 0x1EA8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lightning_WPOScale;                                       // 0x1EB4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lightning_WPOBias;                                        // 0x1EC0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Lightning_SpawnScaleRate;                                 // 0x1ECC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EnemyPawn_Parent.EnemyPawn_Parent_C");
		return ptr;
	}


	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);
	void DeleteDuplicateCharacterMesh();
	void RestorePreviousPhysMaterialOnCharacterMesh(float Delay_in_Seconds);
	void SetMinibossLightHiddenInGame(bool Hidden);
	void SpawnMinibossLight();
	void SetScalarParameterOnAllCharacterMIDsByMap(TMap<struct FName, float> Map);
	void SetVectorParameterOnAllCharacterMIDsByMap(TMap<struct FName, struct FLinearColor> Map);
	void TransformHitLocationWorldSpaceToPreskinnedLocalSpace(struct FVector* PreskinnedLS);
	void SetElementalParticlesHiddenInGame(bool Hidden);
	void SetDuplicateCharacterMeshHiddenInGame(bool Hidden);
	void CreateDuplicateCharacterMesh(class UMaterialInterface* Material_To_Apply);
	void SpecialEventHalloweenPumpkinHeadHusk(bool ApplyPumpkinHeadMesh, bool DebugApplicationOrRemoval_);
	void RestorePreviousMaterialOnCharacterMesh(float Delay_in_Seconds);
	void CharacterSpawnInSafetyCheck();
	void SpawnParticleSystemOnCharacterMesh(class UParticleSystem* ParticleSystemTemplate, class UParticleSystemComponent* ParticleSystemComponentReferenceVar, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, TArray<struct FParticleSysParam>* InstanceParameters, class UParticleSystemComponent** PSComponentReference);
	void OverridePhysicalMaterialOnCharacterMesh(class UPhysicalMaterial* Physical_Material_Override);
	void DestroyAwokenSkeletalMesh();
	void OverrideMaterialAndCopyParametersOnCharacterMesh(class UMaterialInterface* New_Material_To_Apply);
	void PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage);
	void SetActiveElementalParticles(bool Active, bool Reset);
	void SetScalarParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, float Scalar_Value);
	void SetVectorParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, const struct FVector& Vector_Value);
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
