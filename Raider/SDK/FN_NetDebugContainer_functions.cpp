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

// Function NetDebugContainer.NetDebugContainer_C.OnVisibilitySetEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESlateVisibility*              InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNetDebugContainer_C::OnVisibilitySetEvent(ESlateVisibility* InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugContainer.NetDebugContainer_C.OnVisibilitySetEvent");

	UNetDebugContainer_C_OnVisibilitySetEvent_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetDebugContainer.NetDebugContainer_C.ExecuteUbergraph_NetDebugContainer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNetDebugContainer_C::ExecuteUbergraph_NetDebugContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetDebugContainer.NetDebugContainer_C.ExecuteUbergraph_NetDebugContainer");

	UNetDebugContainer_C_ExecuteUbergraph_NetDebugContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
