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

// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdatePageCompletionWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FilledSlots                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalSlots                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::UpdatePageCompletionWidget(int FilledSlots, int TotalSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdatePageCompletionWidget");

	UCollectionBookPageListWidget_C_UpdatePageCompletionWidget_Params params;
	params.FilledSlots = FilledSlots;
	params.TotalSlots = TotalSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumAvailableSlots              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::UpdateAvailableSlotsWidget(int NumAvailableSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsWidget");

	UCollectionBookPageListWidget_C_UpdateAvailableSlotsWidget_Params params;
	params.NumAvailableSlots = NumAvailableSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsBorderColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCollectionBookPageListWidget_C::UpdateAvailableSlotsBorderColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.UpdateAvailableSlotsBorderColors");

	UCollectionBookPageListWidget_C_UpdateAvailableSlotsBorderColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsCategory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookCategory** Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::SetupAsCategory(class UFortCollectionBookCategory** Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsCategory");

	UCollectionBookPageListWidget_C_SetupAsCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsPage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookPage** Page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::SetupAsPage(class UFortCollectionBookPage** Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.SetupAsPage");

	UCollectionBookPageListWidget_C_SetupAsPage_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bExpanded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::OnExpansionChanged(bool* bExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnExpansionChanged");

	UCollectionBookPageListWidget_C_OnExpansionChanged_Params params;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.PreConstruct");

	UCollectionBookPageListWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnPageDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           AvailableSlots                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           FilledSlots                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TotalSlots                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortCollectionBookState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::OnPageDetailsUpdated(int* AvailableSlots, int* FilledSlots, int* TotalSlots, EFortCollectionBookState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnPageDetailsUpdated");

	UCollectionBookPageListWidget_C_OnPageDetailsUpdated_Params params;
	params.AvailableSlots = AvailableSlots;
	params.FilledSlots = FilledSlots;
	params.TotalSlots = TotalSlots;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           ThisButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::OnSelectionChanged(class UCommonButton* ThisButton, bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnSelectionChanged");

	UCollectionBookPageListWidget_C_OnSelectionChanged_Params params;
	params.ThisButton = ThisButton;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnCategoryDetailsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           AvailableSlots                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           FilledSlots                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TotalSlots                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::OnCategoryDetailsUpdated(int* AvailableSlots, int* FilledSlots, int* TotalSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.OnCategoryDetailsUpdated");

	UCollectionBookPageListWidget_C_OnCategoryDetailsUpdated_Params params;
	params.AvailableSlots = AvailableSlots;
	params.FilledSlots = FilledSlots;
	params.TotalSlots = TotalSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.ExecuteUbergraph_CollectionBookPageListWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageListWidget_C::ExecuteUbergraph_CollectionBookPageListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageListWidget.CollectionBookPageListWidget_C.ExecuteUbergraph_CollectionBookPageListWidget");

	UCollectionBookPageListWidget_C_ExecuteUbergraph_CollectionBookPageListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
