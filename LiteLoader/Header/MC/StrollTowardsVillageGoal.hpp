// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveToVillageGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StrollTowardsVillageGoal : public MoveToVillageGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STROLLTOWARDSVILLAGEGOAL
public:
    class StrollTowardsVillageGoal& operator=(class StrollTowardsVillageGoal const &) = delete;
    StrollTowardsVillageGoal(class StrollTowardsVillageGoal const &) = delete;
    StrollTowardsVillageGoal() = delete;
#endif

public:
    /*0*/ virtual ~StrollTowardsVillageGoal();
    /*1*/ virtual bool canUse();
    /*3*/ virtual void __unk_vfn_3();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*16*/ virtual unsigned __int64 _getRepathTime() const;
    /*17*/ virtual class BlockPos _selectRandomPosInVillage();
    MCAPI StrollTowardsVillageGoal(class Mob &, float, float, float, int, float);

protected:

private:

};