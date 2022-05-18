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

// Function ItemCountOverCost.ItemCountOverCost_C.Calculate Total Item Def in Inventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemCountOverCost_C::Calculate_Total_Item_Def_in_Inventory(class UFortItemDefinition* ItemDefinition, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCountOverCost.ItemCountOverCost_C.Calculate Total Item Def in Inventory");

	UItemCountOverCost_C_Calculate_Total_Item_Def_in_Inventory_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function ItemCountOverCost.ItemCountOverCost_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemCountOverCost_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCountOverCost.ItemCountOverCost_C.Update");

	UItemCountOverCost_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCountOverCost.ItemCountOverCost_C.Get Meets Criteria Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UItemCountOverCost_C::Get_Meets_Criteria_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCountOverCost.ItemCountOverCost_C.Get Meets Criteria Color");

	UItemCountOverCost_C_Get_Meets_Criteria_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemCountOverCost.ItemCountOverCost_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemCountOverCost_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCountOverCost.ItemCountOverCost_C.Construct");

	UItemCountOverCost_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCountOverCost.ItemCountOverCost_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCountOverCost_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCountOverCost.ItemCountOverCost_C.PreConstruct");

	UItemCountOverCost_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCountOverCost.ItemCountOverCost_C.ExecuteUbergraph_ItemCountOverCost
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCountOverCost_C::ExecuteUbergraph_ItemCountOverCost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCountOverCost.ItemCountOverCost_C.ExecuteUbergraph_ItemCountOverCost");

	UItemCountOverCost_C_ExecuteUbergraph_ItemCountOverCost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
