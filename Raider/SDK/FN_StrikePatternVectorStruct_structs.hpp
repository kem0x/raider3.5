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

// UserDefinedStruct StrikePatternVectorStruct.StrikePatternVectorStruct
// 0x0010
struct FStrikePatternVectorStruct
{
	TArray<struct FVector>                             PatternArray_16_0BD5A58E4D329D29E4EE3191A4E993CA;         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
