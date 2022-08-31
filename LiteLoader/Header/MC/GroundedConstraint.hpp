/**
 * @file  GroundedConstraint.hpp
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
 * @brief MC class GroundedConstraint.
 *
 */
class GroundedConstraint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROUNDEDCONSTRAINT
public:
    class GroundedConstraint& operator=(class GroundedConstraint const &) = delete;
    GroundedConstraint(class GroundedConstraint const &) = delete;
    GroundedConstraint() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~GroundedConstraint();
    /**
     * @vtable 1
     * @symbol ?isSatisfied@GroundedConstraint@@UEBA_NAEBVIBlockWorldGenAPI@@AEBVBlockPos@@AEBW4Rotation@@@Z
     */
    virtual bool isSatisfied(class IBlockWorldGenAPI const &, class BlockPos const &, enum Rotation const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GROUNDEDCONSTRAINT
#endif
    /**
     * @symbol ??0GroundedConstraint@@QEAA@AEAVStructureTemplate@@@Z
     */
    MCAPI GroundedConstraint(class StructureTemplate &);

};