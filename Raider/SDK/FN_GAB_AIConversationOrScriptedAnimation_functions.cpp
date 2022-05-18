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

// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Completed_0DEF95174D4614F4567B4E8B836FDE6F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_AIConversationOrScriptedAnimation_C::Completed_0DEF95174D4614F4567B4E8B836FDE6F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Completed_0DEF95174D4614F4567B4E8B836FDE6F");

	UGAB_AIConversationOrScriptedAnimation_C_Completed_0DEF95174D4614F4567B4E8B836FDE6F_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Cancelled_0DEF95174D4614F4567B4E8B836FDE6F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_AIConversationOrScriptedAnimation_C::Cancelled_0DEF95174D4614F4567B4E8B836FDE6F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Cancelled_0DEF95174D4614F4567B4E8B836FDE6F");

	UGAB_AIConversationOrScriptedAnimation_C_Cancelled_0DEF95174D4614F4567B4E8B836FDE6F_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Triggered_0DEF95174D4614F4567B4E8B836FDE6F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_AIConversationOrScriptedAnimation_C::Triggered_0DEF95174D4614F4567B4E8B836FDE6F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Triggered_0DEF95174D4614F4567B4E8B836FDE6F");

	UGAB_AIConversationOrScriptedAnimation_C_Triggered_0DEF95174D4614F4567B4E8B836FDE6F_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_AIConversationOrScriptedAnimation_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.K2_ActivateAbilityFromEvent");

	UGAB_AIConversationOrScriptedAnimation_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_AIConversationOrScriptedAnimation_C::ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation");

	UGAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
