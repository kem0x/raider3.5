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

// BlueprintGeneratedClass GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C
// 0x0018 (0x0980 - 0x0968)
class UGAB_FlingerApplyFullBodyHit_C : public UGAB_GenericApplyFullBodyHit_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0968(0x0008) (Transient, DuplicateTransient)
	struct FName                                       HitReactBack;                                             // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HitReactSectionName;                                      // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C");
		return ptr;
	}


	void PickFullBodyHitMontageSection();
	void ExecuteUbergraph_GAB_FlingerApplyFullBodyHit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
