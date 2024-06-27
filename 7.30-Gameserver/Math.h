#pragma once
#include <cstdio>

#include "SDK/SDK.hpp"
using namespace SDK;

namespace Math
{
	void SinCos(float* ScalarSin, float* ScalarCos, float Value);

	FQuat FRotToQuat(FRotator Rot);
}