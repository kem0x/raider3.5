// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.SetupItemLevelRequirement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionIngredientsList_C::SetupItemLevelRequirement(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.SetupItemLevelRequirement");

	UItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.ClearIngredients
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolutionIngredientsList_C::ClearIngredients()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.ClearIngredients");

	UItemInspectEvolutionIngredientsList_C_ClearIngredients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.SetIngredients
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFortItemQuantityPair> InIngredients                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemInspectEvolutionIngredientsList_C::SetIngredients(class UFortItem* Item, TArray<struct FFortItemQuantityPair>* InIngredients)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.SetIngredients");

	UItemInspectEvolutionIngredientsList_C_SetIngredients_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InIngredients != nullptr)
		*InIngredients = params.InIngredients;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
