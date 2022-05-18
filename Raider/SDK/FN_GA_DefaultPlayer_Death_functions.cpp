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

// Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.PickDeathMontageSection
// (BlueprintCallable, BlueprintEvent)

void UGA_DefaultPlayer_Death_C::PickDeathMontageSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.PickDeathMontageSection");

	UGA_DefaultPlayer_Death_C_PickDeathMontageSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.ExecuteUbergraph_GA_DefaultPlayer_Death
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_DefaultPlayer_Death_C::ExecuteUbergraph_GA_DefaultPlayer_Death(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.ExecuteUbergraph_GA_DefaultPlayer_Death");

	UGA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
