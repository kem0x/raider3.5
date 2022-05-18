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

// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.Clear Stats
// (Public, BlueprintCallable, BlueprintEvent)

void UItemCalledOutAttributesDetailWidget_C::Clear_Stats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.Clear Stats");

	UItemCalledOutAttributesDetailWidget_C_Clear_Stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.UpdateStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemCalledOutAttributesDetailWidget_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.UpdateStats");

	UItemCalledOutAttributesDetailWidget_C_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.GetDisplayAttributesToCallOut
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortDisplayAttribute> Attributes                     (Parm, OutParm, ZeroConstructor)

void UItemCalledOutAttributesDetailWidget_C::GetDisplayAttributesToCallOut(TArray<struct FFortDisplayAttribute>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.GetDisplayAttributesToCallOut");

	UItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attributes != nullptr)
		*Attributes = params.Attributes;
}


// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemCalledOutAttributesDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UItemCalledOutAttributesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandleItemToDetailChangedBP
// (Event, Protected, BlueprintEvent)

void UItemCalledOutAttributesDetailWidget_C::HandleItemToDetailChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandleItemToDetailChangedBP");

	UItemCalledOutAttributesDetailWidget_C_HandleItemToDetailChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.ExecuteUbergraph_ItemCalledOutAttributesDetailWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCalledOutAttributesDetailWidget_C::ExecuteUbergraph_ItemCalledOutAttributesDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.ExecuteUbergraph_ItemCalledOutAttributesDetailWidget");

	UItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
