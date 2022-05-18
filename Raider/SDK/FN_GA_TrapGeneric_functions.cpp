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

// Function GA_TrapGeneric.GA_TrapGeneric_C.Cancelled_EFEC611E4D988CAA3867F28EE35771B3
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_TrapGeneric_C::Cancelled_EFEC611E4D988CAA3867F28EE35771B3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_TrapGeneric.GA_TrapGeneric_C.Cancelled_EFEC611E4D988CAA3867F28EE35771B3");

	UGA_TrapGeneric_C_Cancelled_EFEC611E4D988CAA3867F28EE35771B3_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_TrapGeneric.GA_TrapGeneric_C.Targeted_EFEC611E4D988CAA3867F28EE35771B3
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_TrapGeneric_C::Targeted_EFEC611E4D988CAA3867F28EE35771B3(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_TrapGeneric.GA_TrapGeneric_C.Targeted_EFEC611E4D988CAA3867F28EE35771B3");

	UGA_TrapGeneric_C_Targeted_EFEC611E4D988CAA3867F28EE35771B3_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_TrapGeneric.GA_TrapGeneric_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_TrapGeneric_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_TrapGeneric.GA_TrapGeneric_C.K2_ActivateAbility");

	UGA_TrapGeneric_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_TrapGeneric.GA_TrapGeneric_C.ExecuteUbergraph_GA_TrapGeneric
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_TrapGeneric_C::ExecuteUbergraph_GA_TrapGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_TrapGeneric.GA_TrapGeneric_C.ExecuteUbergraph_GA_TrapGeneric");

	UGA_TrapGeneric_C_ExecuteUbergraph_GA_TrapGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
