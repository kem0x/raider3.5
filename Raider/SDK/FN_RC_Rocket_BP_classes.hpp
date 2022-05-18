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

// AnimBlueprintGeneratedClass RC_Rocket_BP.RC_Rocket_BP_C
// 0x0148 (0x04C8 - 0x0380)
class URC_Rocket_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_08FAFFB0444865FC64D0C0BFEBA059B9;      // 0x0388(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_956D7C7B47E114589BA5ADB878BAB261;// 0x03D0(0x0088)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_02FBD1D3400F785868D3B9AD8C664EA4;      // 0x0458(0x0070)

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
