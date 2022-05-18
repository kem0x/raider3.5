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

// BlueprintGeneratedClass BP_ProjectileTrajectory_AthenaRed.BP_ProjectileTrajectory_AthenaRed_C
// 0x0008 (0x0368 - 0x0360)
class ABP_ProjectileTrajectory_AthenaRed_C : public ABP_ProjectileTrajectory_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileTrajectory_AthenaRed.BP_ProjectileTrajectory_AthenaRed_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
