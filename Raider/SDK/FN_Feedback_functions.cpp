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

// Function Feedback.Feedback_C.TouchToClose
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFeedback_C::TouchToClose(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.TouchToClose");

	UFeedback_C_TouchToClose_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Feedback.Feedback_C.SetupAutoFillPlayerFields
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   KillersName                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SpectatingName                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UFeedback_C::SetupAutoFillPlayerFields(const struct FText& KillersName, const struct FText& SpectatingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.SetupAutoFillPlayerFields");

	UFeedback_C_SetupAutoFillPlayerFields_Params params;
	params.KillersName = KillersName;
	params.SpectatingName = SpectatingName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.Setup For Reporting Player
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UFeedback_C::Setup_For_Reporting_Player(const struct FText& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.Setup For Reporting Player");

	UFeedback_C_Setup_For_Reporting_Player_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.InitializeFeedback
// (Public, BlueprintCallable, BlueprintEvent)

void UFeedback_C::InitializeFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.InitializeFeedback");

	UFeedback_C_InitializeFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.IsAllTextNotEmpty
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFeedback_C::IsAllTextNotEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.IsAllTextNotEmpty");

	UFeedback_C_IsAllTextNotEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Feedback.Feedback_C.AddButtonFeedbackTypes
// (Public, BlueprintCallable, BlueprintEvent)

void UFeedback_C::AddButtonFeedbackTypes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.AddButtonFeedbackTypes");

	UFeedback_C_AddButtonFeedbackTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UFeedback_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BindDelegates");

	UFeedback_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.OnBeginIntro
// (Event, Public, BlueprintEvent)

void UFeedback_C::OnBeginIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.OnBeginIntro");

	UFeedback_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFeedback_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UFeedback_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFeedback_C::BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UFeedback_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.HandleTextChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFeedback_C::HandleTextChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.HandleTextChanged");

	UFeedback_C_HandleTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UFeedback_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.OnActivated");

	UFeedback_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.ForceSelect_PopulateName_Killer_Button
// (BlueprintCallable, BlueprintEvent)

void UFeedback_C::ForceSelect_PopulateName_Killer_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.ForceSelect_PopulateName_Killer_Button");

	UFeedback_C_ForceSelect_PopulateName_Killer_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.ForceSelect_PopulateName_Spectator_Button
// (BlueprintCallable, BlueprintEvent)

void UFeedback_C::ForceSelect_PopulateName_Spectator_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.ForceSelect_PopulateName_Spectator_Button");

	UFeedback_C_ForceSelect_PopulateName_Spectator_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent_629_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFeedback_C::BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent_629_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent_629_CommonSelectedStateChanged__DelegateSignature");

	UFeedback_C_BndEvt__PopulateName_Spectator_Button_K2Node_ComponentBoundEvent_629_CommonSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent_664_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFeedback_C::BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent_664_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent_664_CommonSelectedStateChanged__DelegateSignature");

	UFeedback_C_BndEvt__PopulateName_Killer_Button_K2Node_ComponentBoundEvent_664_CommonSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.OnInitiateDebugInfoForFeedbackComplete
// (Event, Protected, BlueprintEvent)

void UFeedback_C::OnInitiateDebugInfoForFeedbackComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.OnInitiateDebugInfoForFeedbackComplete");

	UFeedback_C_OnInitiateDebugInfoForFeedbackComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFeedback_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.Construct");

	UFeedback_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Feedback.Feedback_C.ExecuteUbergraph_Feedback
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFeedback_C::ExecuteUbergraph_Feedback(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Feedback.Feedback_C.ExecuteUbergraph_Feedback");

	UFeedback_C_ExecuteUbergraph_Feedback_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
