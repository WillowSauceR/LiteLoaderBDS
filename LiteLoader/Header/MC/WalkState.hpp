// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PetSleepWithOwnerState.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WalkState : public PetSleepWithOwnerState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WALKSTATE
public:
    class WalkState& operator=(class WalkState const &) = delete;
    WalkState(class WalkState const &) = delete;
    WalkState() = delete;
#endif

public:
    /*0*/ virtual ~WalkState();
    /*1*/ virtual void tick();
    /*2*/ virtual void start();

protected:

private:

};