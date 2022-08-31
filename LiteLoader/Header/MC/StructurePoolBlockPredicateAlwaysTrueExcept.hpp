/**
 * @file  StructurePoolBlockPredicateAlwaysTrueExcept.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolBlockPredicateAlwaysTrueExcept.
 *
 */
class StructurePoolBlockPredicateAlwaysTrueExcept {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEALWAYSTRUEEXCEPT
public:
    class StructurePoolBlockPredicateAlwaysTrueExcept& operator=(class StructurePoolBlockPredicateAlwaysTrueExcept const &) = delete;
    StructurePoolBlockPredicateAlwaysTrueExcept(class StructurePoolBlockPredicateAlwaysTrueExcept const &) = delete;
    StructurePoolBlockPredicateAlwaysTrueExcept() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~StructurePoolBlockPredicateAlwaysTrueExcept();
    /**
     * @vtable 1
     * @symbol ?test@StructurePoolBlockPredicateAlwaysTrueExcept@@UEBA_NAEBVBlock@@AEAVRandomize@@@Z
     */
    virtual bool test(class Block const &, class Randomize &) const;
    /**
     * @vtable 2
     * @symbol ?test@StructurePoolBlockPredicateAlwaysTrueExcept@@UEBA_NAEBVBlockPos@@0AEAVRandomize@@@Z
     */
    virtual bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREPOOLBLOCKPREDICATEALWAYSTRUEEXCEPT
#endif
    /**
     * @symbol ??0StructurePoolBlockPredicateAlwaysTrueExcept@@QEAA@AEBV?$set@PEBVBlock@@U?$less@PEBVBlock@@@std@@V?$allocator@PEBVBlock@@@3@@std@@M@Z
     */
    MCAPI StructurePoolBlockPredicateAlwaysTrueExcept(class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const &, float);

};