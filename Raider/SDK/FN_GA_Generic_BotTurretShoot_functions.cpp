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

// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.GetRangeTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            TargetTag                      (Parm, OutParm)

void UGA_Generic_BotTurretShoot_C::GetRangeTag(struct FGameplayTag* TargetTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.GetRangeTag");

	UGA_Generic_BotTurretShoot_C_GetRangeTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetTag != nullptr)
		*TargetTag = params.TargetTag;
}


// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.GetCustomAbilitySourceTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGA_Generic_BotTurretShoot_C::GetCustomAbilitySourceTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.GetCustomAbilitySourceTransform");

	UGA_Generic_BotTurretShoot_C_GetCustomAbilitySourceTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.Cancelled_A37C36084B41A1B49DD946A52CACDE45
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Generic_BotTurretShoot_C::Cancelled_A37C36084B41A1B49DD946A52CACDE45(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.Cancelled_A37C36084B41A1B49DD946A52CACDE45");

	UGA_Generic_BotTurretShoot_C_Cancelled_A37C36084B41A1B49DD946A52CACDE45_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.Targeted_A37C36084B41A1B49DD946A52CACDE45
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Generic_BotTurretShoot_C::Targeted_A37C36084B41A1B49DD946A52CACDE45(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.Targeted_A37C36084B41A1B49DD946A52CACDE45");

	UGA_Generic_BotTurretShoot_C_Targeted_A37C36084B41A1B49DD946A52CACDE45_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Generic_BotTurretShoot_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.K2_ActivateAbility");

	UGA_Generic_BotTurretShoot_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.ExecuteUbergraph_GA_Generic_BotTurretShoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Generic_BotTurretShoot_C::ExecuteUbergraph_GA_Generic_BotTurretShoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.ExecuteUbergraph_GA_Generic_BotTurretShoot");

	UGA_Generic_BotTurretShoot_C_ExecuteUbergraph_GA_Generic_BotTurretShoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
