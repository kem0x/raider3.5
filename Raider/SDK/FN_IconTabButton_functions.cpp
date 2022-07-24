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

// Function IconTabButton.IconTabButton_C.SetChangeIconColorWhenSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ChangeColorWhenSelected        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             SelectedColor                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             UnselectedColor                (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTabButton_C::SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, const struct FSlateColor& SelectedColor, const struct FSlateColor& UnselectedColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.SetChangeIconColorWhenSelected");

	UIconTabButton_C_SetChangeIconColorWhenSelected_Params params;
	params.ChangeColorWhenSelected = ChangeColorWhenSelected;
	params.SelectedColor = SelectedColor;
	params.UnselectedColor = UnselectedColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBangEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTabButton_C::Update_Bang_State(bool bBangEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.Update Bang State");

	UIconTabButton_C_Update_Bang_State_Params params;
	params.bBangEnabled = bBangEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BorderStyle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTabButton_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle");

	UIconTabButton_C_SetTutorialBorderStyle_Params params;
	params.BorderStyle = BorderStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.ShowText
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTabButton_C::ShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.ShowText");

	UIconTabButton_C_ShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTabButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.Set Icon");

	UIconTabButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTabButton_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.Set Text");

	UIconTabButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTabButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.PreConstruct");

	UIconTabButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTabButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.SetTabLabelInfo");

	UIconTabButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UIconTabButton_C::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.BP_OnSelected");

	UIconTabButton_C_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UIconTabButton_C::BP_OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.BP_OnDeselected");

	UIconTabButton_C_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconTabButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.Construct");

	UIconTabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UIconTabButton_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.BP_OnHovered");

	UIconTabButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UIconTabButton_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.BP_OnUnhovered");

	UIconTabButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.BP_OnEnabled
// (Event, Protected, BlueprintEvent)

void UIconTabButton_C::BP_OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.BP_OnEnabled");

	UIconTabButton_C_BP_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.BP_OnDisabled
// (Event, Protected, BlueprintEvent)

void UIconTabButton_C::BP_OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.BP_OnDisabled");

	UIconTabButton_C_BP_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UIconTabButton_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged");

	UIconTabButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTabButton_C::ExecuteUbergraph_IconTabButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton");

	UIconTabButton_C_ExecuteUbergraph_IconTabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
