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

// BlueprintGeneratedClass S_TRV_Water_Shallow_3x3.S_TRV_Water_Shallow_3x3_C
// 0x0000 (0x03DB - 0x03DB)
class AS_TRV_Water_Shallow_3x3_C : public A_WaterMeshBlueprintMaster_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass S_TRV_Water_Shallow_3x3.S_TRV_Water_Shallow_3x3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
