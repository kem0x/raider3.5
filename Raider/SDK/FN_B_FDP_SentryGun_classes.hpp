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

// BlueprintGeneratedClass B_FDP_SentryGun.B_FDP_SentryGun_C
// 0x0030 (0x04F0 - 0x04C0)
class AB_FDP_SentryGun_C : public AFortDecoPreview
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        S_Turret_Aim_Range;                                       // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AmmoMesh;                                                 // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Gun;                                                      // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Base;                                                     // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CollisionCapsule;                                         // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_FDP_SentryGun.B_FDP_SentryGun_C");
		return ptr;
	}


	void SetupMIDForMeshComponent(class UStaticMeshComponent* MeshComp);
	void UserConstructionScript();
	void OnInitializeDecoPreview(class ABuildingActor** NewBuildingActor, class UFortDecoItemDefinition** NewDecoItemDefinition);
	void ExecuteUbergraph_B_FDP_SentryGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
