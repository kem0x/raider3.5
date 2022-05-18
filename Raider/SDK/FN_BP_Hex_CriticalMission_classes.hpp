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

// BlueprintGeneratedClass BP_Hex_CriticalMission.BP_Hex_CriticalMission_C
// 0x00C8 (0x0784 - 0x06BC)
class ABP_Hex_CriticalMission_C : public ABP_Hex_PARENT_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_QuickplaySmoke;                                         // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Particle03;                                               // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Particle01;                                               // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudRadar_Wire;                                     // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudRadar_02;                                       // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudRadar_01;                                       // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudRadar_03;                                       // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_CriticalMission_Rotate01;                              // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudCircle_04;                                      // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudCircle_03;                                      // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_HexCloudCircle_02;                                      // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CloudRotateDummy;                                         // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_HexRadarFalloffMesh;                                    // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Rotate_MPCRotation_0011687F41B08479D913F5901B8B4F9D;      // 0x0730(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Rotate_MeshRotation_0011687F41B08479D913F5901B8B4F9D;     // 0x0734(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Rotate__Direction_0011687F41B08479D913F5901B8B4F9D;       // 0x0738(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0739(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Rotate;                                                   // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_Hex_PARENT_C*>                    ActiveTilesArray;                                         // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    RadarWireMID;                                             // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloudHeightZ;                                             // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0764(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DM_Cloud01;                                               // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DM_Cloud02;                                               // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CloudLightVector;                                         // 0x0778(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hex_CriticalMission.BP_Hex_CriticalMission_C");
		return ptr;
	}


	void UserConstructionScript();
	void Rotate__FinishedFunc();
	void Rotate__UpdateFunc();
	void DeactivateCriticalMission();
	void ActivateCriticalMission();
	void ExecuteUbergraph_BP_Hex_CriticalMission(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
