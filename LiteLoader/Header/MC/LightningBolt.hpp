/**
 * @file  LightningBolt.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LightningBolt.
 *
 */
class LightningBolt : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIGHTNINGBOLT
public:
    class LightningBolt& operator=(class LightningBolt const &) = delete;
    LightningBolt(class LightningBolt const &) = delete;
    LightningBolt() = delete;
#endif

public:
    /**
     * @vtable 8
     * @symbol ?reloadHardcoded@LightningBolt@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vtable 9
     * @symbol ?reloadHardcodedClient@LightningBolt@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vtable 14
     * @symbol __unk_destructor_14
     */
    virtual ~LightningBolt();
    /**
     * @vtable 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vtable 49
     * @symbol ?normalTick@LightningBolt@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vtable 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vtable 68
     * @symbol __unk_vfn_68
     */
    virtual void __unk_vfn_68();
    /**
     * @vtable 80
     * @symbol ?getShadowRadius@LightningBolt@@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vtable 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vtable 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vtable 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vtable 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vtable 99
     * @symbol __unk_vfn_99
     */
    virtual void __unk_vfn_99();
    /**
     * @vtable 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vtable 108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vtable 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vtable 111
     * @symbol __unk_vfn_111
     */
    virtual void __unk_vfn_111();
    /**
     * @vtable 182
     * @symbol __unk_vfn_182
     */
    virtual void __unk_vfn_182();
    /**
     * @vtable 196
     * @symbol __unk_vfn_196
     */
    virtual void __unk_vfn_196();
    /**
     * @vtable 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vtable 223
     * @symbol __unk_vfn_223
     */
    virtual void __unk_vfn_223();
    /**
     * @vtable 248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vtable 251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @vtable 269
     * @symbol __unk_vfn_269
     */
    virtual void __unk_vfn_269();
    /**
     * @vtable 273
     * @symbol ?readAdditionalSaveData@LightningBolt@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vtable 274
     * @symbol ?addAdditionalSaveData@LightningBolt@@UEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vtable 277
     * @symbol __unk_vfn_277
     */
    virtual void __unk_vfn_277();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIGHTNINGBOLT
    /**
     * @vtable -1
     * @symbol ?shouldAlwaysRender@LightningBolt@@UEAA_NXZ
     */
    MCVAPI bool shouldAlwaysRender();
#endif
    /**
     * @symbol ??0LightningBolt@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI LightningBolt(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

//private:
    /**
     * @symbol ?_shouldSetOnFire@LightningBolt@@AEBA_NXZ
     */
    MCAPI bool _shouldSetOnFire() const;

private:

};