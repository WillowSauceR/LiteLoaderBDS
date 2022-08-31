/**
 * @file  MossVegetationFeature.hpp
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
 * @brief MC class MossVegetationFeature.
 *
 */
class MossVegetationFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOSSVEGETATIONFEATURE
public:
    class MossVegetationFeature& operator=(class MossVegetationFeature const &) = delete;
    MossVegetationFeature(class MossVegetationFeature const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~MossVegetationFeature();
    /**
     * @vtable 3
     * @symbol ?place@MossVegetationFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOSSVEGETATIONFEATURE
#endif
    /**
     * @symbol ??0MossVegetationFeature@@QEAA@XZ
     */
    MCAPI MossVegetationFeature();

};