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

// UserDefinedStruct AirStrikeLeveledPatterns.AirStrikeLeveledPatterns
// 0x0010
struct FAirStrikeLeveledPatterns
{
	TArray<struct FAirStrikesPatterns>                 AirStrikePatternsPerLevel_3_74F45F1247CBB6B104AE179363E4E739;// 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
