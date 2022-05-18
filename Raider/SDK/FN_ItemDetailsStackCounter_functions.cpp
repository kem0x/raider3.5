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

// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Refresh Visibility
// (Private, BlueprintCallable, BlueprintEvent)

void UItemDetailsStackCounter_C::Refresh_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Refresh Visibility");

	UItemDetailsStackCounter_C_Refresh_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Update Stack Count
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemDetailsStackCounter_C::Update_Stack_Count()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Update Stack Count");

	UItemDetailsStackCounter_C_Update_Stack_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemDetailsStackCounter_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.PreConstruct");

	UItemDetailsStackCounter_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemDetailsStackCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Construct");

	UItemDetailsStackCounter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandlePreDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsStackCounter_C::HandlePreDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandlePreDifferentItemToDetailSet");

	UItemDetailsStackCounter_C_HandlePreDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsStackCounter_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandlePostDifferentItemToDetailSet");

	UItemDetailsStackCounter_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandleOnItemChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bItemChanged                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAmmoChanged                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIngredientsChanged            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemDetailsStackCounter_C::HandleOnItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandleOnItemChanged");

	UItemDetailsStackCounter_C_HandleOnItemChanged_Params params;
	params.bItemChanged = bItemChanged;
	params.bAmmoChanged = bAmmoChanged;
	params.bIngredientsChanged = bIngredientsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.ExecuteUbergraph_ItemDetailsStackCounter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemDetailsStackCounter_C::ExecuteUbergraph_ItemDetailsStackCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.ExecuteUbergraph_ItemDetailsStackCounter");

	UItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
