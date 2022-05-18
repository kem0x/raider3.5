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

// BlueprintGeneratedClass B_Glider_SpaceShuttleB.B_Glider_SpaceShuttleB_C
// 0x001F (0x0380 - 0x0361)
class AB_Glider_SpaceShuttleB_C : public AB_EmptyBaseGlider_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    IdleEffect;                                               // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  ThrustStartSound;                                         // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Glider_SpaceShuttleB.B_Glider_SpaceShuttleB_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnParachuteTrailUpdated(float* MovementLengthSquared, float* ForwardDot, float* RightDot, float* RotationalMovementAcceleration);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_B_Glider_SpaceShuttleB(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
