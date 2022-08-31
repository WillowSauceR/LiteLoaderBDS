/**
 * @file  SlimeRandomDirectionGoal.hpp
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
 * @brief MC class SlimeRandomDirectionGoal.
 *
 */
class SlimeRandomDirectionGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMERANDOMDIRECTIONGOAL
public:
    class SlimeRandomDirectionGoal& operator=(class SlimeRandomDirectionGoal const &) = delete;
    SlimeRandomDirectionGoal(class SlimeRandomDirectionGoal const &) = delete;
    SlimeRandomDirectionGoal() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~SlimeRandomDirectionGoal();
    /**
     * @vtable 1
     * @symbol ?canUse@SlimeRandomDirectionGoal@@UEAA_NXZ
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
     * @symbol ?tick@SlimeRandomDirectionGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vtable 7
     * @symbol ?appendDebugInfo@SlimeRandomDirectionGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLIMERANDOMDIRECTIONGOAL
#endif
    /**
     * @symbol ??0SlimeRandomDirectionGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI SlimeRandomDirectionGoal(class Mob &);

};