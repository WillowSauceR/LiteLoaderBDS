/**
 * @file  ItemReactionComponent.hpp
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
 * @brief MC class ItemReactionComponent.
 *
 */
class ItemReactionComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREACTIONCOMPONENT
public:
    class ItemReactionComponent& operator=(class ItemReactionComponent const &) = delete;
    ItemReactionComponent(class ItemReactionComponent const &) = delete;
    ItemReactionComponent() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~ItemReactionComponent();
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
     * @symbol ?_onEnd@ItemReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
     */
    virtual void _onEnd(class LabTableReaction &, class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMREACTIONCOMPONENT
#endif

};