/**
 * @file  RestrictOpenDoorGoal.hpp
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
 * @brief MC class RestrictOpenDoorGoal.
 *
 */
class RestrictOpenDoorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESTRICTOPENDOORGOAL
public:
    class RestrictOpenDoorGoal& operator=(class RestrictOpenDoorGoal const &) = delete;
    RestrictOpenDoorGoal(class RestrictOpenDoorGoal const &) = delete;
    RestrictOpenDoorGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~RestrictOpenDoorGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@RestrictOpenDoorGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@RestrictOpenDoorGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?start@RestrictOpenDoorGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol ?stop@RestrictOpenDoorGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vtable 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@RestrictOpenDoorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESTRICTOPENDOORGOAL
#endif
    /**
     * @symbol ??0RestrictOpenDoorGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI RestrictOpenDoorGoal(class Mob &);

};