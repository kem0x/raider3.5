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

// AnimBlueprintGeneratedClass SmasherVimBlueprint.SmasherVimBlueprint_C
// 0x2008 (0x2438 - 0x0430)
class USmasherVimBlueprint_C : public UFortAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FBAC1AEB479405046F3E4AB17CDECB34;// 0x0440(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36707A12499C230B89B08282F69A2E71;// 0x04C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D06D743D425B7D3C8406EFBD08A68E63;// 0x0540(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_57C1753D42DBAD4187C85AAE4603F95B;// 0x05C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2C0EA83E4DB1BC60C7AC4B90DFE6D5B6;// 0x0640(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_854F7DBB41A386B898E3D9B5031F823F;// 0x06C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9CEC73804ACDA2E1261690879C9C187C;// 0x0740(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6FC4F6E34980671B8CA4B4B2CD6FD910;// 0x07C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B689746C43A09BADCA561E824233D6DB;// 0x0840(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_564BC95D4976A04334CA6396B63076C9;// 0x08C0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_43B115994B9593AA0CA46F8CE8D234A4;// 0x0948(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_888AB38A4E443EF568F16BBB7062FC5A;// 0x0990(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_39EEE9BB454180F0E2D6C3B5CD1E70F1;// 0x0A18(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2F62B99A4BAA1EF83667A18D506D29F8;// 0x0A60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FCE49AD64EB4DF949728BFA35B4E5EE3;// 0x0AA8(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_52BFE79F437D30059F178C9E15A5C4CC;// 0x0B30(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99C31F56427E8F457E63C2AF44A426B1;// 0x0B78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE4195FC43F5F9BCAAF69885D08B8652;// 0x0BC0(0x0088)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_745C2C5440AF055F81539AB5B7188E58;// 0x0C48(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55B330D54A9EB1F611FA37934D427BCA;// 0x0D28(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_13FCB8264963D347E5912E86DC90A470;// 0x0DB0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7A978E3A445354F73A1E51A3CCB88471;// 0x0DF8(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C87CEEF34F96245643EBF2BE420575E1;// 0x0F20(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FE11925047A7523852B87280347D5FD0;// 0x0F68(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9587DA7E45E2B3F31B460E8B58F6B403;      // 0x1048(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_Root_D2C6F6F94C255FCE32E7B0861950FE5F;      // 0x10B8(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_48047F004CB41222F5B4388F9DCC593F; // 0x1100(0x0240)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_B813041441B0CFB17DFBB4A757025061; // 0x1340(0x0240)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_C820F2EB423F7CC747F140B43E22DD3E; // 0x1580(0x0240)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2CDDA8BE415F026814E029BBE0EF5B83; // 0x17C0(0x0240)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C1D86F134D5174CDF7CFE281E4BE1882;// 0x1A00(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4355AED64A7A2B7EDEDCFA9763CB0B7B;// 0x1A48(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_811A1186477A26E7364FC39749563CCF;      // 0x1A90(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6541859B4F3F177972FEC79707830329;// 0x1B00(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_24F4699C428EF73E5EB86584CBF00FC3;// 0x1BE0(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_314C61944499EBE5A40767A25D1A0DC3;// 0x1C30(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FD1871E2448FCC5998774E8206444D18;// 0x1CA8(0x0050)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_A10779BC4890311C376A58878C655281;// 0x1CF8(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F61AFB1741EEE8E404EFB7A121F8D2E7;// 0x1DC0(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_44CA33F44D1BFA86AD3745BC5E17198B;// 0x1EA0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_61AB20214AFA59094F1ECBBC9788DE75;// 0x1F80(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_659DB89649A23682279A8999ACF6EA45;      // 0x1FD0(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2DCFF1834E04B60148E4A2BC78812DFE;// 0x2040(0x0050)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_ABD899E4436A06324E298FBF07E6E243;// 0x2090(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_87421D7242560831341F28888ADD8173;// 0x21E8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5E472A5745CC8120724032898728ACA4;// 0x22C8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2FF18F9B4CC62155607B06805B323120;// 0x2318(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_94E77D9E46EF25EEFD76A89B797C291C;// 0x2368(0x00D0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SmasherVimBlueprint.SmasherVimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_D06D743D425B7D3C8406EFBD08A68E63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_57C1753D42DBAD4187C85AAE4603F95B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_36707A12499C230B89B08282F69A2E71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_2C0EA83E4DB1BC60C7AC4B90DFE6D5B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_854F7DBB41A386B898E3D9B5031F823F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_9CEC73804ACDA2E1261690879C9C187C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_6FC4F6E34980671B8CA4B4B2CD6FD910();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_B689746C43A09BADCA561E824233D6DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_TransitionResult_FBAC1AEB479405046F3E4AB17CDECB34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_SequencePlayer_55B330D54A9EB1F611FA37934D427BCA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_BlendSpacePlayer_7A978E3A445354F73A1E51A3CCB88471();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_LayeredBoneBlend_44CA33F44D1BFA86AD3745BC5E17198B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_ABD899E4436A06324E298FBF07E6E243();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SmasherVimBlueprint_AnimGraphNode_BlendListByBool_94E77D9E46EF25EEFD76A89B797C291C();
	void AnimNotify_SleepingFullyBlended();
	void ExecuteUbergraph_SmasherVimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
