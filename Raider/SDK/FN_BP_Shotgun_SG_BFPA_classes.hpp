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

// AnimBlueprintGeneratedClass BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C
// 0x00F8 (0x0478 - 0x0380)
class UBP_Shotgun_SG_BFPA_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4F6329394B95E045DDC6838AB743FA3F;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_58DF360140B29B2553BE3DB3DD1B36FB;      // 0x03D0(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_87A69A934D766ABE8EC875A0703F52BB;// 0x0440(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Shotgun_SG_BFPA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
