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

// AnimBlueprintGeneratedClass SK_Pickaxe_Street_Basketball_AnimBP.SK_Pickaxe_Street_Basketball_AnimBP_C
// 0x06E0 (0x0AF0 - 0x0410)
class USK_Pickaxe_Street_Basketball_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3E083023491E8C6A61B83B8012C20316;// 0x0418(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_BC59562E47B30C90A6ECDB9F1FF6EC19;  // 0x0460(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_373EDCEA43AE17C5F5906381E2A40518;// 0x04C8(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root_C5B6C0924B16770E381AC88FB3481573;      // 0x0510(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0558(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_7AA881DB426694954884689980DBABB3; // 0x0560(0x0590)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Pickaxe_Street_Basketball_AnimBP.SK_Pickaxe_Street_Basketball_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_Pickaxe_Street_Basketball_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
