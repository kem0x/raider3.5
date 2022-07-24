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

// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.UpdateOverlays
// (Public, BlueprintCallable, BlueprintEvent)

void USquadSlotItemPickerTileButton_C::UpdateOverlays()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.UpdateOverlays");

	USquadSlotItemPickerTileButton_C_UpdateOverlays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject**                ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadSlotItemPickerTileButton_C::OnListItemObjectSet(class UObject** ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.OnListItemObjectSet");

	USquadSlotItemPickerTileButton_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleItemSlottedToDifferentSquad
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHomebaseSquadSlotId*   SquadSlotId                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USquadSlotItemPickerTileButton_C::HandleItemSlottedToDifferentSquad(struct FHomebaseSquadSlotId* SquadSlotId)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleItemSlottedToDifferentSquad");

	USquadSlotItemPickerTileButton_C_HandleItemSlottedToDifferentSquad_Params params;
	params.SquadSlotId = SquadSlotId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleSlottingRestrictionReasonsChanged
// (Event, Protected, BlueprintEvent)

void USquadSlotItemPickerTileButton_C::HandleSlottingRestrictionReasonsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.HandleSlottingRestrictionReasonsChanged");

	USquadSlotItemPickerTileButton_C_HandleSlottingRestrictionReasonsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.ExecuteUbergraph_SquadSlotItemPickerTileButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadSlotItemPickerTileButton_C::ExecuteUbergraph_SquadSlotItemPickerTileButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPickerTileButton.SquadSlotItemPickerTileButton_C.ExecuteUbergraph_SquadSlotItemPickerTileButton");

	USquadSlotItemPickerTileButton_C_ExecuteUbergraph_SquadSlotItemPickerTileButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
