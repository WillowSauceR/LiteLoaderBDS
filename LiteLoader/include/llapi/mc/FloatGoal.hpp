/**
 * @file  FloatGoal.hpp
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
 * @brief MC class FloatGoal.
 *
 */
class FloatGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOATGOAL
public:
    class FloatGoal& operator=(class FloatGoal const &) = delete;
    FloatGoal(class FloatGoal const &) = delete;
    FloatGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -184219171
     */
    virtual ~FloatGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@FloatGoal@@UEAA_NXZ
     * @hash   2014189185
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @hash   -1407555070
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1406631549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1363424028
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   518983733
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?tick@FloatGoal@@UEAAXXZ
     * @hash   -67813499
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@FloatGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2087352687
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0FloatGoal@@QEAA@AEAVMob@@@Z
     * @hash   -585869314
     */
    MCAPI FloatGoal(class Mob &);

};