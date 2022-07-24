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

// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.SetupTitle
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationOptionsIngredientsList_C::SetupTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.SetupTitle");

	UAlterationOptionsIngredientsList_C_SetupTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.AddListEntry
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemQuantityListEntryBase** ListEntry                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAlterationOptionsIngredientsList_C::AddListEntry(class UFortItemQuantityListEntryBase** ListEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.AddListEntry");

	UAlterationOptionsIngredientsList_C_AddListEntry_Params params;
	params.ListEntry = ListEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAlterationOptionsIngredientsList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.Construct");

	UAlterationOptionsIngredientsList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.ExecuteUbergraph_AlterationOptionsIngredientsList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsIngredientsList_C::ExecuteUbergraph_AlterationOptionsIngredientsList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.ExecuteUbergraph_AlterationOptionsIngredientsList");

	UAlterationOptionsIngredientsList_C_ExecuteUbergraph_AlterationOptionsIngredientsList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
