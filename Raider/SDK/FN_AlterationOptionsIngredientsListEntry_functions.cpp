// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.GetHaveQuantity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAlterationOptionsIngredientsListEntry_C::GetHaveQuantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.GetHaveQuantity");

	UAlterationOptionsIngredientsListEntry_C_GetHaveQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.SetIngredientCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationOptionsIngredientsListEntry_C::SetIngredientCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.SetIngredientCount");

	UAlterationOptionsIngredientsListEntry_C_SetIngredientCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.GetIconBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UAlterationOptionsIngredientsListEntry_C::GetIconBrush(class UFortItemDefinition* ItemDefinition, struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.GetIconBrush");

	UAlterationOptionsIngredientsListEntry_C_GetIconBrush_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAlterationOptionsIngredientsListEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.Construct");

	UAlterationOptionsIngredientsListEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IsBeingReset                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsIngredientsListEntry_C::HandleDifferentItemOrQuantitySetBP(bool* IsBeingReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.HandleDifferentItemOrQuantitySetBP");

	UAlterationOptionsIngredientsListEntry_C_HandleDifferentItemOrQuantitySetBP_Params params;
	params.IsBeingReset = IsBeingReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.ExecuteUbergraph_AlterationOptionsIngredientsListEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsIngredientsListEntry_C::ExecuteUbergraph_AlterationOptionsIngredientsListEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.ExecuteUbergraph_AlterationOptionsIngredientsListEntry");

	UAlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
