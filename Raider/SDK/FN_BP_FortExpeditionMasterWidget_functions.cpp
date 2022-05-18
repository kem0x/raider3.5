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

// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleSortExpeditionListAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionMasterWidget_C::HandleSortExpeditionListAction(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleSortExpeditionListAction");

	UBP_FortExpeditionMasterWidget_C_HandleSortExpeditionListAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Disable Input Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_FortExpeditionMasterWidget_C::Disable_Input_Action(const struct FDataTableRowHandle& InputActionRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Disable Input Action");

	UBP_FortExpeditionMasterWidget_C_Disable_Input_Action_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleCollectExpeditionAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionMasterWidget_C::HandleCollectExpeditionAction(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleCollectExpeditionAction");

	UBP_FortExpeditionMasterWidget_C_HandleCollectExpeditionAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleAbandonExpeditionAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionMasterWidget_C::HandleAbandonExpeditionAction(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleAbandonExpeditionAction");

	UBP_FortExpeditionMasterWidget_C_HandleAbandonExpeditionAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleBuildExpeditionAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionMasterWidget_C::HandleBuildExpeditionAction(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleBuildExpeditionAction");

	UBP_FortExpeditionMasterWidget_C_HandleBuildExpeditionAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Present Reward UI
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionMasterWidget_C::Present_Reward_UI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Present Reward UI");

	UBP_FortExpeditionMasterWidget_C_Present_Reward_UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Show Input Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_FortExpeditionMasterWidget_C::Show_Input_Action(const struct FDataTableRowHandle& InputActionRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Show Input Action");

	UBP_FortExpeditionMasterWidget_C_Show_Input_Action_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Hide Input Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_FortExpeditionMasterWidget_C::Hide_Input_Action(const struct FDataTableRowHandle& InputActionRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Hide Input Action");

	UBP_FortExpeditionMasterWidget_C_Hide_Input_Action_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Update Master Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionMasterWidget_C::Update_Master_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Update Master Widget");

	UBP_FortExpeditionMasterWidget_C_Update_Master_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Bindings
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionMasterWidget_C::Setup_Bindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Bindings");

	UBP_FortExpeditionMasterWidget_C_Setup_Bindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Input Action Handlers
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionMasterWidget_C::Setup_Input_Action_Handlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Setup Input Action Handlers");

	UBP_FortExpeditionMasterWidget_C_Setup_Input_Action_Handlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Handle Back
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionMasterWidget_C::Handle_Back(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Handle Back");

	UBP_FortExpeditionMasterWidget_C_Handle_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.DialogResult_99152A754621D0E9A8C9C889926A827D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionMasterWidget_C::DialogResult_99152A754621D0E9A8C9C889926A827D(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.DialogResult_99152A754621D0E9A8C9C889926A827D");

	UBP_FortExpeditionMasterWidget_C_DialogResult_99152A754621D0E9A8C9C889926A827D_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.DialogResult_67CD2E3A4E1A6780703420B1064D5BD1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionMasterWidget_C::DialogResult_67CD2E3A4E1A6780703420B1064D5BD1(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.DialogResult_67CD2E3A4E1A6780703420B1064D5BD1");

	UBP_FortExpeditionMasterWidget_C_DialogResult_67CD2E3A4E1A6780703420B1064D5BD1_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.DialogResult_39A80A89449E8489E8E81EAECC14DE95
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionMasterWidget_C::DialogResult_39A80A89449E8489E8E81EAECC14DE95(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.DialogResult_39A80A89449E8489E8E81EAECC14DE95");

	UBP_FortExpeditionMasterWidget_C_DialogResult_39A80A89449E8489E8E81EAECC14DE95_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_FortExpeditionMasterWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Construct");

	UBP_FortExpeditionMasterWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_FortExpeditionMasterWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.Destruct");

	UBP_FortExpeditionMasterWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleAllCompletedExpeditionsCollected
// (BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionMasterWidget_C::HandleAllCompletedExpeditionsCollected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HandleAllCompletedExpeditionsCollected");

	UBP_FortExpeditionMasterWidget_C_HandleAllCompletedExpeditionsCollected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HACK_OnActivate_UpdateMasterWidget
// (BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionMasterWidget_C::HACK_OnActivate_UpdateMasterWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.HACK_OnActivate_UpdateMasterWidget");

	UBP_FortExpeditionMasterWidget_C_HACK_OnActivate_UpdateMasterWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionMasterWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.OnActivated");

	UBP_FortExpeditionMasterWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.OnRewardsBlockedByStorage
// (BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionMasterWidget_C::OnRewardsBlockedByStorage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.OnRewardsBlockedByStorage");

	UBP_FortExpeditionMasterWidget_C_OnRewardsBlockedByStorage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.OnRewardsBlockedByLockedProfile
// (BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionMasterWidget_C::OnRewardsBlockedByLockedProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.OnRewardsBlockedByLockedProfile");

	UBP_FortExpeditionMasterWidget_C_OnRewardsBlockedByLockedProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.ExecuteUbergraph_BP_FortExpeditionMasterWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionMasterWidget_C::ExecuteUbergraph_BP_FortExpeditionMasterWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionMasterWidget.BP_FortExpeditionMasterWidget_C.ExecuteUbergraph_BP_FortExpeditionMasterWidget");

	UBP_FortExpeditionMasterWidget_C_ExecuteUbergraph_BP_FortExpeditionMasterWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
