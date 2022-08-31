/**
 * @file  BlockPileFeature.hpp
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
 * @brief MC class BlockPileFeature.
 *
 */
class BlockPileFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPILEFEATURE
public:
    class BlockPileFeature& operator=(class BlockPileFeature const &) = delete;
    BlockPileFeature(class BlockPileFeature const &) = delete;
    BlockPileFeature() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockPileFeature();
    /**
     * @vtable 3
     * @symbol ?place@BlockPileFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vtable 4
     * @symbol ?getBlockToPlace@BlockPileFeature@@MEBAAEBVBlock@@AEAVRandom@@@Z
     */
    virtual class Block const & getBlockToPlace(class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKPILEFEATURE
#endif
    /**
     * @symbol ??0BlockPileFeature@@QEAA@AEBVBlock@@@Z
     */
    MCAPI BlockPileFeature(class Block const &);

};