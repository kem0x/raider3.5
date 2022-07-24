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

// Function ScoreStatRowWidget.ScoreStatRowWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void UScoreStatRowWidget_C::OnStatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreStatRowWidget.ScoreStatRowWidget_C.OnStatChanged");

	UScoreStatRowWidget_C_OnStatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreStatRowWidget.ScoreStatRowWidget_C.ExecuteUbergraph_ScoreStatRowWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreStatRowWidget_C::ExecuteUbergraph_ScoreStatRowWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreStatRowWidget.ScoreStatRowWidget_C.ExecuteUbergraph_ScoreStatRowWidget");

	UScoreStatRowWidget_C_ExecuteUbergraph_ScoreStatRowWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
