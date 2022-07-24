#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CommonInput.ECommonGamepadType
enum class ECommonGamepadType : uint8_t
{
	XboxOneController              = 0,
	PS4Controller                  = 1,
	SwitchController               = 2,
	Count                          = 3,
	ECommonGamepadType_MAX         = 4
};


// Enum CommonInput.ECommonInputType
enum class ECommonInputType : uint8_t
{
	MouseAndKeyboard               = 0,
	Gamepad                        = 1,
	Touch                          = 2,
	Count                          = 3,
	ECommonInputType_MAX           = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
