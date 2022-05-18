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

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGAB_TakerMeleeStun_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_CanActivateAbility");

	UGAB_TakerMeleeStun_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnMoveFinished_513D85AB446CCC17A8F8AAA9835468D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_TakerMeleeStun_C::OnMoveFinished_513D85AB446CCC17A8F8AAA9835468D1(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnMoveFinished_513D85AB446CCC17A8F8AAA9835468D1");

	UGAB_TakerMeleeStun_C_OnMoveFinished_513D85AB446CCC17A8F8AAA9835468D1_Params params;
	params.Result = Result;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnRequestFailed_513D85AB446CCC17A8F8AAA9835468D1
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerMeleeStun_C::OnRequestFailed_513D85AB446CCC17A8F8AAA9835468D1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnRequestFailed_513D85AB446CCC17A8F8AAA9835468D1");

	UGAB_TakerMeleeStun_C_OnRequestFailed_513D85AB446CCC17A8F8AAA9835468D1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnCancelled_513D85AB446CCC17A8F8AAA9835468D1
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerMeleeStun_C::OnCancelled_513D85AB446CCC17A8F8AAA9835468D1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnCancelled_513D85AB446CCC17A8F8AAA9835468D1");

	UGAB_TakerMeleeStun_C_OnCancelled_513D85AB446CCC17A8F8AAA9835468D1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerMeleeStun_C::OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1");

	UGAB_TakerMeleeStun_C_OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnComplete_513D85AB446CCC17A8F8AAA9835468D1
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerMeleeStun_C::OnComplete_513D85AB446CCC17A8F8AAA9835468D1()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnComplete_513D85AB446CCC17A8F8AAA9835468D1");

	UGAB_TakerMeleeStun_C_OnComplete_513D85AB446CCC17A8F8AAA9835468D1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_TakerMeleeStun_C::Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042");

	UGAB_TakerMeleeStun_C_Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_TakerMeleeStun_C::Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042");

	UGAB_TakerMeleeStun_C_Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_TakerMeleeStun_C::Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042");

	UGAB_TakerMeleeStun_C_Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.MoveTimerComplete
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerMeleeStun_C::MoveTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.MoveTimerComplete");

	UGAB_TakerMeleeStun_C_MoveTimerComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.ResetDoOnce
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerMeleeStun_C::ResetDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.ResetDoOnce");

	UGAB_TakerMeleeStun_C_ResetDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_TakerMeleeStun_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_OnEndAbility");

	UGAB_TakerMeleeStun_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_TakerMeleeStun_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_ActivateAbility");

	UGAB_TakerMeleeStun_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.ExecuteUbergraph_GAB_TakerMeleeStun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_TakerMeleeStun_C::ExecuteUbergraph_GAB_TakerMeleeStun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.ExecuteUbergraph_GAB_TakerMeleeStun");

	UGAB_TakerMeleeStun_C_ExecuteUbergraph_GAB_TakerMeleeStun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
