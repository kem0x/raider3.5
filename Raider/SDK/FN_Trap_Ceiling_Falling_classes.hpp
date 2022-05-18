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

// BlueprintGeneratedClass Trap_Ceiling_Falling.Trap_Ceiling_Falling_C
// 0x00B1 (0x0FA1 - 0x0EF0)
class ATrap_Ceiling_Falling_C : public ABuildingTrapCeiling_Falling
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0EF0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Door_2_3;                                                 // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Door_1_2;                                                 // 0x0F00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_FallingDirt;                                            // 0x0F08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_9_10;                                                // 0x0F10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_8_9;                                                 // 0x0F18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_7_8;                                                 // 0x0F20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_6_7;                                                 // 0x0F28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_5_6;                                                 // 0x0F30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_4_5;                                                 // 0x0F38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_3_4;                                                 // 0x0F40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_2_3;                                                 // 0x0F48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tire_1_2;                                                 // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0F60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0F68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OpenDoor_Rotation_679D553A46783E44EDCECCA7D120A863;       // 0x0F70(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OpenDoor__Direction_679D553A46783E44EDCECCA7D120A863;     // 0x0F74(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0F75(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OpenDoor;                                                 // 0x0F78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               SocketTransforms;                                         // 0x0F80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0F81(0x0007) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                Tires;                                                    // 0x0F88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FTimerHandle                                TimerHandle;                                              // 0x0F98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bActivated;                                               // 0x0FA0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
