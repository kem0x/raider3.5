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

// AnimBlueprintGeneratedClass SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP.SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C
// 0x0B18 (0x0F28 - 0x0410)
class USK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9C2708894B6033E5991C85825808CCE5;      // 0x0418(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_F76CB98F41D92EB829E2918E0A8075D7;// 0x0460(0x00E8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0548(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_01D662954FB96FA817FF2E9C2A358794;// 0x0550(0x03B0)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_3F3A36C74CCEDF08D0E8578D4074B6AA; // 0x0900(0x0590)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CC4DC41B4D3F9825958793BF8F42F812;// 0x0E90(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3F74BBA247ACE0E0A0F426B09607DF93;// 0x0ED8(0x0048)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP.SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_F76CB98F41D92EB829E2918E0A8075D7();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
