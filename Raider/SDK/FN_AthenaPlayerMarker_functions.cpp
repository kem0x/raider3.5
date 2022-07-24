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

// Function AthenaPlayerMarker.AthenaPlayerMarker_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaPlayerMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerMarker.AthenaPlayerMarker_C.UserConstructionScript");

	AAthenaPlayerMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerMarker.AthenaPlayerMarker_C.SpawnMarkerAnim__FinishedFunc
// (BlueprintEvent)

void AAthenaPlayerMarker_C::SpawnMarkerAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerMarker.AthenaPlayerMarker_C.SpawnMarkerAnim__FinishedFunc");

	AAthenaPlayerMarker_C_SpawnMarkerAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerMarker.AthenaPlayerMarker_C.SpawnMarkerAnim__UpdateFunc
// (BlueprintEvent)

void AAthenaPlayerMarker_C::SpawnMarkerAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerMarker.AthenaPlayerMarker_C.SpawnMarkerAnim__UpdateFunc");

	AAthenaPlayerMarker_C_SpawnMarkerAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerMarker.AthenaPlayerMarker_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AAthenaPlayerMarker_C::BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerMarker.AthenaPlayerMarker_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AAthenaPlayerMarker_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerMarker.AthenaPlayerMarker_C.OnSetupMarker
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPlayerMarkerData*      MarkerData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAthenaPlayerMarker_C::OnSetupMarker(struct FPlayerMarkerData* MarkerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerMarker.AthenaPlayerMarker_C.OnSetupMarker");

	AAthenaPlayerMarker_C_OnSetupMarker_Params params;
	params.MarkerData = MarkerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerMarker.AthenaPlayerMarker_C.OnMarkerPlaced
// (Event, Protected, BlueprintEvent)

void AAthenaPlayerMarker_C::OnMarkerPlaced()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerMarker.AthenaPlayerMarker_C.OnMarkerPlaced");

	AAthenaPlayerMarker_C_OnMarkerPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerMarker.AthenaPlayerMarker_C.ExecuteUbergraph_AthenaPlayerMarker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaPlayerMarker_C::ExecuteUbergraph_AthenaPlayerMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerMarker.AthenaPlayerMarker_C.ExecuteUbergraph_AthenaPlayerMarker");

	AAthenaPlayerMarker_C_ExecuteUbergraph_AthenaPlayerMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
