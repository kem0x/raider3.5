// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Dev_Test_Pickaxe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.UserConstructionScript");

	AB_Dev_Test_Pickaxe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.K2_OnProgressiveCosmeticWatchedStatChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  StatName                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Dev_Test_Pickaxe_C::K2_OnProgressiveCosmeticWatchedStatChanged(struct FName* StatName, int* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.K2_OnProgressiveCosmeticWatchedStatChanged");

	AB_Dev_Test_Pickaxe_C_K2_OnProgressiveCosmeticWatchedStatChanged_Params params;
	params.StatName = StatName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.ExecuteUbergraph_B_Dev_Test_Pickaxe
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Dev_Test_Pickaxe_C::ExecuteUbergraph_B_Dev_Test_Pickaxe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.ExecuteUbergraph_B_Dev_Test_Pickaxe");

	AB_Dev_Test_Pickaxe_C_ExecuteUbergraph_B_Dev_Test_Pickaxe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
