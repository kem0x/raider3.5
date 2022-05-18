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

// BlueprintGeneratedClass GA_Athena_C4_Passive.GA_Athena_C4_Passive_C
// 0x0018 (0x0B08 - 0x0AF0)
class UGA_Athena_C4_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                TrackGroupTag;                                            // 0x0AF8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*                    C4ItemDef;                                                // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_C4_Passive.GA_Athena_C4_Passive_C");
		return ptr;
	}


	void EventReceived_66DB263A44E303CAE6B174AFF4094381(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_C4_Passive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
