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

// Function DA_HandyPack.DA_HandyPack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADA_HandyPack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_HandyPack.DA_HandyPack_C.UserConstructionScript");

	ADA_HandyPack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_HandyPack.DA_HandyPack_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper**        FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_HandyPack_C::BPPressTrigger(class AFortDecoHelper** FortDecoHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_HandyPack.DA_HandyPack_C.BPPressTrigger");

	ADA_HandyPack_C_BPPressTrigger_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_HandyPack.DA_HandyPack_C.BPReleaseTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper**        FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_HandyPack_C::BPReleaseTrigger(class AFortDecoHelper** FortDecoHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_HandyPack.DA_HandyPack_C.BPReleaseTrigger");

	ADA_HandyPack_C_BPReleaseTrigger_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_HandyPack.DA_HandyPack_C.ExecuteUbergraph_DA_HandyPack
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_HandyPack_C::ExecuteUbergraph_DA_HandyPack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_HandyPack.DA_HandyPack_C.ExecuteUbergraph_DA_HandyPack");

	ADA_HandyPack_C_ExecuteUbergraph_DA_HandyPack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
