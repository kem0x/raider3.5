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

// AnimBlueprintGeneratedClass SK_Pickaxe_CarbideBlue_AnimBP.SK_Pickaxe_CarbideBlue_AnimBP_C
// 0x06D8 (0x0AE8 - 0x0410)
class USK_Pickaxe_CarbideBlue_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B8D216BC47C52E9485A47F88F9C76D91;// 0x0418(0x0048)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_994860DD4F8F9D3E35DA72AE62AF25F2; // 0x0460(0x0590)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_5B916D5A4FC042BFC0D4ECB266CE1F85;  // 0x09F0(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_84899BF84B2BE48F95B56AAC25D35E3F;// 0x0A58(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root_CADB32404919AE1712ED6EBCE998CDDB;      // 0x0AA0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Pickaxe_CarbideBlue_AnimBP.SK_Pickaxe_CarbideBlue_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_Pickaxe_CarbideBlue_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
