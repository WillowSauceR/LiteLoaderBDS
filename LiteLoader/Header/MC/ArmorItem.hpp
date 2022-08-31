/**
 * @file  ArmorItem.hpp
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
 * @brief MC class ArmorItem.
 *
 */
class ArmorItem : public Item {

#define AFTER_EXTRA
// Add Member There
public:
class ArmorMaterial {
public:
    ArmorMaterial() = delete;
    ArmorMaterial(ArmorMaterial const&) = delete;
    ArmorMaterial(ArmorMaterial const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORITEM
public:
    class ArmorItem& operator=(class ArmorItem const &) = delete;
    ArmorItem(class ArmorItem const &) = delete;
    ArmorItem() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~ArmorItem();
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
     * @vtable 12
     * @symbol ?isArmor@ArmorItem@@UEBA_NXZ
     */
    virtual bool isArmor() const;
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
     * @vtable 18
     * @symbol ?isDyeable@ArmorItem@@UEBA_NXZ
     */
    virtual bool isDyeable() const;
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
     * @vtable 61
     * @symbol ?appendFormattedHovertext@ArmorItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vtable 62
     * @symbol ?isValidRepairItem@ArmorItem@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /**
     * @vtable 63
     * @symbol ?getEnchantSlot@ArmorItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @vtable 64
     * @symbol ?getEnchantValue@ArmorItem@@UEBAHXZ
     */
    virtual int getEnchantValue() const;
    /**
     * @vtable 65
     * @symbol ?getArmorValue@ArmorItem@@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vtable 66
     * @symbol ?getToughnessValue@ArmorItem@@UEBAHXZ
     */
    virtual int getToughnessValue() const;
    /**
     * @vtable 67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @vtable 69
     * @symbol ?getDamageChance@ArmorItem@@UEBAHH@Z
     */
    virtual int getDamageChance(int) const;
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
     * @vtable 74
     * @symbol ?getColor@ArmorItem@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
     */
    virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /**
     * @vtable 75
     * @symbol ?hasCustomColor@ArmorItem@@UEBA_NPEBVCompoundTag@@@Z
     */
    virtual bool hasCustomColor(class CompoundTag const *) const;
    /**
     * @vtable 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vtable 77
     * @symbol ?clearColor@ArmorItem@@UEBAXAEAVItemStackBase@@@Z
     */
    virtual void clearColor(class ItemStackBase &) const;
    /**
     * @vtable 79
     * @symbol ?setColor@ArmorItem@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
     */
    virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
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
     * @vtable 83
     * @symbol ?buildIdAux@ArmorItem@@UEBAHFPEBVCompoundTag@@@Z
     */
    virtual int buildIdAux(short, class CompoundTag const *) const;
    /**
     * @vtable 85
     * @symbol ?use@ArmorItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vtable 86
     * @symbol ?dispense@ArmorItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vtable 90
     * @symbol ?hurtActor@ArmorItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vtable 94
     * @symbol ?mineBlock@ArmorItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @vtable 115
     * @symbol ?getEquipLocation@ArmorItem@@UEBA?AW4ActorLocation@@XZ
     */
    virtual enum ActorLocation getEquipLocation() const;
    /**
     * @vtable 116
     * @symbol ?getEquipSound@ArmorItem@@UEBA?AW4LevelSoundEvent@@XZ
     */
    virtual enum LevelSoundEvent getEquipSound() const;
    /**
     * @vtable 123
     * @symbol ?getIcon@ArmorItem@@UEBAAEBUTextureUVCoordinateSet@@AEBVItemStackBase@@H_N@Z
     */
    virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /**
     * @vtable 125
     * @symbol ?setIcon@ArmorItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    virtual class Item & setIcon(std::string const &, int);
    /**
     * @vtable 137
     * @symbol ?getArmorKnockbackResistance@ArmorItem@@UEBAMXZ
     */
    virtual float getArmorKnockbackResistance() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORITEM
#endif
    /**
     * @symbol ??0ArmorItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVArmorMaterial@0@HW4ArmorSlot@@@Z
     */
    MCAPI ArmorItem(std::string const &, int, class ArmorItem::ArmorMaterial const &, int, enum ArmorSlot);
MCAPI static class ArmorItem::ArmorMaterial const CHAIN;
MCAPI static class ArmorItem::ArmorMaterial const DIAMOND;
MCAPI static class ArmorItem::ArmorMaterial const ELYTRA;
MCAPI static class ArmorItem::ArmorMaterial const GOLD;
MCAPI static class ArmorItem::ArmorMaterial const IRON;
MCAPI static class ArmorItem::ArmorMaterial const LEATHER;
MCAPI static class ArmorItem::ArmorMaterial const NETHERITE;
MCAPI static class ArmorItem::ArmorMaterial const TURTLE;
    /**
     * @symbol ?dispenseArmor@ArmorItem@@SA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@EW4ArmorSlot@@@Z
     */
    MCAPI static bool dispenseArmor(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char, enum ArmorSlot);
    /**
     * @symbol ?getSlotForItem@ArmorItem@@SA?AW4ArmorSlot@@AEBVItemStackBase@@@Z
     */
    MCAPI static enum ArmorSlot getSlotForItem(class ItemStackBase const &);
    /**
     * @symbol ?isDamageable@ArmorItem@@SA_NAEBVItemDescriptor@@@Z
     */
    MCAPI static bool isDamageable(class ItemDescriptor const &);
MCAPI static int const mHealthPerSlot[];

//private:
    /**
     * @symbol ?getTierItem@ArmorItem@@AEBA?AVItemInstance@@XZ
     */
    MCAPI class ItemInstance getTierItem() const;

private:

};