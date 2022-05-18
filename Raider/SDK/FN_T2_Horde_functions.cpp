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

// Function T2_Horde.T2_Horde_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UT2_Horde_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function T2_Horde.T2_Horde_C.PreConstruct");

	UT2_Horde_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T2_Horde.T2_Horde_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UT2_Horde_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function T2_Horde.T2_Horde_C.Construct");

	UT2_Horde_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function T2_Horde.T2_Horde_C.ExecuteUbergraph_T2_Horde
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UT2_Horde_C::ExecuteUbergraph_T2_Horde(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function T2_Horde.T2_Horde_C.ExecuteUbergraph_T2_Horde");

	UT2_Horde_C_ExecuteUbergraph_T2_Horde_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
