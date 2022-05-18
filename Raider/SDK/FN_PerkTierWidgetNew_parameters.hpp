#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.InitializeSettings
struct UPerkTierWidgetNew_C_InitializeSettings_Params
{
	bool                                               bIncludeName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDescription;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        IconSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortUIPerkTier                             FortPerkTier;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.Construct
struct UPerkTierWidgetNew_C_Construct_Params
{
};

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.OnGeneratePerk
struct UPerkTierWidgetNew_C_OnGeneratePerk_Params
{
	struct FFortUIPerk*                                Perk;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortPerkWidget_NUI**                        PerkWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PerkTierWidgetNew.PerkTierWidgetNew_C.ExecuteUbergraph_PerkTierWidgetNew
struct UPerkTierWidgetNew_C_ExecuteUbergraph_PerkTierWidgetNew_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
