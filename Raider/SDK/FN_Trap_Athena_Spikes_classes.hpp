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

// BlueprintGeneratedClass Trap_Athena_Spikes.Trap_Athena_Spikes_C
// 0x00B8 (0x0D58 - 0x0CA0)
class ATrap_Athena_Spikes_C : public ABuildingTrap
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CA0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Spike_Mesh;                                               // 0x0CA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Trigger;                                                  // 0x0CB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0CB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ResetSpikes_LERP_D054F7574E7A1041A552A5805E6C81D1;        // 0x0CC0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ResetSpikes__Direction_D054F7574E7A1041A552A5805E6C81D1;  // 0x0CC4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CC5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ResetSpikes;                                              // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Retract_LERP_714CAEE5449A32850D6231AEDA918B58;            // 0x0CD0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Retract__Direction_714CAEE5449A32850D6231AEDA918B58;      // 0x0CD4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CD5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Retract;                                                  // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Fire_LERP_630B749B437E5CB83CB49287CC92E385;               // 0x0CE0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Fire__Direction_630B749B437E5CB83CB49287CC92E385;         // 0x0CE4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0CE5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Fire;                                                     // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Place_Trap_Sound;                                         // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Reload_Sound;                                             // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeRestingScale;                                        // 0x0D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeActiveScale;                                         // 0x0D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpikeHoldOnFireLength;                                    // 0x0D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0D24(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SpikesMID;                                                // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepExponent;                                            // 0x0D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SweepColor;                                               // 0x0D34(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepSpeed;                                               // 0x0D44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          FriendlyTrapMaterial;                                     // 0x0D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          NormalSpikeMaterial;                                      // 0x0D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Athena_Spikes.Trap_Athena_Spikes_C");
		return ptr;
	}


	void ChangeToNormalMaterial();
	void _ChangeToFriendlyMaterial();
	void MaterialSweepOnSpikes(float SweepSpeed, const struct FLinearColor& SweepColor, float SweepExponent);
	void SetSpikePosition(float NewSpikePosition);
	void UserConstructionScript();
	void Fire__FinishedFunc();
	void Fire__UpdateFunc();
	void Retract__FinishedFunc();
	void Retract__UpdateFunc();
	void Retract__Sounds__EventFunc();
	void ResetSpikes__FinishedFunc();
	void ResetSpikes__UpdateFunc();
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void OnInitTeam();
	void ExecuteUbergraph_Trap_Athena_Spikes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
