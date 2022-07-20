#pragma once
#include "Logger.hpp"

constexpr auto PI = 3.1415926535897932f;
constexpr auto INV_PI = 0.31830988618f;
constexpr auto HALF_PI = 1.57079632679f;

static void Error(std::string error, bool bExit = false) {
    //MessageBoxA(nullptr, error.c_str(), "Error", MB_OK | MB_ICONERROR);
    LOG_ERROR("{}", error.c_str());
    if (bExit)
        exit(0);
}

#define CheckNullFatal(x, y) \
    if (!x)                  \
    {                        \
        Error(y, true);      \
    }

template <typename T>
auto Merge(T v) {
    return v;
}

template <typename T, typename... Types>
auto Merge(T var1, Types ... vars) {
    return reinterpret_cast<T*>(__int64(var1) + __int64(Merge(vars...)));
}

// Util macros
#define EXECUTE_ONE_TIME if (([] { 		    \
    static bool is_first_time = true;	    \
    auto was_first_time = is_first_time;    \
    is_first_time = false; 					\
    return was_first_time; }()))

// Hooking macros
#define DETOUR_START          \
    DetourTransactionBegin(); \
    DetourUpdateThread(GetCurrentThread());

#define DetourAttachE(Target, Detour) DetourAttach(&(void*&)Target, Detour);

#define DetourDetachE(Target, Detour) DetourDetach(reinterpret_cast<void**>(&Target), Detour);

#define DETOUR_END DetourTransactionCommit();

#define AddressToFunction(a, f) f = reinterpret_cast<decltype(f)>(a)

namespace Utils {
    static __forceinline uintptr_t FindPattern(const char* signature, bool bRelative = false, uint32_t offset = 0) {
        uintptr_t base_address = reinterpret_cast<uintptr_t>(GetModuleHandle(NULL));
        static auto patternToByte = [](const char* pattern) {
            auto bytes = std::vector<int>{};
            const auto start = const_cast<char*>(pattern);
            const auto end = const_cast<char*>(pattern) + strlen(pattern);

            for (auto current = start; current < end; ++current) {
                if (*current == '?') {
                    ++current;
                    if (*current == '?')
                        ++current;
                    bytes.push_back(-1);
                }
                else {
                    bytes.push_back(strtoul(current, &current, 16));
                }
            }
            return bytes;
        };

        const auto dosHeader = (PIMAGE_DOS_HEADER)base_address;
        const auto ntHeaders = (PIMAGE_NT_HEADERS)((std::uint8_t*)base_address + dosHeader->e_lfanew);

        const auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;
        auto patternBytes = patternToByte(signature);
        const auto scanBytes = reinterpret_cast<std::uint8_t*>(base_address);

        const auto s = patternBytes.size();
        const auto d = patternBytes.data();

        for (auto i = 0ul; i < sizeOfImage - s; ++i) {
            bool found = true;
            for (auto j = 0ul; j < s; ++j) {
                if (scanBytes[i + j] != d[j] && d[j] != -1) {
                    found = false;
                    break;
                }
            }
            if (found) {
                uintptr_t address = reinterpret_cast<uintptr_t>(&scanBytes[i]);
                if (bRelative) {
                    address = ((address + offset + 4) + *(int32_t*)(address + offset));
                    return address;
                }
                return address;
            }
        }
        return NULL;
    }

    static float FRand() {
        return static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
    }

    template <typename T>
    static T Max(T f, T s) {
        return f > s ? f : s;
    }

    static FORCEINLINE void sinCos(float* ScalarSin, float* ScalarCos, float Value) {
        float quotient = (INV_PI * 0.5f) * Value;
        if (Value >= 0.0f) {
            quotient = static_cast<float>(static_cast<int>(quotient + 0.5f));
        }
        else {
            quotient = static_cast<float>(static_cast<int>(quotient - 0.5f));
        }
        float y = Value - (2.0f * PI) * quotient;

        float sign;
        if (y > HALF_PI) {
            y = PI - y;
            sign = -1.0f;
        }
        else if (y < -HALF_PI) {
            y = -PI - y;
            sign = -1.0f;
        }
        else {
            sign = +1.0f;
        }

        float y2 = y * y;

        *ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;

        float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f;
        *ScalarCos = sign * p;
    }

    auto toWStr(const std::string& str) {
        return std::wstring(str.begin(), str.end());
    }

    static auto RotToQuat(FRotator Rotator) {
        const float DEG_TO_RAD = PI / (180.f);
        const float DIVIDE_BY_2 = DEG_TO_RAD / 2.f;
        float SP, SY, SR;
        float CP, CY, CR;

        sinCos(&SP, &CP, Rotator.Pitch * DIVIDE_BY_2);
        sinCos(&SY, &CY, Rotator.Yaw * DIVIDE_BY_2);
        sinCos(&SR, &CR, Rotator.Roll * DIVIDE_BY_2);

        FQuat RotationQuat;
        RotationQuat.X = CR * SP * SY - SR * CP * CY;
        RotationQuat.Y = -CR * SP * CY - SR * CP * SY;
        RotationQuat.Z = CR * CP * SY - SR * SP * CY;
        RotationQuat.W = CR * CP * CY + SR * SP * SY;

        return RotationQuat;
    }

    static auto VecToRot(FVector Vector) {
        FRotator R;

        R.Yaw = std::atan2(Vector.Y, Vector.X) * (180.f / PI);

        R.Pitch = std::atan2(Vector.Z, std::sqrt(Vector.X * Vector.X + Vector.Y * Vector.Y)) * (180.f / PI);

        // roll can't be found from vector
        R.Roll = 0;

        return R;
    }

    auto RandomIntInRange(int min, int max) {
        std::random_device rd; // obtain a random number from hardware
        std::mt19937 gen(rd()); // seed the generator
        static std::uniform_int_distribution<> distr(min, max); // define the range

        return distr(gen);
    }
};
