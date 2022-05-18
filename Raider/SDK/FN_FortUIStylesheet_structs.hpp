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

// UserDefinedStruct FortUIStylesheet.FortUIStylesheet
// 0x0B20
struct FFortUIStylesheet
{
	struct FFortUITheme                                Theme_Default_91_015CB18F413B4A467B38CB93E8734A68;        // 0x0000(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortUITheme                                Theme_Emphasis_94_962F11A944E9DF11F547FBBDB98DD4BE;       // 0x0060(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortUITheme                                Theme_Critical_97_43F63D0C4E71395016AE00B41BB7BA0C;       // 0x00C0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                         Standard_Icon_Size_131_774B5BB9434A3E02AEC16CA1BB6B253A;  // 0x0120(0x0330) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         Item_Size_144_A36DAD55442FF44849D422B57DDD037A;           // 0x0450(0x0330) (Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                         Item_Icon_Size_134_098E0A9F46695EDB2E9166978E7B49F1;      // 0x0780(0x0330) (Edit, BlueprintVisible)
	struct FLinearColor                                Color_Buff_145_AC063FB242D9ECBD0B6306BBE205C7F7;          // 0x0AB0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color_Debuff_146_0402338944FCC3DED4C90E9A78FD8BC5;        // 0x0AC0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color_Unique_150_B15CF0C9436988001F70B4B8F9D32E5B;        // 0x0AD0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color_FireElemental_152_FBAFDA0C445A96F1B689E880A707069C; // 0x0AE0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color_IceElemental_154_FDA209D8429DF768ABA53EBA24C4B505;  // 0x0AF0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color_BoltElemental_156_10AEFEC147C25B2DEE47619E4AB4ABC7; // 0x0B00(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Color_HarvestWeakPoint_159_AE0CF44C4731DAF69193D4B4E59B0E7E;// 0x0B10(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
