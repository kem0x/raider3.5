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

// BlueprintGeneratedClass GAB_MimicMelee.GAB_MimicMelee_C
// 0x0008 (0x0950 - 0x0948)
class UGAB_MimicMelee_C : public UGAB_HuskMelee_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0948(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_MimicMelee.GAB_MimicMelee_C");
		return ptr;
	}


	void GameplayEffectContainerApplied(struct FGameplayAbilityTargetDataHandle* Target_Data);
	void ExecuteUbergraph_GAB_MimicMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
