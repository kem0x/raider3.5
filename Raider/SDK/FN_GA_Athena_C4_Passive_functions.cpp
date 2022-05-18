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

// Function GA_Athena_C4_Passive.GA_Athena_C4_Passive_C.EventReceived_66DB263A44E303CAE6B174AFF4094381
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_C4_Passive_C::EventReceived_66DB263A44E303CAE6B174AFF4094381(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4_Passive.GA_Athena_C4_Passive_C.EventReceived_66DB263A44E303CAE6B174AFF4094381");

	UGA_Athena_C4_Passive_C_EventReceived_66DB263A44E303CAE6B174AFF4094381_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4_Passive.GA_Athena_C4_Passive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_C4_Passive_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4_Passive.GA_Athena_C4_Passive_C.K2_ActivateAbility");

	UGA_Athena_C4_Passive_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4_Passive.GA_Athena_C4_Passive_C.ExecuteUbergraph_GA_Athena_C4_Passive
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_C4_Passive_C::ExecuteUbergraph_GA_Athena_C4_Passive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4_Passive.GA_Athena_C4_Passive_C.ExecuteUbergraph_GA_Athena_C4_Passive");

	UGA_Athena_C4_Passive_C_ExecuteUbergraph_GA_Athena_C4_Passive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
