/**
 * @file  BlockPlacementFilterDescription.hpp
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
 * @brief MC structure BlockPlacementFilterDescription.
 *
 */
struct BlockPlacementFilterDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPLACEMENTFILTERDESCRIPTION
public:
    struct BlockPlacementFilterDescription& operator=(struct BlockPlacementFilterDescription const &) = delete;
    BlockPlacementFilterDescription(struct BlockPlacementFilterDescription const &) = delete;
    BlockPlacementFilterDescription() = delete;
#endif
public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockPlacementFilterDescription();
    /**
     * @vtable 1
     * @symbol ?getName@BlockPlacementFilterDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @vtable 2
     * @symbol ?initializeComponent@BlockPlacementFilterDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol ?isNetworkComponent@BlockPlacementFilterDescription@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vtable 5
     * @symbol ?buildNetworkTag@BlockPlacementFilterDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vtable 6
     * @symbol ?initializeFromNetwork@BlockPlacementFilterDescription@@UEAAXAEBVCompoundTag@@@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKPLACEMENTFILTERDESCRIPTION
#endif
MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockPlacementFilterDescription@@SAXXZ
     */
    MCAPI static void bindType();

};