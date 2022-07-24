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

// AnimBlueprintGeneratedClass ANimBP_UnicornHorn.ANimBP_UnicornHorn_C
// 0x0214 (0x0574 - 0x0360)
class UANimBP_UnicornHorn_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5EA71789492D7AB39A717E8C785E00BE;      // 0x0368(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E;// 0x03B0(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CA4101CC43143B5484092DAD36960EDA;// 0x0510(0x0048)
	float                                              HornScale;                                                // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxHornScale;                                             // 0x055C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MinHornScale;                                             // 0x0568(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANimBP_UnicornHorn.ANimBP_UnicornHorn_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ANimBP_UnicornHorn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
