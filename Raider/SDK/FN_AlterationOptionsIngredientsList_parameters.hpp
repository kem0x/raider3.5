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

// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.SetupTitle
struct UAlterationOptionsIngredientsList_C_SetupTitle_Params
{
};

// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.AddListEntry
struct UAlterationOptionsIngredientsList_C_AddListEntry_Params
{
	class UFortItemQuantityListEntryBase**             ListEntry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.Construct
struct UAlterationOptionsIngredientsList_C_Construct_Params
{
};

// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.ExecuteUbergraph_AlterationOptionsIngredientsList
struct UAlterationOptionsIngredientsList_C_ExecuteUbergraph_AlterationOptionsIngredientsList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
