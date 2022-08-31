/**
 * @file  SendEventGoal.hpp
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
 * @brief MC class SendEventGoal.
 *
 */
class SendEventGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDEVENTGOAL
public:
    class SendEventGoal& operator=(class SendEventGoal const &) = delete;
    SendEventGoal(class SendEventGoal const &) = delete;
    SendEventGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~SendEventGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@SendEventGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@SendEventGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?start@SendEventGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 5
     * @symbol ?stop@SendEventGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vtable 6
     * @symbol ?tick@SendEventGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@SendEventGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SENDEVENTGOAL
#endif
    /**
     * @symbol ??0SendEventGoal@@QEAA@AEAVMob@@AEBV?$vector@USendEventData@@V?$allocator@USendEventData@@@std@@@std@@@Z
     */
    MCAPI SendEventGoal(class Mob &, std::vector<struct SendEventData> const &);

//private:
    /**
     * @symbol ?_selectBestSpell@SendEventGoal@@AEAAHXZ
     */
    MCAPI int _selectBestSpell();

private:

};