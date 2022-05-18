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

// Function GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_Athena_PurpleStuff_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C.K2_ActivateAbility");

	UGAT_Athena_PurpleStuff_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C.ExecuteUbergraph_GAT_Athena_PurpleStuff
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_Athena_PurpleStuff_C::ExecuteUbergraph_GAT_Athena_PurpleStuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C.ExecuteUbergraph_GAT_Athena_PurpleStuff");

	UGAT_Athena_PurpleStuff_C_ExecuteUbergraph_GAT_Athena_PurpleStuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
