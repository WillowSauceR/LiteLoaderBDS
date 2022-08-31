/**
 * @file  GlowStoneFeature.hpp
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
 * @brief MC class GlowStoneFeature.
 *
 */
class GlowStoneFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOWSTONEFEATURE
public:
    class GlowStoneFeature& operator=(class GlowStoneFeature const &) = delete;
    GlowStoneFeature(class GlowStoneFeature const &) = delete;
    GlowStoneFeature() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~GlowStoneFeature();
    /**
     * @vtable 3
     * @symbol ?place@GlowStoneFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GLOWSTONEFEATURE
#endif

};