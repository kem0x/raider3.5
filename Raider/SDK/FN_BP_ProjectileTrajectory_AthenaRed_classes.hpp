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

// BlueprintGeneratedClass BP_ProjectileTrajectory_AthenaRed.BP_ProjectileTrajectory_AthenaRed_C
// 0x0008 (0x0378 - 0x0370)
class ABP_ProjectileTrajectory_AthenaRed_C : public ABP_ProjectileTrajectory_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)

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
