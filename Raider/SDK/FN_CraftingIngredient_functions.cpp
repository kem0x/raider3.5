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

// Function CraftingIngredient.CraftingIngredient_C.ShowDivider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCraftingIngredient_C::ShowDivider(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingIngredient.CraftingIngredient_C.ShowDivider");

	UCraftingIngredient_C_ShowDivider_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingIngredient.CraftingIngredient_C.Get Tooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCraftingIngredient_C::Get_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingIngredient.CraftingIngredient_C.Get Tooltip");

	UCraftingIngredient_C_Get_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CraftingIngredient.CraftingIngredient_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCraftingIngredient_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingIngredient.CraftingIngredient_C.Refresh");

	UCraftingIngredient_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingIngredient.CraftingIngredient_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftingIngredient_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingIngredient.CraftingIngredient_C.Construct");

	UCraftingIngredient_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingIngredient.CraftingIngredient_C.ExecuteUbergraph_CraftingIngredient
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCraftingIngredient_C::ExecuteUbergraph_CraftingIngredient(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingIngredient.CraftingIngredient_C.ExecuteUbergraph_CraftingIngredient");

	UCraftingIngredient_C_ExecuteUbergraph_CraftingIngredient_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
