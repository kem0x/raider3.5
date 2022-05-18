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

// Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.Cancelled_D1EFDCE0423864512AEAC8A06114562A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SentryTurret_Fire_C::Cancelled_D1EFDCE0423864512AEAC8A06114562A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.Cancelled_D1EFDCE0423864512AEAC8A06114562A");

	UGA_SentryTurret_Fire_C_Cancelled_D1EFDCE0423864512AEAC8A06114562A_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.Targeted_D1EFDCE0423864512AEAC8A06114562A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SentryTurret_Fire_C::Targeted_D1EFDCE0423864512AEAC8A06114562A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.Targeted_D1EFDCE0423864512AEAC8A06114562A");

	UGA_SentryTurret_Fire_C_Targeted_D1EFDCE0423864512AEAC8A06114562A_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_SentryTurret_Fire_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.K2_ActivateAbility");

	UGA_SentryTurret_Fire_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.ExecuteUbergraph_GA_SentryTurret_Fire
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SentryTurret_Fire_C::ExecuteUbergraph_GA_SentryTurret_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.ExecuteUbergraph_GA_SentryTurret_Fire");

	UGA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
