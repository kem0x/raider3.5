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

// AnimBlueprintGeneratedClass SK_AMR_Skeleton_AnimBP.SK_AMR_Skeleton_AnimBP_C
// 0x043C (0x07BC - 0x0380)
class USK_AMR_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_14E0A36B40D7CB7F8DE59DBDC13CE364;      // 0x0388(0x0048)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_B6BDB3454D7292BB4130B7A8AA9DEDA7;// 0x03D0(0x0158)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DC0B2D6840E4BC0BFBE5C4B2250764FB;// 0x0528(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7122483F4CB03C64C14DA7B10CFB57B2;// 0x0570(0x0048)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_12832F8745DDAA986539DB9A93020DB9;// 0x05B8(0x0158)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_86E645A943788F57C7CA249A842FEE55;      // 0x0710(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_19EAF67347136A59BFDB76A1B0DC77DC;// 0x0780(0x0038)
	float                                              springVal;                                                // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_AMR_Skeleton_AnimBP.SK_AMR_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_AMR_Skeleton_AnimBP_AnimGraphNode_SpringBone_B6BDB3454D7292BB4130B7A8AA9DEDA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_AMR_Skeleton_AnimBP_AnimGraphNode_SpringBone_12832F8745DDAA986539DB9A93020DB9();
	void ExecuteUbergraph_SK_AMR_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
