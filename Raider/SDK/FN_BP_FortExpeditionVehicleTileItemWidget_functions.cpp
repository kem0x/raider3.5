// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionVehicleTileItemWidget_C::Set_Name(const struct FName& SquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Name");

	UBP_FortExpeditionVehicleTileItemWidget_C_Set_Name_Params params;
	params.SquadId = SquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Rating
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBP_FortExpeditionVehicleTileItemWidget_C::Set_Rating(const struct FName& SquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Rating");

	UBP_FortExpeditionVehicleTileItemWidget_C_Set_Rating_Params params;
	params.SquadId = SquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Icon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBP_FortExpeditionVehicleTileItemWidget_C::Set_Icon(const struct FName& SquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.Set Icon");

	UBP_FortExpeditionVehicleTileItemWidget_C_Set_Icon_Params params;
	params.SquadId = SquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject**                ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionVehicleTileItemWidget_C::OnListItemObjectSet(class UObject** ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnListItemObjectSet");

	UBP_FortExpeditionVehicleTileItemWidget_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionVehicleTileItemWidget_C::BP_OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.BP_OnClicked");

	UBP_FortExpeditionVehicleTileItemWidget_C_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionVehicleTileItemWidget_C::ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget");

	UBP_FortExpeditionVehicleTileItemWidget_C_ExecuteUbergraph_BP_FortExpeditionVehicleTileItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnVehicleSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SquadId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FortExpeditionVehicleTileItemWidget_C::OnVehicleSelected__DelegateSignature(const struct FName& SquadId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionVehicleTileItemWidget.BP_FortExpeditionVehicleTileItemWidget_C.OnVehicleSelected__DelegateSignature");

	UBP_FortExpeditionVehicleTileItemWidget_C_OnVehicleSelected__DelegateSignature_Params params;
	params.SquadId = SquadId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
