/**
 * @file  DurabilityItemComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DurabilityItemComponent.
 *
 */
class DurabilityItemComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DURABILITYITEMCOMPONENT
public:
    class DurabilityItemComponent& operator=(class DurabilityItemComponent const &) = delete;
    DurabilityItemComponent(class DurabilityItemComponent const &) = delete;
    DurabilityItemComponent() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~DurabilityItemComponent();
    /**
     * @vtable 1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VDurabilityItemComponent@@@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
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
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vtable 5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VDurabilityItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vtable 6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VDurabilityItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DURABILITYITEMCOMPONENT
#endif
    /**
     * @symbol ?getDamageChance@DurabilityItemComponent@@QEBAHH@Z
     */
    MCAPI int getDamageChance(int) const;
    /**
     * @symbol ?getDamageChanceRange@DurabilityItemComponent@@QEBA?AUIntRange@@XZ
     */
    MCAPI struct IntRange getDamageChanceRange() const;
    /**
     * @symbol ?getMaxDamage@DurabilityItemComponent@@QEBAHXZ
     */
    MCAPI int getMaxDamage() const;
    /**
     * @symbol ?setMaxDamage@DurabilityItemComponent@@QEAAXH@Z
     */
    MCAPI void setMaxDamage(int);
    /**
     * @symbol ?bindType@DurabilityItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier@DurabilityItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();
    /**
     * @symbol ?registerVersionUpgrades@DurabilityItemComponent@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};