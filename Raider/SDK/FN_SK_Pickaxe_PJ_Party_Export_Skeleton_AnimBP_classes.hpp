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

// AnimBlueprintGeneratedClass SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C
// 0x0F58 (0x1368 - 0x0410)
class USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_421E159244147BBC5C47379496FAAE1B;  // 0x0418(0x0068)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_5744159B4EE1D73C7D8EF0B371B2684F; // 0x0480(0x0590)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_225561ED45DE5C2DECEDCB9D8F3CBF98;// 0x0A10(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_25E7BF754A4B2C7227E146B4F8D02C1E;// 0x0AE0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_69A32A59489AD57DEF9F04A8666505D8;// 0x0BC0(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F05A53DA4C4A7B3876B951A736CB45AA;// 0x0C10(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_463A848D4E661E918E46149071B8A38C;// 0x0C58(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_232C9E2D4CD7AFB441AC03B53C09A131;// 0x0CA8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_79529D1E4DD2609CC3183FB4F38B72DA;// 0x0CF0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_16A065814A83DB639FB5688BC44C9734;// 0x0D38(0x0048)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_B4FE9C064848B634CAB4D3B16F5105FE; // 0x0D80(0x0590)
	struct FAnimNode_Root                              AnimGraphNode_Root_BE2E74B94CD2DD95BE92B49C366772FE;      // 0x1310(0x0048)
	struct FVector                                     ExtVel;                                                   // 0x1358(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceScale;                                               // 0x1364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_225561ED45DE5C2DECEDCB9D8F3CBF98();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
