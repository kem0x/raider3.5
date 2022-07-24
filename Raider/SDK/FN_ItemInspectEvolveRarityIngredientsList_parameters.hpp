#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C.Add XP Cost to Upgrade
struct UItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade_Params
{
	class UFortItem*                                   Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C.ClearIngredients
struct UItemInspectEvolveRarityIngredientsList_C_ClearIngredients_Params
{
};

// Function ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C.SetIngredients
struct UItemInspectEvolveRarityIngredientsList_C_SetIngredients_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemQuantityPair>               InIngredients;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
