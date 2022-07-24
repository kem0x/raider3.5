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

// BlueprintGeneratedClass TT_AirStrike.TT_AirStrike_C
// 0x0000 (0x0168 - 0x0168)
class UTT_AirStrike_C : public UFortGameplayAbilityTooltip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TT_AirStrike.TT_AirStrike_C");
		return ptr;
	}


	bool GetTextForTokenFromAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, struct FGameplayTag* Tag, class UFortTooltipContext** Context, struct FGameplayTag* Token, struct FText* OutText);
	bool GetApplicationTag(class UGameplayAbility** AbilityInstance, struct FGameplayTag* OutTag);
	void InitializeAbilityInstanceInternal(class UGameplayAbility** AbilityInstance, class UFortTooltipContext** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
