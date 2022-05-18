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

// Function MainTabIconButton.MainTabIconButton_C.StopTabCallout
// (Public, BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::StopTabCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.StopTabCallout");

	UMainTabIconButton_C_StopTabCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.TabAdded
// (Public, BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::TabAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.TabAdded");

	UMainTabIconButton_C_TabAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.TabDialogClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::TabDialogClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.TabDialogClosed");

	UMainTabIconButton_C_TabDialogClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.TabAnimateInFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::TabAnimateInFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.TabAnimateInFinished");

	UMainTabIconButton_C_TabAnimateInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.SetTutorialNameID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InTutorialNameID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabIconButton_C::SetTutorialNameID(const struct FName& InTutorialNameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.SetTutorialNameID");

	UMainTabIconButton_C_SetTutorialNameID_Params params;
	params.InTutorialNameID = InTutorialNameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBangEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortUIFeature                 UIFeature                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   UIFeatureRevealText            (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainTabIconButton_C::Update_Bang_State(bool bBangEnabled, EFortUIFeature UIFeature, const struct FText& UIFeatureRevealText)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.Update Bang State");

	UMainTabIconButton_C_Update_Bang_State_Params params;
	params.bBangEnabled = bBangEnabled;
	params.UIFeature = UIFeature;
	params.UIFeatureRevealText = UIFeatureRevealText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BorderStyle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabIconButton_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.SetTutorialBorderStyle");

	UMainTabIconButton_C_SetTutorialBorderStyle_Params params;
	params.BorderStyle = BorderStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.ShowText
// (Public, BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::ShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.ShowText");

	UMainTabIconButton_C_ShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainTabIconButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.Set Icon");

	UMainTabIconButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainTabIconButton_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.Set Text");

	UMainTabIconButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabIconButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.PreConstruct");

	UMainTabIconButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainTabIconButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.SetTabLabelInfo");

	UMainTabIconButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UMainTabIconButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.OnSelected");

	UMainTabIconButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.OnDeselected
// (Event, Protected, BlueprintEvent)

void UMainTabIconButton_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.OnDeselected");

	UMainTabIconButton_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainTabIconButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.Construct");

	UMainTabIconButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UMainTabIconButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.OnHovered");

	UMainTabIconButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UMainTabIconButton_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.OnUnhovered");

	UMainTabIconButton_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UMainTabIconButton_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.OnCurrentTextStyleChanged");

	UMainTabIconButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.HandleTabAdded
// (BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::HandleTabAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.HandleTabAdded");

	UMainTabIconButton_C_HandleTabAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.HandleTabAnimateInFinished
// (BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::HandleTabAnimateInFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.HandleTabAnimateInFinished");

	UMainTabIconButton_C_HandleTabAnimateInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.HandleTabDialogCLosed
// (BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::HandleTabDialogCLosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.HandleTabDialogCLosed");

	UMainTabIconButton_C_HandleTabDialogCLosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.Handle StopTabCallout
// (BlueprintCallable, BlueprintEvent)

void UMainTabIconButton_C::Handle_StopTabCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.Handle StopTabCallout");

	UMainTabIconButton_C_Handle_StopTabCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainTabIconButton.MainTabIconButton_C.ExecuteUbergraph_MainTabIconButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainTabIconButton_C::ExecuteUbergraph_MainTabIconButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainTabIconButton.MainTabIconButton_C.ExecuteUbergraph_MainTabIconButton");

	UMainTabIconButton_C_ExecuteUbergraph_MainTabIconButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
