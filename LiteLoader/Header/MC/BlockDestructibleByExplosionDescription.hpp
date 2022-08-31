/**
 * @file  BlockDestructibleByExplosionDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockDestructibleByExplosionDescription.
 *
 */
struct BlockDestructibleByExplosionDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESTRUCTIBLEBYEXPLOSIONDESCRIPTION
public:
    struct BlockDestructibleByExplosionDescription& operator=(struct BlockDestructibleByExplosionDescription const &) = delete;
    BlockDestructibleByExplosionDescription(struct BlockDestructibleByExplosionDescription const &) = delete;
    BlockDestructibleByExplosionDescription() = delete;
#endif
public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockDestructibleByExplosionDescription();
    /**
     * @vtable 1
     * @symbol ?getName@BlockDestructibleByExplosionDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @vtable 2
     * @symbol ?initializeComponent@BlockDestructibleByExplosionDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKDESTRUCTIBLEBYEXPLOSIONDESCRIPTION
#endif
MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockDestructibleByExplosionDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockDestructibleByExplosionDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};