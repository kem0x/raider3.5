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

// BlueprintGeneratedClass GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C
// 0x0084 (0x04A4 - 0x0420)
class AGCL_MedicPack_FuelRegen_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	float                                              FullBlinkTimeline_Blink_E9F43B6D4602FAD63F4CBEB5A2D6506B; // 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FullBlinkTimeline__Direction_E9F43B6D4602FAD63F4CBEB5A2D6506B;// 0x042C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FullBlinkTimeline;                                        // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedParticleEmitter;                                   // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bFuelRechargeAudioEnabled;                                // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class APlayerPawn_Athena_C*                        PlayerPawn;                                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              UpwardThrustMax;                                          // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LateralThrustMax;                                         // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpwardAccelerationMax;                                    // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LateralAccelerationMax;                                   // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentUpwardVelocity;                                    // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelMax;                                                  // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetFuelVolumeMultiplier;                               // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFuelVolumeMultiplier;                              // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnFuelRecharged;                                     // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnFuelChargeRamp;                                    // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayedFuelRecharge;                                      // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	float                                              JetpackActivatedTime;                                     // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelRechargeRampVolumeMultiplier;                         // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 FuelRechargeRampVolumeCurve;                              // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             OnFuelRechargeRamp_Comp;                                  // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              ReserveFuelMax;                                           // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C");
		return ptr;
	}


	float GetReserveFuel();
	void GetReserveFuelPercent(float* FuelPercent);
	float GetFuel();
	void SetFuelRechargeAudioEnabled(bool Enabled);
	void GetFuelPercent(float* FuelPercent);
	void CacheAttributes();
	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void FullBlinkTimeline__FinishedFunc();
	void FullBlinkTimeline__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void Audio_Tick();
	void ResetBlink();
	void Start_Fuel_Blink_FX();
	void ExecuteUbergraph_GCL_MedicPack_FuelRegen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
