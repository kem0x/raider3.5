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

// Function MissionRichText.MissionRichText_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UMissionRichText_C::Update(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionRichText.MissionRichText_C.Update");

	UMissionRichText_C_Update_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionRichText.MissionRichText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionRichText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionRichText.MissionRichText_C.Construct");

	UMissionRichText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionRichText.MissionRichText_C.ExecuteUbergraph_MissionRichText
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionRichText_C::ExecuteUbergraph_MissionRichText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionRichText.MissionRichText_C.ExecuteUbergraph_MissionRichText");

	UMissionRichText_C_ExecuteUbergraph_MissionRichText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
