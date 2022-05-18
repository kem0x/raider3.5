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

// AnimBlueprintGeneratedClass RCControl_AnimBlueprint.RCControl_AnimBlueprint_C
// 0x0148 (0x04C8 - 0x0380)
class URCControl_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4BFB0E834E31FC0B04D397BB0A2CC05F;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7A5C24A747EADBE3AD2AB3A97C48278F;      // 0x03D0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C507D3604F783A593D65ED90D3094EA6;// 0x0440(0x0088)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RCControl_AnimBlueprint.RCControl_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_RCControl_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
