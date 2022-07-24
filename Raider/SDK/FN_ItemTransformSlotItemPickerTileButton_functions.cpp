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

// Function ItemTransformSlotItemPickerTileButton.ItemTransformSlotItemPickerTileButton_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject**                ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformSlotItemPickerTileButton_C::OnListItemObjectSet(class UObject** ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotItemPickerTileButton.ItemTransformSlotItemPickerTileButton_C.OnListItemObjectSet");

	UItemTransformSlotItemPickerTileButton_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotItemPickerTileButton.ItemTransformSlotItemPickerTileButton_C.ExecuteUbergraph_ItemTransformSlotItemPickerTileButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformSlotItemPickerTileButton_C::ExecuteUbergraph_ItemTransformSlotItemPickerTileButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotItemPickerTileButton.ItemTransformSlotItemPickerTileButton_C.ExecuteUbergraph_ItemTransformSlotItemPickerTileButton");

	UItemTransformSlotItemPickerTileButton_C_ExecuteUbergraph_ItemTransformSlotItemPickerTileButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
