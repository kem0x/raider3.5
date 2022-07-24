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

// Function SmallStatWidget.SmallStatWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void USmallStatWidget_C::OnStatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallStatWidget.SmallStatWidget_C.OnStatChanged");

	USmallStatWidget_C_OnStatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallStatWidget.SmallStatWidget_C.ExecuteUbergraph_SmallStatWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USmallStatWidget_C::ExecuteUbergraph_SmallStatWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallStatWidget.SmallStatWidget_C.ExecuteUbergraph_SmallStatWidget");

	USmallStatWidget_C_ExecuteUbergraph_SmallStatWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
