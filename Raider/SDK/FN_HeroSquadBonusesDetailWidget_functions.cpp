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

// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.UpdatePerkWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadBonusesDetailWidget_C::UpdatePerkWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.UpdatePerkWidgets");

	UHeroSquadBonusesDetailWidget_C_UpdatePerkWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UHeroSquadBonusesDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UHeroSquadBonusesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.ExecuteUbergraph_HeroSquadBonusesDetailWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroSquadBonusesDetailWidget_C::ExecuteUbergraph_HeroSquadBonusesDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.ExecuteUbergraph_HeroSquadBonusesDetailWidget");

	UHeroSquadBonusesDetailWidget_C_ExecuteUbergraph_HeroSquadBonusesDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
