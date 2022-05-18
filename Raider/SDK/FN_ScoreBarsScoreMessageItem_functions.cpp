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

// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnAppearAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsScoreMessageItem_C::OnAppearAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnAppearAnimationFinished");

	UScoreBarsScoreMessageItem_C_OnAppearAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ClearScoreValueWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsScoreMessageItem_C::ClearScoreValueWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ClearScoreValueWidget");

	UScoreBarsScoreMessageItem_C_ClearScoreValueWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.GetScoreValueWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScoreBarsScoreMessageItem_C::GetScoreValueWidget(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.GetScoreValueWidget");

	UScoreBarsScoreMessageItem_C_GetScoreValueWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Base_Delta                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name_Text                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UScoreMessageNumber_C*   In_Score_Widget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScoreBarsScoreMessageItem_C::Setup(int Base_Delta, const struct FText& Name_Text, class UScoreMessageNumber_C* In_Score_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.Setup");

	UScoreBarsScoreMessageItem_C_Setup_Params params;
	params.Base_Delta = Base_Delta;
	params.Name_Text = Name_Text;
	params.In_Score_Widget = In_Score_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.UpdateValues
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreBarsScoreMessageItem_C::UpdateValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.UpdateValues");

	UScoreBarsScoreMessageItem_C_UpdateValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnStackSizeChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           OldStackSize                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreBarsScoreMessageItem_C::OnStackSizeChanged(int* OldStackSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnStackSizeChanged");

	UScoreBarsScoreMessageItem_C_OnStackSizeChanged_Params params;
	params.OldStackSize = OldStackSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnBeginRemove
// (Event, Protected, BlueprintEvent)

void UScoreBarsScoreMessageItem_C::OnBeginRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnBeginRemove");

	UScoreBarsScoreMessageItem_C_OnBeginRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ExecuteUbergraph_ScoreBarsScoreMessageItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreBarsScoreMessageItem_C::ExecuteUbergraph_ScoreBarsScoreMessageItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ExecuteUbergraph_ScoreBarsScoreMessageItem");

	UScoreBarsScoreMessageItem_C_ExecuteUbergraph_ScoreBarsScoreMessageItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
