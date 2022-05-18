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

// Class Gauntlet.GauntletTestController
// 0x0008 (0x0030 - 0x0028)
class UGauntletTestController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gauntlet.GauntletTestController");
		return ptr;
	}

};


// Class Gauntlet.GauntletTestControllerBootTest
// 0x0000 (0x0030 - 0x0030)
class UGauntletTestControllerBootTest : public UGauntletTestController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gauntlet.GauntletTestControllerBootTest");
		return ptr;
	}

};


// Class Gauntlet.GauntletTestControllerErrorTest
// 0x0020 (0x0050 - 0x0030)
class UGauntletTestControllerErrorTest : public UGauntletTestController
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Gauntlet.GauntletTestControllerErrorTest");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
