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

// BlueprintGeneratedClass TT_Ninja_SwordHitsHeal.TT_Ninja_SwordHitsHeal_C
// 0x0000 (0x0168 - 0x0168)
class UTT_Ninja_SwordHitsHeal_C : public UFortGameplayAbilityTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TT_Ninja_SwordHitsHeal.TT_Ninja_SwordHitsHeal_C");
		return ptr;
	}


	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, struct FGameplayTag* Tag, class UFortTooltipContext** Context, struct FGameplayTag* Token, struct FText* OutText);
	void InitializeAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, class UFortTooltipContext** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
