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

// BlueprintGeneratedClass Trap_Ceiling_Falling.Trap_Ceiling_Falling_C
// 0x00B1 (0x0D69 - 0x0CB8)
class ATrap_Ceiling_Falling_C : public ABuildingTrapCeiling_Falling
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CB8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Door_3;                                                   // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Door_2;                                                   // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_FallingDirt;                                            // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_10;                                                  // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_9;                                                   // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_8;                                                   // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_7;                                                   // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_6;                                                   // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_5;                                                   // 0x0D00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_4;                                                   // 0x0D08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_3;                                                   // 0x0D10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_2;                                                   // 0x0D18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0D20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0D28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0D30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OpenDoor_Rotation_679D553A46783E44EDCECCA7D120A863;       // 0x0D38(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OpenDoor__Direction_679D553A46783E44EDCECCA7D120A863;     // 0x0D3C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D3D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OpenDoor;                                                 // 0x0D40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               SocketTransforms;                                         // 0x0D48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0D49(0x0007) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                Tires;                                                    // 0x0D50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                TimerHandle;                                              // 0x0D60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bActivated;                                               // 0x0D68(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Ceiling_Falling.Trap_Ceiling_Falling_C");
		return ptr;
	}


	void ToggleTiresAndFX();
	void ToggleDoors(bool bToggle);
	void OnRep_bActivated();
	void ToggleTireVisibility(bool NewHidden);
	void UserConstructionScript();
	void OpenDoor__FinishedFunc();
	void OpenDoor__UpdateFunc();
	void OnPlaced();
	void TrapActivated(float* CooldownDuration);
	void ShowTires();
	void FireDustFX();
	void OpenDoors();
	void CloseDoors();
	void ExecuteUbergraph_Trap_Ceiling_Falling(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
