/**
 * @file  BlockIntersectionConstraint.hpp
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
 * @brief MC class BlockIntersectionConstraint.
 *
 */
class BlockIntersectionConstraint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKINTERSECTIONCONSTRAINT
public:
    class BlockIntersectionConstraint& operator=(class BlockIntersectionConstraint const &) = delete;
    BlockIntersectionConstraint(class BlockIntersectionConstraint const &) = delete;
    BlockIntersectionConstraint() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockIntersectionConstraint();
    /**
     * @vtable 1
     * @symbol ?isSatisfied@BlockIntersectionConstraint@@UEBA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBW4Rotation@@@Z
     */
    virtual bool isSatisfied(class IBlockWorldGenAPI const &, class BlockPos const &, enum Rotation const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKINTERSECTIONCONSTRAINT
#endif
    /**
     * @symbol ??0BlockIntersectionConstraint@@QEAA@AEAVStructureTemplate@@@Z
     */
    MCAPI BlockIntersectionConstraint(class StructureTemplate &);

};