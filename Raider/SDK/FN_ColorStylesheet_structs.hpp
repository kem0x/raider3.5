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

// UserDefinedStruct ColorStylesheet.ColorStylesheet
// 0x0190
struct FColorStylesheet
{
	struct FFortUITheme                                Theme_Default_91_015CB18F413B4A467B38CB93E8734A68;        // 0x0000(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortUITheme                                Theme_Emphasis_94_962F11A944E9DF11F547FBBDB98DD4BE;       // 0x0060(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortUITheme                                Theme_Critical_97_43F63D0C4E71395016AE00B41BB7BA0C;       // 0x00C0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                Color_Buff_145_AC063FB242D9ECBD0B6306BBE205C7F7;          // 0x0120(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color_Debuff_146_0402338944FCC3DED4C90E9A78FD8BC5;        // 0x0130(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color_Unique_150_B15CF0C9436988001F70B4B8F9D32E5B;        // 0x0140(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color_FireElemental_152_FBAFDA0C445A96F1B689E880A707069C; // 0x0150(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color_IceElemental_154_FDA209D8429DF768ABA53EBA24C4B505;  // 0x0160(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color_BoltElemental_156_10AEFEC147C25B2DEE47619E4AB4ABC7; // 0x0170(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color_HarvestWeakPoint_159_AE0CF44C4731DAF69193D4B4E59B0E7E;// 0x0180(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
