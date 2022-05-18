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

// AnimBlueprintGeneratedClass BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C
// 0x00F8 (0x0478 - 0x0380)
class UBP_Shotgun_RG_BFPA_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_447289EE478D0375649725A287B7BD4C;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_76185EE8467A3505F3E23E89565E7CB8;      // 0x03D0(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_BE887AC24A08313E787615BA25555A93;// 0x0440(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Shotgun_RG_BFPA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
