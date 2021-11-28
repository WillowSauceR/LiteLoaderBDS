// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/TameableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class TameableComponent {
#include "Extra/TameableComponentAPI.hpp"

public:
    MCAPI TameableComponent();
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    MCAPI void tame(class Actor&, class Player&);


private:
    MCAPI void _becomeTame(class Actor&);
};