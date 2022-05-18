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

// BlueprintGeneratedClass Car_Copper.Car_Copper_C
// 0x01CA (0x0FCA - 0x0E00)
class ACar_Copper_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E00(0x0008) (Transient, DuplicateTransient)
	float                                              Timeline_2_SirenLightMultiplier_0FF34BB7440D69B151AEB98B69DAACB9;// 0x0E08(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_0FF34BB7440D69B151AEB98B69DAACB9;   // 0x0E0C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E0D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2_3;                                             // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BounceCar_Vertical_Bounce_Component_05733C554001D77C015F47B548F45A12;// 0x0E18(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BounceCar__Direction_05733C554001D77C015F47B548F45A12;    // 0x0E1C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E1D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BounceCar;                                                // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_AlarmLightMultiplier_0249B75D481A6B889F74E6BC52A3E21B;// 0x0E28(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_0249B75D481A6B889F74E6BC52A3E21B;   // 0x0E2C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0E2D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               OverallAlarmCycleFinished;                                // 0x0E38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0E39(0x0003) MISSED OFFSET
	struct FLinearColor                                InitialEmissiveMultiplier;                                // 0x0E3C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                InitialEmissiveMultiplier2;                               // 0x0E4C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                AlarmLightCounter;                                        // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SoundIsRetriggerable;                                     // 0x0E60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentFlashAnimationCycleFinished;                       // 0x0E61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0E62(0x0002) MISSED OFFSET
	int                                                NumberOfTimesTheLightsFlashWhenHit;                       // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SirenLightEmissiveMultiplier;                             // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SirenLightOn;                                             // 0x0E6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0E6D(0x0003) MISSED OFFSET
	struct FName                                       Emissive_Multiplier_2;                                    // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Emissive_Multiplier;                                      // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound___HitAlarm;                                         // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Emissive_2;                                           // 0x0E88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0E89(0x0007) MISSED OFFSET
	class USoundBase*                                  Sound___Jump_on_Car;                                      // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionMovementAmount;                                 // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ParticleEffectHas_NOT_AlreadyBeenTriggered;               // 0x0E9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0E9D(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    EngineSteamParticleEffect;                                // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Sound___Hit_AutoBody;                                     // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               canMakeJumpingNoiseAgain;                                 // 0x0EB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CarAlarmIsCurrentlyMakingNoise;                           // 0x0EB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CarAlarmEnabled;                                          // 0x0EB2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RandomlyDisableSomeCarAlarms;                             // 0x0EB3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentageChanceOfCarAlarmsBeingDisabled;                 // 0x0EB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        HLight1;                                                  // 0x0EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     HLight1SocketLocation;                                    // 0x0EC0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HLight2SocketLocation;                                    // 0x0ECC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            AnimatingMIDArray;                                        // 0x0ED8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAudioComponent*                             AudibleAlarmSound;                                        // 0x0EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               UseCarBounce;                                             // 0x0EF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseCarAlarm;                                              // 0x0EF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0EF2(0x0002) MISSED OFFSET
	float                                              Headlight_Emissive_Brightness;                            // 0x0EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCarAlarmEnabledInitialized;                             // 0x0EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugWind;                                                // 0x0EF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x0EFA(0x0006) MISSED OFFSET
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                        // 0x0F00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  IntenseWindMaterialsForPreview;                           // 0x0F10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Debug_TempMaterial;                                       // 0x0F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Debug_Wind_Intensity;                                     // 0x0F28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0F2C(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Wind_Intensity_Debug_Mesh;                                // 0x0F30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               CanDropOilDecal;                                          // 0x0F38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0F39(0x0003) MISSED OFFSET
	float                                              Wind_Yaw_Rotation;                                        // 0x0F3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPointLightComponent*                        Taillight1;                                               // 0x0F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Taillight2;                                               // 0x0F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TailLightBrightness;                                      // 0x0F50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TailLightsExist;                                          // 0x0F54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HeadLightsExist;                                          // 0x0F55(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0F56(0x0002) MISSED OFFSET
	class USpotLightComponent*                         HLight2;                                                  // 0x0F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              HeadLightLightBrightness;                                 // 0x0F60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TLight1SocketLocation;                                    // 0x0F64(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TLight2SocketLocation;                                    // 0x0F70(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Bounce_Offset;                                            // 0x0F7C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     hlight2___impact_bounce_light_location;                   // 0x0F88(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     tlight2___impact_bounce_light_location;                   // 0x0F94(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Car_Currently_Bouncing_From_Jump;                         // 0x0FA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0FA1(0x0003) MISSED OFFSET
	struct FVector                                     hlight1___impact_bounce_light_location;                   // 0x0FA4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     tlight1___impact_bounce_light_location;                   // 0x0FB0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Randomly_start_with_some_cars_lights_on;                  // 0x0FBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0FBD(0x0003) MISSED OFFSET
	float                                              Percentage_chance_of_lights_being_left_off;               // 0x0FC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Final_Random_Light_Intensity_Variance;                    // 0x0FC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               This_Car_s_Lights_Have_Been_Randomly_Enabled;             // 0x0FC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnHeadLightsOn;                                         // 0x0FC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Car_Copper.Car_Copper_C");
		return ptr;
	}


	void toggle_light_visibility(bool bNewVisibility);
	void Randomize_the_target_brightness_levels();
	void Set_Light_Brightness(float _0_1_Intensity, bool Include_Second_Emissive_Channel);
	float MaterialEditorSine(float Look_up_value, float Period);
	float SetCarAlarmEnabledBasedOnLocation(const struct FVector& Location, bool* NewParam);
	void setcanmakebouncingnoisetrue();
	void StopCarAlarmFromPlaying();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BounceCar__FinishedFunc();
	void BounceCar__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_2__FireOffNoise__EventFunc();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void StartSirenLight();
	void FadeSirenLight();
	void TriggerLowHealthParticleEffect();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void FireOffCarAlarm();
	void OnBounceAnimationUpdate(struct FFortBounceData* Data);
	void Hit_Bounce_Finished();
	void Player_jump_based_bounce_();
	void ExecuteUbergraph_Car_Copper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
