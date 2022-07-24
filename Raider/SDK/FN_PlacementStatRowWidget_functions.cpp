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

// Function PlacementStatRowWidget.PlacementStatRowWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void UPlacementStatRowWidget_C::OnStatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlacementStatRowWidget.PlacementStatRowWidget_C.OnStatChanged");

	UPlacementStatRowWidget_C_OnStatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlacementStatRowWidget.PlacementStatRowWidget_C.ExecuteUbergraph_PlacementStatRowWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlacementStatRowWidget_C::ExecuteUbergraph_PlacementStatRowWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlacementStatRowWidget.PlacementStatRowWidget_C.ExecuteUbergraph_PlacementStatRowWidget");

	UPlacementStatRowWidget_C_ExecuteUbergraph_PlacementStatRowWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
