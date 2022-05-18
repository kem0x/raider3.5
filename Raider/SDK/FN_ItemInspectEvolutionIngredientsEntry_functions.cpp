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

// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.GetHaveQuantity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortItemQuantityPair   InPair                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemInspectEvolutionIngredientsEntry_C::GetHaveQuantity(struct FFortItemQuantityPair* InPair)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.GetHaveQuantity");

	UItemInspectEvolutionIngredientsEntry_C_GetHaveQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InPair != nullptr)
		*InPair = params.InPair;

	return params.ReturnValue;
}


// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.SetIngredientCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolutionIngredientsEntry_C::SetIngredientCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.SetIngredientCount");

	UItemInspectEvolutionIngredientsEntry_C_SetIngredientCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.GetIconBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UItemInspectEvolutionIngredientsEntry_C::GetIconBrush(class UFortItemDefinition* ItemDefinition, struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.GetIconBrush");

	UItemInspectEvolutionIngredientsEntry_C_GetIconBrush_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemInspectEvolutionIngredientsEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.Construct");

	UItemInspectEvolutionIngredientsEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolutionIngredientsEntry_C::ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolutionIngredientsEntry.ItemInspectEvolutionIngredientsEntry_C.ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry");

	UItemInspectEvolutionIngredientsEntry_C_ExecuteUbergraph_ItemInspectEvolutionIngredientsEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
