#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Qos.QosBeaconClient.ServerQosRequest
struct AQosBeaconClient_ServerQosRequest_Params
{
	struct FString                                     InSessionId;                                              // (Parm, ZeroConstructor)
};

// Function Qos.QosBeaconClient.ClientQosResponse
struct AQosBeaconClient_ClientQosResponse_Params
{
	EQosResponseType                                   Response;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
