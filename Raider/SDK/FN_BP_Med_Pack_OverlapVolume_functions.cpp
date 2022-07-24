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

// Function BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Med_Pack_OverlapVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C.UserConstructionScript");

	ABP_Med_Pack_OverlapVolume_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Med_Pack_OverlapVolume_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C.ReceiveActorBeginOverlap");

	ABP_Med_Pack_OverlapVolume_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Med_Pack_OverlapVolume_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C.ReceiveTick");

	ABP_Med_Pack_OverlapVolume_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C.ExecuteUbergraph_BP_Med_Pack_OverlapVolume
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Med_Pack_OverlapVolume_C::ExecuteUbergraph_BP_Med_Pack_OverlapVolume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Med_Pack_OverlapVolume.BP_Med_Pack_OverlapVolume_C.ExecuteUbergraph_BP_Med_Pack_OverlapVolume");

	ABP_Med_Pack_OverlapVolume_C_ExecuteUbergraph_BP_Med_Pack_OverlapVolume_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
