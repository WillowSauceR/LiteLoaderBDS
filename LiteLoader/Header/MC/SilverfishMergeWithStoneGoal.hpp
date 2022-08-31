/**
 * @file  SilverfishMergeWithStoneGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RandomStrollGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SilverfishMergeWithStoneGoal.
 *
 */
class SilverfishMergeWithStoneGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SILVERFISHMERGEWITHSTONEGOAL
public:
    class SilverfishMergeWithStoneGoal& operator=(class SilverfishMergeWithStoneGoal const &) = delete;
    SilverfishMergeWithStoneGoal(class SilverfishMergeWithStoneGoal const &) = delete;
    SilverfishMergeWithStoneGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~SilverfishMergeWithStoneGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@SilverfishMergeWithStoneGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol ?canContinueToUse@SilverfishMergeWithStoneGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vtable 4
     * @symbol ?start@SilverfishMergeWithStoneGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@SilverfishMergeWithStoneGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SILVERFISHMERGEWITHSTONEGOAL
#endif
    /**
     * @symbol ??0SilverfishMergeWithStoneGoal@@QEAA@AEAVSilverfish@@@Z
     */
    MCAPI SilverfishMergeWithStoneGoal(class Silverfish &);

};