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

// Function TutorialRichText.TutorialRichText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutorialRichText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialRichText.TutorialRichText_C.Construct");

	UTutorialRichText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialRichText.TutorialRichText_C.ExecuteUbergraph_TutorialRichText
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorialRichText_C::ExecuteUbergraph_TutorialRichText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialRichText.TutorialRichText_C.ExecuteUbergraph_TutorialRichText");

	UTutorialRichText_C_ExecuteUbergraph_TutorialRichText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
