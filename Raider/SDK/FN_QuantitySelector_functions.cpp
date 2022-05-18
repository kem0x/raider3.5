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

// Function QuantitySelector.QuantitySelector_C.SetCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuantitySelector_C::SetCurrentValue(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.SetCurrentValue");

	UQuantitySelector_C_SetCurrentValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.GetCurrentValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuantitySelector_C::GetCurrentValue(int* CurrentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.GetCurrentValue");

	UQuantitySelector_C_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentValue != nullptr)
		*CurrentValue = params.CurrentValue;
}


// Function QuantitySelector.QuantitySelector_C.SetupForInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuantitySelector_C::SetupForInputMode(bool IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.SetupForInputMode");

	UQuantitySelector_C_SetupForInputMode_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.SliderValueChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UQuantitySelector_C::SliderValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.SliderValueChanged");

	UQuantitySelector_C_SliderValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.HandleCancelPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuantitySelector_C::HandleCancelPressed(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.HandleCancelPressed");

	UQuantitySelector_C_HandleCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function QuantitySelector.QuantitySelector_C.HandleTransferPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuantitySelector_C::HandleTransferPressed(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.HandleTransferPressed");

	UQuantitySelector_C_HandleTransferPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function QuantitySelector.QuantitySelector_C.HandleMaxPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuantitySelector_C::HandleMaxPressed(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.HandleMaxPressed");

	UQuantitySelector_C_HandleMaxPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function QuantitySelector.QuantitySelector_C.CloseSelector
// (Public, BlueprintCallable, BlueprintEvent)

void UQuantitySelector_C::CloseSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.CloseSelector");

	UQuantitySelector_C_CloseSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.SetAdditionalText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   AdditionalInfoText             (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuantitySelector_C::SetAdditionalText(const struct FText& AdditionalInfoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.SetAdditionalText");

	UQuantitySelector_C_SetAdditionalText_Params params;
	params.AdditionalInfoText = AdditionalInfoText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.SetSplitData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StartingCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaximumCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TitleText                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   AdditionalInfoText             (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuantitySelector_C::SetSplitData(int StartingCount, int MaximumCount, class UFortItem* Item, const struct FText& TitleText, const struct FText& ButtonText, const struct FText& AdditionalInfoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.SetSplitData");

	UQuantitySelector_C_SetSplitData_Params params;
	params.StartingCount = StartingCount;
	params.MaximumCount = MaximumCount;
	params.Item = Item;
	params.TitleText = TitleText;
	params.ButtonText = ButtonText;
	params.AdditionalInfoText = AdditionalInfoText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuantitySelector_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature");

	UQuantitySelector_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuantitySelector_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature");

	UQuantitySelector_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_166_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuantitySelector_C::BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature");

	UQuantitySelector_C_BndEvt__AnalogSlider_0_K2Node_ComponentBoundEvent_434_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuantitySelector_C::BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature");

	UQuantitySelector_C_BndEvt__MaxButton_K2Node_ComponentBoundEvent_343_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UQuantitySelector_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.OnActivated");

	UQuantitySelector_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuantitySelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.Construct");

	UQuantitySelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.HandleChangeInputMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuantitySelector_C::HandleChangeInputMode(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.HandleChangeInputMode");

	UQuantitySelector_C_HandleChangeInputMode_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuantitySelector_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.Destruct");

	UQuantitySelector_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.ExecuteUbergraph_QuantitySelector
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuantitySelector_C::ExecuteUbergraph_QuantitySelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.ExecuteUbergraph_QuantitySelector");

	UQuantitySelector_C_ExecuteUbergraph_QuantitySelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.OnStackValueChangedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               FortItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuantitySelector_C::OnStackValueChangedDispatcher__DelegateSignature(int NewValue, class UFortItem* FortItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.OnStackValueChangedDispatcher__DelegateSignature");

	UQuantitySelector_C_OnStackValueChangedDispatcher__DelegateSignature_Params params;
	params.NewValue = NewValue;
	params.FortItem = FortItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuantitySelector.QuantitySelector_C.OnButtonClickedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChosenValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               FortItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuantitySelector_C::OnButtonClickedDispatcher__DelegateSignature(int ChosenValue, class UFortItem* FortItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuantitySelector.QuantitySelector_C.OnButtonClickedDispatcher__DelegateSignature");

	UQuantitySelector_C_OnButtonClickedDispatcher__DelegateSignature_Params params;
	params.ChosenValue = ChosenValue;
	params.FortItem = FortItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
