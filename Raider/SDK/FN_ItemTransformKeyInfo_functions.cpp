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

// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.SetKeyToRepresent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyInfo_C::SetKeyToRepresent(class UFortItem* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.SetKeyToRepresent");

	UItemTransformKeyInfo_C_SetKeyToRepresent_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemTransformKeyInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.Construct");

	UItemTransformKeyInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.ExecuteUbergraph_ItemTransformKeyInfo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformKeyInfo_C::ExecuteUbergraph_ItemTransformKeyInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformKeyInfo.ItemTransformKeyInfo_C.ExecuteUbergraph_ItemTransformKeyInfo");

	UItemTransformKeyInfo_C_ExecuteUbergraph_ItemTransformKeyInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
