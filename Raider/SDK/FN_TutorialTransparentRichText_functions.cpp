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

// Function TutorialTransparentRichText.TutorialTransparentRichText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTutorialTransparentRichText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialTransparentRichText.TutorialTransparentRichText_C.Construct");

	UTutorialTransparentRichText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TutorialTransparentRichText.TutorialTransparentRichText_C.ExecuteUbergraph_TutorialTransparentRichText
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorialTransparentRichText_C::ExecuteUbergraph_TutorialTransparentRichText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialTransparentRichText.TutorialTransparentRichText_C.ExecuteUbergraph_TutorialTransparentRichText");

	UTutorialTransparentRichText_C_ExecuteUbergraph_TutorialTransparentRichText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
