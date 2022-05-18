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

// BlueprintGeneratedClass B_Glider_Assassin.B_Glider_Assassin_C
// 0x0037 (0x0398 - 0x0361)
class AB_Glider_Assassin_C : public AB_EmptyBaseGlider_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Bits;                                                     // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TailLightSequence_NewTrack_0_6E32E5FA4A1356E95FC72B929F136156;// 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TailLightSequence__Direction_6E32E5FA4A1356E95FC72B929F136156;// 0x037C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TailLightSequence;                                        // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               NewVar_0_1;                                               // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Glider_Assassin.B_Glider_Assassin_C");
		return ptr;
	}


	void UserConstructionScript();
	void TailLightSequence__FinishedFunc();
	void TailLightSequence__UpdateFunc();
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0_1(float AxisValue);
	void ReceiveBeginPlay();
	void OnParachuteTrailUpdated(float* MovementLengthSquared, float* ForwardDot, float* RightDot, float* RotationalMovementAcceleration);
	void ExecuteUbergraph_B_Glider_Assassin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
