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

// Function ScoreMessageNumber.ScoreMessageNumber_C.SetScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InScore                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreMessageNumber_C::SetScore(int InScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreMessageNumber.ScoreMessageNumber_C.SetScore");

	UScoreMessageNumber_C_SetScore_Params params;
	params.InScore = InScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreMessageNumber.ScoreMessageNumber_C.UpdateScoreText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScoreMessageNumber_C::UpdateScoreText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreMessageNumber.ScoreMessageNumber_C.UpdateScoreText");

	UScoreMessageNumber_C_UpdateScoreText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreMessageNumber.ScoreMessageNumber_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreMessageNumber_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreMessageNumber.ScoreMessageNumber_C.Construct");

	UScoreMessageNumber_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreMessageNumber.ScoreMessageNumber_C.ExecuteUbergraph_ScoreMessageNumber
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreMessageNumber_C::ExecuteUbergraph_ScoreMessageNumber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreMessageNumber.ScoreMessageNumber_C.ExecuteUbergraph_ScoreMessageNumber");

	UScoreMessageNumber_C_ExecuteUbergraph_ScoreMessageNumber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreMessageNumber.ScoreMessageNumber_C.OnScoreValueSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EStatCategory                  ChangedScoreCategory           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreMessageNumber_C::OnScoreValueSet__DelegateSignature(EStatCategory ChangedScoreCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreMessageNumber.ScoreMessageNumber_C.OnScoreValueSet__DelegateSignature");

	UScoreMessageNumber_C_OnScoreValueSet__DelegateSignature_Params params;
	params.ChangedScoreCategory = ChangedScoreCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
