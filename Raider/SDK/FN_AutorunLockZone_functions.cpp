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

// Function AutorunLockZone.AutorunLockZone_C.OnInZoneChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bNewIsInZone                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAutorunLockZone_C::OnInZoneChanged(bool* bNewIsInZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutorunLockZone.AutorunLockZone_C.OnInZoneChanged");

	UAutorunLockZone_C_OnInZoneChanged_Params params;
	params.bNewIsInZone = bNewIsInZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutorunLockZone.AutorunLockZone_C.ExecuteUbergraph_AutorunLockZone
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAutorunLockZone_C::ExecuteUbergraph_AutorunLockZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutorunLockZone.AutorunLockZone_C.ExecuteUbergraph_AutorunLockZone");

	UAutorunLockZone_C_ExecuteUbergraph_AutorunLockZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
