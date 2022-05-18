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

// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Button Hovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button_Hovered                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuRowSelector_C::Button_Hovered(class UCommonButton* Button_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Button Hovered");

	UOptionsMenuRowSelector_C_Button_Hovered_Params params;
	params.Button_Hovered = Button_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Deselect All Rows
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuRowSelector_C::Deselect_All_Rows()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Deselect All Rows");

	UOptionsMenuRowSelector_C_Deselect_All_Rows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Update Row Selector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tab_Number                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::Update_Row_Selector(int Tab_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Update Row Selector");

	UOptionsMenuRowSelector_C_Update_Row_Selector_Params params;
	params.Tab_Number = Tab_Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Initialize Row Selector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Row_Text                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FText>           Buttons                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FText>           Hover_Texts                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Require_Selection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonTextBlock*        Tab_Tooltip                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuRowSelector_C::Initialize_Row_Selector(const struct FText& Row_Text, bool Require_Selection, class UCommonTextBlock* Tab_Tooltip, TArray<struct FText>* Buttons, TArray<struct FText>* Hover_Texts)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Initialize Row Selector");

	UOptionsMenuRowSelector_C_Initialize_Row_Selector_Params params;
	params.Row_Text = Row_Text;
	params.Require_Selection = Require_Selection;
	params.Tab_Tooltip = Tab_Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
	if (Hover_Texts != nullptr)
		*Hover_Texts = params.Hover_Texts;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenuRowSelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Construct");

	UOptionsMenuRowSelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnSelectedButtonChanged_Event_0_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           AssociatedButton               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::OnSelectedButtonChanged_Event_0_1(class UCommonButton* AssociatedButton, int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnSelectedButtonChanged_Event_0_1");

	UOptionsMenuRowSelector_C_OnSelectedButtonChanged_Event_0_1_Params params;
	params.AssociatedButton = AssociatedButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuRowSelector_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.OnMouseLeave");

	UOptionsMenuRowSelector_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenuRowSelector_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Destruct");

	UOptionsMenuRowSelector_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.PreConstruct");

	UOptionsMenuRowSelector_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.ExecuteUbergraph_OptionsMenuRowSelector
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::ExecuteUbergraph_OptionsMenuRowSelector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.ExecuteUbergraph_OptionsMenuRowSelector");

	UOptionsMenuRowSelector_C_ExecuteUbergraph_OptionsMenuRowSelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Selector Button Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tab_ID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuRowSelector_C::Selector_Button_Selected__DelegateSignature(int Tab_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuRowSelector.OptionsMenuRowSelector_C.Selector Button Selected__DelegateSignature");

	UOptionsMenuRowSelector_C_Selector_Button_Selected__DelegateSignature_Params params;
	params.Tab_ID = Tab_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
