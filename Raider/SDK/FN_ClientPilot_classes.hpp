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

// Class ClientPilot.ClientPilotComponent
// 0x0000 (0x0028 - 0x0028)
class UClientPilotComponent : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClientPilot.ClientPilotComponent");
		return ptr;
	}

};


// Class ClientPilot.ClientPilotBlackboard
// 0x0000 (0x0028 - 0x0028)
class UClientPilotBlackboard : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClientPilot.ClientPilotBlackboard");
		return ptr;
	}

};


// Class ClientPilot.ClientPilotBlackboardManager
// 0x0008 (0x0030 - 0x0028)
class UClientPilotBlackboardManager : public UObject
{
public:
	class UClientPilotBlackboard*                      PilotBlackboard;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClientPilot.ClientPilotBlackboardManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
