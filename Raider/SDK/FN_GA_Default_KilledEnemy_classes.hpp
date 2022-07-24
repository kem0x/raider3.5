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

// BlueprintGeneratedClass GA_Default_KilledEnemy.GA_Default_KilledEnemy_C
// 0x0008 (0x0918 - 0x0910)
class UGA_Default_KilledEnemy_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Default_KilledEnemy.GA_Default_KilledEnemy_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_Default_KilledEnemy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
