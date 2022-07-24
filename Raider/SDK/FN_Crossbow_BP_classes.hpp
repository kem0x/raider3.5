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

// AnimBlueprintGeneratedClass Crossbow_BP.Crossbow_BP_C
// 0x0170 (0x04D0 - 0x0360)
class UCrossbow_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C2CE56F348B7595774725785CADC3973;      // 0x0368(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_Root_F1B1D70144C41EE177919293C033515D;      // 0x03D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB6FD6CD480FD66D7D67B3BB318137F7;// 0x0420(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Crossbow_BP.Crossbow_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_Crossbow_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
