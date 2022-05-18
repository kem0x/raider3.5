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

// Function GAB_HuskMelee.GAB_HuskMelee_C.Completed_39FC57D848D381E3A3C7E798E995ED9A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskMelee_C::Completed_39FC57D848D381E3A3C7E798E995ED9A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskMelee.GAB_HuskMelee_C.Completed_39FC57D848D381E3A3C7E798E995ED9A");

	UGAB_HuskMelee_C_Completed_39FC57D848D381E3A3C7E798E995ED9A_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskMelee.GAB_HuskMelee_C.Cancelled_39FC57D848D381E3A3C7E798E995ED9A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskMelee_C::Cancelled_39FC57D848D381E3A3C7E798E995ED9A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskMelee.GAB_HuskMelee_C.Cancelled_39FC57D848D381E3A3C7E798E995ED9A");

	UGAB_HuskMelee_C_Cancelled_39FC57D848D381E3A3C7E798E995ED9A_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskMelee.GAB_HuskMelee_C.Triggered_39FC57D848D381E3A3C7E798E995ED9A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskMelee_C::Triggered_39FC57D848D381E3A3C7E798E995ED9A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskMelee.GAB_HuskMelee_C.Triggered_39FC57D848D381E3A3C7E798E995ED9A");

	UGAB_HuskMelee_C_Triggered_39FC57D848D381E3A3C7E798E995ED9A_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskMelee.GAB_HuskMelee_C.OnMoveFinished_3012237E40D07AA69417C79DC2677F69
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskMelee_C::OnMoveFinished_3012237E40D07AA69417C79DC2677F69(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskMelee.GAB_HuskMelee_C.OnMoveFinished_3012237E40D07AA69417C79DC2677F69");

	UGAB_HuskMelee_C_OnMoveFinished_3012237E40D07AA69417C79DC2677F69_Params params;
	params.Result = Result;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskMelee.GAB_HuskMelee_C.OnRequestFailed_3012237E40D07AA69417C79DC2677F69
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskMelee_C::OnRequestFailed_3012237E40D07AA69417C79DC2677F69()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskMelee.GAB_HuskMelee_C.OnRequestFailed_3012237E40D07AA69417C79DC2677F69");

	UGAB_HuskMelee_C_OnRequestFailed_3012237E40D07AA69417C79DC2677F69_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskMelee.GAB_HuskMelee_C.OnCancelled_3012237E40D07AA69417C79DC2677F69
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskMelee_C::OnCancelled_3012237E40D07AA69417C79DC2677F69()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskMelee.GAB_HuskMelee_C.OnCancelled_3012237E40D07AA69417C79DC2677F69");

	UGAB_HuskMelee_C_OnCancelled_3012237E40D07AA69417C79DC2677F69_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskMelee.GAB_HuskMelee_C.OnInterrupted_3012237E40D07AA69417C79DC2677F69
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskMelee_C::OnInterrupted_3012237E40D07AA69417C79DC2677F69()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskMelee.GAB_HuskMelee_C.OnInterrupted_3012237E40D07AA69417C79DC2677F69");

	UGAB_HuskMelee_C_OnInterrupted_3012237E40D07AA69417C79DC2677F69_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskMelee.GAB_HuskMelee_C.OnComplete_3012237E40D07AA69417C79DC2677F69
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskMelee_C::OnComplete_3012237E40D07AA69417C79DC2677F69()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskMelee.GAB_HuskMelee_C.OnComplete_3012237E40D07AA69417C79DC2677F69");

	UGAB_HuskMelee_C_OnComplete_3012237E40D07AA69417C79DC2677F69_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskMelee.GAB_HuskMelee_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_HuskMelee_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskMelee.GAB_HuskMelee_C.K2_ActivateAbility");

	UGAB_HuskMelee_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskMelee.GAB_HuskMelee_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskMelee_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskMelee.GAB_HuskMelee_C.K2_OnEndAbility");

	UGAB_HuskMelee_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskMelee.GAB_HuskMelee_C.ContinuousMoveTowardsTarget
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskMelee_C::ContinuousMoveTowardsTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskMelee.GAB_HuskMelee_C.ContinuousMoveTowardsTarget");

	UGAB_HuskMelee_C_ContinuousMoveTowardsTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskMelee.GAB_HuskMelee_C.GameplayEffectContainerApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Target_Data                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskMelee_C::GameplayEffectContainerApplied(const struct FGameplayAbilityTargetDataHandle& Target_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskMelee.GAB_HuskMelee_C.GameplayEffectContainerApplied");

	UGAB_HuskMelee_C_GameplayEffectContainerApplied_Params params;
	params.Target_Data = Target_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskMelee.GAB_HuskMelee_C.ExecuteUbergraph_GAB_HuskMelee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskMelee_C::ExecuteUbergraph_GAB_HuskMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskMelee.GAB_HuskMelee_C.ExecuteUbergraph_GAB_HuskMelee");

	UGAB_HuskMelee_C_ExecuteUbergraph_GAB_HuskMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
