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

// BlueprintGeneratedClass GAB_TakerApplyFullBodyHit.GAB_TakerApplyFullBodyHit_C
// 0x0008 (0x0970 - 0x0968)
class UGAB_TakerApplyFullBodyHit_C : public UGAB_GenericApplyFullBodyHit_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0968(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_TakerApplyFullBodyHit.GAB_TakerApplyFullBodyHit_C");
		return ptr;
	}


	void PickFullBodyHitMontageSection();
	void ExecuteUbergraph_GAB_TakerApplyFullBodyHit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
