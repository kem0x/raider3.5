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

// Function B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_PlayerShieldDamage_CameraLensEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.UserConstructionScript");

	AB_PlayerShieldDamage_CameraLensEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.PassParticle_Parameter_Shield
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PlayerShieldDamage_CameraLensEffect_C::PassParticle_Parameter_Shield(float NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.PassParticle_Parameter_Shield");

	AB_PlayerShieldDamage_CameraLensEffect_C_PassParticle_Parameter_Shield_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PlayerShieldDamage_CameraLensEffect_C::ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect");

	AB_PlayerShieldDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
