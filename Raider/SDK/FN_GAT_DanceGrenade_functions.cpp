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

// Function GAT_DanceGrenade.GAT_DanceGrenade_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_DanceGrenade_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_DanceGrenade.GAT_DanceGrenade_C.K2_ActivateAbility");

	UGAT_DanceGrenade_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_DanceGrenade.GAT_DanceGrenade_C.ExecuteUbergraph_GAT_DanceGrenade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_DanceGrenade_C::ExecuteUbergraph_GAT_DanceGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_DanceGrenade.GAT_DanceGrenade_C.ExecuteUbergraph_GAT_DanceGrenade");

	UGAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
