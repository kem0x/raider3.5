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

// BlueprintGeneratedClass B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C
// 0x0050 (0x04E0 - 0x0490)
class AB_PlacementPreview_MissleBattery_Homing_C : public AFortDecoPreview
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Athena_BullsEye;                                        // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPawn*                                   FortPawn;                                                 // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAimDistance;                                           // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	struct FTimerHandle                                UpdateAimTimer;                                           // 0x04B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     AimLocation;                                              // 0x04C0(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	class ABuildingActor*                              TargetingWidget;                                          // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AB_Placement_Pack_MissileBattery_C*          TargetingActor;                                           // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_PlacementPreview_MissleBattery_Homing.B_PlacementPreview_MissleBattery_Homing_C");
		return ptr;
	}


	void GetAimLocFromPlacementPreview(struct FVector* AimLocation);
	void UpdateAim();
	void GetPlayerController(class AFortPlayerControllerZone** Controller);
	void GetGadgetItem(class UFortItem** Gadget);
	void UserConstructionScript();
	void PawnSetHere(class AFortPawn* FortPawn);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnUpdateVisuals(float* DeltaSeconds, bool* bSafeToPlace);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_B_PlacementPreview_MissleBattery_Homing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
