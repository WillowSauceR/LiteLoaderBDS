/**
 * @file  LavaSlime.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Slime.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LavaSlime.
 *
 */
class LavaSlime : public Slime {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAVASLIME
public:
    class LavaSlime& operator=(class LavaSlime const &) = delete;
    LavaSlime(class LavaSlime const &) = delete;
    LavaSlime() = delete;
#endif

public:
    /**
     * @vtable 8
     * @symbol ?reloadHardcoded@LavaSlime@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vtable 14
     * @symbol __unk_destructor_14
     */
    virtual ~LavaSlime();
    /**
     * @vtable 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
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
     * @vtable 73
     * @symbol ?isInLava@LavaSlime@@UEBA_NXZ
     */
    virtual bool isInLava() const;
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
     * @vtable 87
     * @symbol ?getBrightness@LavaSlime@@UEBAMM@Z
     */
    virtual float getBrightness(float) const;
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
     * @vtable 104
     * @symbol ?isOnFire@LavaSlime@@MEBA_NXZ
     */
    virtual bool isOnFire() const;
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
     * @vtable 277
     * @symbol __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vtable 285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @vtable 305
     * @symbol ?checkSpawnRules@LavaSlime@@UEAA_N_N@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vtable 313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @vtable 317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @vtable 322
     * @symbol ?getArmorValue@LavaSlime@@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vtable 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vtable 357
     * @symbol ?jumpFromGround@LavaSlime@@MEAAXXZ
     */
    virtual void jumpFromGround();
    /**
     * @vtable 365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
    /**
     * @vtable 367
     * @symbol ?isDarkEnoughToSpawn@LavaSlime@@UEBA_NXZ
     */
    virtual bool isDarkEnoughToSpawn() const;
    /**
     * @vtable 368
     * @symbol ?canDealDamage@LavaSlime@@MEAA_NXZ
     */
    virtual bool canDealDamage();
    /**
     * @vtable 372
     * @symbol ?doPlayLandSound@LavaSlime@@MEAA_NXZ
     */
    virtual bool doPlayLandSound();
    /**
     * @vtable 375
     * @symbol ?decreaseSquish@LavaSlime@@MEAAXXZ
     */
    virtual void decreaseSquish();
    /**
     * @vtable 376
     * @symbol ?createChild@LavaSlime@@MEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@H@Z
     */
    virtual class OwnerPtrT<struct EntityRefTraits> createChild(int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LAVASLIME
#endif
    /**
     * @symbol ??0LavaSlime@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI LavaSlime(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};