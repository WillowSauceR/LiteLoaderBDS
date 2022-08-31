/**
 * @file  CentralSpikedFeature.hpp
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
 * @brief MC class CentralSpikedFeature.
 *
 */
class CentralSpikedFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CENTRALSPIKEDFEATURE
public:
    class CentralSpikedFeature& operator=(class CentralSpikedFeature const &) = delete;
    CentralSpikedFeature(class CentralSpikedFeature const &) = delete;
    CentralSpikedFeature() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~CentralSpikedFeature();
    /**
     * @vtable 3
     * @symbol ?place@CentralSpikedFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CENTRALSPIKEDFEATURE
#endif
    /**
     * @symbol ??0CentralSpikedFeature@@QEAA@AEBVBlock@@@Z
     */
    MCAPI CentralSpikedFeature(class Block const &);

};