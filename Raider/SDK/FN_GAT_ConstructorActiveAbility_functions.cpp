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

// Function GAT_ConstructorActiveAbility.GAT_ConstructorActiveAbility_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_ConstructorActiveAbility_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ConstructorActiveAbility.GAT_ConstructorActiveAbility_C.K2_ActivateAbility");

	UGAT_ConstructorActiveAbility_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_ConstructorActiveAbility.GAT_ConstructorActiveAbility_C.ExecuteUbergraph_GAT_ConstructorActiveAbility
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_ConstructorActiveAbility_C::ExecuteUbergraph_GAT_ConstructorActiveAbility(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ConstructorActiveAbility.GAT_ConstructorActiveAbility_C.ExecuteUbergraph_GAT_ConstructorActiveAbility");

	UGAT_ConstructorActiveAbility_C_ExecuteUbergraph_GAT_ConstructorActiveAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
