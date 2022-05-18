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

// Function T4_Main.T4_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UT4_Main_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function T4_Main.T4_Main_C.Construct");

	UT4_Main_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T4_Main.T4_Main_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UT4_Main_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function T4_Main.T4_Main_C.PreConstruct");

	UT4_Main_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T4_Main.T4_Main_C.ExecuteUbergraph_T4_Main
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UT4_Main_C::ExecuteUbergraph_T4_Main(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function T4_Main.T4_Main_C.ExecuteUbergraph_T4_Main");

	UT4_Main_C_ExecuteUbergraph_T4_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
