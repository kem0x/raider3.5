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

// Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)

void UMonolithicItemDetailsHostPanel_C::HandleHasItemMarkedForMulchingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged");

	UMonolithicItemDetailsHostPanel_C_HandleHasItemMarkedForMulchingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMonolithicItemDetailsHostPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.Construct");

	UMonolithicItemDetailsHostPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.ExecuteUbergraph_MonolithicItemDetailsHostPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMonolithicItemDetailsHostPanel_C::ExecuteUbergraph_MonolithicItemDetailsHostPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.ExecuteUbergraph_MonolithicItemDetailsHostPanel");

	UMonolithicItemDetailsHostPanel_C_ExecuteUbergraph_MonolithicItemDetailsHostPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
