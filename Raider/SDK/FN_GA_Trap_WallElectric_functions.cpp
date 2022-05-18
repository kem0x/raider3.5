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

// Function GA_Trap_WallElectric.GA_Trap_WallElectric_C.Cancelled_CEF58A2B40484B3CF27922840D6C4E82
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Trap_WallElectric_C::Cancelled_CEF58A2B40484B3CF27922840D6C4E82(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_WallElectric.GA_Trap_WallElectric_C.Cancelled_CEF58A2B40484B3CF27922840D6C4E82");

	UGA_Trap_WallElectric_C_Cancelled_CEF58A2B40484B3CF27922840D6C4E82_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_WallElectric.GA_Trap_WallElectric_C.Targeted_CEF58A2B40484B3CF27922840D6C4E82
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Trap_WallElectric_C::Targeted_CEF58A2B40484B3CF27922840D6C4E82(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_WallElectric.GA_Trap_WallElectric_C.Targeted_CEF58A2B40484B3CF27922840D6C4E82");

	UGA_Trap_WallElectric_C_Targeted_CEF58A2B40484B3CF27922840D6C4E82_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_WallElectric.GA_Trap_WallElectric_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Trap_WallElectric_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_WallElectric.GA_Trap_WallElectric_C.K2_ActivateAbility");

	UGA_Trap_WallElectric_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_WallElectric.GA_Trap_WallElectric_C.ExecuteUbergraph_GA_Trap_WallElectric
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Trap_WallElectric_C::ExecuteUbergraph_GA_Trap_WallElectric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_WallElectric.GA_Trap_WallElectric_C.ExecuteUbergraph_GA_Trap_WallElectric");

	UGA_Trap_WallElectric_C_ExecuteUbergraph_GA_Trap_WallElectric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
