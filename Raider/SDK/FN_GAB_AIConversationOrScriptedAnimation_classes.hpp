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

// BlueprintGeneratedClass GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C
// 0x0008 (0x0AF8 - 0x0AF0)
class UGAB_AIConversationOrScriptedAnimation_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C");
		return ptr;
	}


	void Completed_0DEF95174D4614F4567B4E8B836FDE6F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_0DEF95174D4614F4567B4E8B836FDE6F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_0DEF95174D4614F4567B4E8B836FDE6F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
