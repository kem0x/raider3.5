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

// Function WeakSpot.WeakSpot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeakSpot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.UserConstructionScript");

	AWeakSpot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__FinishedFunc
// (BlueprintEvent)

void AWeakSpot_C::ScaleDownParticleTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__FinishedFunc");

	AWeakSpot_C_ScaleDownParticleTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__UpdateFunc
// (BlueprintEvent)

void AWeakSpot_C::ScaleDownParticleTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__UpdateFunc");

	AWeakSpot_C_ScaleDownParticleTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.OnHit
// (Event, Public, BlueprintEvent)

void AWeakSpot_C::OnHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.OnHit");

	AWeakSpot_C_OnHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.HideMesh
// (BlueprintCallable, BlueprintEvent)

void AWeakSpot_C::HideMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.HideMesh");

	AWeakSpot_C_HideMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.OnFadeOut
// (Event, Public, BlueprintEvent)

void AWeakSpot_C::OnFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.OnFadeOut");

	AWeakSpot_C_OnFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.OnStartDirectionEffect
// (Event, Public, BlueprintEvent)

void AWeakSpot_C::OnStartDirectionEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.OnStartDirectionEffect");

	AWeakSpot_C_OnStartDirectionEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeakSpot.WeakSpot_C.ExecuteUbergraph_WeakSpot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeakSpot_C::ExecuteUbergraph_WeakSpot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeakSpot.WeakSpot_C.ExecuteUbergraph_WeakSpot");

	AWeakSpot_C_ExecuteUbergraph_WeakSpot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
