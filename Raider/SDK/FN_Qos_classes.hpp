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

// Class Qos.QosBeaconClient
// 0x0060 (0x0430 - 0x03D0)
class AQosBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03D0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosBeaconClient");
		return ptr;
	}


	void ServerQosRequest(const struct FString& InSessionId);
	void ClientQosResponse(EQosResponseType Response);
};


// Class Qos.QosBeaconHost
// 0x0010 (0x0350 - 0x0340)
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0340(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosBeaconHost");
		return ptr;
	}

};


// Class Qos.QosEvaluator
// 0x00F8 (0x0120 - 0x0028)
class UQosEvaluator : public UObject
{
public:
	struct FQosSearchPass                              CurrentSearchPass;                                        // 0x0028(0x0008)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0030(0x00A8) MISSED OFFSET
	int                                                ControllerId;                                             // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInProgress;                                              // 0x00DC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCancelOperation;                                         // 0x00DD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00DE(0x0002) MISSED OFFSET
	TArray<struct FQosRegionInfo>                      Datacenters;                                              // 0x00E0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x30];                                      // 0x00F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosEvaluator");
		return ptr;
	}

};


// Class Qos.QosRegionManager
// 0x0080 (0x00A8 - 0x0028)
class UQosRegionManager : public UObject
{
public:
	bool                                               bUseOldQosServers;                                        // 0x0028(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                NumTestsPerRegion;                                        // 0x002C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              PingTimeout;                                              // 0x0030(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FQosDatacenterInfo>                  Datacenters;                                              // 0x0038(0x0010) (ZeroConstructor, Config)
	struct FDateTime                                   LastCheckTimestamp;                                       // 0x0048(0x0008)
	class UQosEvaluator*                               Evaluator;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	EQosCompletionResult                               QosEvalResult;                                            // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<struct FQosRegionInfo>                      RegionOptions;                                            // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     ForceRegionId;                                            // 0x0070(0x0010) (ZeroConstructor)
	bool                                               bRegionForcedViaCommandline;                              // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FString                                     SelectedRegionId;                                         // 0x0088(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosRegionManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
