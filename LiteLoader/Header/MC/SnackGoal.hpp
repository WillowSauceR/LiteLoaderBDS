// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SnackGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SnackGoal {
#include "Extra/SnackGoalAPI.hpp"
public:
    virtual ~SnackGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();

public:
    MCAPI SnackGoal(class Mob&, std::vector<class ItemDescriptor> const&, float, float, float);


private:
    MCAPI bool _hasSnackableItems();
    MCAPI bool _isSnackableItem(class ItemStack const&) const;
    MCAPI void _updateHand(class ItemStack const&);

    MCAPI static int const CHEW_CHANCE;
    MCAPI static int const EATING_TIME;
    MCAPI static float const PATH_RANGE;
    MCAPI static int const RANDOM_EATING_END;
    MCAPI static int const RANDOM_EATING_START;
    MCAPI static float const SEARCH_SIZE;
    MCAPI static float const STOP_DIST_SQRD;
};