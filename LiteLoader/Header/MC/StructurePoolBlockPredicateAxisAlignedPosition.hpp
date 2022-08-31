/**
 * @file  StructurePoolBlockPredicateAxisAlignedPosition.hpp
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
 * @brief MC class StructurePoolBlockPredicateAxisAlignedPosition.
 *
 */
class StructurePoolBlockPredicateAxisAlignedPosition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEAXISALIGNEDPOSITION
public:
    class StructurePoolBlockPredicateAxisAlignedPosition& operator=(class StructurePoolBlockPredicateAxisAlignedPosition const &) = delete;
    StructurePoolBlockPredicateAxisAlignedPosition(class StructurePoolBlockPredicateAxisAlignedPosition const &) = delete;
    StructurePoolBlockPredicateAxisAlignedPosition() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~StructurePoolBlockPredicateAxisAlignedPosition();
    /**
     * @vtable 1
     * @symbol ?test@StructurePoolBlockPredicateAxisAlignedPosition@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
     */
    virtual bool test(class Block const &, class Randomize &) const;
    /**
     * @vtable 2
     * @symbol ?test@StructurePoolBlockPredicateAxisAlignedPosition@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
     */
    virtual bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREPOOLBLOCKPREDICATEAXISALIGNEDPOSITION
#endif
    /**
     * @symbol ??0StructurePoolBlockPredicateAxisAlignedPosition@@QEAA@MMHHE@Z
     */
    MCAPI StructurePoolBlockPredicateAxisAlignedPosition(float, float, int, int, unsigned char);

};