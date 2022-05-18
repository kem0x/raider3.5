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

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CenterWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UOutpostScreenStormShieldPermissions_C::CenterWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CenterWidget");

	UOutpostScreenStormShieldPermissions_C_CenterWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.SetParent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOutpostScreenStormShield_C* ParentWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOutpostScreenStormShieldPermissions_C::SetParent(class UOutpostScreenStormShield_C* ParentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.SetParent");

	UOutpostScreenStormShieldPermissions_C_SetParent_Params params;
	params.ParentWidget = ParentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOutpostScreenStormShieldPermissions_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.HandleBack");

	UOutpostScreenStormShieldPermissions_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.AddInputHandlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOutpostScreenStormShieldPermissions_C::AddInputHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.AddInputHandlers");

	UOutpostScreenStormShieldPermissions_C_AddInputHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.IsOwningPlayerOutpostOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOutpostScreenStormShieldPermissions_C::IsOwningPlayerOutpostOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.IsOwningPlayerOutpostOwner");

	UOutpostScreenStormShieldPermissions_C_IsOwningPlayerOutpostOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilages
// (Public, BlueprintCallable, BlueprintEvent)

void UOutpostScreenStormShieldPermissions_C::UpdatePrivilages()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilages");

	UOutpostScreenStormShieldPermissions_C_UpdatePrivilages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.isPlayerAlone
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isAlone                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOutpostScreenStormShieldPermissions_C::isPlayerAlone(bool* isAlone)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.isPlayerAlone");

	UOutpostScreenStormShieldPermissions_C_isPlayerAlone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isAlone != nullptr)
		*isAlone = params.isAlone;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOutpostScreenStormShieldPermissions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.Construct");

	UOutpostScreenStormShieldPermissions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_0_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewTeamMemberInfo              (BlueprintVisible, BlueprintReadOnly, Parm)

void UOutpostScreenStormShieldPermissions_C::UpdatePrivilagesEvent_0_1(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_0_1");

	UOutpostScreenStormShieldPermissions_C_UpdatePrivilagesEvent_0_1_Params params;
	params.NewTeamMemberInfo = NewTeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_1_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutpostScreenStormShieldPermissions_C::UpdatePrivilagesEvent_1_2(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_1_2");

	UOutpostScreenStormShieldPermissions_C_UpdatePrivilagesEvent_1_2_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOutpostScreenStormShieldPermissions_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.OnActivated");

	UOutpostScreenStormShieldPermissions_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.ExecuteUbergraph_OutpostScreenStormShieldPermissions
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOutpostScreenStormShieldPermissions_C::ExecuteUbergraph_OutpostScreenStormShieldPermissions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.ExecuteUbergraph_OutpostScreenStormShieldPermissions");

	UOutpostScreenStormShieldPermissions_C_ExecuteUbergraph_OutpostScreenStormShieldPermissions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CloseOutpostScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOutpostScreenStormShieldPermissions_C::CloseOutpostScreen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CloseOutpostScreen__DelegateSignature");

	UOutpostScreenStormShieldPermissions_C_CloseOutpostScreen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
