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

// Function SquadStatsWidget.SquadStatsWidget_C.HandleAbilitySystemChanged
// (Public, BlueprintCallable, BlueprintEvent)

void USquadStatsWidget_C::HandleAbilitySystemChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.HandleAbilitySystemChanged");

	USquadStatsWidget_C_HandleAbilitySystemChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.BindToAttributeChanges
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USquadStatsWidget_C::BindToAttributeChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.BindToAttributeChanges");

	USquadStatsWidget_C_BindToAttributeChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.HandleActivityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadStatsWidget_C::HandleActivityChanged(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.HandleActivityChanged");

	USquadStatsWidget_C_HandleActivityChanged_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.HandleAttributeChanged
// (Public, BlueprintCallable, BlueprintEvent)

void USquadStatsWidget_C::HandleAttributeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.HandleAttributeChanged");

	USquadStatsWidget_C_HandleAttributeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.HighlightStat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            inStatIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadStatsWidget_C::HighlightStat(int inStatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.HighlightStat");

	USquadStatsWidget_C_HighlightStat_Params params;
	params.inStatIndex = inStatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.RefreshScroll
// (Public, BlueprintCallable, BlueprintEvent)

void USquadStatsWidget_C::RefreshScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.RefreshScroll");

	USquadStatsWidget_C_RefreshScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void USquadStatsWidget_C::UnbindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.UnbindDelegates");

	USquadStatsWidget_C_UnbindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.ToggleBetweenStats
// (Public, BlueprintCallable, BlueprintEvent)

void USquadStatsWidget_C::ToggleBetweenStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.ToggleBetweenStats");

	USquadStatsWidget_C_ToggleBetweenStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void USquadStatsWidget_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.BindDelegates");

	USquadStatsWidget_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.InitCoreStatsWidgetArray
// (Public, BlueprintCallable, BlueprintEvent)

void USquadStatsWidget_C::InitCoreStatsWidgetArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.InitCoreStatsWidgetArray");

	USquadStatsWidget_C_InitCoreStatsWidgetArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USquadStatsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.Construct");

	USquadStatsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USquadStatsWidget_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature");

	USquadStatsWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USquadStatsWidget_C::BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature");

	USquadStatsWidget_C_BndEvt__CloseDetailedStats_K2Node_ComponentBoundEvent_119_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USquadStatsWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.Destruct");

	USquadStatsWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.HandleSquadSlottingPreviewStateChanged
// (Event, Protected, BlueprintEvent)

void USquadStatsWidget_C::HandleSquadSlottingPreviewStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.HandleSquadSlottingPreviewStateChanged");

	USquadStatsWidget_C_HandleSquadSlottingPreviewStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.ExecuteUbergraph_SquadStatsWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadStatsWidget_C::ExecuteUbergraph_SquadStatsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.ExecuteUbergraph_SquadStatsWidget");

	USquadStatsWidget_C_ExecuteUbergraph_SquadStatsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadStatsWidget.SquadStatsWidget_C.DetailedStatsClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USquadStatsWidget_C::DetailedStatsClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadStatsWidget.SquadStatsWidget_C.DetailedStatsClosed__DelegateSignature");

	USquadStatsWidget_C_DetailedStatsClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
