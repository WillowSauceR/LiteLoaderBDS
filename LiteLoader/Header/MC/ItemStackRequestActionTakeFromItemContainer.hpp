/**
 * @file  ItemStackRequestActionTakeFromItemContainer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackRequestActionTransferBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionTakeFromItemContainer.
 *
 */
class ItemStackRequestActionTakeFromItemContainer : public ItemStackRequestActionTransferBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONTAKEFROMITEMCONTAINER
public:
    class ItemStackRequestActionTakeFromItemContainer& operator=(class ItemStackRequestActionTakeFromItemContainer const &) = delete;
    ItemStackRequestActionTakeFromItemContainer(class ItemStackRequestActionTakeFromItemContainer const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~ItemStackRequestActionTakeFromItemContainer();
    /**
     * @vtable 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vtable 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONTAKEFROMITEMCONTAINER
#endif
    /**
     * @symbol ??0ItemStackRequestActionTakeFromItemContainer@@QEAA@XZ
     */
    MCAPI ItemStackRequestActionTakeFromItemContainer();

};