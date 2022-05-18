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

// Function LeaveButton.LeaveButton_C.GetDescriptionText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   DescriptionText                (Parm, OutParm)

void ULeaveButton_C::GetDescriptionText(struct FText* DescriptionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.GetDescriptionText");

	ULeaveButton_C_GetDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DescriptionText != nullptr)
		*DescriptionText = params.DescriptionText;
}


// Function LeaveButton.LeaveButton_C.IsInNeighborhood
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsInNeighborhood              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULeaveButton_C::IsInNeighborhood(bool* bIsInNeighborhood)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.IsInNeighborhood");

	ULeaveButton_C_IsInNeighborhood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInNeighborhood != nullptr)
		*bIsInNeighborhood = params.bIsInNeighborhood;
}


// Function LeaveButton.LeaveButton_C.Update Style State
// (Public, BlueprintCallable, BlueprintEvent)

void ULeaveButton_C::Update_Style_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.Update Style State");

	ULeaveButton_C_Update_Style_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TextOverride                   (BlueprintVisible, BlueprintReadOnly, Parm)

void ULeaveButton_C::SetText(const struct FText& TextOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.SetText");

	ULeaveButton_C_SetText_Params params;
	params.TextOverride = TextOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.GetButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UIconTextButton_C*       Leave                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULeaveButton_C::GetButton(class UIconTextButton_C** Leave)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.GetButton");

	ULeaveButton_C_GetButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Leave != nullptr)
		*Leave = params.Leave;
}


// Function LeaveButton.LeaveButton_C.HasUnsavedQuestProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasUnsavedQuestProgress        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULeaveButton_C::HasUnsavedQuestProgress(bool* HasUnsavedQuestProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.HasUnsavedQuestProgress");

	ULeaveButton_C_HasUnsavedQuestProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasUnsavedQuestProgress != nullptr)
		*HasUnsavedQuestProgress = params.HasUnsavedQuestProgress;
}


// Function LeaveButton.LeaveButton_C.LeaveParty
// (Public, BlueprintCallable, BlueprintEvent)

void ULeaveButton_C::LeaveParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.LeaveParty");

	ULeaveButton_C_LeaveParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULeaveButton_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.UpdateState");

	ULeaveButton_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.IsConsideredInGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           InGame                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULeaveButton_C::IsConsideredInGame(bool* InGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.IsConsideredInGame");

	ULeaveButton_C_IsConsideredInGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InGame != nullptr)
		*InGame = params.InGame;
}


// Function LeaveButton.LeaveButton_C.GetLeaveActionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void ULeaveButton_C::GetLeaveActionText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.GetLeaveActionText");

	ULeaveButton_C_GetLeaveActionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LeaveButton.LeaveButton_C.DialogResult_1E39F47546648367BB2F218F69311220
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaveButton_C::DialogResult_1E39F47546648367BB2F218F69311220(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.DialogResult_1E39F47546648367BB2F218F69311220");

	ULeaveButton_C_DialogResult_1E39F47546648367BB2F218F69311220_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.DialogResult_F5AF58094777CFEEC0BF28BEA620800C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaveButton_C::DialogResult_F5AF58094777CFEEC0BF28BEA620800C(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.DialogResult_F5AF58094777CFEEC0BF28BEA620800C");

	ULeaveButton_C_DialogResult_F5AF58094777CFEEC0BF28BEA620800C_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaveButton_C::DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B");

	ULeaveButton_C_DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.DialogResult_A0D25F7F4E82D325BF226E811F1D79AF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaveButton_C::DialogResult_A0D25F7F4E82D325BF226E811F1D79AF(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.DialogResult_A0D25F7F4E82D325BF226E811F1D79AF");

	ULeaveButton_C_DialogResult_A0D25F7F4E82D325BF226E811F1D79AF_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.HandleTeamMemberRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaveButton_C::HandleTeamMemberRemoved(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.HandleTeamMemberRemoved");

	ULeaveButton_C_HandleTeamMemberRemoved_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.HandleTeamMemberAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewTeamMemberInfo              (BlueprintVisible, BlueprintReadOnly, Parm)

void ULeaveButton_C::HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.HandleTeamMemberAdded");

	ULeaveButton_C_HandleTeamMemberAdded_Params params;
	params.NewTeamMemberInfo = NewTeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.HandleLobbyEvents
// (BlueprintCallable, BlueprintEvent)

void ULeaveButton_C::HandleLobbyEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.HandleLobbyEvents");

	ULeaveButton_C_HandleLobbyEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULeaveButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.Construct");

	ULeaveButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULeaveButton_C::BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature");

	ULeaveButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULeaveButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.Destruct");

	ULeaveButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaveButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.PreConstruct");

	ULeaveButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.HandlePlayerStateChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULeaveButton_C::HandlePlayerStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.HandlePlayerStateChanged");

	ULeaveButton_C_HandlePlayerStateChanged_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.ExecuteUbergraph_LeaveButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaveButton_C::ExecuteUbergraph_LeaveButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.ExecuteUbergraph_LeaveButton");

	ULeaveButton_C_ExecuteUbergraph_LeaveButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.Update Visibility__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeaveButton_C::Update_Visibility__DelegateSignature(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.Update Visibility__DelegateSignature");

	ULeaveButton_C_Update_Visibility__DelegateSignature_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeaveButton.LeaveButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULeaveButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.OnClicked__DelegateSignature");

	ULeaveButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
