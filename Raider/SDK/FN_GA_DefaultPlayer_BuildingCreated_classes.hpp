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

// BlueprintGeneratedClass GA_DefaultPlayer_BuildingCreated.GA_DefaultPlayer_BuildingCreated_C
// 0x0008 (0x0AF8 - 0x0AF0)
class UGA_DefaultPlayer_BuildingCreated_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_DefaultPlayer_BuildingCreated.GA_DefaultPlayer_BuildingCreated_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
