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

// AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C
// 0x00F8 (0x0458 - 0x0360)
class UBP_AssaultRifle_FrontClip_BackAction_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_093BD79B4AD87188F29729836AA06276;      // 0x0368(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_A31555D842D75C0905B639846DA94151;// 0x03B0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6E68D2AF43B0D536C012ED82940BED48;      // 0x03E8(0x0070)

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
