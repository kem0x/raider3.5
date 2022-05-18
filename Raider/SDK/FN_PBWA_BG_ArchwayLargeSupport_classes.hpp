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

// BlueprintGeneratedClass PBWA_BG_ArchwayLargeSupport.PBWA_BG_ArchwayLargeSupport_C
// 0x0000 (0x0EA0 - 0x0EA0)
class APBWA_BG_ArchwayLargeSupport_C : public ABuildingWall
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PBWA_BG_ArchwayLargeSupport.PBWA_BG_ArchwayLargeSupport_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
