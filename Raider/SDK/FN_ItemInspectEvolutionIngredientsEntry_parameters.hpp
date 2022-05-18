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

// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.GetHaveQuantity
struct UItemInspectEvolutionIngredientsEntry_C_GetHaveQuantity_Params
{
	struct FFortItemQuantityPair                       InPair;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.SetIngredientCount
struct UItemInspectEvolutionIngredientsEntry_C_SetIngredientCount_Params
{
};

// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.GetIconBrush
struct UItemInspectEvolutionIngredientsEntry_C_GetIconBrush_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.Construct
struct UItemInspectEvolutionIngredientsEntry_C_Construct_Params
{
};

// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry
struct UItemInspectEvolutionIngredientsEntry_C_ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
