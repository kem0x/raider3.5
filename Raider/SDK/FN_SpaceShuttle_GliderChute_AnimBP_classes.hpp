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

// AnimBlueprintGeneratedClass SpaceShuttle_GliderChute_AnimBP.SpaceShuttle_GliderChute_AnimBP_C
// 0x0984 (0x0D04 - 0x0380)
class USpaceShuttle_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_77E022674899D3E62C2970B75A7B8565;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3EFD8A9F4177341F38CC498CB707F3C9;      // 0x03D0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2167403E4371F0934D5EFDB7A2DC0AAA;// 0x0440(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C1CA6E64B611CC39049589FD6F5EE90;// 0x04C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AD066E9543C0F5BF5A70EE990420C9E5;// 0x0540(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C62A4F1E4E21B9C73EE8A082AC2412CE;// 0x05C0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FDBB7EB74F76A8437CBD8594ADBA1789;// 0x0640(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5115986140287B46E9055CA6B20EBC21;// 0x06C8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4C58653345D00DD8586FDB8C05BE6D49;// 0x0710(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CA0C3F3843471D750B7587BE3BE4D037;// 0x0838(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DCED731844684FF6E50014BC28FCF929;// 0x0880(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_55ADBB7C47FC83548BCD87A2D7CFB37E;// 0x09A8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_88D47CB04F56A0E2A689B6A91CB1C49E;// 0x09F0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EF8792574E49D3D818921EA3D9BC8B18;// 0x0AD0(0x0128)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5B1D763444AAB8DF48311EB39DDB4FA7;// 0x0BF8(0x00F0)
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
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SpaceShuttle_GliderChute_AnimBP.SpaceShuttle_GliderChute_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_TransitionResult_AD066E9543C0F5BF5A70EE990420C9E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_TransitionResult_C62A4F1E4E21B9C73EE8A082AC2412CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_4C58653345D00DD8586FDB8C05BE6D49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_TransitionResult_1C1CA6E64B611CC39049589FD6F5EE90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_DCED731844684FF6E50014BC28FCF929();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_EF8792574E49D3D818921EA3D9BC8B18();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP_AnimGraphNode_TransitionResult_2167403E4371F0934D5EFDB7A2DC0AAA();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_TurnONEngines();
	void ExecuteUbergraph_SpaceShuttle_GliderChute_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
