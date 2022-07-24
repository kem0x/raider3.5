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

// AnimBlueprintGeneratedClass SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C
// 0x06E0 (0x0A40 - 0x0360)
class USK_M249_Skeleton_Dynamic_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8E0F65D247E6D62D018C2FBA102CD862;// 0x0368(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FFE83FF1460937477A33C495556479A8;// 0x03B0(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_7B49CE394F90BE5C65D9C0A9ADF6EB63;  // 0x03F8(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_ABE25BC349D1D197C1C97D9008555ECD;      // 0x0460(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_2A536FC14BBB64BCB3DB19A790BB45C4; // 0x04B0(0x0590)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_M249_Skeleton_Dynamic_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
