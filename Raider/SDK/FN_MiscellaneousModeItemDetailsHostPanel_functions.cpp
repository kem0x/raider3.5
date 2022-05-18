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

// Function MiscellaneousModeItemDetailsHostPanel.MiscellaneousModeItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)

void UMiscellaneousModeItemDetailsHostPanel_C::HandleHasItemMarkedForMulchingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiscellaneousModeItemDetailsHostPanel.MiscellaneousModeItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged");

	UMiscellaneousModeItemDetailsHostPanel_C_HandleHasItemMarkedForMulchingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MiscellaneousModeItemDetailsHostPanel.MiscellaneousModeItemDetailsHostPanel_C.ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiscellaneousModeItemDetailsHostPanel_C::ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MiscellaneousModeItemDetailsHostPanel.MiscellaneousModeItemDetailsHostPanel_C.ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel");

	UMiscellaneousModeItemDetailsHostPanel_C_ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
