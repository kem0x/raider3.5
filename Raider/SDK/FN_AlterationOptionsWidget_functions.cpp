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

// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ShouldShowNoOptions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAlterationOptionsWidget_C::ShouldShowNoOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.ShouldShowNoOptions");

	UAlterationOptionsWidget_C_ShouldShowNoOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.DoAnyAlterationsExist
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OptionsExist                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsWidget_C::DoAnyAlterationsExist(bool* OptionsExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.DoAnyAlterationsExist");

	UAlterationOptionsWidget_C_DoAnyAlterationsExist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionsExist != nullptr)
		*OptionsExist = params.OptionsExist;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.HandleDetailsClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationOptionsWidget_C::HandleDetailsClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.HandleDetailsClosed");

	UAlterationOptionsWidget_C_HandleDetailsClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.HandleShouldGiveFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           GiveFocus                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsWidget_C::HandleShouldGiveFocus(int Index, bool GiveFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.HandleShouldGiveFocus");

	UAlterationOptionsWidget_C_HandleShouldGiveFocus_Params params;
	params.Index = Index;
	params.GiveFocus = GiveFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.UpdateIngredientsButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsWidget_C::UpdateIngredientsButtonVisibility(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.UpdateIngredientsButtonVisibility");

	UAlterationOptionsWidget_C_UpdateIngredientsButtonVisibility_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.UpdateButtonsForConfirmation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsWidget_C::UpdateButtonsForConfirmation(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.UpdateButtonsForConfirmation");

	UAlterationOptionsWidget_C_UpdateButtonsForConfirmation_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.UpdateIngredients
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemQuantityPair> Ingredients                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAlterationOptionsWidget_C::UpdateIngredients(TArray<struct FFortItemQuantityPair>* Ingredients)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.UpdateIngredients");

	UAlterationOptionsWidget_C_UpdateIngredients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ingredients != nullptr)
		*Ingredients = params.Ingredients;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.AddAlterationOptionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortAlterationOptionType      OptionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortAlterationOption*   OptionWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAlterationOptionsWidget_C::AddAlterationOptionWidget(EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.AddAlterationOptionWidget");

	UAlterationOptionsWidget_C_AddAlterationOptionWidget_Params params;
	params.OptionType = OptionType;
	params.OptionWidget = OptionWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearOptionsAndInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UAlterationOptionsWidget_C::ClearOptionsAndInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.ClearOptionsAndInitialize");

	UAlterationOptionsWidget_C_ClearOptionsAndInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnItemChanged
// (Event, Public, BlueprintEvent)

void UAlterationOptionsWidget_C::OnItemChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnItemChanged");

	UAlterationOptionsWidget_C_OnItemChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnGenerateOption
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortAlterationOptionType*     OptionType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortAlterationOption**  OptionWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAlterationOptionsWidget_C::OnGenerateOption(EFortAlterationOptionType* OptionType, class UFortAlterationOption** OptionWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnGenerateOption");

	UAlterationOptionsWidget_C_OnGenerateOption_Params params;
	params.OptionType = OptionType;
	params.OptionWidget = OptionWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnIngredientsChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemQuantityPair>* RequiredIngredients            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAlterationOptionsWidget_C::OnIngredientsChanged(TArray<struct FFortItemQuantityPair>* RequiredIngredients)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnIngredientsChanged");

	UAlterationOptionsWidget_C_OnIngredientsChanged_Params params;
	params.RequiredIngredients = RequiredIngredients;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAlterationOptionsWidget_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	UAlterationOptionsWidget_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAlterationOptionsWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature");

	UAlterationOptionsWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent_17_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAlterationOptionsWidget_C::BndEvt__DetailsButton_K2Node_ComponentBoundEvent_17_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent_17_CommonButtonClicked__DelegateSignature");

	UAlterationOptionsWidget_C_BndEvt__DetailsButton_K2Node_ComponentBoundEvent_17_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAlterationOptionsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.Construct");

	UAlterationOptionsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAlterationOptionsWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.Destruct");

	UAlterationOptionsWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ConfirmationComplete
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAlterationOptionsWidget_C::ConfirmationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.ConfirmationComplete");

	UAlterationOptionsWidget_C_ConfirmationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnShouldGiveFocus
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bGiveFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsWidget_C::OnShouldGiveFocus(int* Index, bool* bGiveFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.OnShouldGiveFocus");

	UAlterationOptionsWidget_C_OnShouldGiveFocus_Params params;
	params.Index = Index;
	params.bGiveFocus = bGiveFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlterationOptionsWidget.AlterationOptionsWidget_C.ExecuteUbergraph_AlterationOptionsWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlterationOptionsWidget_C::ExecuteUbergraph_AlterationOptionsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlterationOptionsWidget.AlterationOptionsWidget_C.ExecuteUbergraph_AlterationOptionsWidget");

	UAlterationOptionsWidget_C_ExecuteUbergraph_AlterationOptionsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
