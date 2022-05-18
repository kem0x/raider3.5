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

// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFortnitePartyBackdrop_Camera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.UserConstructionScript");

	AFortnitePartyBackdrop_Camera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)

void AFortnitePartyBackdrop_Camera_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnActivated");

	AFortnitePartyBackdrop_Camera_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AFortnitePartyBackdrop_Camera_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnDeactivated");

	AFortnitePartyBackdrop_Camera_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFortnitePartyBackdrop_Camera_C::ExecuteUbergraph_FortnitePartyBackdrop_Camera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera");

	AFortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
