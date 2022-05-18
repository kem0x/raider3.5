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

// AnimBlueprintGeneratedClass RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C
// 0x00F8 (0x0478 - 0x0380)
class URPG_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F7E820434538DD4C6AD2A1B5BCE33A39;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_782D94BD4EFDE1439B44CB93C212AD03;      // 0x03D0(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_829520A14F89D74E64C7AEBBB88029DD;// 0x0440(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_RPG_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
