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

// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.UpdateTypeIconOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          VerticalOffset                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimpleSquadSlotButton_C::UpdateTypeIconOffset(float VerticalOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.UpdateTypeIconOffset");

	USimpleSquadSlotButton_C_UpdateTypeIconOffset_Params params;
	params.VerticalOffset = VerticalOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Glow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GlowIcon                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimpleSquadSlotButton_C::Update_SubType_Icon_Glow(bool GlowIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Glow");

	USimpleSquadSlotButton_C_Update_SubType_Icon_Glow_Params params;
	params.GlowIcon = GlowIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Image
// (Public, BlueprintCallable, BlueprintEvent)

void USimpleSquadSlotButton_C::Update_SubType_Icon_Image()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update SubType Icon Image");

	USimpleSquadSlotButton_C_Update_SubType_Icon_Image_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.IsSlotEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isEmpty                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USimpleSquadSlotButton_C::IsSlotEmpty(bool* isEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.IsSlotEmpty");

	USimpleSquadSlotButton_C_IsSlotEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isEmpty != nullptr)
		*isEmpty = params.isEmpty;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Mark Squad Slot Seen State
// (Public, BlueprintCallable, BlueprintEvent)

void USimpleSquadSlotButton_C::Mark_Squad_Slot_Seen_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Mark Squad Slot Seen State");

	USimpleSquadSlotButton_C_Mark_Squad_Slot_Seen_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)

void USimpleSquadSlotButton_C::Update_Bang_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Update Bang State");

	USimpleSquadSlotButton_C_Update_Bang_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.GetSimpleSquadButtonTooltipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* USimpleSquadSlotButton_C::GetSimpleSquadButtonTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.GetSimpleSquadButtonTooltipWidget");

	USimpleSquadSlotButton_C_GetSimpleSquadButtonTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimpleSquadSlotButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.PreConstruct");

	USimpleSquadSlotButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USimpleSquadSlotButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.Construct");

	USimpleSquadSlotButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)

void USimpleSquadSlotButton_C::HandlePostDifferentSquadSlotSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.HandlePostDifferentSquadSlotSetBP");

	USimpleSquadSlotButton_C_HandlePostDifferentSquadSlotSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.SquadSlotWidgetUpdated
// (Event, Public, BlueprintEvent)

void USimpleSquadSlotButton_C::SquadSlotWidgetUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.SquadSlotWidgetUpdated");

	USimpleSquadSlotButton_C_SquadSlotWidgetUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.OnSelected
// (Event, Protected, BlueprintEvent)

void USimpleSquadSlotButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.OnSelected");

	USimpleSquadSlotButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimpleSquadSlotButton_C::BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	USimpleSquadSlotButton_C_BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.ExecuteUbergraph_SimpleSquadSlotButton
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USimpleSquadSlotButton_C::ExecuteUbergraph_SimpleSquadSlotButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleSquadSlotButton.SimpleSquadSlotButton_C.ExecuteUbergraph_SimpleSquadSlotButton");

	USimpleSquadSlotButton_C_ExecuteUbergraph_SimpleSquadSlotButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
