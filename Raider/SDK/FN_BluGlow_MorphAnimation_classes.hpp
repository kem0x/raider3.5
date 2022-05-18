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

// BlueprintGeneratedClass BluGlow_MorphAnimation.BluGlow_MorphAnimation_C
// 0x0070 (0x0388 - 0x0318)
class ABluGlow_MorphAnimation_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    NewParticleSystem;                                        // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BluGlowModel;                                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Additional_Texture_Rotation_Rate_4CFA454F41B86B7BE42429BB2A905B1E;// 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Scale_4CFA454F41B86B7BE42429BB2A905B1E;        // 0x0344(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Morph_4CFA454F41B86B7BE42429BB2A905B1E;        // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Glow_4CFA454F41B86B7BE42429BB2A905B1E;         // 0x034C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_4CFA454F41B86B7BE42429BB2A905B1E;   // 0x0350(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IntCounter;                                               // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Initial_Sphere_Scale;                                     // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Additional_Texture_Rotation_Rate;                         // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0374(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Number_Of_Morph_Targets;                                  // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfMorphTargets;                                     // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BluGlow_MorphAnimation.BluGlow_MorphAnimation_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__ChangeTargetFrame__EventFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BluGlow_MorphAnimation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
