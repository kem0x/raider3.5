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

// BlueprintGeneratedClass HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C
// 0x0040 (0x0368 - 0x0328)
class AHexmapLevelSettings_Temperate01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UExponentialHeightFogComponent*              ExponentialHeightFog_Volumetric;                          // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UExponentialHeightFogComponent*              ExponentialHeightFog;                                     // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkyLightComponent*                          SkyLight;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDirectionalLightComponent*                  DirectionalLight_Main;                                    // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LightsRoot;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C");
		return ptr;
	}


	void UserConstructionScript();
	void CustomSettings(bool Visibility);
	void ExecuteUbergraph_HexmapLevelSettings_Temperate01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
