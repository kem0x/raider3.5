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

// BlueprintGeneratedClass PlayerPawn_Generic.PlayerPawn_Generic_C
// 0x04F5 (0x1F6D - 0x1A78)
class APlayerPawn_Generic_C : public APlayerPawn_Generic_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1A78(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    SplashEffectsForEnteringOrExitingWater;                   // 0x1A80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    GamplayWindInteractionEffects;                            // 0x1A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Run_Land;                                   // 0x1A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Walk_Land;                                  // 0x1A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Walk_Water;                                 // 0x1AA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Run_Water;                                  // 0x1AA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_WaterInteraction_FX;                               // 0x1AB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    AnimTrailPS;                                              // 0x1AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    HitDamageParticles;                                       // 0x1AC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            SpeechBubbleComponent;                                    // 0x1AC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         PlayerLight;                                              // 0x1AD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CapsuleFadeTL_RemoveShadow_018B40864B973FCD649A23BAC2709F23;// 0x1AD8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CapsuleFadeTL__Direction_018B40864B973FCD649A23BAC2709F23;// 0x1ADC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1ADD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CapsuleFadeTL;                                            // 0x1AE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Full_Shield_Health_Push_6222ABB047B8F22E3C9FC983BD70CEA6; // 0x1AE8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Full_Shield_Health_Impact_6222ABB047B8F22E3C9FC983BD70CEA6;// 0x1AEC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Full_Shield_Health__Direction_6222ABB047B8F22E3C9FC983BD70CEA6;// 0x1AF0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1AF1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Full_Shield_Health;                                       // 0x1AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Shield_DamageTimeline_Impact_6DC09F024CD096186AE1389FB8061E30;// 0x1B00(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Shield_DamageTimeline__Direction_6DC09F024CD096186AE1389FB8061E30;// 0x1B04(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1B05(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Shield_DamageTimeline;                                    // 0x1B08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Shield_Regen_Timeline_Opacity_3DC9958C47D4CEFA60E68699D92BA374;// 0x1B10(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Shield_Regen_Timeline_Push_3DC9958C47D4CEFA60E68699D92BA374;// 0x1B14(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Shield_Regen_Timeline__Direction_3DC9958C47D4CEFA60E68699D92BA374;// 0x1B18(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1B19(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Shield_Regen_Timeline;                                    // 0x1B20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Shield_ShatterTimeline_Push_F3223F2D4A6B8642F950B0A15F8C6699;// 0x1B28(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Shield_ShatterTimeline_Opacity_F3223F2D4A6B8642F950B0A15F8C6699;// 0x1B2C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Shield_ShatterTimeline_HighlightCracks_F3223F2D4A6B8642F950B0A15F8C6699;// 0x1B30(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Shield_ShatterTimeline__Direction_F3223F2D4A6B8642F950B0A15F8C6699;// 0x1B34(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1B35(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Shield_ShatterTimeline;                                   // 0x1B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HealthSweep_SafetyOpacity_2A96303441845D0EAAAB1EB68183F8A8;// 0x1B40(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealthSweep_Sweep_2A96303441845D0EAAAB1EB68183F8A8;       // 0x1B44(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    HealthSweep__Direction_2A96303441845D0EAAAB1EB68183F8A8;  // 0x1B48(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x1B49(0x0007) MISSED OFFSET
	class UTimelineComponent*                          HealthSweep;                                              // 0x1B50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerHealthDamageDirection;                 // 0x1B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerHealthDamage;                          // 0x1B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerShieldDamageDirection;                 // 0x1B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerShieldDamage;                          // 0x1B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HitByHuskProjectileClass;                                 // 0x1B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HitByHuskRangedSound;                                     // 0x1B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  HitByHuskMeleeSound;                                      // 0x1B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SoulSuckVictimMontage;                                    // 0x1B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpeed;                                              // 0x1B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Run_Particle_Activate_Speed;                              // 0x1B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Walk_Dust_Activate_Speed;                                 // 0x1BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Walk_Particle_Reset_Speed;                                // 0x1BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousVelocityVector;                                   // 0x1BA8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnRunKickupFX_;                                     // 0x1BB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnWalkKickupFX_;                                    // 0x1BB5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnDustLandFX_;                                      // 0x1BB6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInWater_1;                                              // 0x1BB7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RunWalkParticleRotation;                                  // 0x1BB8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNinjaInShadowStance_;                                   // 0x1BC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1BC5(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTagsForHitByHuskMeleeSound;                       // 0x1BC8(0x0020) (Edit, BlueprintVisible)
	class UMaterialInterface*                          Adrenaline_Material;                                      // 0x1BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            AdrenalineRush_HeadAnimatingMIDS;                         // 0x1BF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            AdrenalineRush_BodyAnimatingMIDS;                         // 0x1C00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                Adrenaline_Rush_Color_Outer_Direct;                       // 0x1C10(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Adrenaline_Rush_Color_Inner_Direct;                       // 0x1C20(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Adrenaline_Rush_WPO_Offset;                               // 0x1C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x1C34(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Shield_Material;                                          // 0x1C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            BodyShieldMIDArray;                                       // 0x1C40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            HeadShieldMIDArray;                                       // 0x1C50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Shield_Active;                                            // 0x1C60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1C61(0x0003) MISSED OFFSET
	float                                              Tick_Delta_Seconds;                                       // 0x1C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_Damage_Wave_Animation;                             // 0x1C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Overall_Shield_Damage_Wave_Animation_Length;              // 0x1C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              size;                                                     // 0x1C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dying;                                                    // 0x1C74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanRippleAgain;                                           // 0x1C75(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x1C76(0x0002) MISSED OFFSET
	class USoundBase*                                  Sound_Shield_Impact;                                      // 0x1C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Destroyed;                                   // 0x1C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_FullyCharged;                                // 0x1C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_StartRecharge;                               // 0x1C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_Shatter_Opacity;                                   // 0x1C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Regen_Opacity;                                            // 0x1C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage_Opacity;                                           // 0x1CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Default_Shield_opacity;                                   // 0x1CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Shield_PushMinValue;                                      // 0x1CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_Hit;                                        // 0x1CAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_Recover;                                    // 0x1CAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_Shatter;                                    // 0x1CAE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShieldVisible_FullHealth;                                 // 0x1CAF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Fully_Regened_Shield_health_Opacity;                      // 0x1CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x1CB4(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_GameplayCueDamageShielded;                             // 0x1CB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LatestDamageIsShieldDamage;                               // 0x1CD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1CD9(0x0003) MISSED OFFSET
	float                                              Damage_Taken;                                             // 0x1CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Last_Shield_Damage_Time;                                  // 0x1CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x1CE4(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            CharmShieldMIDArray;                                      // 0x1CE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               BodyValid;                                                // 0x1CF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackpackValid;                                            // 0x1CF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HatValid;                                                 // 0x1CFA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FaceValid;                                                // 0x1CFB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CharmValid;                                               // 0x1CFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HeadValid;                                                // 0x1CFD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x1CFE(0x0002) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            AdrenalineRush_CharmAnimatingMIDS;                        // 0x1D00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Adrenaline_Rush_MID_Collection;                           // 0x1D10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             P_DBNOResurrect;                                          // 0x1D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DBNOResurrectSound;                                       // 0x1D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               On_Player_Built_Floor;                                    // 0x1D30(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x1D31(0x0007) MISSED OFFSET
	struct FGameplayTag                                Event_NeedRoadsActive;                                    // 0x1D38(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_NeedRoadsDeactive;                                  // 0x1D40(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_WhereWereGoingWeNeedRoads;                             // 0x1D48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             Effect_Player_LandedDust;                                 // 0x1D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            TempArray;                                                // 0x1D70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                      Shield_BodySkeletalMesh;                                  // 0x1D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Shield_HeadSkeletalMesh;                                  // 0x1D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Shield_CharmSkeletalMesh;                                 // 0x1D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Adrenaline_Rush_Body;                                     // 0x1D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Adrenaline_Rush_Head;                                     // 0x1DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Adrenaline_Rush_Charm;                                    // 0x1DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Sound_Player_Hit;                                         // 0x1DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UForceFeedbackEffect*                        DamageForceFeedback;                                      // 0x1DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    DBNOParticles;                                            // 0x1DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Effect_Player_Landed_WindVector_P;                        // 0x1DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpeechBubbleWidgetClass;                                  // 0x1DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       LastSpeechText;                                           // 0x1DD8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      DamageCameraShake;                                        // 0x1DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseAnimTrailsNotifies;                                    // 0x1DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x1DF9(0x0007) MISSED OFFSET
	struct FHitResult                                  WaterTraceHitLocation;                                    // 0x1E00(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StableVelocityVector;                                     // 0x1E88(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x1E94(0x0004) MISSED OFFSET
	class UParticleSystem*                             PlayerRunTemplate_Ground;                                 // 0x1E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerWalkTemplate_Ground;                                // 0x1EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerRunTemplate_Water;                                  // 0x1EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerWalkTemplate_Water;                                 // 0x1EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               Pawn_Charm_Skeletal_Mesh;                                 // 0x1EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultShieldOpacity;                                     // 0x1EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x1EC4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    AnimTrailsPS_Ref;                                         // 0x1EC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Adrenaline_Rush_Color_Outer_Periodic;                     // 0x1ED0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          WeaponMaterialOverride;                                   // 0x1EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Adrenaline_Rush_Color_Inner_Periodic;                     // 0x1EE8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               TickWaterLevel;                                           // 0x1EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x1EF9(0x0007) MISSED OFFSET
	class UTextureRenderTarget2D*                      WetnessDepthTexture;                                      // 0x1F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterLevelMID;                                            // 0x1F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterDecayMID;                                            // 0x1F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Was_RTT_Enabled_Var_Set;                                  // 0x1F18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Water_Scene_Capture_Enabled;                              // 0x1F19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x1F1A(0x0002) MISSED OFFSET
	float                                              StartingMinCapsuleShadowVis;                              // 0x1F1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CachedEffect;                                             // 0x1F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            WaterInteractionWakeMIDS;                                 // 0x1F28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                WaterInteractionWakeMeshes;                               // 0x1F38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Character_Calve_Length;                                   // 0x1F48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfCyclingWaterMeshes;                               // 0x1F4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                WaterTraceImpactNormalAndZHeightLocation;                 // 0x1F50(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerVelocity;                                           // 0x1F60(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableRunWalkWaterGroundFX;                               // 0x1F6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Generic.PlayerPawn_Generic_C");
		return ptr;
	}


	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void TriggerGameplayWindEmitter(TEnumAsByte<EPlayerWindParticleEmitters> Player_Wind_Particle_Emitter_To_Fire);
	void Are_the_wind_and_water_RTT_passes_enabled(bool* NewParam);
	void DisableWaterLevelTick();
	void SetAdrenalineRushVisibility(bool Visible);
	void OnRep_On_Player_Built_Floor();
	void Setup_FX_Mesh_Duplicates(int Translucent_Sort_Order, bool Transfer_Material_Parameters, class UMaterialInterface** Material_To_Apply, TArray<class UMaterialInstanceDynamic*>* Charm_MID_Array, class USkeletalMeshComponent** Charm_Mesh, TArray<class UMaterialInstanceDynamic*>* Head_MID_Array, class USkeletalMeshComponent** Head_Mesh, TArray<class UMaterialInstanceDynamic*>* Body_MID_Array, class USkeletalMeshComponent** Body_Mesh);
	void Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_To_Apply, int TranslucentSortPriority, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, class UPoseableMeshComponent** PoseableMesh);
	void ToggleShieldVisibility();
	void SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* Master);
	void SetShieldMids_InternalLoop(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push, TArray<class UMaterialInstanceDynamic*>* NewParam1);
	void SetShieldMids(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push);
	void FindShieldOpacity();
	void Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_To_Apply, int TranslucentSortPriority, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array);
	void UserConstructionScript();
	void CapsuleFadeTL__FinishedFunc();
	void CapsuleFadeTL__UpdateFunc();
	void HealthSweep__FinishedFunc();
	void HealthSweep__UpdateFunc();
	void Shield_Regen_Timeline__FinishedFunc();
	void Shield_Regen_Timeline__UpdateFunc();
	void Shield_ShatterTimeline__FinishedFunc();
	void Shield_ShatterTimeline__UpdateFunc();
	void Shield_DamageTimeline__FinishedFunc();
	void Shield_DamageTimeline__UpdateFunc();
	void Full_Shield_Health__FinishedFunc();
	void Full_Shield_Health__UpdateFunc();
	void MeleeSwingRight();
	void MeleeSwingLeft();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnLanded(struct FHitResult* Hit);
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnWeaponEquipped(class AFortWeapon** NewWeapon, class AFortWeapon** PrevWeapon);
	void ReceiveTick(float* DeltaSeconds);
	void FootStepLeft();
	void FootStepRight();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void SetFirstPersonCamera(bool* bNewUseFirstPersonCamera);
	void InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera);
	void GameplayCue_Abilities_Activation_DBNOResurrect(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnBaseChanged(class AActor** NewBase);
	void ReceivePossessed(class AController** NewController);
	void OnDisplaySentence(struct FText* SpeechText);
	void OnClearSentence();
	void ReceiveDestroyed();
	void ClientBindWeaponSwap(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void BindWeaponSwap(float InDuration);
	void MultiSwapWeapon(class AFortWeapon* New, class AFortWeapon* Prev);
	void UnBindWeaponSwap();
	void MultiEndSwap(class AFortWeapon* CurrentWeapon);
	void Clean_up_DBNO_fx();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void CharacterDestroyed(class AActor* DestroyedActor);
	void BindOnDestroyed();
	void FadeOutCapsuleShadow();
	void SpawnDBNOParticles(const struct FVector& ParticleLocation, const struct FVector& HitNormal);
	void PlayGameplayWindEffect(TEnumAsByte<EPlayerWindParticleEmitters> Player_Wind_Particle_Emitter_To_Fire);
	void GameplayCue_Abilities_Death_FadeCapsule_StW(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void Entered_Water_Volume();
	void Player_Creates_a_Splash(struct FTransform* NewTransform);
	void ReinitializeWeaponMaterialArray();
	void OnLand_CE();
	void Test_Adrenaline_Rush();
	void GameplayCue_Generic_AdrenalineRush_DirectHeal(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_FullyCharged(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void AnimTrailsSetup(class UParticleSystem** ParticleSystemReference, struct FName* FirstSocketName, struct FName* SecondSocketName, float* Width);
	void AnimTrailsDisable();
	void AnimTrailsNotify(bool* bActive);
	void ExecuteUbergraph_PlayerPawn_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
