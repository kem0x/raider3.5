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

// Function CollectionBarTopIcon.CollectionBarTopIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCollectionBarTopIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBarTopIcon.CollectionBarTopIcon_C.Construct");

	UCollectionBarTopIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CollectionBarTopIcon.CollectionBarTopIcon_C.ExecuteUbergraph_CollectionBarTopIcon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCollectionBarTopIcon_C::ExecuteUbergraph_CollectionBarTopIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CollectionBarTopIcon.CollectionBarTopIcon_C.ExecuteUbergraph_CollectionBarTopIcon");

	UCollectionBarTopIcon_C_ExecuteUbergraph_CollectionBarTopIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
