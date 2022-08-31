/**
 * @file  PointedDripstoneFeature.hpp
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
 * @brief MC class PointedDripstoneFeature.
 *
 */
class PointedDripstoneFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POINTEDDRIPSTONEFEATURE
public:
    class PointedDripstoneFeature& operator=(class PointedDripstoneFeature const &) = delete;
    PointedDripstoneFeature(class PointedDripstoneFeature const &) = delete;
    PointedDripstoneFeature() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~PointedDripstoneFeature();
    /**
     * @vtable 1
     * @symbol ?place@PointedDripstoneFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POINTEDDRIPSTONEFEATURE
#endif

};