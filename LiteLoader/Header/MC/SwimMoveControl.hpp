/**
 * @file  SwimMoveControl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SwimMoveControl.
 *
 */
class SwimMoveControl : public MoveControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMMOVECONTROL
public:
    class SwimMoveControl& operator=(class SwimMoveControl const &) = delete;
    SwimMoveControl(class SwimMoveControl const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~SwimMoveControl();
    /**
     * @vtable 1
     * @symbol ?initializeInternal@SwimMoveControl@@UEAAXAEAVMob@@PEAUMoveControlDescription@@@Z
     */
    virtual void initializeInternal(class Mob &, struct MoveControlDescription *);
    /**
     * @vtable 2
     * @symbol ?tick@SwimMoveControl@@MEAAXAEAVMoveControlComponent@@AEAVMob@@@Z
     */
    virtual void tick(class MoveControlComponent &, class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SWIMMOVECONTROL
#endif
    /**
     * @symbol ??0SwimMoveControl@@QEAA@XZ
     */
    MCAPI SwimMoveControl();

};