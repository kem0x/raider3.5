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

// BlueprintGeneratedClass CollectionHeader-Progress.CollectionHeader-Progress_C
// 0x0000 (0x00B0 - 0x00B0)
class UCollectionHeader_Progress_C : public UCollectionHeader_Level_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CollectionHeader-Progress.CollectionHeader-Progress_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
