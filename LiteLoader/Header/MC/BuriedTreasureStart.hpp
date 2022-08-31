/**
 * @file  BuriedTreasureStart.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BuriedTreasureStart.
 *
 */
class BuriedTreasureStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURIEDTREASURESTART
public:
    class BuriedTreasureStart& operator=(class BuriedTreasureStart const &) = delete;
    BuriedTreasureStart(class BuriedTreasureStart const &) = delete;
    BuriedTreasureStart() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~BuriedTreasureStart();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BURIEDTREASURESTART
#endif
    /**
     * @symbol ??0BuriedTreasureStart@@QEAA@AEAVDimension@@AEAVRandom@@HH@Z
     */
    MCAPI BuriedTreasureStart(class Dimension &, class Random &, int, int);

};