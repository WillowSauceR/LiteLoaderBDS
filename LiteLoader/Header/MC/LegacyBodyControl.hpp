/**
 * @file  LegacyBodyControl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyBodyControl.
 *
 */
class LegacyBodyControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYBODYCONTROL
public:
    class LegacyBodyControl& operator=(class LegacyBodyControl const &) = delete;
    LegacyBodyControl(class LegacyBodyControl const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~LegacyBodyControl();
    /**
     * @vtable 1
     * @symbol ?clientTick@LegacyBodyControl@@UEAAXAEAVMob@@@Z
     */
    virtual void clientTick(class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYBODYCONTROL
#endif
    /**
     * @symbol ??0LegacyBodyControl@@QEAA@XZ
     */
    MCAPI LegacyBodyControl();

};