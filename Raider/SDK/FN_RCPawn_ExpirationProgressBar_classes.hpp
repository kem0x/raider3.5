#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass RCPawn_ExpirationProgressBar.RCPawn_ExpirationProgressBar_C
// 0x0000 (0x0228 - 0x0228)
class URCPawn_ExpirationProgressBar_C : public URemoteControlledPawnExpirationWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RCPawn_ExpirationProgressBar.RCPawn_ExpirationProgressBar_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
