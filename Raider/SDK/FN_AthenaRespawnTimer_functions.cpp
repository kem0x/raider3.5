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

// Function AthenaRespawnTimer.AthenaRespawnTimer_C.UpdateDisplayTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaRespawnTimer_C::UpdateDisplayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRespawnTimer.AthenaRespawnTimer_C.UpdateDisplayTime");

	UAthenaRespawnTimer_C_UpdateDisplayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaRespawnTimer.AthenaRespawnTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaRespawnTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRespawnTimer.AthenaRespawnTimer_C.Construct");

	UAthenaRespawnTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaRespawnTimer.AthenaRespawnTimer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaRespawnTimer_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRespawnTimer.AthenaRespawnTimer_C.Destruct");

	UAthenaRespawnTimer_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaRespawnTimer.AthenaRespawnTimer_C.ExecuteUbergraph_AthenaRespawnTimer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaRespawnTimer_C::ExecuteUbergraph_AthenaRespawnTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaRespawnTimer.AthenaRespawnTimer_C.ExecuteUbergraph_AthenaRespawnTimer");

	UAthenaRespawnTimer_C_ExecuteUbergraph_AthenaRespawnTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
