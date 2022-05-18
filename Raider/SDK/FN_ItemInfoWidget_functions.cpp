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

// Function ItemInfoWidget.ItemInfoWidget_C.PopulateUsingItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoWidget_C::PopulateUsingItem(class UFortItem* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoWidget.ItemInfoWidget_C.PopulateUsingItem");

	UItemInfoWidget_C_PopulateUsingItem_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoWidget.ItemInfoWidget_C.Update Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoWidget_C::Update_Text(class UFortItem* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoWidget.ItemInfoWidget_C.Update Text");

	UItemInfoWidget_C_Update_Text_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoWidget.ItemInfoWidget_C.ExecuteUbergraph_ItemInfoWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoWidget_C::ExecuteUbergraph_ItemInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInfoWidget.ItemInfoWidget_C.ExecuteUbergraph_ItemInfoWidget");

	UItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
