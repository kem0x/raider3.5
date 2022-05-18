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

// AnimBlueprintGeneratedClass FlingerVimBlueprint_New.FlingerVimBlueprint_New_C
// 0x0D90 (0x11C0 - 0x0430)
class UFlingerVimBlueprint_New_C : public UFortAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C02B41E84C1D1B2E2F8EC1A98D330FF5;      // 0x0438(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7C48D53B435A541611F7A589DD3A3C70;      // 0x0480(0x0070)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8F8829F54FD9DC3777837686B8E6717E;// 0x04F0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2A7BFDB941BD6352ED00A5993CA37132;// 0x0538(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_CC3BA7AB46B7CC1F2BFC05B3DB295E1C; // 0x0580(0x0240)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_AB38B6944E22B7240140AF80D483AAA6; // 0x07C0(0x0240)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9E5DA9C044857B2A8F820DA78BCAC25F;      // 0x0A00(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_109D7760470C81BBF70161ACF75AF044;// 0x0A70(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FE2A28F348DC1163DCB6AAB228B9E688;// 0x0B50(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_ACC0EBF5482B72F28EA8E191503CC1E8;// 0x0BA0(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_933455CA495348A9642A6283295597A2;// 0x0C18(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0C68(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34B2EF3C44F6A8F2821520B6BCACB7E1;// 0x0C70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F34AB0D3442DF52EAAD037B323003D7A;// 0x0CF0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8D03D3734EFC15D0357B44B30E132708;// 0x0D70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5172BD5646FEC28D140562B89BD907AA;// 0x0DF0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FAE54917452C122F3E3C4A9EF6F4AD3F;// 0x0E70(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0DA2AB9841F1BA317CA40B8524C1BCE9;// 0x0EF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5CFBFACA475DC146C45DCD95CC4931F3;// 0x0F40(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E683C892495D3A9760E77EA3CB427761;// 0x0FC8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AFD3E84B47A5C4EC9AF0128360906FC1;// 0x1010(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7E668416496F661D7DBA4486B32AC045;// 0x1098(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1E9EAC684ED004AB258FF6827B2B404F;// 0x10E0(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FlingerVimBlueprint_New.FlingerVimBlueprint_New_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlingerVimBlueprint_New_AnimGraphNode_TransitionResult_5172BD5646FEC28D140562B89BD907AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlingerVimBlueprint_New_AnimGraphNode_TransitionResult_8D03D3734EFC15D0357B44B30E132708();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlingerVimBlueprint_New_AnimGraphNode_SequencePlayer_FAE54917452C122F3E3C4A9EF6F4AD3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlingerVimBlueprint_New_AnimGraphNode_TransitionResult_F34AB0D3442DF52EAAD037B323003D7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlingerVimBlueprint_New_AnimGraphNode_TransitionResult_34B2EF3C44F6A8F2821520B6BCACB7E1();
	void ExecuteUbergraph_FlingerVimBlueprint_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
