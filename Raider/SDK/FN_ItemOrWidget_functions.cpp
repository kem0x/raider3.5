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

// Function ItemOrWidget.ItemOrWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemOrWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemOrWidget.ItemOrWidget_C.Construct");

	UItemOrWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemOrWidget.ItemOrWidget_C.ExecuteUbergraph_ItemOrWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemOrWidget_C::ExecuteUbergraph_ItemOrWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemOrWidget.ItemOrWidget_C.ExecuteUbergraph_ItemOrWidget");

	UItemOrWidget_C_ExecuteUbergraph_ItemOrWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
