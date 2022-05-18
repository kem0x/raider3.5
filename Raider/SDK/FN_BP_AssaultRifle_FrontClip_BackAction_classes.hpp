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

// AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C
// 0x00F8 (0x0478 - 0x0380)
class UBP_AssaultRifle_FrontClip_BackAction_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_093BD79B4AD87188F29729836AA06276;      // 0x0388(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_A31555D842D75C0905B639846DA94151;// 0x03D0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6E68D2AF43B0D536C012ED82940BED48;      // 0x0408(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
