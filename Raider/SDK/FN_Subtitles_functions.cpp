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

// Function Subtitles.Subtitles_C.GetSubtitleVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility USubtitles_C::GetSubtitleVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Subtitles.Subtitles_C.GetSubtitleVisibility");

	USubtitles_C_GetSubtitleVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Subtitles.Subtitles_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USubtitles_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Subtitles.Subtitles_C.Construct");

	USubtitles_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Subtitles.Subtitles_C.ExecuteUbergraph_Subtitles
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubtitles_C::ExecuteUbergraph_Subtitles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Subtitles.Subtitles_C.ExecuteUbergraph_Subtitles");

	USubtitles_C_ExecuteUbergraph_Subtitles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
