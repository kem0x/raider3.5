// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GA_AirStrike.GA_AirStrike_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGA_AirStrike_C::SetupAbility(class UAbilitySystemComponent* AbilitySystemComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.SetupAbility");

	UGA_AirStrike_C_SetupAbility_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AirStrike.GA_AirStrike_C.GetCustomAbilitySourceTransform
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGA_AirStrike_C::GetCustomAbilitySourceTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.GetCustomAbilitySourceTransform");

	UGA_AirStrike_C_GetCustomAbilitySourceTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_AirStrike.GA_AirStrike_C.GetAttributeValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_AirStrike_C::GetAttributeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.GetAttributeValue");

	UGA_AirStrike_C_GetAttributeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AirStrike.GA_AirStrike_C.Completed_48B4C8FD48399FA7A5F50D96227846DD
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_AirStrike_C::Completed_48B4C8FD48399FA7A5F50D96227846DD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.Completed_48B4C8FD48399FA7A5F50D96227846DD");

	UGA_AirStrike_C_Completed_48B4C8FD48399FA7A5F50D96227846DD_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AirStrike.GA_AirStrike_C.Cancelled_48B4C8FD48399FA7A5F50D96227846DD
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_AirStrike_C::Cancelled_48B4C8FD48399FA7A5F50D96227846DD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.Cancelled_48B4C8FD48399FA7A5F50D96227846DD");

	UGA_AirStrike_C_Cancelled_48B4C8FD48399FA7A5F50D96227846DD_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AirStrike.GA_AirStrike_C.Triggered_48B4C8FD48399FA7A5F50D96227846DD
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_AirStrike_C::Triggered_48B4C8FD48399FA7A5F50D96227846DD(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.Triggered_48B4C8FD48399FA7A5F50D96227846DD");

	UGA_AirStrike_C_Triggered_48B4C8FD48399FA7A5F50D96227846DD_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AirStrike.GA_AirStrike_C.DidNotSpawn_6C69A64746D8F71A616C83A25170911C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_AirStrike_C::DidNotSpawn_6C69A64746D8F71A616C83A25170911C(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.DidNotSpawn_6C69A64746D8F71A616C83A25170911C");

	UGA_AirStrike_C_DidNotSpawn_6C69A64746D8F71A616C83A25170911C_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AirStrike.GA_AirStrike_C.Success_6C69A64746D8F71A616C83A25170911C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_AirStrike_C::Success_6C69A64746D8F71A616C83A25170911C(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.Success_6C69A64746D8F71A616C83A25170911C");

	UGA_AirStrike_C_Success_6C69A64746D8F71A616C83A25170911C_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AirStrike.GA_AirStrike_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_AirStrike_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.K2_ActivateAbility");

	UGA_AirStrike_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AirStrike.GA_AirStrike_C.ExecuteUbergraph_GA_AirStrike
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_AirStrike_C::ExecuteUbergraph_GA_AirStrike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AirStrike.GA_AirStrike_C.ExecuteUbergraph_GA_AirStrike");

	UGA_AirStrike_C_ExecuteUbergraph_GA_AirStrike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
