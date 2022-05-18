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

// BlueprintGeneratedClass B_Shotgun_Minigun.B_Shotgun_Minigun_C
// 0x0000 (0x0E4C - 0x0E4C)
class AB_Shotgun_Minigun_C : public AB_Shotgun_Auto_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Shotgun_Minigun.B_Shotgun_Minigun_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
