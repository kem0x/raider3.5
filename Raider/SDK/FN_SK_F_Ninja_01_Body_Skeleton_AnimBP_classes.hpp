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

// AnimBlueprintGeneratedClass SK_F_Ninja_01_Body_Skeleton_AnimBP.SK_F_Ninja_01_Body_Skeleton_AnimBP_C
// 0x0140 (0x0550 - 0x0410)
class USK_F_Ninja_01_Body_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1205956746F4C2F910A7F697B79629BF;      // 0x0418(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_1F1787404E7008182EF87F809FB4795C;// 0x0460(0x00E8)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_F_Ninja_01_Body_Skeleton_AnimBP.SK_F_Ninja_01_Body_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_1F1787404E7008182EF87F809FB4795C();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
