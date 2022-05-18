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

// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Athena_PurpleStuff_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.K2_CanActivateAbility");

	UGA_Athena_PurpleStuff_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.Completed_B88CC86E452E3CEFD0EF0C961F5C2364
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_PurpleStuff_C::Completed_B88CC86E452E3CEFD0EF0C961F5C2364(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.Completed_B88CC86E452E3CEFD0EF0C961F5C2364");

	UGA_Athena_PurpleStuff_C_Completed_B88CC86E452E3CEFD0EF0C961F5C2364_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.Cancelled_B88CC86E452E3CEFD0EF0C961F5C2364
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_PurpleStuff_C::Cancelled_B88CC86E452E3CEFD0EF0C961F5C2364(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.Cancelled_B88CC86E452E3CEFD0EF0C961F5C2364");

	UGA_Athena_PurpleStuff_C_Cancelled_B88CC86E452E3CEFD0EF0C961F5C2364_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.Triggered_B88CC86E452E3CEFD0EF0C961F5C2364
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_PurpleStuff_C::Triggered_B88CC86E452E3CEFD0EF0C961F5C2364(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.Triggered_B88CC86E452E3CEFD0EF0C961F5C2364");

	UGA_Athena_PurpleStuff_C_Triggered_B88CC86E452E3CEFD0EF0C961F5C2364_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_PurpleStuff_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.K2_ActivateAbility");

	UGA_Athena_PurpleStuff_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.ExecuteUbergraph_GA_Athena_PurpleStuff
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_PurpleStuff_C::ExecuteUbergraph_GA_Athena_PurpleStuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_PurpleStuff.GA_Athena_PurpleStuff_C.ExecuteUbergraph_GA_Athena_PurpleStuff");

	UGA_Athena_PurpleStuff_C_ExecuteUbergraph_GA_Athena_PurpleStuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
