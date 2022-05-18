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

// AnimBlueprintGeneratedClass BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C
// 0x00F8 (0x0478 - 0x0380)
class UBP_Shotgun_BreakAction_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BA976D5D4DB7967075F7CDB8A77EDD8C;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_40047C1541B43E34DADF6696EC1EDEBE;      // 0x03D0(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_EADE6A484AF7A66F69258C8F614628BF;// 0x0440(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Shotgun_BreakAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
