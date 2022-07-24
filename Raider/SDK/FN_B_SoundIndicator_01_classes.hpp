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

// BlueprintGeneratedClass B_SoundIndicator_01.B_SoundIndicator_01_C
// 0x027C (0x069C - 0x0420)
class AB_SoundIndicator_01_C : public AFortSoundCameraLensEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	bool                                               Chest;                                                    // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FootSteps;                                                // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Gunshot;                                                  // 0x042A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Generic;                                                  // 0x042B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Long_Range;                               // 0x0430(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Chest_Falloff;                                            // 0x04A8(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Footsteps_Falloff;                                        // 0x0520(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Mid_Range;                                // 0x0598(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                          Gunshot_Falloff_Melee;                                    // 0x0610(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OppositeFacingGunshotStrength;                            // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacingGunshotExponentNear;                                // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardFacingGunshotStrength;                             // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacingGunshotExponentFar;                                 // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceDivisor;                                          // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
