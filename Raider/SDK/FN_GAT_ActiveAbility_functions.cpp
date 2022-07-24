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

// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetKnockbackImmunity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ImmunityOn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_ActiveAbility_C::SetKnockbackImmunity(bool ImmunityOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetKnockbackImmunity");

	UGAT_ActiveAbility_C_SetKnockbackImmunity_Params params;
	params.ImmunityOn = ImmunityOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetPawnCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               FortPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CollisionOn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_ActiveAbility_C::SetPawnCollision(class AFortPawn* FortPawn, bool CollisionOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetPawnCollision");

	UGAT_ActiveAbility_C_SetPawnCollision_Params params;
	params.FortPawn = FortPawn;
	params.CollisionOn = CollisionOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_ActiveAbility_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility");

	UGAT_ActiveAbility_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_ActiveAbility_C::ExecuteUbergraph_GAT_ActiveAbility(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility");

	UGAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
