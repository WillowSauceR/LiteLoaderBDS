/**
 * @file  LodestoneCompassItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "AbstractCompassItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LodestoneCompassItem.
 *
 */
class LodestoneCompassItem : public AbstractCompassItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LODESTONECOMPASSITEM
public:
    class LodestoneCompassItem& operator=(class LodestoneCompassItem const &) = delete;
    LodestoneCompassItem(class LodestoneCompassItem const &) = delete;
    LodestoneCompassItem() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~LodestoneCompassItem();
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
     * @vtable 120
     * @symbol ?getAnimationFrameFor@LodestoneCompassItem@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
     */
    virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /**
     * @vtable 136
     * @symbol ?_useOn@LodestoneCompassItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LODESTONECOMPASSITEM
#endif
    /**
     * @symbol ??0LodestoneCompassItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI LodestoneCompassItem(std::string const &, int);
    /**
     * @symbol ?getPositionTrackingId@LodestoneCompassItem@@SA?AVPositionTrackingId@@AEBVItemStackBase@@@Z
     */
    MCAPI static class PositionTrackingId getPositionTrackingId(class ItemStackBase const &);
    /**
     * @symbol ?linkCompassToLodestone@LodestoneCompassItem@@SA_NAEAVItemStack@@AEAVBlockSource@@VBlockPos@@@Z
     */
    MCAPI static bool linkCompassToLodestone(class ItemStack &, class BlockSource &, class BlockPos);

};