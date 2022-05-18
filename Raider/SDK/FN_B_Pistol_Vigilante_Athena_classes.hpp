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

// BlueprintGeneratedClass B_Pistol_Vigilante_Athena.B_Pistol_Vigilante_Athena_C
// 0x0000 (0x0E4C - 0x0E4C)
class AB_Pistol_Vigilante_Athena_C : public AB_Pistol_Generic_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Pistol_Vigilante_Athena.B_Pistol_Vigilante_Athena_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
