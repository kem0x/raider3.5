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

// Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.EventReceived_9815869441DE62BDFB6A3794B3593B2E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_TakerSwoopLevitate_C::EventReceived_9815869441DE62BDFB6A3794B3593B2E(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.EventReceived_9815869441DE62BDFB6A3794B3593B2E");

	UGAB_TakerSwoopLevitate_C_EventReceived_9815869441DE62BDFB6A3794B3593B2E_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.OnCancelled_3DC7F8824D4D9130A3E2DAB3D53E28DD
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopLevitate_C::OnCancelled_3DC7F8824D4D9130A3E2DAB3D53E28DD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.OnCancelled_3DC7F8824D4D9130A3E2DAB3D53E28DD");

	UGAB_TakerSwoopLevitate_C_OnCancelled_3DC7F8824D4D9130A3E2DAB3D53E28DD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.OnInterrupted_3DC7F8824D4D9130A3E2DAB3D53E28DD
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopLevitate_C::OnInterrupted_3DC7F8824D4D9130A3E2DAB3D53E28DD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.OnInterrupted_3DC7F8824D4D9130A3E2DAB3D53E28DD");

	UGAB_TakerSwoopLevitate_C_OnInterrupted_3DC7F8824D4D9130A3E2DAB3D53E28DD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.OnBlendOut_3DC7F8824D4D9130A3E2DAB3D53E28DD
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopLevitate_C::OnBlendOut_3DC7F8824D4D9130A3E2DAB3D53E28DD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.OnBlendOut_3DC7F8824D4D9130A3E2DAB3D53E28DD");

	UGAB_TakerSwoopLevitate_C_OnBlendOut_3DC7F8824D4D9130A3E2DAB3D53E28DD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.OnCompleted_3DC7F8824D4D9130A3E2DAB3D53E28DD
// (BlueprintCallable, BlueprintEvent)

void UGAB_TakerSwoopLevitate_C::OnCompleted_3DC7F8824D4D9130A3E2DAB3D53E28DD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.OnCompleted_3DC7F8824D4D9130A3E2DAB3D53E28DD");

	UGAB_TakerSwoopLevitate_C_OnCompleted_3DC7F8824D4D9130A3E2DAB3D53E28DD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_TakerSwoopLevitate_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.K2_OnEndAbility");

	UGAB_TakerSwoopLevitate_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_TakerSwoopLevitate_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.K2_ActivateAbility");

	UGAB_TakerSwoopLevitate_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.ExecuteUbergraph_GAB_TakerSwoopLevitate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_TakerSwoopLevitate_C::ExecuteUbergraph_GAB_TakerSwoopLevitate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.ExecuteUbergraph_GAB_TakerSwoopLevitate");

	UGAB_TakerSwoopLevitate_C_ExecuteUbergraph_GAB_TakerSwoopLevitate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
