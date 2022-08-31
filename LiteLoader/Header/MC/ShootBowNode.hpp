/**
 * @file  ShootBowNode.hpp
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
 * @brief MC class ShootBowNode.
 *
 */
class ShootBowNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOOTBOWNODE
public:
    class ShootBowNode& operator=(class ShootBowNode const &) = delete;
    ShootBowNode(class ShootBowNode const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~ShootBowNode();
    /**
     * @vtable 1
     * @symbol ?tick@ShootBowNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
     */
    virtual enum BehaviorStatus tick(class Actor &);
    /**
     * @vtable 2
     * @symbol ?initializeFromDefinition@ShootBowNode@@EEAAXAEAVActor@@@Z
     */
    virtual void initializeFromDefinition(class Actor &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHOOTBOWNODE
#endif
    /**
     * @symbol ??0ShootBowNode@@QEAA@XZ
     */
    MCAPI ShootBowNode();

};