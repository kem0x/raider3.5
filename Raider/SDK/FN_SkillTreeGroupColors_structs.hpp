#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct SkillTreeGroupColors.SkillTreeGroupColors
// 0x0054
struct FSkillTreeGroupColors
{
	struct FLinearColor                                Building_2_7950BDF24FF16B9A998F399E3AD0DE58;              // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Utility_4_32E0ADBF4AF0BE071C3829BD1AE4271F;               // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Combat_6_F89501C64453C115DA86DC966BEC4ACA;                // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Research_8_DD7B5C2B4A90AAADB5B3CF868DCA4EF0;              // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                BASE_10_904F5F874F6BF862C41E738BA292AFFD;                 // 0x0040(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              alpha_13_864E1B544C8E8D593BA1EF91AAE2DE82;                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
