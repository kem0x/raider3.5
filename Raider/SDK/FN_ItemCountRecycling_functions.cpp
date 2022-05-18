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

// Function ItemCountRecycling.ItemCountRecycling_C.SetItemDefinition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCountRecycling_C::SetItemDefinition(class UFortItemDefinition* ItemDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCountRecycling.ItemCountRecycling_C.SetItemDefinition");

	UItemCountRecycling_C_SetItemDefinition_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCountRecycling.ItemCountRecycling_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemCountRecycling_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCountRecycling.ItemCountRecycling_C.Construct");

	UItemCountRecycling_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCountRecycling.ItemCountRecycling_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCountRecycling_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCountRecycling.ItemCountRecycling_C.PreConstruct");

	UItemCountRecycling_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCountRecycling.ItemCountRecycling_C.ExecuteUbergraph_ItemCountRecycling
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCountRecycling_C::ExecuteUbergraph_ItemCountRecycling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCountRecycling.ItemCountRecycling_C.ExecuteUbergraph_ItemCountRecycling");

	UItemCountRecycling_C_ExecuteUbergraph_ItemCountRecycling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
