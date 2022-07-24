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

// Function DA_MedicPack_v2.DA_MedicPack_v2_C.IsOnGround
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bOnGround                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADA_MedicPack_v2_C::IsOnGround(bool* bOnGround)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_MedicPack_v2.DA_MedicPack_v2_C.IsOnGround");

	ADA_MedicPack_v2_C_IsOnGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOnGround != nullptr)
		*bOnGround = params.bOnGround;
}


// Function DA_MedicPack_v2.DA_MedicPack_v2_C.RaiseUsageError
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   FailedReason                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ADA_MedicPack_v2_C::RaiseUsageError(const struct FGameplayTagContainer& FailedReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_MedicPack_v2.DA_MedicPack_v2_C.RaiseUsageError");

	ADA_MedicPack_v2_C_RaiseUsageError_Params params;
	params.FailedReason = FailedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_MedicPack_v2.DA_MedicPack_v2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADA_MedicPack_v2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_MedicPack_v2.DA_MedicPack_v2_C.UserConstructionScript");

	ADA_MedicPack_v2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_MedicPack_v2.DA_MedicPack_v2_C.MinHeldTimeCheck
// (BlueprintCallable, BlueprintEvent)

void ADA_MedicPack_v2_C::MinHeldTimeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_MedicPack_v2.DA_MedicPack_v2_C.MinHeldTimeCheck");

	ADA_MedicPack_v2_C_MinHeldTimeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_MedicPack_v2.DA_MedicPack_v2_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper**        FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_MedicPack_v2_C::BPPressTrigger(class AFortDecoHelper** FortDecoHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_MedicPack_v2.DA_MedicPack_v2_C.BPPressTrigger");

	ADA_MedicPack_v2_C_BPPressTrigger_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_MedicPack_v2.DA_MedicPack_v2_C.BPReleaseTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper**        FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_MedicPack_v2_C::BPReleaseTrigger(class AFortDecoHelper** FortDecoHelper)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_MedicPack_v2.DA_MedicPack_v2_C.BPReleaseTrigger");

	ADA_MedicPack_v2_C_BPReleaseTrigger_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_MedicPack_v2.DA_MedicPack_v2_C.ExecuteUbergraph_DA_MedicPack_v2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_MedicPack_v2_C::ExecuteUbergraph_DA_MedicPack_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DA_MedicPack_v2.DA_MedicPack_v2_C.ExecuteUbergraph_DA_MedicPack_v2");

	ADA_MedicPack_v2_C_ExecuteUbergraph_DA_MedicPack_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
