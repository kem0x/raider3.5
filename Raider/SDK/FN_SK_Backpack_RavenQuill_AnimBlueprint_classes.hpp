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

// AnimBlueprintGeneratedClass SK_Backpack_RavenQuill_AnimBlueprint.SK_Backpack_RavenQuill_AnimBlueprint_C
// 0x0ED8 (0x1258 - 0x0380)
class USK_Backpack_RavenQuill_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B8A803A2400CC53FCB0229A2B569D10B;      // 0x0388(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_53EE4BAD4C95A53D03DF96BA489523C5;  // 0x03D0(0x0068)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7ABA739A43B1C5D4622E72A76DC7D6D0;// 0x0440(0x0360)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2B045DF4411DFA111F18AFB6815CC572;// 0x07A0(0x0360)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9B325A084A7578BCFC8732A7AC5862DD;// 0x0B00(0x0360)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_ADABC6F94779BADE4736B997BB1F4AD0;// 0x0E60(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0EA8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D1C995124AB009153913E3AA4A19E367;// 0x0EB0(0x0360)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_59E8AAB04E1564B4A63F54A7EBC488D2;// 0x1210(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Backpack_RavenQuill_AnimBlueprint.SK_Backpack_RavenQuill_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_Backpack_RavenQuill_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
