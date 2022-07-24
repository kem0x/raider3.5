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

// Function IconTabButtonReplay.IconTabButtonReplay_C.SetChangeIconColorWhenSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ChangeColorWhenSelected        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             SelectedColor                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor             UnselectedColor                (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTabButtonReplay_C::SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, const struct FSlateColor& SelectedColor, const struct FSlateColor& UnselectedColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.SetChangeIconColorWhenSelected");

	UIconTabButtonReplay_C_SetChangeIconColorWhenSelected_Params params;
	params.ChangeColorWhenSelected = ChangeColorWhenSelected;
	params.SelectedColor = SelectedColor;
	params.UnselectedColor = UnselectedColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBangEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTabButtonReplay_C::Update_Bang_State(bool bBangEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.Update Bang State");

	UIconTabButtonReplay_C_Update_Bang_State_Params params;
	params.bBangEnabled = bBangEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BorderStyle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTabButtonReplay_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.SetTutorialBorderStyle");

	UIconTabButtonReplay_C_SetTutorialBorderStyle_Params params;
	params.BorderStyle = BorderStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.ShowText
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTabButtonReplay_C::ShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.ShowText");

	UIconTabButtonReplay_C_ShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTabButtonReplay_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.Set Icon");

	UIconTabButtonReplay_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTabButtonReplay_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.Set Text");

	UIconTabButtonReplay_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTabButtonReplay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.PreConstruct");

	UIconTabButtonReplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTabButtonReplay_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.SetTabLabelInfo");

	UIconTabButtonReplay_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UIconTabButtonReplay_C::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnSelected");

	UIconTabButtonReplay_C_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UIconTabButtonReplay_C::BP_OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnDeselected");

	UIconTabButtonReplay_C_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconTabButtonReplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.Construct");

	UIconTabButtonReplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UIconTabButtonReplay_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnHovered");

	UIconTabButtonReplay_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UIconTabButtonReplay_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnUnhovered");

	UIconTabButtonReplay_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnEnabled
// (Event, Protected, BlueprintEvent)

void UIconTabButtonReplay_C::BP_OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnEnabled");

	UIconTabButtonReplay_C_BP_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnDisabled
// (Event, Protected, BlueprintEvent)

void UIconTabButtonReplay_C::BP_OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnDisabled");

	UIconTabButtonReplay_C_BP_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UIconTabButtonReplay_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.OnCurrentTextStyleChanged");

	UIconTabButtonReplay_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.ExecuteUbergraph_IconTabButtonReplay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTabButtonReplay_C::ExecuteUbergraph_IconTabButtonReplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTabButtonReplay.IconTabButtonReplay_C.ExecuteUbergraph_IconTabButtonReplay");

	UIconTabButtonReplay_C_ExecuteUbergraph_IconTabButtonReplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
