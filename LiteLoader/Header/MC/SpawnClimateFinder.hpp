// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"


#define BEFORE_EXTRA //DO NOT EDIT THIS LINE
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA //DO NOT EDIT THIS LINE

class SpawnClimateFinder {

#define AFTER_EXTRA //DO NOT EDIT THIS LINE
// Add Member There
public:
struct ResultDetails {
    ResultDetails() = delete;
    ResultDetails(ResultDetails const&) = delete;
    ResultDetails(ResultDetails const&&) = delete;
};

#undef AFTER_EXTRA //DO NOT EDIT THIS LINE

public:

    MCAPI SpawnClimateFinder(std::vector<struct ClimateParameters>, struct OverworldNoises3d const&, class DimensionHeightRange const&);
    MCAPI class BlockPos findSpawnPosition() const;
    MCAPI ~SpawnClimateFinder();

protected:


private:

    MCAPI struct std::pair<class BlockPos, __int64> _getSpawnPositionAndFitness(class BlockPos) const;
    MCAPI struct SpawnClimateFinder::ResultDetails _radialSearch(struct SpawnClimateFinder::ResultDetails, int, int) const;
};