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

// Function AthenaNews.AthenaNews_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaNews_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNews.AthenaNews_C.Construct");

	UAthenaNews_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaNews_C::ExecuteUbergraph_AthenaNews(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews");

	UAthenaNews_C_ExecuteUbergraph_AthenaNews_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
