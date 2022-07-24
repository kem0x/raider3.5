#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChoiceCardName.ChoiceCardName_C.UpdateText
struct UChoiceCardName_C_UpdateText_Params
{
	struct FText                                       DisplayText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	EFortRarity                                        Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
