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

// Function AthenaFPS.AthenaFPS_C.ShowFPSChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowFPS                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaFPS_C::ShowFPSChanged(bool bShowFPS)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFPS.AthenaFPS_C.ShowFPSChanged");

	UAthenaFPS_C_ShowFPSChanged_Params params;
	params.bShowFPS = bShowFPS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFPS.AthenaFPS_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaFPS_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFPS.AthenaFPS_C.Construct");

	UAthenaFPS_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFPS.AthenaFPS_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaFPS_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFPS.AthenaFPS_C.Tick");

	UAthenaFPS_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaFPS.AthenaFPS_C.ExecuteUbergraph_AthenaFPS
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaFPS_C::ExecuteUbergraph_AthenaFPS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaFPS.AthenaFPS_C.ExecuteUbergraph_AthenaFPS");

	UAthenaFPS_C_ExecuteUbergraph_AthenaFPS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
