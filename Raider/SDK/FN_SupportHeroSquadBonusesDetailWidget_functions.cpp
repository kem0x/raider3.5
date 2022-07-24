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

// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.HandleSquadSlotChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SquadName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USupportHeroSquadBonusesDetailWidget_C::HandleSquadSlotChanged(const struct FName& SquadName, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.HandleSquadSlotChanged");

	USupportHeroSquadBonusesDetailWidget_C_HandleSquadSlotChanged_Params params;
	params.SquadName = SquadName;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortSupportPerkWidgetState    InState                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USupportHeroSquadBonusesDetailWidget_C::SetState(EFortSupportPerkWidgetState InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.SetState");

	USupportHeroSquadBonusesDetailWidget_C_SetState_Params params;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.UpdatePerkWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void USupportHeroSquadBonusesDetailWidget_C::UpdatePerkWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.UpdatePerkWidgets");

	USupportHeroSquadBonusesDetailWidget_C_UpdatePerkWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.UpdateVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USupportHeroSquadBonusesDetailWidget_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.UpdateVisibility");

	USupportHeroSquadBonusesDetailWidget_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void USupportHeroSquadBonusesDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.HandlePostDifferentItemToDetailSet");

	USupportHeroSquadBonusesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.HandlePostDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)

void USupportHeroSquadBonusesDetailWidget_C::HandlePostDifferentSquadSlotSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.HandlePostDifferentSquadSlotSetBP");

	USupportHeroSquadBonusesDetailWidget_C_HandlePostDifferentSquadSlotSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USupportHeroSquadBonusesDetailWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.Construct");

	USupportHeroSquadBonusesDetailWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USupportHeroSquadBonusesDetailWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.Destruct");

	USupportHeroSquadBonusesDetailWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.ExecuteUbergraph_SupportHeroSquadBonusesDetailWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USupportHeroSquadBonusesDetailWidget_C::ExecuteUbergraph_SupportHeroSquadBonusesDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupportHeroSquadBonusesDetailWidget.SupportHeroSquadBonusesDetailWidget_C.ExecuteUbergraph_SupportHeroSquadBonusesDetailWidget");

	USupportHeroSquadBonusesDetailWidget_C_ExecuteUbergraph_SupportHeroSquadBonusesDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
