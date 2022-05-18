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

// AnimBlueprintGeneratedClass BP_Pistol_FC_SA.BP_Pistol_FC_SA_C
// 0x00F8 (0x0478 - 0x0380)
class UBP_Pistol_FC_SA_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_59F2F7924C02FD42668752B6AD5C5D7D;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3C404E374989FC3E37A4538744D810DA;      // 0x03D0(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_16F5A0174D756BCD3A56E2A54C593E88;// 0x0440(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Pistol_FC_SA.BP_Pistol_FC_SA_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Pistol_FC_SA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
