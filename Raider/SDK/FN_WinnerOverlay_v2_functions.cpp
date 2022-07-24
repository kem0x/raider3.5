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

// Function WinnerOverlay_v2.WinnerOverlay_v2_C.PlayVictoryAnim
// (BlueprintCallable, BlueprintEvent)

void UWinnerOverlay_v2_C::PlayVictoryAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WinnerOverlay_v2.WinnerOverlay_v2_C.PlayVictoryAnim");

	UWinnerOverlay_v2_C_PlayVictoryAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WinnerOverlay_v2.WinnerOverlay_v2_C.ExecuteUbergraph_WinnerOverlay_v2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWinnerOverlay_v2_C::ExecuteUbergraph_WinnerOverlay_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WinnerOverlay_v2.WinnerOverlay_v2_C.ExecuteUbergraph_WinnerOverlay_v2");

	UWinnerOverlay_v2_C_ExecuteUbergraph_WinnerOverlay_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
