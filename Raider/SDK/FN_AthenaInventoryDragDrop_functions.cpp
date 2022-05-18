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

// Function AthenaInventoryDragDrop.AthenaInventoryDragDrop_C.ShowDropIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAthenaDragDropAction> Drop_Action                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryDragDrop_C::ShowDropIcon(TEnumAsByte<EAthenaDragDropAction> Drop_Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryDragDrop.AthenaInventoryDragDrop_C.ShowDropIcon");

	UAthenaInventoryDragDrop_C_ShowDropIcon_Params params;
	params.Drop_Action = Drop_Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
