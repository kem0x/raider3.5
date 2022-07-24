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

// AnimBlueprintGeneratedClass SK_F_Outlander_02_Skeleton_Anim_Blueprint.SK_F_Outlander_02_Skeleton_Anim_Blueprint_C
// 0x1A88 (0x1E98 - 0x0410)
class USK_F_Outlander_02_Skeleton_Anim_Blueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A231BBBF42868E7DAF03CEB4C5774CAD;      // 0x0418(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_A1F2F506414045AFAEBE3AAA3AEA4BA7;// 0x0460(0x00E8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_6B75393649E9879CCA97C2A0F14635BC;// 0x0548(0x0190)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_BE5837EF4C2F5C9C0A8F1CB8D726840C;// 0x06D8(0x0190)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_42C1F1544D48F099739C33B2398D29B6;// 0x0868(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10AE448948DFDAC48D633A9115DE9546;// 0x08B0(0x03B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C2C423994AF0E2ACB767DBB2F2A9F807;// 0x0C60(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0CA8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CD200A494CE2706612624D82C982B3A9;// 0x0CB0(0x03B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EC6023534626A7FAFE689C8E45E86E07;// 0x1060(0x03B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EA3B9A5B407C0B0134CDBEBE3E9A5A96;// 0x1410(0x03B0)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FEDD4DD14777B86ABE0537A59A5135CD;// 0x17C0(0x03B0)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_C5D99D0F44097D61E3DBD9A455D468EA;// 0x1B70(0x0190)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_1D18CAEC448657ED9FCA44951F18E351;// 0x1D00(0x0190)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x1E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_F_Outlander_02_Skeleton_Anim_Blueprint.SK_F_Outlander_02_Skeleton_Anim_Blueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint_AnimGraphNode_AnimDynamics_EC6023534626A7FAFE689C8E45E86E07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint_AnimGraphNode_CopyPoseFromMesh_A1F2F506414045AFAEBE3AAA3AEA4BA7();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
