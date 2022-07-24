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

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.InitializeDeathHitDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventHitData                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_PlayerDBNO_C::InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.InitializeDeathHitDirection");

	UGAB_PlayerDBNO_C_InitializeDeathHitDirection_Params params;
	params.EventHitData = EventHitData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.Completed_F61877974D2CED083195EF8A8CDA60C2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_PlayerDBNO_C::Completed_F61877974D2CED083195EF8A8CDA60C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.Completed_F61877974D2CED083195EF8A8CDA60C2");

	UGAB_PlayerDBNO_C_Completed_F61877974D2CED083195EF8A8CDA60C2_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.Cancelled_F61877974D2CED083195EF8A8CDA60C2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_PlayerDBNO_C::Cancelled_F61877974D2CED083195EF8A8CDA60C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.Cancelled_F61877974D2CED083195EF8A8CDA60C2");

	UGAB_PlayerDBNO_C_Cancelled_F61877974D2CED083195EF8A8CDA60C2_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.Triggered_F61877974D2CED083195EF8A8CDA60C2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_PlayerDBNO_C::Triggered_F61877974D2CED083195EF8A8CDA60C2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.Triggered_F61877974D2CED083195EF8A8CDA60C2");

	UGAB_PlayerDBNO_C_Triggered_F61877974D2CED083195EF8A8CDA60C2_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_PlayerDBNO_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.K2_ActivateAbilityFromEvent");

	UGAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.ExecuteUbergraph_GAB_PlayerDBNO
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_PlayerDBNO_C::ExecuteUbergraph_GAB_PlayerDBNO(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.ExecuteUbergraph_GAB_PlayerDBNO");

	UGAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
