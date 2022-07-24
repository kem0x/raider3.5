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

// Function Placement_Generic.Placement_Generic_C.OnInsideGridStateChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bInsideGrid                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlacement_Generic_C::OnInsideGridStateChange(bool* bInsideGrid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Placement_Generic.Placement_Generic_C.OnInsideGridStateChange");

	UPlacement_Generic_C_OnInsideGridStateChange_Params params;
	params.bInsideGrid = bInsideGrid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Placement_Generic.Placement_Generic_C.ExecuteUbergraph_Placement_Generic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlacement_Generic_C::ExecuteUbergraph_Placement_Generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Placement_Generic.Placement_Generic_C.ExecuteUbergraph_Placement_Generic");

	UPlacement_Generic_C_ExecuteUbergraph_Placement_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
