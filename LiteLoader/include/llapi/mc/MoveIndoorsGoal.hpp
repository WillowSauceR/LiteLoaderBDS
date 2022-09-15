/**
 * @file  MoveIndoorsGoal.hpp
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
 * @brief MC class MoveIndoorsGoal.
 *
 */
class MoveIndoorsGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINDOORSGOAL
public:
    class MoveIndoorsGoal& operator=(class MoveIndoorsGoal const &) = delete;
    MoveIndoorsGoal(class MoveIndoorsGoal const &) = delete;
    MoveIndoorsGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1808160368
     */
    virtual ~MoveIndoorsGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@MoveIndoorsGoal@@UEAA_NXZ
     * @hash   2141151486
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@MoveIndoorsGoal@@UEAA_NXZ
     * @hash   -1413184564
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@MoveIndoorsGoal@@UEAAXXZ
     * @hash   -1935649609
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@MoveIndoorsGoal@@UEAAXXZ
     * @hash   -1046313753
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@MoveIndoorsGoal@@UEAAXXZ
     * @hash   -1207628302
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@MoveIndoorsGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -918444574
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0MoveIndoorsGoal@@QEAA@AEAVMob@@@Z
     * @hash   1144965787
     */
    MCAPI MoveIndoorsGoal(class Mob &);

//private:
    /**
     * @symbol ?_isInside@MoveIndoorsGoal@@AEAA_NAEBVBlockPos@@@Z
     * @hash   1202519689
     */
    MCAPI bool _isInside(class BlockPos const &);
    /**
     * @symbol ?_startPathfinding@MoveIndoorsGoal@@AEAAXXZ
     * @hash   -1519540821
     */
    MCAPI void _startPathfinding();

private:

};