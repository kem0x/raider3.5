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

// UserDefinedStruct TooltipStat.TooltipStat
// 0x0031
struct FTooltipStat
{
	struct FText                                       Label_2_C7826979463D342B4FA77287F6F27668;                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Value_5_A69E21C0475825796408CA9813F2A8B8;                 // 0x0018(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EWeaponTooltipStatType>                Type_10_56B7498643DBED962C2AB6876B3FA6DC;                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
