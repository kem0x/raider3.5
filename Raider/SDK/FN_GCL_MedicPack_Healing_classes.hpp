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

// BlueprintGeneratedClass GCL_MedicPack_Healing.GCL_MedicPack_Healing_C
// 0x00B8 (0x04D8 - 0x0420)
class AGCL_MedicPack_Healing_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	float                                              Jetpack_Audio_Modulation_Fuel_E6BF5E374A75EF92C9BA39AD2DF18C25;// 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Jetpack_Audio_Modulation__Direction_E6BF5E374A75EF92C9BA39AD2DF18C25;// 0x042C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Jetpack_Audio_Modulation;                                 // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnedParticleEmitter;                                   // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bJetpackAudioEnabled;                                     // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class USoundBase*                                  SoundOnStart;                                             // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnStop;                                              // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundLoopOnIdle;                                          // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundLoopOnAccel;                                         // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             OnIdleAudio_Comp;                                         // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             OnAccelAudio_Comp;                                        // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class APlayerPawn_Athena_C*                        PlayerPawn;                                               // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundLoopOnOutOfFuel;                                     // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             OnOutOfFuelAudio_Comp;                                    // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TargetFuelVolumeMultiplier;                               // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFuelVolumeMultiplier;                              // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnFuelWarning;                                       // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnOutOfFuel;                                         // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundOnThrust;                                            // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayedFuelWarning;                                       // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFirstJump;                                             // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04B2(0x0002) MISSED OFFSET
	float                                              JetpackActivatedTime;                                     // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CachedFuelPercent;                                        // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CachedRenderingDetailMode;                                // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FXScale;                                                  // 0x04C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             AOE_Heal_FX;                                              // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCL_MedicPack_Healing.GCL_MedicPack_Healing_C");
		return ptr;
	}


	bool WhileActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void CacheRenderingDetailMode();
	void CalculateFuelPercentage();
	float GetMaxFuel();
	float GetFuel();
	void GetFuelPercent(float* FuelPercent);
	void CacheAttributes();
	void SetJetpackAudioEnabled(bool Enabled);
	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void Jetpack_Audio_Modulation__FinishedFunc();
	void Jetpack_Audio_Modulation__UpdateFunc();
	void Jetpack_Audio_Modulation__FuelWarning__EventFunc();
	void Audio_Tick();
	void On_Pawn_Landed(const struct FHitResult& Hit);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_GCL_MedicPack_Healing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
