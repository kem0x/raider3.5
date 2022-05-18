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

// Function AthenaViewTargetHitPointInfo.AthenaViewTargetHitPointInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaViewTargetHitPointInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointInfo.AthenaViewTargetHitPointInfo_C.Construct");

	UAthenaViewTargetHitPointInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaViewTargetHitPointInfo.AthenaViewTargetHitPointInfo_C.ExecuteUbergraph_AthenaViewTargetHitPointInfo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaViewTargetHitPointInfo_C::ExecuteUbergraph_AthenaViewTargetHitPointInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaViewTargetHitPointInfo.AthenaViewTargetHitPointInfo_C.ExecuteUbergraph_AthenaViewTargetHitPointInfo");

	UAthenaViewTargetHitPointInfo_C_ExecuteUbergraph_AthenaViewTargetHitPointInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
