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

// BlueprintGeneratedClass B_SoundIndicator_01.B_SoundIndicator_01_C
// 0x027C (0x068C - 0x0410)
class AB_SoundIndicator_01_C : public AFortSoundCameraLensEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	bool                                               Chest;                                                    // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FootSteps;                                                // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Gunshot;                                                  // 0x041A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Generic;                                                  // 0x041B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Long_Range;                               // 0x0420(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Chest_Falloff;                                            // 0x0498(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Footsteps_Falloff;                                        // 0x0510(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Mid_Range;                                // 0x0588(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Melee;                                    // 0x0600(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OppositeFacingGunshotStrength;                            // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacingGunshotExponentNear;                                // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardFacingGunshotStrength;                             // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacingGunshotExponentFar;                                 // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceDivisor;                                          // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_SoundIndicator_01.B_SoundIndicator_01_C");
		return ptr;
	}


	void CalculateFiringAngle(float* DotResult);
	struct FRuntimeFloatCurve GetWeaponCurve();
	void UpdateEmitterStates();
	void UserConstructionScript();
	void OnEffectActivated();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_SoundIndicator_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
