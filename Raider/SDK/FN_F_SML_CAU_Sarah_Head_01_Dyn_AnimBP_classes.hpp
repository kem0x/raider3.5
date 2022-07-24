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

// AnimBlueprintGeneratedClass F_SML_CAU_Sarah_Head_01_Dyn_AnimBP.F_SML_CAU_Sarah_Head_01_Dyn_AnimBP_C
// 0x00B8 (0x04C8 - 0x0410)
class UF_SML_CAU_Sarah_Head_01_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_7C93049B4FDE4AB382791F8242A36627;  // 0x0418(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_B45D4D6B4C79D1ED63C9FC9F1E5CCCD6;      // 0x0480(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_SML_CAU_Sarah_Head_01_Dyn_AnimBP.F_SML_CAU_Sarah_Head_01_Dyn_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_F_SML_CAU_Sarah_Head_01_Dyn_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
