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

// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPerksWidgetState          InState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortHero*               InEvolutionOption              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemPerksListDetailWidget_C::SetState(EFortPerksWidgetState InState, class UFortHero* InEvolutionOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.SetState");

	UItemPerksListDetailWidget_C_SetState_Params params;
	params.InState = InState;
	params.InEvolutionOption = InEvolutionOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemPerksListDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UItemPerksListDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.ExecuteUbergraph_ItemPerksListDetailWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemPerksListDetailWidget_C::ExecuteUbergraph_ItemPerksListDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.ExecuteUbergraph_ItemPerksListDetailWidget");

	UItemPerksListDetailWidget_C_ExecuteUbergraph_ItemPerksListDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
