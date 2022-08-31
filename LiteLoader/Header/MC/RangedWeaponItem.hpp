/**
 * @file  RangedWeaponItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RangedWeaponItem.
 *
 */
class RangedWeaponItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANGEDWEAPONITEM
public:
    class RangedWeaponItem& operator=(class RangedWeaponItem const &) = delete;
    RangedWeaponItem(class RangedWeaponItem const &) = delete;
    RangedWeaponItem() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~RangedWeaponItem();
    /**
     * @vtable 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vtable 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vtable 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vtable 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vtable 52
     * @symbol __unk_vfn_52
     */
    virtual void __unk_vfn_52();
    /**
     * @vtable 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vtable 64
     * @symbol ?getEnchantValue@RangedWeaponItem@@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @vtable 67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @vtable 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vtable 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vtable 73
     * @symbol __unk_vfn_73
     */
    virtual void __unk_vfn_73();
    /**
     * @vtable 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vtable 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vtable 81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vtable 85
     * @symbol ?use@RangedWeaponItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vtable 88
     * @symbol ?releaseUsing@RangedWeaponItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @vtable 90
     * @symbol ?hurtActor@RangedWeaponItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vtable 94
     * @symbol ?mineBlock@RangedWeaponItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vtable 120
     * @symbol ?getAnimationFrameFor@RangedWeaponItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANGEDWEAPONITEM
#endif
    /**
     * @symbol ??0RangedWeaponItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI RangedWeaponItem(std::string const &, int);
    /**
     * @symbol ?getLaunchPower@RangedWeaponItem@@QEBAMHHH@Z
     */
    MCAPI float getLaunchPower(int, int, int) const;

};