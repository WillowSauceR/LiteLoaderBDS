// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GameEventMovementTrackingComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTMOVEMENTTRACKINGCOMPONENT
public:
    class GameEventMovementTrackingComponent& operator=(class GameEventMovementTrackingComponent const &) = delete;
    GameEventMovementTrackingComponent(class GameEventMovementTrackingComponent const &) = delete;
    GameEventMovementTrackingComponent() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEEVENTMOVEMENTTRACKINGCOMPONENT
#endif
    MCAPI void initializeFromCode(class Actor &, bool);
    MCAPI bool shouldEmitEntityMoveGameEvent();
    MCAPI bool shouldEmitFlapGameEvent();
    MCAPI bool shouldEmitSwimGameEvent();



};