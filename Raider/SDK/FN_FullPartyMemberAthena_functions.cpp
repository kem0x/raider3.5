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

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.SetBannerIconAndColor
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                IconId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString*                ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UFullPartyMemberAthena_C::SetBannerIconAndColor(struct FString* IconId, struct FString* ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.SetBannerIconAndColor");

	UFullPartyMemberAthena_C_SetBannerIconAndColor_Params params;
	params.IconId = IconId;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OpenPartyFinder
// (Event, Public, BlueprintEvent)

void UFullPartyMemberAthena_C::OpenPartyFinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.OpenPartyFinder");

	UFullPartyMemberAthena_C_OpenPartyFinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ExecuteUbergraph_FullPartyMemberAthena
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMemberAthena_C::ExecuteUbergraph_FullPartyMemberAthena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.ExecuteUbergraph_FullPartyMemberAthena");

	UFullPartyMemberAthena_C_ExecuteUbergraph_FullPartyMemberAthena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
