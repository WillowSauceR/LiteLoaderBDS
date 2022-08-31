/**
 * @file  RandomStrollGoal.hpp
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
 * @brief MC class RandomStrollGoal.
 *
 */
class RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSTROLLGOAL
public:
    class RandomStrollGoal& operator=(class RandomStrollGoal const &) = delete;
    RandomStrollGoal(class RandomStrollGoal const &) = delete;
    RandomStrollGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~RandomStrollGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@RandomStrollGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@RandomStrollGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol ?canBeInterrupted@RandomBreachingGoal@@UEAA_NXZ
     */
    virtual bool canBeInterrupted();
    /**
     * @vtable 4
     * @symbol ?start@RandomStrollGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol ?stop@RandomStrollGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vtable 6
     * @symbol ?tick@RandomStrollGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@RandomStrollGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vtable 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vtable 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vtable 10
     * @symbol ?_setWantedPosition@RandomStrollGoal@@MEAA_NXZ
     */
    virtual bool _setWantedPosition();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMSTROLLGOAL
#endif
    /**
     * @symbol ??0RandomStrollGoal@@QEAA@AEAVMob@@MHHH@Z
     */
    MCAPI RandomStrollGoal(class Mob &, float, int, int, int);

};