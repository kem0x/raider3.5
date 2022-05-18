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

// Function GAB_SmasherMelee.GAB_SmasherMelee_C.Completed_D4EB604A4AFDAD65E3461A86287A3EFE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_SmasherMelee_C::Completed_D4EB604A4AFDAD65E3461A86287A3EFE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherMelee.GAB_SmasherMelee_C.Completed_D4EB604A4AFDAD65E3461A86287A3EFE");

	UGAB_SmasherMelee_C_Completed_D4EB604A4AFDAD65E3461A86287A3EFE_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SmasherMelee.GAB_SmasherMelee_C.Cancelled_D4EB604A4AFDAD65E3461A86287A3EFE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_SmasherMelee_C::Cancelled_D4EB604A4AFDAD65E3461A86287A3EFE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherMelee.GAB_SmasherMelee_C.Cancelled_D4EB604A4AFDAD65E3461A86287A3EFE");

	UGAB_SmasherMelee_C_Cancelled_D4EB604A4AFDAD65E3461A86287A3EFE_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SmasherMelee.GAB_SmasherMelee_C.Triggered_D4EB604A4AFDAD65E3461A86287A3EFE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_SmasherMelee_C::Triggered_D4EB604A4AFDAD65E3461A86287A3EFE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherMelee.GAB_SmasherMelee_C.Triggered_D4EB604A4AFDAD65E3461A86287A3EFE");

	UGAB_SmasherMelee_C_Triggered_D4EB604A4AFDAD65E3461A86287A3EFE_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnMoveFinished_6E0FFA2F4367D5F26D5F5CB20E78DEFC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SmasherMelee_C::OnMoveFinished_6E0FFA2F4367D5F26D5F5CB20E78DEFC(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnMoveFinished_6E0FFA2F4367D5F26D5F5CB20E78DEFC");

	UGAB_SmasherMelee_C_OnMoveFinished_6E0FFA2F4367D5F26D5F5CB20E78DEFC_Params params;
	params.Result = Result;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnRequestFailed_6E0FFA2F4367D5F26D5F5CB20E78DEFC
// (BlueprintCallable, BlueprintEvent)

void UGAB_SmasherMelee_C::OnRequestFailed_6E0FFA2F4367D5F26D5F5CB20E78DEFC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnRequestFailed_6E0FFA2F4367D5F26D5F5CB20E78DEFC");

	UGAB_SmasherMelee_C_OnRequestFailed_6E0FFA2F4367D5F26D5F5CB20E78DEFC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnCancelled_6E0FFA2F4367D5F26D5F5CB20E78DEFC
// (BlueprintCallable, BlueprintEvent)

void UGAB_SmasherMelee_C::OnCancelled_6E0FFA2F4367D5F26D5F5CB20E78DEFC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnCancelled_6E0FFA2F4367D5F26D5F5CB20E78DEFC");

	UGAB_SmasherMelee_C_OnCancelled_6E0FFA2F4367D5F26D5F5CB20E78DEFC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnInterrupted_6E0FFA2F4367D5F26D5F5CB20E78DEFC
// (BlueprintCallable, BlueprintEvent)

void UGAB_SmasherMelee_C::OnInterrupted_6E0FFA2F4367D5F26D5F5CB20E78DEFC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnInterrupted_6E0FFA2F4367D5F26D5F5CB20E78DEFC");

	UGAB_SmasherMelee_C_OnInterrupted_6E0FFA2F4367D5F26D5F5CB20E78DEFC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnComplete_6E0FFA2F4367D5F26D5F5CB20E78DEFC
// (BlueprintCallable, BlueprintEvent)

void UGAB_SmasherMelee_C::OnComplete_6E0FFA2F4367D5F26D5F5CB20E78DEFC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnComplete_6E0FFA2F4367D5F26D5F5CB20E78DEFC");

	UGAB_SmasherMelee_C_OnComplete_6E0FFA2F4367D5F26D5F5CB20E78DEFC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SmasherMelee.GAB_SmasherMelee_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_SmasherMelee_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherMelee.GAB_SmasherMelee_C.K2_ActivateAbility");

	UGAB_SmasherMelee_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SmasherMelee.GAB_SmasherMelee_C.MoveToLoop
// (BlueprintCallable, BlueprintEvent)

void UGAB_SmasherMelee_C::MoveToLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherMelee.GAB_SmasherMelee_C.MoveToLoop");

	UGAB_SmasherMelee_C_MoveToLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SmasherMelee.GAB_SmasherMelee_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SmasherMelee_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherMelee.GAB_SmasherMelee_C.K2_OnEndAbility");

	UGAB_SmasherMelee_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SmasherMelee.GAB_SmasherMelee_C.ExecuteUbergraph_GAB_SmasherMelee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SmasherMelee_C::ExecuteUbergraph_GAB_SmasherMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherMelee.GAB_SmasherMelee_C.ExecuteUbergraph_GAB_SmasherMelee");

	UGAB_SmasherMelee_C_ExecuteUbergraph_GAB_SmasherMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
