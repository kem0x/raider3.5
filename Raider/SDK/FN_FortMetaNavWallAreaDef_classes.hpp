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

// BlueprintGeneratedClass FortMetaNavWallAreaDef.FortMetaNavWallAreaDef_C
// 0x0000 (0x0050 - 0x0050)
class UFortMetaNavWallAreaDef_C : public UFortMetaNavArea_Wall
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FortMetaNavWallAreaDef.FortMetaNavWallAreaDef_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
