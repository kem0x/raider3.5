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

// AnimBlueprintGeneratedClass F_LRG_CAU_Penny_Head_01_Dyn_AnimBp.F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C
// 0x00B8 (0x04C8 - 0x0410)
class UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_CD7E1EF9420B7BB62D1960BB468B9A0F;  // 0x0418(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_C2211EFB427B44656937CB978CEBA74F;      // 0x0480(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_LRG_CAU_Penny_Head_01_Dyn_AnimBp.F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C");
		return ptr;
	}


	void ExecuteUbergraph_F_LRG_CAU_Penny_Head_01_Dyn_AnimBp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
