// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class SensingComponent {

public:
    MCAPI bool canSee(class Mob&, class Actor const&);
    MCAPI void reset();
    MCAPI bool withinFOV(class Mob&, class Vec3 const&, float);
};