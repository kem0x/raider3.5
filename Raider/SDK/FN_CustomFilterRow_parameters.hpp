#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CustomFilterRow.CustomFilterRow_C.SetCheckedState
struct UCustomFilterRow_C_SetCheckedState_Params
{
	bool                                               IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomFilterRow.CustomFilterRow_C.Construct
struct UCustomFilterRow_C_Construct_Params
{
};

// Function CustomFilterRow.CustomFilterRow_C.PreConstruct
struct UCustomFilterRow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomFilterRow.CustomFilterRow_C.OnClicked
struct UCustomFilterRow_C_OnClicked_Params
{
};

// Function CustomFilterRow.CustomFilterRow_C.ExecuteUbergraph_CustomFilterRow
struct UCustomFilterRow_C_ExecuteUbergraph_CustomFilterRow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomFilterRow.CustomFilterRow_C.OnCustomFilterToggled__DelegateSignature
struct UCustomFilterRow_C_OnCustomFilterToggled__DelegateSignature_Params
{
	EFortInventoryCustomFilter                         Filter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
