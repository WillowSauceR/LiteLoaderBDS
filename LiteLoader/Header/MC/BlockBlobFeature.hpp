/**
 * @file  BlockBlobFeature.hpp
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
 * @brief MC class BlockBlobFeature.
 *
 */
class BlockBlobFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBLOBFEATURE
public:
    class BlockBlobFeature& operator=(class BlockBlobFeature const &) = delete;
    BlockBlobFeature(class BlockBlobFeature const &) = delete;
    BlockBlobFeature() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockBlobFeature();
    /**
     * @vtable 3
     * @symbol ?place@BlockBlobFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKBLOBFEATURE
#endif
    /**
     * @symbol ??0BlockBlobFeature@@QEAA@AEBVBlock@@H@Z
     */
    MCAPI BlockBlobFeature(class Block const &, int);

};