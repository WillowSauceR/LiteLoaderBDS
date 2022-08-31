/**
 * @file  ArmorStand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ArmorStand.
 *
 */
class ArmorStand : public Mob {

#define AFTER_EXTRA
// Add Member There
public:
struct Pose {
    Pose() = delete;
    Pose(Pose const&) = delete;
    Pose(Pose const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORSTAND
public:
    class ArmorStand& operator=(class ArmorStand const &) = delete;
    ArmorStand(class ArmorStand const &) = delete;
    ArmorStand() = delete;
#endif

public:
    /**
     * @vtable 14
     * @symbol __unk_destructor_14
     */
    virtual ~ArmorStand();
    /**
     * @vtable 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vtable 49
     * @symbol ?normalTick@ArmorStand@@UEAAXXZ
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
     * @symbol ?getShadowRadius@ArmorStand@@UEBAMXZ
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
     * @vtable 95
     * @symbol ?isPickable@ArmorStand@@UEAA_NXZ
     */
    virtual bool isPickable();
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
     * @vtable 135
     * @symbol ?isInvulnerableTo@ArmorStand@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
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
     * @vtable 238
     * @symbol ?getInteraction@ArmorStand@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
     */
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
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
     * @vtable 253
     * @symbol ?die@ArmorStand@@UEAAXAEBVActorDamageSource@@@Z
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vtable 267
     * @symbol ?updateEntitySpecificMolangVariables@ArmorStand@@UEAAXAEAVRenderParams@@@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vtable 269
     * @symbol __unk_vfn_269
     */
    virtual void __unk_vfn_269();
    /**
     * @vtable 270
     * @symbol ?_hurt@ArmorStand@@UEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vtable 273
     * @symbol ?readAdditionalSaveData@ArmorStand@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vtable 274
     * @symbol ?addAdditionalSaveData@ArmorStand@@UEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
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
     * @vtable 302
     * @symbol ?pushActors@ArmorStand@@UEAAXXZ
     */
    virtual void pushActors();
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
     * @vtable 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @vtable 365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORSTAND
    /**
     * @vtable -1
     * @symbol ?interactPreventDefault@ArmorStand@@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault();
#endif
    /**
     * @symbol ??0ArmorStand@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI ArmorStand(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?setPoseIndex@ArmorStand@@QEAAXH@Z
     */
    MCAPI void setPoseIndex(int);

//private:
    /**
     * @symbol ?_causeDamage@ArmorStand@@AEAAXM@Z
     */
    MCAPI void _causeDamage(float);
    /**
     * @symbol ?_destroyWithEffects@ArmorStand@@AEAAXAEBVVec3@@@Z
     */
    MCAPI void _destroyWithEffects(class Vec3 const &);
    /**
     * @symbol ?_dropHeldItems@ArmorStand@@AEAAXXZ
     */
    MCAPI void _dropHeldItems();
    /**
     * @symbol ?_dropHeldItemsAndResource@ArmorStand@@AEAAXXZ
     */
    MCAPI void _dropHeldItemsAndResource();
    /**
     * @symbol ?_dropItem@ArmorStand@@AEAAXAEBVItemStack@@@Z
     */
    MCAPI void _dropItem(class ItemStack const &);
    /**
     * @symbol ?_trySwapItem@ArmorStand@@AEAA_NAEAVPlayer@@W4EquipmentSlot@@@Z
     */
    MCAPI bool _trySwapItem(class Player &, enum EquipmentSlot);

private:
MCAPI static struct ArmorStand::Pose const POSE_ATHENA;
MCAPI static struct ArmorStand::Pose const POSE_BRANDISH;
MCAPI static struct ArmorStand::Pose const POSE_CANCAN_A;
MCAPI static struct ArmorStand::Pose const POSE_CANCAN_B;
MCAPI static struct ArmorStand::Pose const POSE_DEFAULT;
MCAPI static struct ArmorStand::Pose const POSE_ENTERTAIN;
MCAPI static struct ArmorStand::Pose const POSE_HERO;
MCAPI static struct ArmorStand::Pose const POSE_HONOR;
MCAPI static struct ArmorStand::Pose const POSE_RIPOSTE;
MCAPI static struct ArmorStand::Pose const POSE_SALUTE;
MCAPI static struct ArmorStand::Pose const POSE_SOLEMN;
MCAPI static struct ArmorStand::Pose const POSE_ZERO_ROTATION;
MCAPI static struct ArmorStand::Pose const POSE_ZOMBIE;
MCAPI static struct ArmorStand::Pose const * STAND_POSES[];

};