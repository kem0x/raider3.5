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

// Function FortReplayNotification.FortReplayNotification_C.GetVisibilityText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EHudVisibilityState            Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UFortReplayNotification_C::GetVisibilityText(EHudVisibilityState Visibility, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayNotification.FortReplayNotification_C.GetVisibilityText");

	UFortReplayNotification_C_GetVisibilityText_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function FortReplayNotification.FortReplayNotification_C.IsVisibilityNotification
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Notification                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsVisibilityNotification       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFortReplayNotification_C::IsVisibilityNotification(const struct FText& Notification, bool* IsVisibilityNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayNotification.FortReplayNotification_C.IsVisibilityNotification");

	UFortReplayNotification_C_IsVisibilityNotification_Params params;
	params.Notification = Notification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsVisibilityNotification != nullptr)
		*IsVisibilityNotification = params.IsVisibilityNotification;
}


// Function FortReplayNotification.FortReplayNotification_C.SetNotificationVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayNotification_C::SetNotificationVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayNotification.FortReplayNotification_C.SetNotificationVisibility");

	UFortReplayNotification_C_SetNotificationVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayNotification.FortReplayNotification_C.TickRemainingTime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayNotification_C::TickRemainingTime(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayNotification.FortReplayNotification_C.TickRemainingTime");

	UFortReplayNotification_C_TickRemainingTime_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayNotification.FortReplayNotification_C.StartFading
// (Private, BlueprintCallable, BlueprintEvent)

void UFortReplayNotification_C::StartFading()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayNotification.FortReplayNotification_C.StartFading");

	UFortReplayNotification_C_StartFading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayNotification.FortReplayNotification_C.TickFade
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayNotification_C::TickFade(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayNotification.FortReplayNotification_C.TickFade");

	UFortReplayNotification_C_TickFade_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayNotification.FortReplayNotification_C.ShowNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NotificationText               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFortReplayNotification_C::ShowNotification(const struct FText& NotificationText)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayNotification.FortReplayNotification_C.ShowNotification");

	UFortReplayNotification_C_ShowNotification_Params params;
	params.NotificationText = NotificationText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayNotification.FortReplayNotification_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayNotification_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayNotification.FortReplayNotification_C.Tick");

	UFortReplayNotification_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayNotification.FortReplayNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFortReplayNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayNotification.FortReplayNotification_C.Construct");

	UFortReplayNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayNotification.FortReplayNotification_C.ExecuteUbergraph_FortReplayNotification
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayNotification_C::ExecuteUbergraph_FortReplayNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayNotification.FortReplayNotification_C.ExecuteUbergraph_FortReplayNotification");

	UFortReplayNotification_C_ExecuteUbergraph_FortReplayNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
