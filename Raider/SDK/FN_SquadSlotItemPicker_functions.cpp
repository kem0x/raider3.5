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

// Function SquadSlotItemPicker.SquadSlotItemPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USquadSlotItemPicker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPicker.SquadSlotItemPicker_C.Construct");

	USquadSlotItemPicker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleChangeSort
// (BlueprintCallable, BlueprintEvent)

void USquadSlotItemPicker_C::HandleChangeSort()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleChangeSort");

	USquadSlotItemPicker_C_HandleChangeSort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleSortChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESquadSlotSortType             CurrentSortType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESquadSlotType                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadSlotItemPicker_C::HandleSortChanged(ESquadSlotSortType CurrentSortType, ESquadSlotType NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPicker.SquadSlotItemPicker_C.HandleSortChanged");

	USquadSlotItemPicker_C_HandleSortChanged_Params params;
	params.CurrentSortType = CurrentSortType;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSlotItemPicker.SquadSlotItemPicker_C.ExecuteUbergraph_SquadSlotItemPicker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadSlotItemPicker_C::ExecuteUbergraph_SquadSlotItemPicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSlotItemPicker.SquadSlotItemPicker_C.ExecuteUbergraph_SquadSlotItemPicker");

	USquadSlotItemPicker_C_ExecuteUbergraph_SquadSlotItemPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
