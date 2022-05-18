#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ScheduledEvents.EventRecord
// 0x0018
struct FEventRecord
{
	struct FString                                     EventType;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FDateTime                                   ActiveUntil;                                              // 0x0010(0x0008)
};

// ScriptStruct ScheduledEvents.EventChannelState
// 0x0038
struct FEventChannelState
{
	struct FDateTime                                   ValidFrom;                                                // 0x0000(0x0008)
	TArray<struct FEventRecord>                        ActiveEvents;                                             // 0x0008(0x0010) (ZeroConstructor)
	struct FJsonObjectWrapper                          State;                                                    // 0x0018(0x0020)
};

// ScriptStruct ScheduledEvents.EventsTimeline
// 0x0018
struct FEventsTimeline
{
	struct FDateTime                                   CacheExpire;                                              // 0x0000(0x0008)
	TArray<struct FEventChannelState>                  States;                                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ScheduledEvents.CalendarDownload
// 0x0058
struct FCalendarDownload
{
	struct FDateTime                                   CurrentTime;                                              // 0x0000(0x0008)
	TMap<struct FString, struct FEventsTimeline>       Channels;                                                 // 0x0008(0x0050) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
