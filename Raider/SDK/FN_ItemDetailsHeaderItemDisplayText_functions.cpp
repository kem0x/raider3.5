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

// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.GetDisplayName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   DisplayName                    (Parm, OutParm)

void UItemDetailsHeaderItemDisplayText_C::GetDisplayName(struct FText* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.GetDisplayName");

	UItemDetailsHeaderItemDisplayText_C_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}


// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsHeaderItemDisplayText_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.HandlePostDifferentItemToDetailSet");

	UItemDetailsHeaderItemDisplayText_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsHeaderItemDisplayText_C::HandlePostDifferentItemToCompareWithSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.HandlePostDifferentItemToCompareWithSet");

	UItemDetailsHeaderItemDisplayText_C_HandlePostDifferentItemToCompareWithSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.ExecuteUbergraph_ItemDetailsHeaderItemDisplayText
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemDetailsHeaderItemDisplayText_C::ExecuteUbergraph_ItemDetailsHeaderItemDisplayText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.ExecuteUbergraph_ItemDetailsHeaderItemDisplayText");

	UItemDetailsHeaderItemDisplayText_C_ExecuteUbergraph_ItemDetailsHeaderItemDisplayText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
