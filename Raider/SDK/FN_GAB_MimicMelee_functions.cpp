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

// Function GAB_MimicMelee.GAB_MimicMelee_C.GameplayEffectContainerApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle* Target_Data                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_MimicMelee_C::GameplayEffectContainerApplied(struct FGameplayAbilityTargetDataHandle* Target_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_MimicMelee.GAB_MimicMelee_C.GameplayEffectContainerApplied");

	UGAB_MimicMelee_C_GameplayEffectContainerApplied_Params params;
	params.Target_Data = Target_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_MimicMelee.GAB_MimicMelee_C.ExecuteUbergraph_GAB_MimicMelee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_MimicMelee_C::ExecuteUbergraph_GAB_MimicMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_MimicMelee.GAB_MimicMelee_C.ExecuteUbergraph_GAB_MimicMelee");

	UGAB_MimicMelee_C_ExecuteUbergraph_GAB_MimicMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
