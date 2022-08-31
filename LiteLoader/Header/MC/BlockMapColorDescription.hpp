/**
 * @file  BlockMapColorDescription.hpp
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
 * @brief MC structure BlockMapColorDescription.
 *
 */
struct BlockMapColorDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMAPCOLORDESCRIPTION
public:
    struct BlockMapColorDescription& operator=(struct BlockMapColorDescription const &) = delete;
    BlockMapColorDescription(struct BlockMapColorDescription const &) = delete;
    BlockMapColorDescription() = delete;
#endif
public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockMapColorDescription();
    /**
     * @vtable 1
     * @symbol ?getName@BlockMapColorDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @vtable 2
     * @symbol ?initializeComponent@BlockMapColorDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKMAPCOLORDESCRIPTION
#endif
MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockMapColorDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockMapColorDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};