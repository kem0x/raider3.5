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

// BlueprintGeneratedClass Car_Copper.Car_Copper_C
// 0x01D4 (0x0D84 - 0x0BB0)
class ACar_Copper_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BB0(0x0008) (Transient, DuplicateTransient)
	float                                              Timeline_2_SirenLightMultiplier_0FF34BB7440D69B151AEB98B69DAACB9;// 0x0BB8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_0FF34BB7440D69B151AEB98B69DAACB9;   // 0x0BBC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0BBD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0BC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BounceCar_Vertical_Bounce_Component_05733C554001D77C015F47B548F45A12;// 0x0BC8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BounceCar__Direction_05733C554001D77C015F47B548F45A12;    // 0x0BCC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0BCD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BounceCar;                                                // 0x0BD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_AlarmLightMultiplier_0249B75D481A6B889F74E6BC52A3E21B;// 0x0BD8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_0249B75D481A6B889F74E6BC52A3E21B;   // 0x0BDC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0BDD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               OverallAlarmCycleFinished;                                // 0x0BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0BE9(0x0003) MISSED OFFSET
	struct FLinearColor                                InitialEmissiveMultiplier;                                // 0x0BEC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                InitialEmissiveMultiplier2;                               // 0x0BFC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                AlarmLightCounter;                                        // 0x0C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SoundIsRetriggerable;                                     // 0x0C10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentFlashAnimationCycleFinished;                       // 0x0C11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0C12(0x0002) MISSED OFFSET
	int                                                NumberOfTimesTheLightsFlashWhenHit;                       // 0x0C14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SirenLightEmissiveMultiplier;                             // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SirenLightOn;                                             // 0x0C1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0C1D(0x0003) MISSED OFFSET
	struct FName                                       Emissive_Multiplier_2;                                    // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Emissive_Multiplier;                                      // 0x0C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound___HitAlarm;                                         // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Emissive_2;                                           // 0x0C38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0C39(0x0007) MISSED OFFSET
	class USoundBase*                                  Sound___Jump_on_Car;                                      // 0x0C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuspensionMovementAmount;                                 // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ParticleEffectHas_NOT_AlreadyBeenTriggered;               // 0x0C4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0C4D(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    EngineSteamParticleEffect;                                // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Sound___Hit_AutoBody;                                     // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               canMakeJumpingNoiseAgain;                                 // 0x0C60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CarAlarmIsCurrentlyMakingNoise;                           // 0x0C61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CarAlarmEnabled;                                          // 0x0C62(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RandomlyDisableSomeCarAlarms;                             // 0x0C63(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PercentageChanceOfCarAlarmsBeingDisabled;                 // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        HLight1;                                                  // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     HLight1SocketLocation;                                    // 0x0C70(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HLight2SocketLocation;                                    // 0x0C7C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            AnimatingMIDArray;                                        // 0x0C88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAudioComponent*                             AudibleAlarmSound;                                        // 0x0C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               UseCarBounce;                                             // 0x0CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseCarAlarm;                                              // 0x0CA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0CA2(0x0002) MISSED OFFSET
	float                                              Headlight_Emissive_Brightness;                            // 0x0CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCarAlarmEnabledInitialized;                             // 0x0CA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugWind;                                                // 0x0CA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x0CAA(0x0006) MISSED OFFSET
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                        // 0x0CB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  IntenseWindMaterialsForPreview;                           // 0x0CC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Debug_TempMaterial;                                       // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Debug_Wind_Intensity;                                     // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0CDC(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Wind_Intensity_Debug_Mesh;                                // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               CanDropOilDecal;                                          // 0x0CE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0CE9(0x0003) MISSED OFFSET
	float                                              Wind_Yaw_Rotation;                                        // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPointLightComponent*                        Taillight1;                                               // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Taillight2;                                               // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TailLightBrightness;                                      // 0x0D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TailLightsExist;                                          // 0x0D04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HeadLightsExist;                                          // 0x0D05(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0D06(0x0002) MISSED OFFSET
	class USpotLightComponent*                         HLight2;                                                  // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              HeadLightLightBrightness;                                 // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TLight1SocketLocation;                                    // 0x0D14(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TLight2SocketLocation;                                    // 0x0D20(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Bounce_Offset;                                            // 0x0D2C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     hlight2___impact_bounce_light_location;                   // 0x0D38(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     tlight2___impact_bounce_light_location;                   // 0x0D44(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Car_Currently_Bouncing_From_Jump;                         // 0x0D50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0D51(0x0003) MISSED OFFSET
	struct FVector                                     hlight1___impact_bounce_light_location;                   // 0x0D54(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     tlight1___impact_bounce_light_location;                   // 0x0D60(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Randomly_start_with_some_cars_lights_on;                  // 0x0D6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0D6D(0x0003) MISSED OFFSET
	float                                              Percentage_chance_of_lights_being_left_off;               // 0x0D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Final_Random_Light_Intensity_Variance;                    // 0x0D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               This_Car_s_Lights_Have_Been_Randomly_Enabled;             // 0x0D78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnHeadLightsOn;                                         // 0x0D79(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x0D7A(0x0002) MISSED OFFSET
	float                                              TimeSinceLastJumpSound;                                   // 0x0D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeBetweenJumpSound;                                  // 0x0D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Car_Copper.Car_Copper_C");
		return ptr;
	}


	void PlayJumpOnCarSound(const struct FVector& Location);
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
