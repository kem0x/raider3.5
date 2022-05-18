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

// Function AthenaTeamCountWidget.AthenaTeamCountWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamCountWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamCountWidget.AthenaTeamCountWidget_C.PreConstruct");

	UAthenaTeamCountWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamCountWidget.AthenaTeamCountWidget_C.SetTeamSlotData
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           TeamIdx                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAthenaTeamCountSlotData* TeamSlotData                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaTeamCountWidget_C::SetTeamSlotData(int* TeamIdx, struct FAthenaTeamCountSlotData* TeamSlotData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamCountWidget.AthenaTeamCountWidget_C.SetTeamSlotData");

	UAthenaTeamCountWidget_C_SetTeamSlotData_Params params;
	params.TeamIdx = TeamIdx;
	params.TeamSlotData = TeamSlotData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamCountWidget.AthenaTeamCountWidget_C.ExecuteUbergraph_AthenaTeamCountWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamCountWidget_C::ExecuteUbergraph_AthenaTeamCountWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamCountWidget.AthenaTeamCountWidget_C.ExecuteUbergraph_AthenaTeamCountWidget");

	UAthenaTeamCountWidget_C_ExecuteUbergraph_AthenaTeamCountWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
