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

// BlueprintGeneratedClass B_Assault_M4A1_Athena.B_Assault_M4A1_Athena_C
// 0x0014 (0x0E60 - 0x0E4C)
class AB_Assault_M4A1_Athena_C : public AB_Assault_Generic_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E4C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E50(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        LaserSight;                                               // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Assault_M4A1_Athena.B_Assault_M4A1_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnSetTargeting(bool* bNewIsTargeting);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_B_Assault_M4A1_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
