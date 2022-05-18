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

// Function PerkWidgetNew.PerkWidgetNew_C.UpdatePerk
struct UPerkWidgetNew_C_UpdatePerk_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.Get_OverlayAbilityPerk_ToolTipWidget
struct UPerkWidgetNew_C_Get_OverlayAbilityPerk_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PerkWidgetNew.PerkWidgetNew_C.InitializeSettings
struct UPerkWidgetNew_C_InitializeSettings_Params
{
	bool                                               bIncludeName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeDescription;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        IconSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLargeFormatName;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortUIPerk                                 Perk;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ShowMouseTooltips;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerkWidgetNew.PerkWidgetNew_C.HighlightBadge
struct UPerkWidgetNew_C_HighlightBadge_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.GetPerkStat
struct UPerkWidgetNew_C_GetPerkStat_Params
{
	struct FTooltipStat                                TooltipStat;                                              // (Parm, OutParm)
};

// Function PerkWidgetNew.PerkWidgetNew_C.ShowTierImage
struct UPerkWidgetNew_C_ShowTierImage_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.SetupBadge
struct UPerkWidgetNew_C_SetupBadge_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.InitializeHeroBonusIcon
struct UPerkWidgetNew_C_InitializeHeroBonusIcon_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.InitializeText
struct UPerkWidgetNew_C_InitializeText_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.ShouldFadePerk
struct UPerkWidgetNew_C_ShouldFadePerk_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PerkWidgetNew.PerkWidgetNew_C.GetHighlightColor
struct UPerkWidgetNew_C_GetHighlightColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function PerkWidgetNew.PerkWidgetNew_C.GetTierAbilityBrush
struct UPerkWidgetNew_C_GetTierAbilityBrush_Params
{
	struct FSlateBrush                                 SlateBrush;                                               // (Parm, OutParm)
};

// Function PerkWidgetNew.PerkWidgetNew_C.InitializeAbilityPerk
struct UPerkWidgetNew_C_InitializeAbilityPerk_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.InitializeBasicPerk
struct UPerkWidgetNew_C_InitializeBasicPerk_Params
{
};

// Function PerkWidgetNew.PerkWidgetNew_C.PreConstruct
struct UPerkWidgetNew_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerkWidgetNew.PerkWidgetNew_C.OnCombinedTooltipDescriptionReady
struct UPerkWidgetNew_C_OnCombinedTooltipDescriptionReady_Params
{
	struct FText*                                      Description;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PerkWidgetNew.PerkWidgetNew_C.ExecuteUbergraph_PerkWidgetNew
struct UPerkWidgetNew_C_ExecuteUbergraph_PerkWidgetNew_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
