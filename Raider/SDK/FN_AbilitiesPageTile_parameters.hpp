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

// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityPerkInfo
struct UAbilitiesPageTile_C_SetAbilityPerkInfo_Params
{
	struct FFortUIPerk                                 AbilityPerk;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.UpdateKeyBinding
struct UAbilitiesPageTile_C_UpdateKeyBinding_Params
{
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityItemInfo
struct UAbilitiesPageTile_C_SetAbilityItemInfo_Params
{
	class UFortItem*                                   SlottedAbilityItem;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.Construct
struct UAbilitiesPageTile_C_Construct_Params
{
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.HandleInputMethodChanged
struct UAbilitiesPageTile_C_HandleInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AbilitiesPageTile.AbilitiesPageTile_C.ExecuteUbergraph_AbilitiesPageTile
struct UAbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
