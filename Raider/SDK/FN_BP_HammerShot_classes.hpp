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

// AnimBlueprintGeneratedClass BP_HammerShot.BP_HammerShot_C
// 0x00F8 (0x0478 - 0x0380)
class UBP_HammerShot_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_965289F4480E53083BBF909C95B4723E;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3BDFB108417CE8C60B42B588A22C10B3;      // 0x03D0(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_ABAE228F43B417507B512E82A2B75862;// 0x0440(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_HammerShot.BP_HammerShot_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_HammerShot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
