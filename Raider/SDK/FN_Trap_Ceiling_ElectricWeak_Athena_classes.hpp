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

// BlueprintGeneratedClass Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C
// 0x0060 (0x0D00 - 0x0CA0)
class ATrap_Ceiling_ElectricWeak_Athena_C : public ABuildingTrapCeiling
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CA0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               SoundTriggerComponent;                                    // 0x0CA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    IdleElectricFX;                                           // 0x0CB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Light;                                                    // 0x0CB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TriggerComponent;                                         // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleOutLight_Brightness_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5;// 0x0CD0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleOutLight__Direction_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5;// 0x0CD4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CD5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleOutLight;                                            // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Trap_Placed_Sound;                                        // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Explosion_Sound;                                          // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ChargeSoundInst;                                          // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void ScaleOutLight__FinishedFunc();
	void ScaleOutLight__UpdateFunc();
	void OnPlaced();
	void OnFinishedBuilding();
	void OnReloadEnd();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_Trap_Ceiling_ElectricWeak_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
