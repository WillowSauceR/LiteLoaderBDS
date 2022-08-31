/**
 * @file  CatchFireSubcomponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CatchFireSubcomponent.
 *
 */
class CatchFireSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CATCHFIRESUBCOMPONENT
public:
    class CatchFireSubcomponent& operator=(class CatchFireSubcomponent const &) = delete;
    CatchFireSubcomponent(class CatchFireSubcomponent const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~CatchFireSubcomponent();
    /**
     * @vtable 1
     * @symbol ?readfromJSON@CatchFireSubcomponent@@UEAAXAEAVValue@Json@@AEBVSemVersion@@@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vtable 2
     * @symbol ?writetoJSON@CatchFireSubcomponent@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vtable 3
     * @symbol ?doOnHitEffect@CatchFireSubcomponent@@UEAAXAEAVActor@@AEAVProjectileComponent@@@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vtable 4
     * @symbol ?getName@CatchFireSubcomponent@@UEAAPEBDXZ
     */
    virtual char const * getName();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CATCHFIRESUBCOMPONENT
#endif
    /**
     * @symbol ??0CatchFireSubcomponent@@QEAA@XZ
     */
    MCAPI CatchFireSubcomponent();

};