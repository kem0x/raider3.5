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

// Function ItemDetailsHeader.ItemDetailsHeader_C.SetStyles
// (Public, BlueprintCallable, BlueprintEvent)

void UItemDetailsHeader_C::SetStyles()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeader.ItemDetailsHeader_C.SetStyles");

	UItemDetailsHeader_C_SetStyles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.UpdateItemsForWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemDetailsHeader_C::UpdateItemsForWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeader.ItemDetailsHeader_C.UpdateItemsForWidgets");

	UItemDetailsHeader_C_UpdateItemsForWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemDetailsHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeader.ItemDetailsHeader_C.Construct");

	UItemDetailsHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsHeader_C::HandleDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToDetailSet");

	UItemDetailsHeader_C_HandleDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToCompareSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsHeader_C::HandleDifferentItemToCompareSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToCompareSet");

	UItemDetailsHeader_C_HandleDifferentItemToCompareSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeader.ItemDetailsHeader_C.ExecuteUbergraph_ItemDetailsHeader
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemDetailsHeader_C::ExecuteUbergraph_ItemDetailsHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeader.ItemDetailsHeader_C.ExecuteUbergraph_ItemDetailsHeader");

	UItemDetailsHeader_C_ExecuteUbergraph_ItemDetailsHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
