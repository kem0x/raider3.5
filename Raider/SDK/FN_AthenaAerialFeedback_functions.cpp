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

// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaAerialFeedback_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.Update");

	UAthenaAerialFeedback_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAerialFeedback_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.Tick");

	UAthenaAerialFeedback_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaAerialFeedback_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.Construct");

	UAthenaAerialFeedback_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.CustomEvent_1_2
// (BlueprintCallable, BlueprintEvent)

void UAthenaAerialFeedback_C::CustomEvent_1_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.CustomEvent_1_2");

	UAthenaAerialFeedback_C_CustomEvent_1_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.CustomEvent_2_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaGamePhaseStep           GamePhaseStep                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAerialFeedback_C::CustomEvent_2_3(EAthenaGamePhaseStep GamePhaseStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.CustomEvent_2_3");

	UAthenaAerialFeedback_C_CustomEvent_2_3_Params params;
	params.GamePhaseStep = GamePhaseStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaAerialFeedback.AthenaAerialFeedback_C.ExecuteUbergraph_AthenaAerialFeedback
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaAerialFeedback_C::ExecuteUbergraph_AthenaAerialFeedback(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaAerialFeedback.AthenaAerialFeedback_C.ExecuteUbergraph_AthenaAerialFeedback");

	UAthenaAerialFeedback_C_ExecuteUbergraph_AthenaAerialFeedback_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
