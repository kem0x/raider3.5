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

// Function GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Athena_ShieldSmall_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C.K2_CanActivateAbility");

	UGA_Athena_ShieldSmall_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C.Completed_0FAA9CFB4F74B18CA297E1B4800037A2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_ShieldSmall_C::Completed_0FAA9CFB4F74B18CA297E1B4800037A2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C.Completed_0FAA9CFB4F74B18CA297E1B4800037A2");

	UGA_Athena_ShieldSmall_C_Completed_0FAA9CFB4F74B18CA297E1B4800037A2_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C.Cancelled_0FAA9CFB4F74B18CA297E1B4800037A2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_ShieldSmall_C::Cancelled_0FAA9CFB4F74B18CA297E1B4800037A2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C.Cancelled_0FAA9CFB4F74B18CA297E1B4800037A2");

	UGA_Athena_ShieldSmall_C_Cancelled_0FAA9CFB4F74B18CA297E1B4800037A2_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C.Triggered_0FAA9CFB4F74B18CA297E1B4800037A2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_ShieldSmall_C::Triggered_0FAA9CFB4F74B18CA297E1B4800037A2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C.Triggered_0FAA9CFB4F74B18CA297E1B4800037A2");

	UGA_Athena_ShieldSmall_C_Triggered_0FAA9CFB4F74B18CA297E1B4800037A2_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_ShieldSmall_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C.K2_ActivateAbility");

	UGA_Athena_ShieldSmall_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C.ExecuteUbergraph_GA_Athena_ShieldSmall
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ShieldSmall_C::ExecuteUbergraph_GA_Athena_ShieldSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C.ExecuteUbergraph_GA_Athena_ShieldSmall");

	UGA_Athena_ShieldSmall_C_ExecuteUbergraph_GA_Athena_ShieldSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
