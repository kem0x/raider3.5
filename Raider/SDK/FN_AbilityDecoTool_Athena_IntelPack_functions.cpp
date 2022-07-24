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

// Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAbilityDecoTool_Athena_IntelPack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.UserConstructionScript");

	AAbilityDecoTool_Athena_IntelPack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper**        FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_Athena_IntelPack_C::BPPressTrigger(class AFortDecoHelper** FortDecoHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.BPPressTrigger");

	AAbilityDecoTool_Athena_IntelPack_C_BPPressTrigger_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAbilityDecoTool_Athena_IntelPack_C::ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C.ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack");

	AAbilityDecoTool_Athena_IntelPack_C_ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
