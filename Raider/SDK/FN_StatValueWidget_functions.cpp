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

// Function StatValueWidget.StatValueWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void UStatValueWidget_C::OnStatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatValueWidget.StatValueWidget_C.OnStatChanged");

	UStatValueWidget_C_OnStatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatValueWidget.StatValueWidget_C.ExecuteUbergraph_StatValueWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatValueWidget_C::ExecuteUbergraph_StatValueWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatValueWidget.StatValueWidget_C.ExecuteUbergraph_StatValueWidget");

	UStatValueWidget_C_ExecuteUbergraph_StatValueWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
