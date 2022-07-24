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

// Function FortReplayCameraSelectionMenu.FortReplayCameraSelectionMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFortReplayCameraSelectionMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSelectionMenu.FortReplayCameraSelectionMenu_C.Construct");

	UFortReplayCameraSelectionMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSelectionMenu.FortReplayCameraSelectionMenu_C.ExecuteUbergraph_FortReplayCameraSelectionMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSelectionMenu_C::ExecuteUbergraph_FortReplayCameraSelectionMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSelectionMenu.FortReplayCameraSelectionMenu_C.ExecuteUbergraph_FortReplayCameraSelectionMenu");

	UFortReplayCameraSelectionMenu_C_ExecuteUbergraph_FortReplayCameraSelectionMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
