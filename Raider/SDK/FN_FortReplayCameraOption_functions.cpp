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

// Function FortReplayCameraOption.FortReplayCameraOption_C.OnClicked
// (Event, Protected, BlueprintEvent)

void UFortReplayCameraOption_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraOption.FortReplayCameraOption_C.OnClicked");

	UFortReplayCameraOption_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraOption.FortReplayCameraOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFortReplayCameraOption_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraOption.FortReplayCameraOption_C.Construct");

	UFortReplayCameraOption_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraOption.FortReplayCameraOption_C.ExecuteUbergraph_FortReplayCameraOption
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraOption_C::ExecuteUbergraph_FortReplayCameraOption(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraOption.FortReplayCameraOption_C.ExecuteUbergraph_FortReplayCameraOption");

	UFortReplayCameraOption_C_ExecuteUbergraph_FortReplayCameraOption_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
