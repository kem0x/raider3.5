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

// Function HeroSquadBonuses.HeroSquadBonuses_C.OnSquadSlotSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SquadSlotIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroSquadBonuses_C::OnSquadSlotSelected(int SquadSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonuses.HeroSquadBonuses_C.OnSquadSlotSelected");

	UHeroSquadBonuses_C_OnSquadSlotSelected_Params params;
	params.SquadSlotIndex = SquadSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
