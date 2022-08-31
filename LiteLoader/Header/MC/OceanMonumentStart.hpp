/**
 * @file  OceanMonumentStart.hpp
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
 * @brief MC class OceanMonumentStart.
 *
 */
class OceanMonumentStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTSTART
public:
    class OceanMonumentStart& operator=(class OceanMonumentStart const &) = delete;
    OceanMonumentStart(class OceanMonumentStart const &) = delete;
    OceanMonumentStart() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~OceanMonumentStart();
    /**
     * @vtable 1
     * @symbol ?postProcess@OceanMonumentStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OCEANMONUMENTSTART
#endif
    /**
     * @symbol ?createMonument@OceanMonumentStart@@QEAAXAEAVDimension@@AEAVRandom@@HH@Z
     */
    MCAPI void createMonument(class Dimension &, class Random &, int, int);

};