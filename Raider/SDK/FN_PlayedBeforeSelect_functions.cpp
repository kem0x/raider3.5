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

// Function PlayedBeforeSelect.PlayedBeforeSelect_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPlayedBeforeSelect_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayedBeforeSelect.PlayedBeforeSelect_C.OnActivated");

	UPlayedBeforeSelect_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayedBeforeSelect.PlayedBeforeSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayedBeforeSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayedBeforeSelect.PlayedBeforeSelect_C.Construct");

	UPlayedBeforeSelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayedBeforeSelect.PlayedBeforeSelect_C.ExecuteUbergraph_PlayedBeforeSelect
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayedBeforeSelect_C::ExecuteUbergraph_PlayedBeforeSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayedBeforeSelect.PlayedBeforeSelect_C.ExecuteUbergraph_PlayedBeforeSelect");

	UPlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
