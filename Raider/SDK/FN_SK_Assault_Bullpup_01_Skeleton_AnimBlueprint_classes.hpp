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

// AnimBlueprintGeneratedClass SK_Assault_Bullpup_01_Skeleton_AnimBlueprint.SK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C
// 0x00F8 (0x0458 - 0x0360)
class USK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_92D36F244BA6D80A4E58C2B6BE684A28;      // 0x0368(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_438D38E44093076D3022318F9361AB01;// 0x03B0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BAF2D87E4290896A23024E8C2A5D11AB;      // 0x03E8(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Assault_Bullpup_01_Skeleton_AnimBlueprint.SK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_Assault_Bullpup_01_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
