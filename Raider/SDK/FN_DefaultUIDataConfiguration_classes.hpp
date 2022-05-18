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

// BlueprintGeneratedClass DefaultUIDataConfiguration.DefaultUIDataConfiguration_C
// 0x0000 (0x30D8 - 0x30D8)
class UDefaultUIDataConfiguration_C : public UFortUIDataConfiguration
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultUIDataConfiguration.DefaultUIDataConfiguration_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
