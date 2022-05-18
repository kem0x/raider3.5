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

// BlueprintGeneratedClass BP_Hex_Outpost_Theater4.BP_Hex_Outpost_Theater4_C
// 0x004C (0x0708 - 0x06BC)
class ABP_Hex_Outpost_Theater4_C : public ABP_Hex_PARENT_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        FlagLight;                                                // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Tip;                                                      // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MeshCommandCenterFlag;                                    // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Outpost_Core;                                          // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BannerMID;                                                // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hex_Outpost_Theater4.BP_Hex_Outpost_Theater4_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ActivateOutpost();
	void HandleOnPlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId);
	void ExecuteUbergraph_BP_Hex_Outpost_Theater4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
