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

// Class Account.OnlineAccountCommon
// 0x0838 (0x0860 - 0x0028)
class UOnlineAccountCommon : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FString                                     AvailabilityServiceGameName;                              // 0x0038(0x0010) (ZeroConstructor, Config)
	bool                                               bRequireLightswitchAtStartup;                             // 0x0048(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     EulaKey;                                                  // 0x0050(0x0010) (ZeroConstructor, Config)
	TArray<struct FWebEnvUrl>                          WebCreateEpicAccountUrl;                                  // 0x0060(0x0010) (ZeroConstructor, Config)
	bool                                               bAllowLocalLogout;                                        // 0x0070(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShouldGrantFreeAccess;                                   // 0x0071(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0072(0x0001) MISSED OFFSET
	bool                                               bUseGameSubAccessRedemption;                              // 0x0073(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowHomeSharingAccess;                                  // 0x0074(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x283];                                     // 0x0075(0x0283) MISSED OFFSET
	class UWaitingRoomState*                           WaitingRoomState;                                         // 0x02F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x560];                                     // 0x0300(0x0560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Account.OnlineAccountCommon");
		return ptr;
	}

};


// Class Account.ExternalAccountProvider
// 0x0010 (0x0038 - 0x0028)
class UExternalAccountProvider : public UObject
{
public:
	TArray<struct FExternalAccountServiceConfig>       Services;                                                 // 0x0028(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Account.ExternalAccountProvider");
		return ptr;
	}

};


// Class Account.WaitingRoomState
// 0x0098 (0x00C0 - 0x0028)
class UWaitingRoomState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0028(0x0034) MISSED OFFSET
	int                                                GracePeriodMins;                                          // 0x005C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0060(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Account.WaitingRoomState");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
