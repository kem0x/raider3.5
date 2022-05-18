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

// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityPerkInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIPerk             AbilityPerk                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbilitiesPageTile_C::SetAbilityPerkInfo(const struct FFortUIPerk& AbilityPerk)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityPerkInfo");

	UAbilitiesPageTile_C_SetAbilityPerkInfo_Params params;
	params.AbilityPerk = AbilityPerk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPageTile.AbilitiesPageTile_C.UpdateKeyBinding
// (Public, BlueprintCallable, BlueprintEvent)

void UAbilitiesPageTile_C::UpdateKeyBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPageTile.AbilitiesPageTile_C.UpdateKeyBinding");

	UAbilitiesPageTile_C_UpdateKeyBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               SlottedAbilityItem             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbilitiesPageTile_C::SetAbilityItemInfo(class UFortItem* SlottedAbilityItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPageTile.AbilitiesPageTile_C.SetAbilityItemInfo");

	UAbilitiesPageTile_C_SetAbilityItemInfo_Params params;
	params.SlottedAbilityItem = SlottedAbilityItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPageTile.AbilitiesPageTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAbilitiesPageTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPageTile.AbilitiesPageTile_C.Construct");

	UAbilitiesPageTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPageTile.AbilitiesPageTile_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbilitiesPageTile_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPageTile.AbilitiesPageTile_C.HandleInputMethodChanged");

	UAbilitiesPageTile_C_HandleInputMethodChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AbilitiesPageTile.AbilitiesPageTile_C.ExecuteUbergraph_AbilitiesPageTile
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbilitiesPageTile_C::ExecuteUbergraph_AbilitiesPageTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AbilitiesPageTile.AbilitiesPageTile_C.ExecuteUbergraph_AbilitiesPageTile");

	UAbilitiesPageTile_C_ExecuteUbergraph_AbilitiesPageTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
