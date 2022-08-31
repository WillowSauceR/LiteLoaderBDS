/**
 * @file  BaseCircuitComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

// clang-format off
enum CircuitComponentType : uint64_t {
    UNDEFINED        = 0LL,
    CAPACITOR        = 1129530177LL,
    CONSUMER         = 1129530179LL,
    POWERED_BLOCK    = 1129533506LL,
    PRODUCER         = 1129533507LL,
    BASE             = 1129534275LL,
    TRANSPORTER      = 1129534546LL,
    COMPARATOR       = 1296253778LL,
    PULSE_CAPACITOR  = 1296257091LL,
    PISTON           = 1296257097LL,
    RAIL_TRANSPORTER = 1296257106LL,
    REPEATER         = 1296257618LL,
    REDSTONE_TORCH   = 1296258115LL,
};
// clang-format on

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseCircuitComponent.
 *
 */
class BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASECIRCUITCOMPONENT
public:
    class BaseCircuitComponent& operator=(class BaseCircuitComponent const &) = delete;
    BaseCircuitComponent(class BaseCircuitComponent const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~BaseCircuitComponent();
    /**
     * @vtable 1
     * @symbol ?getStrength@BaseCircuitComponent@@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @vtable 2
     * @symbol ?getDirection@BaseCircuitComponent@@UEBAHXZ
     */
    virtual int getDirection() const;
    /**
     * @vtable 3
     * @symbol ?setStrength@BaseCircuitComponent@@UEAAXH@Z
     */
    virtual void setStrength(int);
    /**
     * @vtable 4
     * @symbol ?setDirection@BaseCircuitComponent@@UEAAXE@Z
     */
    virtual void setDirection(unsigned char);
    /**
     * @vtable 5
     * @symbol ?setConsumePowerAnyDirection@BaseCircuitComponent@@UEAAX_N@Z
     */
    virtual void setConsumePowerAnyDirection(bool);
    /**
     * @vtable 6
     * @symbol ?canConsumePowerAnyDirection@BaseCircuitComponent@@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @vtable 7
     * @symbol ?canConsumerPower@BaseCircuitComponent@@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @vtable 8
     * @symbol ?canStopPower@BaseCircuitComponent@@UEBA_NXZ
     */
    virtual bool canStopPower() const;
    /**
     * @vtable 9
     * @symbol ?setStopPower@BaseCircuitComponent@@UEAAX_N@Z
     */
    virtual void setStopPower(bool);
    /**
     * @vtable 10
     * @symbol ?removeSource@BaseCircuitComponent@@UEAA_NAEBVBlockPos@@PEBV1@@Z
     */
    virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @vtable 11
     * @symbol ?addSource@BaseCircuitComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @vtable 12
     * @symbol ?allowConnection@BaseCircuitComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vtable 13
     * @symbol ?checkLock@BaseCircuitComponent@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual void checkLock(class CircuitSystem &, class BlockPos const &);
    /**
     * @vtable 14
     * @symbol ?evaluate@BaseCircuitComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @vtable 15
     * @symbol ?cacheValues@BaseCircuitComponent@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
     * @vtable 16
     * @symbol ?updateDependencies@BaseCircuitComponent@@UEAAXAEAVCircuitSceneGraph@@AEBVBlockPos@@@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    /**
     * @vtable 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vtable 18
     * @symbol ?isHalfPulse@BaseCircuitComponent@@UEBA_NXZ
     */
    virtual bool isHalfPulse() const;
    /**
     * @vtable 19
     * @symbol ?hasSource@BaseCircuitComponent@@UEAA_NAEAV1@@Z
     */
    virtual bool hasSource(class BaseCircuitComponent &);
    /**
     * @vtable 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vtable 21
     * @symbol ?isSecondaryPowered@BaseCircuitComponent@@UEBA_NXZ
     */
    virtual bool isSecondaryPowered() const;
    /**
     * @vtable 22
     * @symbol ?getCircuitComponentType@BaseCircuitComponent@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum CircuitComponentType getCircuitComponentType() const;
    /**
     * @vtable 23
     * @symbol ?getCircuitComponentGroupType@BaseCircuitComponent@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum CircuitComponentType getCircuitComponentGroupType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECIRCUITCOMPONENT
    /**
     * @vtable -1
     * @symbol ?allowIndirect@BaseCircuitComponent@@UEBA_NXZ
     */
    MCVAPI bool allowIndirect() const;
    /**
     * @vtable -1
     * @symbol ?hasChildrenSource@BaseCircuitComponent@@UEBA_NXZ
     */
    MCVAPI bool hasChildrenSource() const;
#endif
    /**
     * @symbol ??0BaseCircuitComponent@@QEAA@XZ
     */
    MCAPI BaseCircuitComponent();
    /**
     * @symbol ?hasDirectPower@BaseCircuitComponent@@QEAA_NXZ
     */
    MCAPI bool hasDirectPower();
    /**
     * @symbol ?isRemoved@BaseCircuitComponent@@QEBA_NXZ
     */
    MCAPI bool isRemoved() const;
    /**
     * @symbol ?setRemoved@BaseCircuitComponent@@QEAAXXZ
     */
    MCAPI void setRemoved();

//protected:
    /**
     * @symbol ?trackPowerSource@BaseCircuitComponent@@IEAA_NAEBVCircuitTrackingInfo@@H_NH@Z
     */
    MCAPI bool trackPowerSource(class CircuitTrackingInfo const &, int, bool, int);
    /**
     * @symbol ?trackPowerSourceDuplicates@BaseCircuitComponent@@IEAA_NAEBVCircuitTrackingInfo@@H_N@Z
     */
    MCAPI bool trackPowerSourceDuplicates(class CircuitTrackingInfo const &, int, bool);

protected:

};