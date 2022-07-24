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

// AnimBlueprintGeneratedClass SK_Pickaxe_Graffiti_Dyn_AnimBP.SK_Pickaxe_Graffiti_Dyn_AnimBP_C
// 0x06E0 (0x0AF0 - 0x0410)
class USK_Pickaxe_Graffiti_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E8F720E645BA2B717EC6CBAF1E3445A0;      // 0x0418(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_5044A18743B86B01C04446B2B5000267;  // 0x0460(0x0068)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_47CF91C54D9803ABB8CCA9BD7A049816; // 0x04D0(0x0590)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_72A284864185995BDCE82699CC2DE952;// 0x0A60(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F07672D147C05CE0E10F4BACDC4D5FBB;// 0x0AA8(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Pickaxe_Graffiti_Dyn_AnimBP.SK_Pickaxe_Graffiti_Dyn_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_Pickaxe_Graffiti_Dyn_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
