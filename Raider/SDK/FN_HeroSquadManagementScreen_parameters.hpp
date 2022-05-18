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

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandlePickerHideAni
struct UHeroSquadManagementScreen_C_HandlePickerHideAni_Params
{
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleHideSlotInfoAni
struct UHeroSquadManagementScreen_C_HandleHideSlotInfoAni_Params
{
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandlePickerShowAni
struct UHeroSquadManagementScreen_C_HandlePickerShowAni_Params
{
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleShowSlotInfoAni
struct UHeroSquadManagementScreen_C_HandleShowSlotInfoAni_Params
{
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.UpdateSquadSlotInfoPanel
struct UHeroSquadManagementScreen_C_UpdateSquadSlotInfoPanel_Params
{
	int                                                SquadSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Highlight State
struct UHeroSquadManagementScreen_C_Update_Hero_Squad_Bonus_Highlight_State_Params
{
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Update Hero Squad Bonus Tiles SubIcon Glow State
struct UHeroSquadManagementScreen_C_Update_Hero_Squad_Bonus_Tiles_SubIcon_Glow_State_Params
{
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HideSlotInfo
struct UHeroSquadManagementScreen_C_HideSlotInfo_Params
{
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ShowSlotInfo
struct UHeroSquadManagementScreen_C_ShowSlotInfo_Params
{
	struct FText                                       HeaderText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       BodyText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleClosePicker
struct UHeroSquadManagementScreen_C_HandleClosePicker_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.GetInZoneVisibility
struct UHeroSquadManagementScreen_C_GetInZoneVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnActivated
struct UHeroSquadManagementScreen_C_OnActivated_Params
{
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.Construct
struct UHeroSquadManagementScreen_C_Construct_Params
{
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.SetDefaultScroll
struct UHeroSquadManagementScreen_C_SetDefaultScroll_Params
{
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.OnDeactivated
struct UHeroSquadManagementScreen_C_OnDeactivated_Params
{
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerShown
struct UHeroSquadManagementScreen_C_HandleSquadSlotPickerShown_Params
{
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.HandleSquadSlotPickerHidden
struct UHeroSquadManagementScreen_C_HandleSquadSlotPickerHidden_Params
{
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature
struct UHeroSquadManagementScreen_C_BndEvt__SquadSlotsView_K2Node_ComponentBoundEvent_2_OnDifferentSquadSlotSelected__DelegateSignature_Params
{
	int                                                SquadSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HeroSquadManagementScreen.HeroSquadManagementScreen_C.ExecuteUbergraph_HeroSquadManagementScreen
struct UHeroSquadManagementScreen_C_ExecuteUbergraph_HeroSquadManagementScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
