/**
 * @file  RiseToLiquidLevelGoal.hpp
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
 * @brief MC class RiseToLiquidLevelGoal.
 *
 */
class RiseToLiquidLevelGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RISETOLIQUIDLEVELGOAL
public:
    class RiseToLiquidLevelGoal& operator=(class RiseToLiquidLevelGoal const &) = delete;
    RiseToLiquidLevelGoal(class RiseToLiquidLevelGoal const &) = delete;
    RiseToLiquidLevelGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~RiseToLiquidLevelGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@RiseToLiquidLevelGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vtable 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vtable 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vtable 6
     * @symbol ?tick@RiseToLiquidLevelGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@RiseToLiquidLevelGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RISETOLIQUIDLEVELGOAL
#endif
    /**
     * @symbol ??0RiseToLiquidLevelGoal@@QEAA@AEAVMob@@MMM@Z
     */
    MCAPI RiseToLiquidLevelGoal(class Mob &, float, float, float);

//private:
    /**
     * @symbol ?findLiquidLevel@RiseToLiquidLevelGoal@@AEAAMXZ
     */
    MCAPI float findLiquidLevel();

private:

};