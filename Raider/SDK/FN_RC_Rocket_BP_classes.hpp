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

// AnimBlueprintGeneratedClass RC_Rocket_BP.RC_Rocket_BP_C
// 0x0170 (0x04D0 - 0x0360)
class URC_Rocket_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_08FAFFB0444865FC64D0C0BFEBA059B9;      // 0x0368(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_956D7C7B47E114589BA5ADB878BAB261;// 0x03B0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_02FBD1D3400F785868D3B9AD8C664EA4;      // 0x0460(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RC_Rocket_BP.RC_Rocket_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_RC_Rocket_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
