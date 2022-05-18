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

// Function ChallengeProgressWidget.ChallengeProgressWidget_C.SegmentHack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumSegments                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeProgressWidget_C::SegmentHack(int NumSegments)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeProgressWidget.ChallengeProgressWidget_C.SegmentHack");

	UChallengeProgressWidget_C_SegmentHack_Params params;
	params.NumSegments = NumSegments;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeProgressWidget.ChallengeProgressWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Achieved                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Required                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PercentComplete                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ThresholdPercent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeProgressWidget_C::Update(int Achieved, int Required, float PercentComplete, float ThresholdPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeProgressWidget.ChallengeProgressWidget_C.Update");

	UChallengeProgressWidget_C_Update_Params params;
	params.Achieved = Achieved;
	params.Required = Required;
	params.PercentComplete = PercentComplete;
	params.ThresholdPercent = ThresholdPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeProgressWidget.ChallengeProgressWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeProgressWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeProgressWidget.ChallengeProgressWidget_C.Construct");

	UChallengeProgressWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeProgressWidget.ChallengeProgressWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeProgressWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeProgressWidget.ChallengeProgressWidget_C.PreConstruct");

	UChallengeProgressWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeProgressWidget.ChallengeProgressWidget_C.ExecuteUbergraph_ChallengeProgressWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeProgressWidget_C::ExecuteUbergraph_ChallengeProgressWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeProgressWidget.ChallengeProgressWidget_C.ExecuteUbergraph_ChallengeProgressWidget");

	UChallengeProgressWidget_C_ExecuteUbergraph_ChallengeProgressWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
