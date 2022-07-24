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

// AnimBlueprintGeneratedClass BP_Auto_Shotgun_Drum_Side_Action.BP_Auto_Shotgun_Drum_Side_Action_C
// 0x00F8 (0x0458 - 0x0360)
class UBP_Auto_Shotgun_Drum_Side_Action_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7EA7D37645F443897F10498323E528F7;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_64A40914450FCFA8B6BB00AA8DAB6F04;      // 0x03B0(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_9AFCD47E4FA0ED23378DEABB5751407C;// 0x0420(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Auto_Shotgun_Drum_Side_Action.BP_Auto_Shotgun_Drum_Side_Action_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
