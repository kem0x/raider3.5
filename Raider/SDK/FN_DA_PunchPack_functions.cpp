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

// Function DA_PunchPack.DA_PunchPack_C.IsOnGround
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bOnGround                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADA_PunchPack_C::IsOnGround(bool* bOnGround)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_PunchPack.DA_PunchPack_C.IsOnGround");

	ADA_PunchPack_C_IsOnGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOnGround != nullptr)
		*bOnGround = params.bOnGround;
}


// Function DA_PunchPack.DA_PunchPack_C.RaiseUsageError
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   FailedReason                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ADA_PunchPack_C::RaiseUsageError(const struct FGameplayTagContainer& FailedReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_PunchPack.DA_PunchPack_C.RaiseUsageError");

	ADA_PunchPack_C_RaiseUsageError_Params params;
	params.FailedReason = FailedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_PunchPack.DA_PunchPack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADA_PunchPack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_PunchPack.DA_PunchPack_C.UserConstructionScript");

	ADA_PunchPack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_PunchPack.DA_PunchPack_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper**        FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_PunchPack_C::BPPressTrigger(class AFortDecoHelper** FortDecoHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_PunchPack.DA_PunchPack_C.BPPressTrigger");

	ADA_PunchPack_C_BPPressTrigger_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_PunchPack.DA_PunchPack_C.ExecuteUbergraph_DA_PunchPack
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_PunchPack_C::ExecuteUbergraph_DA_PunchPack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_PunchPack.DA_PunchPack_C.ExecuteUbergraph_DA_PunchPack");

	ADA_PunchPack_C_ExecuteUbergraph_DA_PunchPack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
