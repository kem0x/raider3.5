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

// BlueprintGeneratedClass S_Water_Shallow_Half_x2.S_Water_Shallow_Half_x2_C
// 0x0000 (0x03DB - 0x03DB)
class AS_Water_Shallow_Half_x2_C : public A_WaterMeshBlueprintMaster_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass S_Water_Shallow_Half_x2.S_Water_Shallow_Half_x2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
