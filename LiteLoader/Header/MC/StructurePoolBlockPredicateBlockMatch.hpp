/**
 * @file  StructurePoolBlockPredicateBlockMatch.hpp
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
 * @brief MC class StructurePoolBlockPredicateBlockMatch.
 *
 */
class StructurePoolBlockPredicateBlockMatch {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEBLOCKMATCH
public:
    class StructurePoolBlockPredicateBlockMatch& operator=(class StructurePoolBlockPredicateBlockMatch const &) = delete;
    StructurePoolBlockPredicateBlockMatch(class StructurePoolBlockPredicateBlockMatch const &) = delete;
    StructurePoolBlockPredicateBlockMatch() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~StructurePoolBlockPredicateBlockMatch();
    /**
     * @vtable 1
     * @symbol ?test@StructurePoolBlockPredicateBlockMatch@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
     */
    virtual bool test(class Block const &, class Randomize &) const;
    /**
     * @vtable 2
     * @symbol ?test@StructurePoolBlockPredicateBlockMatch@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
     */
    virtual bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREPOOLBLOCKPREDICATEBLOCKMATCH
#endif
    /**
     * @symbol ??0StructurePoolBlockPredicateBlockMatch@@QEAA@AEBVBlock@@@Z
     */
    MCAPI StructurePoolBlockPredicateBlockMatch(class Block const &);

};