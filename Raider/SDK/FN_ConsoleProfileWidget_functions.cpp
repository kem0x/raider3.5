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

// Function ConsoleProfileWidget.ConsoleProfileWidget_C.SetDisplayName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UConsoleProfileWidget_C::SetDisplayName(const struct FText& DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleProfileWidget.ConsoleProfileWidget_C.SetDisplayName");

	UConsoleProfileWidget_C_SetDisplayName_Params params;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
