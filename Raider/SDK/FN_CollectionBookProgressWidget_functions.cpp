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

// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookLevelProgressionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         NewCompletionPct               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookProgressWidget_C::OnCollectionBookLevelProgressionChanged(float* NewCompletionPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookLevelProgressionChanged");

	UCollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged_Params params;
	params.NewCompletionPct = NewCompletionPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookPreviewXPChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         PreviewCompletionPct           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookProgressWidget_C::OnCollectionBookPreviewXPChange(float* PreviewCompletionPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookPreviewXPChange");

	UCollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange_Params params;
	params.PreviewCompletionPct = PreviewCompletionPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.ExecuteUbergraph_CollectionBookProgressWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBookProgressWidget_C::ExecuteUbergraph_CollectionBookProgressWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.ExecuteUbergraph_CollectionBookProgressWidget");

	UCollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
