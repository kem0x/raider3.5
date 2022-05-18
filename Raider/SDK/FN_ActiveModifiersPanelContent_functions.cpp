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

// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*> inModifiers                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UActiveModifiersPanelContent_C::Init(TArray<class UFortGameplayModifierItemDefinition*>* inModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Init");

	UActiveModifiersPanelContent_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inModifiers != nullptr)
		*inModifiers = params.inModifiers;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
