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

// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.MarkCosmeticAsSeen
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationPickerTileButton_C::MarkCosmeticAsSeen()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.MarkCosmeticAsSeen");

	UAthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.UpdateBangState
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationPickerTileButton_C::UpdateBangState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.UpdateBangState");

	UAthenaCustomizationPickerTileButton_C_UpdateBangState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject**                ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationPickerTileButton_C::OnListItemObjectSet(class UObject** ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnListItemObjectSet");

	UAthenaCustomizationPickerTileButton_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UAthenaCustomizationPickerTileButton_C::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnSelected");

	UAthenaCustomizationPickerTileButton_C_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.ExecuteUbergraph_AthenaCustomizationPickerTileButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationPickerTileButton_C::ExecuteUbergraph_AthenaCustomizationPickerTileButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.ExecuteUbergraph_AthenaCustomizationPickerTileButton");

	UAthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
