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

// AnimBlueprintGeneratedClass SK_PickAxe_Jaws_Skeleton_AnimBP.SK_PickAxe_Jaws_Skeleton_AnimBP_C
// 0x06E8 (0x0AF8 - 0x0410)
class USK_PickAxe_Jaws_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_6B147D6642EFDBB249D21998BE4ED15C;  // 0x0418(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_85E18924481875C844C3A3A7EA0A5DAF;      // 0x0480(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_E40FC2B6491B2E41E87B22BE74EFDBED; // 0x04D0(0x0590)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D00AF4E743A94A1AD17B36A5F9F03EEA;// 0x0A60(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DB4BDBBD424FBEF62E5517A65A3B4597;// 0x0AA8(0x0048)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_PickAxe_Jaws_Skeleton_AnimBP.SK_PickAxe_Jaws_Skeleton_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
