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

// AnimBlueprintGeneratedClass F_SML_CAU_Jess_Head_01_Dyn_AnimBP.F_SML_CAU_Jess_Head_01_Dyn_AnimBP_C
// 0x00B8 (0x0418 - 0x0360)
class UF_SML_CAU_Jess_Head_01_Dyn_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_E9C497CE4272446DE820C7AC4F9475C9;  // 0x0368(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_A8263707428C6C1716519682DC411824;      // 0x03D0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_SML_CAU_Jess_Head_01_Dyn_AnimBP.F_SML_CAU_Jess_Head_01_Dyn_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_F_SML_CAU_Jess_Head_01_Dyn_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
