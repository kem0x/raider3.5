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

// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CursorModeEnabled              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             CursorModeContentWidget        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPinnedSchematicItemWidget_C::HandleCursorModeChanged(bool CursorModeEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleCursorModeChanged");

	UPinnedSchematicItemWidget_C_HandleCursorModeChanged_Params params;
	params.CursorModeEnabled = CursorModeEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentWidget = CursorModeContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UPinnedSchematicItemWidget_C::UnbindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.UnbindDelegates");

	UPinnedSchematicItemWidget_C_UnbindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ClearPinnedSchematic
// (Public, BlueprintCallable, BlueprintEvent)

void UPinnedSchematicItemWidget_C::ClearPinnedSchematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ClearPinnedSchematic");

	UPinnedSchematicItemWidget_C_ClearPinnedSchematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleItemChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ItemChanged                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AmmoChanged                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IngredientsChanged             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPinnedSchematicItemWidget_C::HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleItemChanged");

	UPinnedSchematicItemWidget_C_HandleItemChanged_Params params;
	params.ItemChanged = ItemChanged;
	params.AmmoChanged = AmmoChanged;
	params.IngredientsChanged = IngredientsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetupIngredients
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPinnedSchematicItemWidget_C::SetupIngredients()
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetupIngredients");

	UPinnedSchematicItemWidget_C_SetupIngredients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleWorldItemListChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  ItemsAdded                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>  ItemsRemoved                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPinnedSchematicItemWidget_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*>* ItemsAdded, TArray<class UFortWorldItem*>* ItemsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleWorldItemListChanged");

	UPinnedSchematicItemWidget_C_HandleWorldItemListChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemsAdded != nullptr)
		*ItemsAdded = params.ItemsAdded;
	if (ItemsRemoved != nullptr)
		*ItemsRemoved = params.ItemsRemoved;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleOnSchematicUnlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*      Schematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPinnedSchematicItemWidget_C::HandleOnSchematicUnlocked(class UFortSchematicItem* Schematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.HandleOnSchematicUnlocked");

	UPinnedSchematicItemWidget_C_HandleOnSchematicUnlocked_Params params;
	params.Schematic = Schematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UPinnedSchematicItemWidget_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.BindDelegates");

	UPinnedSchematicItemWidget_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetPinnedSchematic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*      NewPinnedSchematic             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPinnedSchematicItemWidget_C::SetPinnedSchematic(class UFortSchematicItem* NewPinnedSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.SetPinnedSchematic");

	UPinnedSchematicItemWidget_C_SetPinnedSchematic_Params params;
	params.NewPinnedSchematic = NewPinnedSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UPinnedSchematicItemWidget_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.Refresh");

	UPinnedSchematicItemWidget_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.PinButton_Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortBaseButton*         NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPinnedSchematicItemWidget_C::PinButton_Clicked(class UFortBaseButton* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.PinButton_Clicked");

	UPinnedSchematicItemWidget_C_PinButton_Clicked_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ExecuteUbergraph_PinnedSchematicItemWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPinnedSchematicItemWidget_C::ExecuteUbergraph_PinnedSchematicItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PinnedSchematicItemWidget.PinnedSchematicItemWidget_C.ExecuteUbergraph_PinnedSchematicItemWidget");

	UPinnedSchematicItemWidget_C_ExecuteUbergraph_PinnedSchematicItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
