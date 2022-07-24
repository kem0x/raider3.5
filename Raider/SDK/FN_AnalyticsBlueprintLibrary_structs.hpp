#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnalyticsBlueprintLibrary.AnalyticsEventAttr
// 0x0020
struct FAnalyticsEventAttr
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
