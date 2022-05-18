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

// Function HeroSquadBonus.HeroSquadBonus_C.Get_ToolTipWidget
struct UHeroSquadBonus_C_Get_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HeroSquadBonus.HeroSquadBonus_C.SetBackgroundGlow
struct UHeroSquadBonus_C_SetBackgroundGlow_Params
{
	bool                                               GlowBackground;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeroSquadBonus.HeroSquadBonus_C.UpdateSquadBonusIconState
struct UHeroSquadBonus_C_UpdateSquadBonusIconState_Params
{
};

// Function HeroSquadBonus.HeroSquadBonus_C.UpdateBonusPerk
struct UHeroSquadBonus_C_UpdateBonusPerk_Params
{
};

// Function HeroSquadBonus.HeroSquadBonus_C.PreConstruct
struct UHeroSquadBonus_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeroSquadBonus.HeroSquadBonus_C.OnPerkUpdated
struct UHeroSquadBonus_C_OnPerkUpdated_Params
{
};

// Function HeroSquadBonus.HeroSquadBonus_C.Construct
struct UHeroSquadBonus_C_Construct_Params
{
};

// Function HeroSquadBonus.HeroSquadBonus_C.OnCombinedTooltipDescriptionReady
struct UHeroSquadBonus_C_OnCombinedTooltipDescriptionReady_Params
{
	struct FText*                                      Description;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HeroSquadBonus.HeroSquadBonus_C.ExecuteUbergraph_HeroSquadBonus
struct UHeroSquadBonus_C_ExecuteUbergraph_HeroSquadBonus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
