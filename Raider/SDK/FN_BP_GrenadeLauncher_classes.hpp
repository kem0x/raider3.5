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

// AnimBlueprintGeneratedClass BP_GrenadeLauncher.BP_GrenadeLauncher_C
// 0x0DD2 (0x1152 - 0x0380)
class UBP_GrenadeLauncher_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CCD9E03141024373207EA19F7FABC7E4;// 0x0388(0x0088)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9BE5EC0249061EF1B638FDA411EEAB88;// 0x0410(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15;// 0x0458(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5027BC3E4B45A2EA685B7E89AFE7BD76;// 0x0590(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_35ADB9784B260E9E0D5321BC72AC51A5;      // 0x05D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_Root_545A1542415580C93B2F2CB92FFE6BF9;      // 0x0648(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1B48A4454DD43BDD5D313E9BFCAEB34E;// 0x0690(0x00F0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71DAE6D547D6D96F74E8C99E79CBC0DC;// 0x0780(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4CD0B0D343A573F7E5551299DF889298;// 0x0800(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F88795E14387D493A0441AAF33462D4F;// 0x0880(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4C05BBC84F89653A9F496ABE3FBFA607;// 0x0900(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34526DF547A00B6C25DBA2B722782D7A;// 0x0980(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3EC4C2194E3816DF80A821927DE6E3D1;// 0x0A00(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_744E32E64439A6E346874993BC2D3A07;// 0x0A80(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36B2599748A5ECA6839B26B25ED0F41F;// 0x0B00(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F9587DB84CDA0FB47B0428973D59B3E6;// 0x0B88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5DF1EBF84566794DCDFFA19D400B2E34;// 0x0BD0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_424E81254A7CDE1BA9149CB49FC795BD;// 0x0C58(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C8CA31D4817C8C9693A6EA8C5EBCE9E;// 0x0CA0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6385996A47E307977AB5BE9C84F42508;// 0x0D28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_03999E3843804F0355B33984C6AB3969;// 0x0D70(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CE69749D4FC3C1D98B24CCA69D360D62;// 0x0DF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FF94CAE0484DB857352763B8BC624EA0;// 0x0E40(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BF4E8EC14863F22C7C06589F99DF4C3E;// 0x0EC8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4DB060FA436822518B51D09E9866705D;// 0x0F10(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_75D4D2FC46577E0F28088884ABFA1036;// 0x0F98(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_4E6685A948E38158991F278F356AAE07;// 0x0FE0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6975EFCF41B2D616E4B5B4AF156848C7;// 0x1018(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_46F65ED54161388583A1A59736014BD0;// 0x1060(0x00E0)
	float                                              CylinderROT;                                              // 0x1140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastFrameRotCurveValue;                                   // 0x1144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DrumPositionCount;                                        // 0x1148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRotateToPos1;                                       // 0x114C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRotateToPos2;                                       // 0x114D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRotateToPos3;                                       // 0x114E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRotateToPos4;                                       // 0x114F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRotateToPos5;                                       // 0x1150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRotateToPos6;                                       // 0x1151(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_GrenadeLauncher.BP_GrenadeLauncher_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_3EC4C2194E3816DF80A821927DE6E3D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_744E32E64439A6E346874993BC2D3A07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_4C05BBC84F89653A9F496ABE3FBFA607();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_F88795E14387D493A0441AAF33462D4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_4CD0B0D343A573F7E5551299DF889298();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_71DAE6D547D6D96F74E8C99E79CBC0DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_34526DF547A00B6C25DBA2B722782D7A();
	void AnimNotify_RotateDrum();
	void ExecuteUbergraph_BP_GrenadeLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
