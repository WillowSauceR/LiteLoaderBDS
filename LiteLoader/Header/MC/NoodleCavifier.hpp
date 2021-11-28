// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NoodleCavifierAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NoodleCavifier {
#include "Extra/NoodleCavifierAPI.hpp"

public:
    MCAPI NoodleCavifier(class NoodleCavifierNoises const&, short);
    MCAPI float cavify(float, class BlockPos const&) const;
    MCAPI void fillNoiseAtPos(class Vec3 const&, int);
    MCAPI class std::array<class NoiseCellInterpolator*, 4> getInterpolators(int, int);
};