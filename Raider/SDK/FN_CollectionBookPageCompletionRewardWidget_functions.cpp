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

// Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.OnRewardStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECollectionBookRewardStatus*   NewStatus                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageCompletionRewardWidget_C::OnRewardStatusChanged(ECollectionBookRewardStatus* NewStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.OnRewardStatusChanged");

	UCollectionBookPageCompletionRewardWidget_C_OnRewardStatusChanged_Params params;
	params.NewStatus = NewStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.ExecuteUbergraph_CollectionBookPageCompletionRewardWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookPageCompletionRewardWidget_C::ExecuteUbergraph_CollectionBookPageCompletionRewardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.ExecuteUbergraph_CollectionBookPageCompletionRewardWidget");

	UCollectionBookPageCompletionRewardWidget_C_ExecuteUbergraph_CollectionBookPageCompletionRewardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
