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

// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.GetHaveQuantity
struct UAlterationOptionsIngredientsListEntry_C_GetHaveQuantity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.SetIngredientCount
struct UAlterationOptionsIngredientsListEntry_C_SetIngredientCount_Params
{
};

// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.GetIconBrush
struct UAlterationOptionsIngredientsListEntry_C_GetIconBrush_Params
{
	class UFortItemDefinition*                         ItemDefinition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.Construct
struct UAlterationOptionsIngredientsListEntry_C_Construct_Params
{
};

// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.HandleDifferentItemOrQuantitySetBP
struct UAlterationOptionsIngredientsListEntry_C_HandleDifferentItemOrQuantitySetBP_Params
{
	bool*                                              IsBeingReset;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.ExecuteUbergraph_AlterationOptionsIngredientsListEntry
struct UAlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
