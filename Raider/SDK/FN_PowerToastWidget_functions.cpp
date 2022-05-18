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

// Function PowerToastWidget.PowerToastWidget_C.UpdatePowerRating
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::UpdatePowerRating()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.UpdatePowerRating");

	UPowerToastWidget_C_UpdatePowerRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::StartIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.StartIntro");

	UPowerToastWidget_C_StartIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*        TextBlock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPowerToastWidget_C::ShowText(const struct FText& Text, class UCommonTextBlock* TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.ShowText");

	UPowerToastWidget_C_ShowText_Params params;
	params.Text = Text;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.SetToast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*     Toast                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerToastWidget_C::SetToast(class UFortUINotification* Toast)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.SetToast");

	UPowerToastWidget_C_SetToast_Params params;
	params.Toast = Toast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPowerToastWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.Construct");

	UPowerToastWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::HandleIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.HandleIntroFinished");

	UPowerToastWidget_C_HandleIntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::HandleOutroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.HandleOutroFinished");

	UPowerToastWidget_C_HandleOutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay
// (BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::HandleAnimationDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay");

	UPowerToastWidget_C_HandleAnimationDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPowerToastWidget_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter");

	UPowerToastWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPowerToastWidget_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave");

	UPowerToastWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPowerToastWidget_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	UPowerToastWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo*    NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPowerToastWidget_C::OnPlayerInfoChanged(struct FFortTeamMemberInfo* NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.OnPlayerInfoChanged");

	UPowerToastWidget_C_OnPlayerInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UPowerToastWidget_C::BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UPowerToastWidget_C_BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UPowerToastWidget_C::BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UPowerToastWidget_C_BndEvt__Outro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.OnTeamMemberFinishedSynchronizing_Event_0_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        NewTeamMemberId                (BlueprintVisible, BlueprintReadOnly, Parm)

void UPowerToastWidget_C::OnTeamMemberFinishedSynchronizing_Event_0_1(const struct FUniqueNetIdRepl& NewTeamMemberId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.OnTeamMemberFinishedSynchronizing_Event_0_1");

	UPowerToastWidget_C_OnTeamMemberFinishedSynchronizing_Event_0_1_Params params;
	params.NewTeamMemberId = NewTeamMemberId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.HandleSynchronizeTimeout
// (BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::HandleSynchronizeTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.HandleSynchronizeTimeout");

	UPowerToastWidget_C_HandleSynchronizeTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerToastWidget_C::ExecuteUbergraph_PowerToastWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget");

	UPowerToastWidget_C_ExecuteUbergraph_PowerToastWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::OnFinishedToast__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.OnFinishedToast__DelegateSignature");

	UPowerToastWidget_C_OnFinishedToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
