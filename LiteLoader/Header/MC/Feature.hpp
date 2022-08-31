/**
 * @file  Feature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Feature.
 *
 */
class Feature : public IFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURE
public:
    class Feature& operator=(class Feature const &) = delete;
    Feature(class Feature const &) = delete;
    Feature() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~Feature();
    /**
     * @vtable 1
     * @symbol ?place@Feature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @vtable 2
     * @symbol ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual bool isValidPlacement(std::string const &);
    /**
     * @vtable 3
     * @symbol ?place@WeepingVinesClusterFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FEATURE
#endif
    /**
     * @symbol ??0Feature@@QEAA@PEAVActor@@@Z
     */
    MCAPI Feature(class Actor *);

//protected:
    /**
     * @symbol ?_placeBlock@Feature@@IEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI bool _placeBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @symbol ?_setManuallyPlaced@Feature@@IEAAXPEAVActor@@@Z
     */
    MCAPI void _setManuallyPlaced(class Actor *);

protected:

};