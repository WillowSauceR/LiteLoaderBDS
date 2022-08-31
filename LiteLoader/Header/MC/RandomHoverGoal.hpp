/**
 * @file  RandomHoverGoal.hpp
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
 * @brief MC class RandomHoverGoal.
 *
 */
class RandomHoverGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMHOVERGOAL
public:
    class RandomHoverGoal& operator=(class RandomHoverGoal const &) = delete;
    RandomHoverGoal(class RandomHoverGoal const &) = delete;
    RandomHoverGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~RandomHoverGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@RandomHoverGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@RandomHoverGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?start@RandomHoverGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vtable 6
     * @symbol ?tick@RandomHoverGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@RandomHoverGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMHOVERGOAL
#endif
    /**
     * @symbol ??0RandomHoverGoal@@QEAA@AEAVMob@@MHMMMUIntRange@@@Z
     */
    MCAPI RandomHoverGoal(class Mob &, float, int, float, float, float, struct IntRange);

//protected:
    /**
     * @symbol ?_computeNewTarget@RandomHoverGoal@@IEAA_NXZ
     */
    MCAPI bool _computeNewTarget();
    /**
     * @symbol ?_mobMeetsPreconditions@RandomHoverGoal@@IEBA_NXZ
     */
    MCAPI bool _mobMeetsPreconditions() const;
    /**
     * @symbol ?_moveToTarget@RandomHoverGoal@@IEAAXXZ
     */
    MCAPI void _moveToTarget();

protected:

};