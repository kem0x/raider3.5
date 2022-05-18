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

// Function PowerWidget.PowerWidget_C.Check For Power Change
// (Public, BlueprintCallable, BlueprintEvent)

void UPowerWidget_C::Check_For_Power_Change()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerWidget.PowerWidget_C.Check For Power Change");

	UPowerWidget_C_Check_For_Power_Change_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerWidget.PowerWidget_C.GetPowerRatingTooltipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UPowerWidget_C::GetPowerRatingTooltipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerWidget.PowerWidget_C.GetPowerRatingTooltipWidget");

	UPowerWidget_C_GetPowerRatingTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PowerWidget.PowerWidget_C.PlayerHasTeammates
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPowerWidget_C::PlayerHasTeammates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerWidget.PowerWidget_C.PlayerHasTeammates");

	UPowerWidget_C_PlayerHasTeammates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PowerWidget.PowerWidget_C.Debug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPowerWidget_C::Debug()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerWidget.PowerWidget_C.Debug");

	UPowerWidget_C_Debug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerWidget.PowerWidget_C.SetState
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPowerWidget_C::SetState(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerWidget.PowerWidget_C.SetState");

	UPowerWidget_C_SetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function PowerWidget.PowerWidget_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UPowerWidget_C::UpdateProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerWidget.PowerWidget_C.UpdateProgress");

	UPowerWidget_C_UpdateProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerWidget.PowerWidget_C.Update Rating Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPowerWidget_C::Update_Rating_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerWidget.PowerWidget_C.Update Rating Value");

	UPowerWidget_C_Update_Rating_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerWidget.PowerWidget_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo*    NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPowerWidget_C::OnPlayerInfoChanged(struct FFortTeamMemberInfo* NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerWidget.PowerWidget_C.OnPlayerInfoChanged");

	UPowerWidget_C_OnPlayerInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerWidget.PowerWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerWidget.PowerWidget_C.PreConstruct");

	UPowerWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerWidget.PowerWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPowerWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerWidget.PowerWidget_C.Construct");

	UPowerWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerWidget.PowerWidget_C.ExecuteUbergraph_PowerWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerWidget_C::ExecuteUbergraph_PowerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerWidget.PowerWidget_C.ExecuteUbergraph_PowerWidget");

	UPowerWidget_C_ExecuteUbergraph_PowerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerWidget.PowerWidget_C.Power Increased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPowerWidget_C::Power_Increased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PowerWidget.PowerWidget_C.Power Increased__DelegateSignature");

	UPowerWidget_C_Power_Increased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
