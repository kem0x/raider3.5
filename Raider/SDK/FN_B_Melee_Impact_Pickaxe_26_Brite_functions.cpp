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

// Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Impact_Pickaxe_26_Brite_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.UserConstructionScript");

	AB_Melee_Impact_Pickaxe_26_Brite_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.K2_OnProgressiveCosmeticWatchedStatChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  StatName                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Impact_Pickaxe_26_Brite_C::K2_OnProgressiveCosmeticWatchedStatChanged(struct FName* StatName, int* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.K2_OnProgressiveCosmeticWatchedStatChanged");

	AB_Melee_Impact_Pickaxe_26_Brite_C_K2_OnProgressiveCosmeticWatchedStatChanged_Params params;
	params.StatName = StatName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.UpdateBasedOnKills
// (BlueprintCallable, BlueprintEvent)

void AB_Melee_Impact_Pickaxe_26_Brite_C::UpdateBasedOnKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.UpdateBasedOnKills");

	AB_Melee_Impact_Pickaxe_26_Brite_C_UpdateBasedOnKills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Impact_Pickaxe_26_Brite_C::ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite");

	AB_Melee_Impact_Pickaxe_26_Brite_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
