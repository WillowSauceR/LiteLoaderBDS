/**
 * @file  CraftHandlerTrade.hpp
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
 * @brief MC class CraftHandlerTrade.
 *
 */
class CraftHandlerTrade {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERTRADE
public:
    class CraftHandlerTrade& operator=(class CraftHandlerTrade const &) = delete;
    CraftHandlerTrade(class CraftHandlerTrade const &) = delete;
    CraftHandlerTrade() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~CraftHandlerTrade();
    /**
     * @vtable 1
     * @symbol ?handleConsumedItem@CraftHandlerTrade@@EEAA?AW4ItemStackNetResult@@W4ContainerEnumName@@EAEBVItemStack@@@Z
     */
    virtual enum ItemStackNetResult handleConsumedItem(enum ContainerEnumName, unsigned char, class ItemStack const &);
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
    /**
     * @vtable 4
     * @symbol ?_handleCraftAction@CraftHandlerTrade@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
     */
    virtual enum ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const &);
    /**
     * @vtable 5
     * @symbol ?_postCraftRequest@CraftHandlerTrade@@EEAAX_N@Z
     */
    virtual void _postCraftRequest(bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTHANDLERTRADE
#endif
    /**
     * @symbol ??0CraftHandlerTrade@@QEAA@AEBVContainerScreenContext@@AEAVItemStackRequestActionCraftHandler@@@Z
     */
    MCAPI CraftHandlerTrade(class ContainerScreenContext const &, class ItemStackRequestActionCraftHandler &);

//private:
    /**
     * @symbol ?_getMerchantRecipeFromNetId@CraftHandlerTrade@@AEAA?AV?$tuple@W4ItemStackNetResult@@PEBVMerchantRecipe@@@std@@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
     */
    MCAPI class std::tuple<enum ItemStackNetResult, class MerchantRecipe const *> _getMerchantRecipeFromNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    /**
     * @symbol ?_handleTrade1@CraftHandlerTrade@@AEAA?AW4ItemStackNetResult@@AEBV?$ItemStackRequestActionCraft@V?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@$0M@@@@Z
     */
    MCAPI enum ItemStackNetResult _handleTrade1(class ItemStackRequestActionCraft<class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>, 12> const &);
    /**
     * @symbol ?_initResultItem@CraftHandlerTrade@@AEAA?AW4ItemStackNetResult@@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
     */
    MCAPI enum ItemStackNetResult _initResultItem(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &);
    /**
     * @symbol ?_initTrade2Consumes@CraftHandlerTrade@@AEAA?AW4ItemStackNetResult@@XZ
     */
    MCAPI enum ItemStackNetResult _initTrade2Consumes();
    /**
     * @symbol ?_matchesAuxValueTrade2@CraftHandlerTrade@@AEBA_NAEBVItemStackBase@@0@Z
     */
    MCAPI bool _matchesAuxValueTrade2(class ItemStackBase const &, class ItemStackBase const &) const;

private:

};