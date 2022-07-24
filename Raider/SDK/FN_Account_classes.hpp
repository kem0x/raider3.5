#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Account.OnlineAccountCommon
// 0x0678 (0x06A0 - 0x0028)
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
	unsigned char                                      UnknownData02[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              SkipRedeemOfflinePurchasesChance;                         // 0x0074(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShouldGrantFreeAccess;                                   // 0x0078(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0079(0x0001) MISSED OFFSET
	bool                                               bUseGameSubAccessRedemption;                              // 0x007A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowHomeSharingAccess;                                  // 0x007B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRequireUGCPrivilege;                                     // 0x007C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x29B];                                     // 0x007D(0x029B) MISSED OFFSET
	class UWaitingRoomState*                           WaitingRoomState;                                         // 0x0318(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x380];                                     // 0x0320(0x0380) MISSED OFFSET

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
// 0x0060 (0x0088 - 0x0028)
class UWaitingRoomState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0028(0x0034) MISSED OFFSET
	int                                                GracePeriodMins;                                          // 0x005C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0060(0x0028) MISSED OFFSET

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
