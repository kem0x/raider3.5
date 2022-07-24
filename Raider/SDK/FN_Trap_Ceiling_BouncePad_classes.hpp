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

// BlueprintGeneratedClass Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C
// 0x01C8 (0x0E68 - 0x0CA0)
class ATrap_Ceiling_BouncePad_C : public ABuildingTrapCeiling
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CA0(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0CA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BouncePadFX;                                              // 0x0CB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Trigger;                                                  // 0x0CB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Reload_Sound;                                             // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Place_Trap_Sound;                                         // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Destroyed_Sound;                                     // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      OverlappedActor;                                          // 0x0CF8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Player_DestructionRange;                                  // 0x0D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0D04(0x0004) MISSED OFFSET
	struct FGameplayTag                                BouncePadTagMaxCount;                                     // 0x0D08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawnAthena*                       LaunchedPlayer;                                           // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortAthenaVehicle*                          LaunchedVehicle;                                          // 0x0D18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_LowGravity;                                            // 0x0D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_BounceTracker1;                                        // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_BounceTracker2;                                        // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              VehicleVelocityMultiplier;                                // 0x0D38(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              VehicleMinLateralVelocity;                                // 0x0D60(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              VehicleMaxVelocity;                                       // 0x0D88(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              PlayerMaxLateralVelocity;                                 // 0x0DB0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              PlayerMaxDownwardVelocity;                                // 0x0DD8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              PlayerMaxVelocity;                                        // 0x0E00(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IgnoreFallDamage;                                         // 0x0E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0E29(0x0007) MISSED OFFSET
	class UClass*                                      GE_LowGravityNoFX;                                        // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_LowGravityWithHopRocks;                                // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              SetIgnoreFallDamage;                                      // 0x0E40(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Ceiling_BouncePad.Trap_Ceiling_BouncePad_C");
		return ptr;
	}


	void ApplyGameplayEffects();
	void OnRep_Overlappedactor();
	void PlayerLaunch(class AFortPlayerPawnAthena* Player);
	void VehicleLaunch(class AFortAthenaVehicle* Vehicle);
	void UserConstructionScript();
	void OnPlaced();
	void OnFinishedBuilding();
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveDestroyed();
	void ExecuteUbergraph_Trap_Ceiling_BouncePad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
