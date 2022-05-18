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

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGAB_TakerSwoopMelee_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_CanActivateAbility");

	UGAB_TakerSwoopMelee_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnMoveFinished_A8D9EDC44514CE30149C4C924AB5FB2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_TakerSwoopMelee_C::OnMoveFinished_A8D9EDC44514CE30149C4C924AB5FB2A(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnMoveFinished_A8D9EDC44514CE30149C4C924AB5FB2A");

	UGAB_TakerSwoopMelee_C_OnMoveFinished_A8D9EDC44514CE30149C4C924AB5FB2A_Params params;
	params.Result = Result;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnRequestFailed_A8D9EDC44514CE30149C4C924AB5FB2A
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopMelee_C::OnRequestFailed_A8D9EDC44514CE30149C4C924AB5FB2A()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnRequestFailed_A8D9EDC44514CE30149C4C924AB5FB2A");

	UGAB_TakerSwoopMelee_C_OnRequestFailed_A8D9EDC44514CE30149C4C924AB5FB2A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCancelled_A8D9EDC44514CE30149C4C924AB5FB2A
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopMelee_C::OnCancelled_A8D9EDC44514CE30149C4C924AB5FB2A()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCancelled_A8D9EDC44514CE30149C4C924AB5FB2A");

	UGAB_TakerSwoopMelee_C_OnCancelled_A8D9EDC44514CE30149C4C924AB5FB2A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnInterrupted_A8D9EDC44514CE30149C4C924AB5FB2A
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopMelee_C::OnInterrupted_A8D9EDC44514CE30149C4C924AB5FB2A()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnInterrupted_A8D9EDC44514CE30149C4C924AB5FB2A");

	UGAB_TakerSwoopMelee_C_OnInterrupted_A8D9EDC44514CE30149C4C924AB5FB2A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnComplete_A8D9EDC44514CE30149C4C924AB5FB2A
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopMelee_C::OnComplete_A8D9EDC44514CE30149C4C924AB5FB2A()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnComplete_A8D9EDC44514CE30149C4C924AB5FB2A");

	UGAB_TakerSwoopMelee_C_OnComplete_A8D9EDC44514CE30149C4C924AB5FB2A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Completed_90CCC07C4CF88E3BB6C7268A426DBA5F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_TakerSwoopMelee_C::Completed_90CCC07C4CF88E3BB6C7268A426DBA5F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Completed_90CCC07C4CF88E3BB6C7268A426DBA5F");

	UGAB_TakerSwoopMelee_C_Completed_90CCC07C4CF88E3BB6C7268A426DBA5F_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Cancelled_90CCC07C4CF88E3BB6C7268A426DBA5F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_TakerSwoopMelee_C::Cancelled_90CCC07C4CF88E3BB6C7268A426DBA5F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Cancelled_90CCC07C4CF88E3BB6C7268A426DBA5F");

	UGAB_TakerSwoopMelee_C_Cancelled_90CCC07C4CF88E3BB6C7268A426DBA5F_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Triggered_90CCC07C4CF88E3BB6C7268A426DBA5F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_TakerSwoopMelee_C::Triggered_90CCC07C4CF88E3BB6C7268A426DBA5F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Triggered_90CCC07C4CF88E3BB6C7268A426DBA5F");

	UGAB_TakerSwoopMelee_C_Triggered_90CCC07C4CF88E3BB6C7268A426DBA5F_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Cancelled_DE47BE5C495BECAF17E854B5C7774E8D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_TakerSwoopMelee_C::Cancelled_DE47BE5C495BECAF17E854B5C7774E8D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Cancelled_DE47BE5C495BECAF17E854B5C7774E8D");

	UGAB_TakerSwoopMelee_C_Cancelled_DE47BE5C495BECAF17E854B5C7774E8D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Targeted_DE47BE5C495BECAF17E854B5C7774E8D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_TakerSwoopMelee_C::Targeted_DE47BE5C495BECAF17E854B5C7774E8D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Targeted_DE47BE5C495BECAF17E854B5C7774E8D");

	UGAB_TakerSwoopMelee_C_Targeted_DE47BE5C495BECAF17E854B5C7774E8D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCancelled_A05A301D40A4F2A62FAD9A94D3EB7A15
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopMelee_C::OnCancelled_A05A301D40A4F2A62FAD9A94D3EB7A15()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCancelled_A05A301D40A4F2A62FAD9A94D3EB7A15");

	UGAB_TakerSwoopMelee_C_OnCancelled_A05A301D40A4F2A62FAD9A94D3EB7A15_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnInterrupted_A05A301D40A4F2A62FAD9A94D3EB7A15
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopMelee_C::OnInterrupted_A05A301D40A4F2A62FAD9A94D3EB7A15()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnInterrupted_A05A301D40A4F2A62FAD9A94D3EB7A15");

	UGAB_TakerSwoopMelee_C_OnInterrupted_A05A301D40A4F2A62FAD9A94D3EB7A15_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnBlendOut_A05A301D40A4F2A62FAD9A94D3EB7A15
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopMelee_C::OnBlendOut_A05A301D40A4F2A62FAD9A94D3EB7A15()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnBlendOut_A05A301D40A4F2A62FAD9A94D3EB7A15");

	UGAB_TakerSwoopMelee_C_OnBlendOut_A05A301D40A4F2A62FAD9A94D3EB7A15_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCompleted_A05A301D40A4F2A62FAD9A94D3EB7A15
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopMelee_C::OnCompleted_A05A301D40A4F2A62FAD9A94D3EB7A15()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCompleted_A05A301D40A4F2A62FAD9A94D3EB7A15");

	UGAB_TakerSwoopMelee_C_OnCompleted_A05A301D40A4F2A62FAD9A94D3EB7A15_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_TakerSwoopMelee_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_ActivateAbility");

	UGAB_TakerSwoopMelee_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Taker Overlapped An Actor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_TakerSwoopMelee_C::Taker_Overlapped_An_Actor(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Taker Overlapped An Actor");

	UGAB_TakerSwoopMelee_C_Taker_Overlapped_An_Actor_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.BeginOutroDeceleration
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopMelee_C::BeginOutroDeceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.BeginOutroDeceleration");

	UGAB_TakerSwoopMelee_C_BeginOutroDeceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.SwoopTimeoutComplete
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopMelee_C::SwoopTimeoutComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.SwoopTimeoutComplete");

	UGAB_TakerSwoopMelee_C_SwoopTimeoutComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_TakerSwoopMelee_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_OnEndAbility");

	UGAB_TakerSwoopMelee_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.SlowSpeedCancel
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopMelee_C::SlowSpeedCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.SlowSpeedCancel");

	UGAB_TakerSwoopMelee_C_SlowSpeedCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.ExecuteUbergraph_GAB_TakerSwoopMelee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_TakerSwoopMelee_C::ExecuteUbergraph_GAB_TakerSwoopMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.ExecuteUbergraph_GAB_TakerSwoopMelee");

	UGAB_TakerSwoopMelee_C_ExecuteUbergraph_GAB_TakerSwoopMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
