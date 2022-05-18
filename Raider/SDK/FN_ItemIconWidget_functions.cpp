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

// Function ItemIconWidget.ItemIconWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemIconWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemIconWidget.ItemIconWidget_C.Construct");

	UItemIconWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemIconWidget.ItemIconWidget_C.ExecuteUbergraph_ItemIconWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemIconWidget_C::ExecuteUbergraph_ItemIconWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemIconWidget.ItemIconWidget_C.ExecuteUbergraph_ItemIconWidget");

	UItemIconWidget_C_ExecuteUbergraph_ItemIconWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
