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

// BlueprintGeneratedClass B_DynamicsTestGlider.B_DynamicsTestGlider_C
// 0x0017 (0x0378 - 0x0361)
class AB_DynamicsTestGlider_C : public AB_EmptyBaseGlider_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Bits;                                                     // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_DynamicsTestGlider.B_DynamicsTestGlider_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FireDynamics();
	void ExecuteUbergraph_B_DynamicsTestGlider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
