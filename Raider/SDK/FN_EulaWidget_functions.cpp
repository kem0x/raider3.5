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

// Function EulaWidget.EulaWidget_C.OnEulaResponse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accepted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEulaWidget_C::OnEulaResponse__DelegateSignature(bool Accepted)
{
	static auto fn = UObject::FindObject<UFunction>("Function EulaWidget.EulaWidget_C.OnEulaResponse__DelegateSignature");

	UEulaWidget_C_OnEulaResponse__DelegateSignature_Params params;
	params.Accepted = Accepted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
