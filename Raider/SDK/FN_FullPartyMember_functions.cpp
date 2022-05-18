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

// Function FullPartyMember.FullPartyMember_C.UpdateBang
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMember_C::UpdateBang()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.UpdateBang");

	UFullPartyMember_C_UpdateBang_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.HighlightEmptyBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BannerIsHighlighted            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMember_C::HighlightEmptyBanner(bool BannerIsHighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.HighlightEmptyBanner");

	UFullPartyMember_C_HighlightEmptyBanner_Params params;
	params.BannerIsHighlighted = BannerIsHighlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.SetSecondaryStatDisplayVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMember_C::SetSecondaryStatDisplayVisibility(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.SetSecondaryStatDisplayVisibility");

	UFullPartyMember_C_SetSecondaryStatDisplayVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.SetStatDisplayStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InStyle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMember_C::SetStatDisplayStyle(class UClass* InStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.SetStatDisplayStyle");

	UFullPartyMember_C_SetStatDisplayStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.UpdateStatDisplays
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFullPartyMember_C::UpdateStatDisplays()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.UpdateStatDisplays");

	UFullPartyMember_C_UpdateStatDisplays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.InitializeConnectedWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFullPartyMemberConnected_C* ConnectedWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFullPartyMember_C::InitializeConnectedWidget(class UFullPartyMemberConnected_C* ConnectedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.InitializeConnectedWidget");

	UFullPartyMember_C_InitializeConnectedWidget_Params params;
	params.ConnectedWidget = ConnectedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.MakeLocalPlayerConfirmActions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           LocalPlayerAlone               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FConfirmationDialogAction> OutConfirmActions              (Parm, OutParm, ZeroConstructor)

void UFullPartyMember_C::MakeLocalPlayerConfirmActions(bool LocalPlayerAlone, TArray<struct FConfirmationDialogAction>* OutConfirmActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.MakeLocalPlayerConfirmActions");

	UFullPartyMember_C_MakeLocalPlayerConfirmActions_Params params;
	params.LocalPlayerAlone = LocalPlayerAlone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConfirmActions != nullptr)
		*OutConfirmActions = params.OutConfirmActions;
}


// Function FullPartyMember.FullPartyMember_C.HandleLocalPlayerActionsResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMember_C::HandleLocalPlayerActionsResult(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.HandleLocalPlayerActionsResult");

	UFullPartyMember_C_HandleLocalPlayerActionsResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.UpdateLocalPlayerAction
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMember_C::UpdateLocalPlayerAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.UpdateLocalPlayerAction");

	UFullPartyMember_C_UpdateLocalPlayerAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.DuplicateConnectedWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFullPartyMemberConnected_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFullPartyMemberConnected_C* UFullPartyMember_C::DuplicateConnectedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.DuplicateConnectedWidget");

	UFullPartyMember_C_DuplicateConnectedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullPartyMember.FullPartyMember_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMember_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.Initialize");

	UFullPartyMember_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.UpdateDimensions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewDimensions                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UFullPartyMember_C::UpdateDimensions(const struct FVector2D& NewDimensions)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.UpdateDimensions");

	UFullPartyMember_C_UpdateDimensions_Params params;
	params.NewDimensions = NewDimensions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.ShowConnected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFullPartyMember_C::ShowConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.ShowConnected");

	UFullPartyMember_C_ShowConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.ShowConnecting
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMember_C::ShowConnecting()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.ShowConnecting");

	UFullPartyMember_C_ShowConnecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.ShowOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMember_C::ShowOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.ShowOpen");

	UFullPartyMember_C_ShowOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.UpdateMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewMemberInfo                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullPartyMember_C::UpdateMemberInfo(const struct FFortTeamMemberInfo& NewMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.UpdateMemberInfo");

	UFullPartyMember_C_UpdateMemberInfo_Params params;
	params.NewMemberInfo = NewMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.DialogResult_1F64669049EA0B1762273C8ED9CBB619
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMember_C::DialogResult_1F64669049EA0B1762273C8ED9CBB619(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.DialogResult_1F64669049EA0B1762273C8ED9CBB619");

	UFullPartyMember_C_DialogResult_1F64669049EA0B1762273C8ED9CBB619_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFullPartyMember_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.Construct");

	UFullPartyMember_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMember_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.PreConstruct");

	UFullPartyMember_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.OnClicked
// (BlueprintCallable, BlueprintEvent)

void UFullPartyMember_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.OnClicked");

	UFullPartyMember_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFullPartyMember_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.Destruct");

	UFullPartyMember_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo*    NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullPartyMember_C::OnPlayerInfoChanged(struct FFortTeamMemberInfo* NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.OnPlayerInfoChanged");

	UFullPartyMember_C_OnPlayerInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.OnPlayerAttributesChanged
// (Event, Public, BlueprintEvent)

void UFullPartyMember_C::OnPlayerAttributesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.OnPlayerAttributesChanged");

	UFullPartyMember_C_OnPlayerAttributesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMember.FullPartyMember_C.ExecuteUbergraph_FullPartyMember
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMember_C::ExecuteUbergraph_FullPartyMember(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMember.FullPartyMember_C.ExecuteUbergraph_FullPartyMember");

	UFullPartyMember_C_ExecuteUbergraph_FullPartyMember_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
