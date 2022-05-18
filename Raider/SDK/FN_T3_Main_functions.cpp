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

// Function T3_Main.T3_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UT3_Main_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function T3_Main.T3_Main_C.Construct");

	UT3_Main_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T3_Main.T3_Main_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UT3_Main_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function T3_Main.T3_Main_C.PreConstruct");

	UT3_Main_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T3_Main.T3_Main_C.ExecuteUbergraph_T3_Main
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UT3_Main_C::ExecuteUbergraph_T3_Main(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function T3_Main.T3_Main_C.ExecuteUbergraph_T3_Main");

	UT3_Main_C_ExecuteUbergraph_T3_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
