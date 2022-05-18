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

// BlueprintGeneratedClass S_Water_Shallow_3x4.S_Water_Shallow_3x4_C
// 0x0000 (0x03DB - 0x03DB)
class AS_Water_Shallow_3x4_C : public A_WaterMeshBlueprintMaster_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass S_Water_Shallow_3x4.S_Water_Shallow_3x4_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
