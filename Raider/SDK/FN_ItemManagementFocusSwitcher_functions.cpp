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

// Function ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C.ExecuteFocusSwitch
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementFocusSwitcher_C::ExecuteFocusSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C.ExecuteFocusSwitch");

	UItemManagementFocusSwitcher_C_ExecuteFocusSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C.DeferFocusSwitch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementFocusSwitcher_C::DeferFocusSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C.DeferFocusSwitch");

	UItemManagementFocusSwitcher_C_DeferFocusSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UItemManagementFocusSwitcher_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementFocusSwitcher.ItemManagementFocusSwitcher_C.OnFocusReceived");

	UItemManagementFocusSwitcher_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
