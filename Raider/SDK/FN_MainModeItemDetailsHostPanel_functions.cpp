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

// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.UpdateDescriptionVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMainModeItemDetailsHostPanel_C::UpdateDescriptionVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.UpdateDescriptionVisibility");

	UMainModeItemDetailsHostPanel_C_UpdateDescriptionVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)

void UMainModeItemDetailsHostPanel_C::HandleHasItemMarkedForMulchingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged");

	UMainModeItemDetailsHostPanel_C_HandleHasItemMarkedForMulchingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainModeItemDetailsHostPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.Construct");

	UMainModeItemDetailsHostPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.ExecuteUbergraph_MainModeItemDetailsHostPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainModeItemDetailsHostPanel_C::ExecuteUbergraph_MainModeItemDetailsHostPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.ExecuteUbergraph_MainModeItemDetailsHostPanel");

	UMainModeItemDetailsHostPanel_C_ExecuteUbergraph_MainModeItemDetailsHostPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
