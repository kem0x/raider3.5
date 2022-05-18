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

// AnimBlueprintGeneratedClass LMG_Anim_BP.LMG_Anim_BP_C
// 0x01C0 (0x0540 - 0x0380)
class ULMG_Anim_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BB04A6824ABBAEED5901A6947B88E4BF;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9A4A91854D66514A7B527393E20AA106;      // 0x03D0(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7CA80C604BB336829EC42F95092AE7CA;// 0x0440(0x0038)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_5BE6D33E46B42B5E2CFBC697BBEE2195;// 0x0478(0x00C8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass LMG_Anim_BP.LMG_Anim_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_LMG_Anim_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
