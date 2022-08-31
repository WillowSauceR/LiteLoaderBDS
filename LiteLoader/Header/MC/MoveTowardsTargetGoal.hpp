/**
 * @file  MoveTowardsTargetGoal.hpp
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
 * @brief MC class MoveTowardsTargetGoal.
 *
 */
class MoveTowardsTargetGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSTARGETGOAL
public:
    class MoveTowardsTargetGoal& operator=(class MoveTowardsTargetGoal const &) = delete;
    MoveTowardsTargetGoal(class MoveTowardsTargetGoal const &) = delete;
    MoveTowardsTargetGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~MoveTowardsTargetGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@MoveTowardsTargetGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@MoveTowardsTargetGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?start@MoveTowardsTargetGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol ?stop@MoveTowardsTargetGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vtable 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@MoveTowardsTargetGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETOWARDSTARGETGOAL
#endif
    /**
     * @symbol ??0MoveTowardsTargetGoal@@QEAA@AEAVMob@@MM@Z
     */
    MCAPI MoveTowardsTargetGoal(class Mob &, float, float);

};