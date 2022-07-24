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

// BlueprintGeneratedClass BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
// 0x0068 (0x0390 - 0x0328)
class ABP_FortniteLobbyLightSwitcher_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADirectionalLight*                           DirectionLight;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ASkyLight*                                   SkyLight;                                                 // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class APointLight*>                         Pointlights;                                              // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AExponentialHeightFog*                       ExponentialHeightFog;                                     // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_LowDetailMode;                           // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AEmitter*>                            ParticleSystems;                                          // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               IsActive;                                                 // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugLOWQualityLighting;                                  // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x037A(0x0006) MISSED OFFSET
	class ASkyLight*                                   SkyLight_LowDetailMode;                                   // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AExponentialHeightFog*                       ExponentialHeightfog_LowDetailMode;                       // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C");
		return ptr;
	}


	void SetVisiblityofSceneLighting(bool Activate);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EnableLobbySetLighting();
	void DisableLobbySetLighting();
	void UpdateSettings();
	void ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
