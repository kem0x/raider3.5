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

// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ShowText
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLeaderboardTabButton_C::ShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ShowText");

	UAthenaLeaderboardTabButton_C_ShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaLeaderboardTabButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Icon");

	UAthenaLeaderboardTabButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaLeaderboardTabButton_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Text");

	UAthenaLeaderboardTabButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLeaderboardTabButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.PreConstruct");

	UAthenaLeaderboardTabButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UAthenaLeaderboardTabButton_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnCurrentTextStyleChanged");

	UAthenaLeaderboardTabButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaLeaderboardTabButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.SetTabLabelInfo");

	UAthenaLeaderboardTabButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UAthenaLeaderboardTabButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnSelected");

	UAthenaLeaderboardTabButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnDeselected
// (Event, Protected, BlueprintEvent)

void UAthenaLeaderboardTabButton_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnDeselected");

	UAthenaLeaderboardTabButton_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaLeaderboardTabButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Construct");

	UAthenaLeaderboardTabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UAthenaLeaderboardTabButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnHovered");

	UAthenaLeaderboardTabButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UAthenaLeaderboardTabButton_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnUnhovered");

	UAthenaLeaderboardTabButton_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ExecuteUbergraph_AthenaLeaderboardTabButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLeaderboardTabButton_C::ExecuteUbergraph_AthenaLeaderboardTabButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ExecuteUbergraph_AthenaLeaderboardTabButton");

	UAthenaLeaderboardTabButton_C_ExecuteUbergraph_AthenaLeaderboardTabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
