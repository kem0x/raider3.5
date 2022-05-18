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

// Function TutorialOverlay.TutorialOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutorialOverlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialOverlay.TutorialOverlay_C.Construct");

	UTutorialOverlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialOverlay.TutorialOverlay_C.ExecuteUbergraph_TutorialOverlay
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorialOverlay_C::ExecuteUbergraph_TutorialOverlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialOverlay.TutorialOverlay_C.ExecuteUbergraph_TutorialOverlay");

	UTutorialOverlay_C_ExecuteUbergraph_TutorialOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
