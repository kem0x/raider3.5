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

// AnimBlueprintGeneratedClass Satellite_GliderChute_AnimBP.Satellite_GliderChute_AnimBP_C
// 0x0984 (0x0D04 - 0x0380)
class USatellite_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0DDB10EA407EF4DF1476F9BB64FE5915;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_56B1384F445115026FA0DAAD40F10B71;      // 0x03D0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48B2CA524A960CA094B1D78F7704E3E1;// 0x0440(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B1B3FA7477B777253D38E9C9C1AC603;// 0x04C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8C9ADBA345429BACF25317B2BB9A75B9;// 0x0540(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A256A5E449028C472EA0FC811F65DC98;// 0x05C0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9EF1E9AD419BB2887087409A4E8AFBC1;// 0x0640(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D319C44140E775ABB87123A314EBA65B;// 0x06C8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9DFF1DA648DFF0039AAF52A7FE8ABDDF;// 0x0710(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C6FA94584253EC0ED6F665BD3B8EF834;// 0x0838(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2E83AF3741DE7EBAC07F1AB985E6C3EE;// 0x0880(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6FE9A68447C92C4A3DD15A900F8C4918;// 0x09A8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B6EEE0524A55FCD5030381898B953EA6;// 0x09F0(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0700E0D546994D26301C1B9208D8A073;// 0x0AD0(0x00F0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_48FA3BDA47CA178927D29CADBDF9EC76;// 0x0BC0(0x0128)
	bool                                               IsParachuteOpen;                                          // 0x0CE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CE9(0x0003) MISSED OFFSET
	float                                              AimPitch;                                                 // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeployAnimRate;                                           // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkydiveYaw;                                               // 0x0CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UseDynamicsAlpha;                                         // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Forward;                                                  // 0x0CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Right;                                                    // 0x0D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Satellite_GliderChute_AnimBP.Satellite_GliderChute_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_TransitionResult_A256A5E449028C472EA0FC811F65DC98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_9DFF1DA648DFF0039AAF52A7FE8ABDDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_TransitionResult_7B1B3FA7477B777253D38E9C9C1AC603();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_2E83AF3741DE7EBAC07F1AB985E6C3EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_48FA3BDA47CA178927D29CADBDF9EC76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_TransitionResult_48B2CA524A960CA094B1D78F7704E3E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Satellite_GliderChute_AnimBP_AnimGraphNode_TransitionResult_8C9ADBA345429BACF25317B2BB9A75B9();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_TurnONEngines();
	void ExecuteUbergraph_Satellite_GliderChute_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
