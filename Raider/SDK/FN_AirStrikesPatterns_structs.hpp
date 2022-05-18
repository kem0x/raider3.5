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

// UserDefinedStruct AirStrikesPatterns.AirStrikesPatterns
// 0x0010
struct FAirStrikesPatterns
{
	TArray<struct FStrikePatternVectorStruct>          StrikePatterns_3_AF55340043DED8607971118BA2FB6DEE;        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
