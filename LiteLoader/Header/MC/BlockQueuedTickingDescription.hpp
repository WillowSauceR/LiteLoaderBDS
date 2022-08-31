/**
 * @file  BlockQueuedTickingDescription.hpp
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
 * @brief MC structure BlockQueuedTickingDescription.
 *
 */
struct BlockQueuedTickingDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKQUEUEDTICKINGDESCRIPTION
public:
    struct BlockQueuedTickingDescription& operator=(struct BlockQueuedTickingDescription const &) = delete;
    BlockQueuedTickingDescription(struct BlockQueuedTickingDescription const &) = delete;
    BlockQueuedTickingDescription() = delete;
#endif
public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockQueuedTickingDescription();
    /**
     * @vtable 1
     * @symbol ?getName@BlockQueuedTickingDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @vtable 2
     * @symbol ?initializeComponent@BlockQueuedTickingDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKQUEUEDTICKINGDESCRIPTION
#endif
MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockQueuedTickingDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockQueuedTickingDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};