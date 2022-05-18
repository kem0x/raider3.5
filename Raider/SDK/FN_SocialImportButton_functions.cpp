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

// Function SocialImportButton.SocialImportButton_C.OnCaptionGenerated
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Caption                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USocialImportButton_C::OnCaptionGenerated(struct FText* Caption)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialImportButton.SocialImportButton_C.OnCaptionGenerated");

	USocialImportButton_C_OnCaptionGenerated_Params params;
	params.Caption = Caption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialImportButton.SocialImportButton_C.ExecuteUbergraph_SocialImportButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialImportButton_C::ExecuteUbergraph_SocialImportButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialImportButton.SocialImportButton_C.ExecuteUbergraph_SocialImportButton");

	USocialImportButton_C_ExecuteUbergraph_SocialImportButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
