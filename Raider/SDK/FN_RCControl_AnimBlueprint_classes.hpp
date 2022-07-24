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

// AnimBlueprintGeneratedClass RCControl_AnimBlueprint.RCControl_AnimBlueprint_C
// 0x0170 (0x04D0 - 0x0360)
class URCControl_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4BFB0E834E31FC0B04D397BB0A2CC05F;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7A5C24A747EADBE3AD2AB3A97C48278F;      // 0x03B0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C507D3604F783A593D65ED90D3094EA6;// 0x0420(0x00B0)

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
