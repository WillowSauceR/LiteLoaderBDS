/**
 * @file  BambooFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BambooFeature.
 *
 */
class BambooFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BAMBOOFEATURE
public:
    class BambooFeature& operator=(class BambooFeature const &) = delete;
    BambooFeature(class BambooFeature const &) = delete;
    BambooFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1697167664
     */
    virtual ~BambooFeature();
    /**
     * @vftbl  3
     * @symbol ?place@BambooFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1651568516
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};