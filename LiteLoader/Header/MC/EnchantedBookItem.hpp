/**
 * @file  EnchantedBookItem.hpp
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
 * @brief MC class EnchantedBookItem.
 *
 */
class EnchantedBookItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTEDBOOKITEM
public:
    class EnchantedBookItem& operator=(class EnchantedBookItem const &) = delete;
    EnchantedBookItem(class EnchantedBookItem const &) = delete;
    EnchantedBookItem() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~EnchantedBookItem();
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
     * @vtable 51
     * @symbol ?isGlint@EnchantedBookItem@@UEBA_NAEBVItemStackBase@@@Z
     */
    virtual bool isGlint(class ItemStackBase const &) const;
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
     * @vtable 63
     * @symbol ?getEnchantSlot@EnchantedBookItem@@UEBAHXZ
     */
    virtual int getEnchantSlot() const;
    /**
     * @vtable 64
     * @symbol ?getEnchantValue@EnchantedBookItem@@UEBAHXZ
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANTEDBOOKITEM
#endif
    /**
     * @symbol ??0EnchantedBookItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
     */
    MCAPI EnchantedBookItem(std::string const &, int, bool);

};