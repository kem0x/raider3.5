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

// Function ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C.Add XP Cost to Upgrade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolveRarityIngredientsList_C::Add_XP_Cost_to_Upgrade(class UFortItem* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C.Add XP Cost to Upgrade");

	UItemInspectEvolveRarityIngredientsList_C_Add_XP_Cost_to_Upgrade_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C.ClearIngredients
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolveRarityIngredientsList_C::ClearIngredients()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C.ClearIngredients");

	UItemInspectEvolveRarityIngredientsList_C_ClearIngredients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C.SetIngredients
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFortItemQuantityPair> InIngredients                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemInspectEvolveRarityIngredientsList_C::SetIngredients(class UFortItem* Item, TArray<struct FFortItemQuantityPair>* InIngredients)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C.SetIngredients");

	UItemInspectEvolveRarityIngredientsList_C_SetIngredients_Params params;
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
