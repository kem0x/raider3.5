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

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Initialize
struct UQuickbarSlotCooldown_C_Initialize_Params
{
	TEnumAsByte<EItemDisplayStyle>                     QuickbarItemDisplayStyle;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<EFortItemCooldownType>                      DesiredCooldownTypesSupported;                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.Show Countdown
struct UQuickbarSlotCooldown_C_Show_Countdown_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStarted
struct UQuickbarSlotCooldown_C_OnCooldownStarted_Params
{
	EFortItemCooldownType*                             CooldownType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.OnCooldownStopped
struct UQuickbarSlotCooldown_C_OnCooldownStopped_Params
{
	EFortItemCooldownType*                             CooldownType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuickbarSlotCooldown.QuickbarSlotCooldown_C.ExecuteUbergraph_QuickbarSlotCooldown
struct UQuickbarSlotCooldown_C_ExecuteUbergraph_QuickbarSlotCooldown_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
