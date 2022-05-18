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

// Function TODM_Disabled.TODM_Disabled_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATODM_Disabled_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TODM_Disabled.TODM_Disabled_C.UserConstructionScript");

	ATODM_Disabled_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_Disabled.TODM_Disabled_C.DisableLightAndFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATODM_Disabled_C::DisableLightAndFog(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TODM_Disabled.TODM_Disabled_C.DisableLightAndFog");

	ATODM_Disabled_C_DisableLightAndFog_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_Disabled.TODM_Disabled_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATODM_Disabled_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TODM_Disabled.TODM_Disabled_C.ReceiveBeginPlay");

	ATODM_Disabled_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TODM_Disabled.TODM_Disabled_C.ExecuteUbergraph_TODM_Disabled
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATODM_Disabled_C::ExecuteUbergraph_TODM_Disabled(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TODM_Disabled.TODM_Disabled_C.ExecuteUbergraph_TODM_Disabled");

	ATODM_Disabled_C_ExecuteUbergraph_TODM_Disabled_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
