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

// AnimBlueprintGeneratedClass MaleSurvivorAnimBlueprint.MaleSurvivorAnimBlueprint_C
// 0x246C (0x289C - 0x0430)
class UMaleSurvivorAnimBlueprint_C : public UFortAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_86B0C7AD4CA19283AC9A828F10E372BC;      // 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FAEC6E854E39405FA5831D8F5A110DFF;// 0x0480(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D459C88940BDBABEB803EC8C749D6A1D;// 0x0500(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70EBF09A41E0B1237BF5C79719DDDE0E;// 0x0580(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4F16A5044BB6D0D0A2F64CAEEA9587B2;// 0x0600(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A47267A49936464E45E1394F3DFAB0B;// 0x0680(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C4B3BDD4AFC09C5F081429CB94C1218;// 0x0700(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E53448EF44FAA6932E61C5AB75F0A934;// 0x0780(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2396020B435F19A36A0A74B66AEF983F;// 0x0800(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E9AC643D4F8E10A8DA0B55AAC496A021;// 0x0880(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_897CDDDF48EACA4D93120F9D029B71E7;// 0x0900(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC38DF88419C50A445BC738043D38E33;// 0x0980(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_423BB37F40D8138856C4A6A2FCB47BF5;// 0x0A00(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31B85E65417FD5B749A7D1941CE581F2;// 0x0A80(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_856AEC97477981F5E8B5C19042C5067D;// 0x0B00(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6383737547A9A03941EEE28E09E90368;// 0x0B88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3CA1342540A72F0A9D3A0A969CB2EBDE;// 0x0BD0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_00FD46F24B1EB951D85516A86E7A5B67;// 0x0C58(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2A8DB1FD4B70B9C36DFA9EB7F46E434F;// 0x0CA0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BB7060D7414DB165E1B818A12B57845D;// 0x0D28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6F8E63B8409E8F5BA09E4C84875E67AC;// 0x0D70(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E23CF66A4AAB59FA5CFB5E99854A4C9E;// 0x0DF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AAA5B5DA4530FBD04CA341A3A11764E9;// 0x0E40(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0AB1AEDA425E59A6E517FCB500F2B8AC;// 0x0EC8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51A34FA0405CEEDF45F1588681C5FD7A;// 0x0F10(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DFA3000742C888FC845AEA806B5DCA93;// 0x0F98(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27D3AF984807EB475C1761BE3DA7B74A;// 0x0FE0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7A8287FC4AE8ABA6BFA39482CF7DEAFF;// 0x1068(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CDFFEF5745992E802E51E7B988C735E9;// 0x10B0(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_245B08CA475D77EAA94BC791564F1191;// 0x11D8(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8AC200CC47265449E4F29B87E0E6813A;// 0x1300(0x00D0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_BA77578B4776A584119097BD7AF60F6A;// 0x13D0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DBFF2A3D4873EADCFC4B20A49F6AD788;// 0x14B0(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_57BDF19A4F945C97D596E7B9283B1FE0;// 0x15D8(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_99A7CC204C2BC62DDC7648B22CEF2CC9;// 0x1700(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ACDAB0E746C210ABBA8DFDA1AE6D8884;// 0x17D0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1818(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AFC253A4FA076FED632509B05A08B1F;// 0x1820(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F4C95533411A95A9F762BB9FD76A53F4;// 0x18A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E59519924E0E9D6876EED69E92A9C719;// 0x1920(0x0088)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF01B8F541B7139C8348A697ED42B1FE;// 0x19A8(0x0088)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F870855E42358A3AE9FFCEA8148515CF;// 0x1A30(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4B6EC55044E1F097CBD67E81655AD194;// 0x1B00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12E3A36F4E3742C25B4F8FAE4BF4C687;// 0x1B48(0x0088)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2124E040464EE301C3806EB6310AA731;// 0x1BD0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2AACC71B4E53081FD5FC9AB400BA2114;// 0x1CA0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_77CF5CF0454C3E9AC6D17996158CFD6B;// 0x1D28(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EC1353E64B756A035183618D00F43B0F;// 0x1D70(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7664588442FA83AB43EB33A33F442193;// 0x1E50(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_008BC8784E5742EFE01FB1B14EC908A6;// 0x1E98(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0A7242E04F952EDD57C9A8A378996035;// 0x1F78(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_BCA9A2E04E0B18A136F136A5568421AD;// 0x2058(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F103262C41513AF0FC5092B19014FD1F;// 0x2138(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_331C6B3A466617FFD2644B93BEF1435B;      // 0x2188(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EAD36526410BCA30966FE2AFD9C923E0;      // 0x21F8(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_597A78C947FD8B14343821BE8507098D;// 0x2268(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A556C0794B550BD84BEE4680EC76E81C;      // 0x22B8(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x2328(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_60EFAEA943B8F364186B499519B5FD1B; // 0x2330(0x0240)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_4F6075D44B5DB20527031CA1AF9B0E10; // 0x2570(0x0240)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FE319B6F4EAF80656E424EAF3619CAA7;// 0x27B0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BDEFE57549DE1FB195AD47938585B58A;// 0x27F8(0x0048)
	struct FGameplayTagContainer                       TC_SurvivorTags;                                          // 0x2840(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EFortCustomGender>                     Gender;                                                   // 0x2860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2861(0x0007) MISSED OFFSET
	class AFortAIPawn*                                 Fort_AIPawn_Owner;                                        // 0x2868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Lower_Body_Current_Weight;                                // 0x2870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lower_Body_Target_Weight;                                 // 0x2874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Stunned;                                               // 0x2878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Playing_Root_Motion;                                      // 0x2879(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Should_Use_Movement_Locomotion;                           // 0x287A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x287B(0x0001) MISSED OFFSET
	float                                              Delta_Time;                                               // 0x287C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delta_Sum;                                                // 0x2880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IdleDefaultCount;                                         // 0x2884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IdleCowerCount;                                           // 0x2888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TransitionToIdleCowerBreak;                               // 0x288C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TransitionToIdleCower;                                    // 0x288D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TransitionToIdleDefaultBreak;                             // 0x288E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TransitionToIdleDefault;                                  // 0x288F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MedBot_DBNO;                                              // 0x2890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MedBot_Reviving;                                          // 0x2891(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x2892(0x0002) MISSED OFFSET
	float                                              RightHandIKAlpha;                                         // 0x2894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftHandIKAlpha;                                          // 0x2898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MaleSurvivorAnimBlueprint.MaleSurvivorAnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TransitionResult_E9AC643D4F8E10A8DA0B55AAC496A021();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TransitionResult_31B85E65417FD5B749A7D1941CE581F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TransitionResult_2396020B435F19A36A0A74B66AEF983F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TransitionResult_E53448EF44FAA6932E61C5AB75F0A934();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_BlendSpacePlayer_CDFFEF5745992E802E51E7B988C735E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_BlendSpacePlayer_245B08CA475D77EAA94BC791564F1191();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_BlendListByBool_8AC200CC47265449E4F29B87E0E6813A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_BlendListByEnum_BA77578B4776A584119097BD7AF60F6A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_BlendSpacePlayer_DBFF2A3D4873EADCFC4B20A49F6AD788();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_BlendSpacePlayer_57BDF19A4F945C97D596E7B9283B1FE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_BlendListByBool_99A7CC204C2BC62DDC7648B22CEF2CC9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TransitionResult_9C4B3BDD4AFC09C5F081429CB94C1218();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TransitionResult_8AFC253A4FA076FED632509B05A08B1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TransitionResult_423BB37F40D8138856C4A6A2FCB47BF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TransitionResult_F4C95533411A95A9F762BB9FD76A53F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TransitionResult_0A47267A49936464E45E1394F3DFAB0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_BlendListByBool_F870855E42358A3AE9FFCEA8148515CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_BlendListByBool_2124E040464EE301C3806EB6310AA731();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_LayeredBoneBlend_BCA9A2E04E0B18A136F136A5568421AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TwoBoneIK_60EFAEA943B8F364186B499519B5FD1B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TwoBoneIK_4F6075D44B5DB20527031CA1AF9B0E10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TransitionResult_D459C88940BDBABEB803EC8C749D6A1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TransitionResult_FAEC6E854E39405FA5831D8F5A110DFF();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_SurvivorIdleDefaultEnded();
	void AnimNotify_SurvivorIdleCowerEnded();
	void AnimNotify_SurvivorIdleCowerBreakEnded();
	void AnimNotify_SurvivorIdleDefaultBreakEnded();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TransitionResult_DC38DF88419C50A445BC738043D38E33();
	void AnimNotify_MedBot_Revive_Done();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MaleSurvivorAnimBlueprint_AnimGraphNode_TransitionResult_897CDDDF48EACA4D93120F9D029B71E7();
	void ExecuteUbergraph_MaleSurvivorAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
