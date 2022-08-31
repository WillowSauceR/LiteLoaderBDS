/**
 * @file  AttributeBuff.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AttributeBuff.
 *
 */
class AttributeBuff {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEBUFF
public:
    class AttributeBuff& operator=(class AttributeBuff const &) = delete;
    AttributeBuff(class AttributeBuff const &) = delete;
    AttributeBuff() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~AttributeBuff();
    /**
     * @vtable 1
     * @symbol ?isInstantaneous@InstantaneousAttributeBuff@@UEBA_NXZ
     */
    virtual bool isInstantaneous() const = 0;
    /**
     * @vtable 2
     * @symbol ?isSerializable@InstantaneousAttributeBuff@@UEBA_NXZ
     */
    virtual bool isSerializable() const = 0;
    /**
     * @vtable 3
     * @symbol ?setDurationAmplifier@AttributeBuff@@UEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
     */
    virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTRIBUTEBUFF
#endif
    /**
     * @symbol ?getAmount@AttributeBuff@@QEBAMXZ
     */
    MCAPI float getAmount() const;
    /**
     * @symbol ?getCause@AttributeBuff@@QEBA?AW4ActorDamageCause@@XZ
     */
    MCAPI enum ActorDamageCause getCause() const;
    /**
     * @symbol ?getId@AttributeBuff@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getId() const;
    /**
     * @symbol ?getOperand@AttributeBuff@@QEBAHXZ
     */
    MCAPI int getOperand() const;
    /**
     * @symbol ?getSource@AttributeBuff@@QEBAAEBVActorDamageSource@@XZ
     */
    MCAPI class ActorDamageSource const & getSource() const;
    /**
     * @symbol ?getType@AttributeBuff@@QEBA?AW4AttributeBuffType@@XZ
     */
    MCAPI enum AttributeBuffType getType() const;
    /**
     * @symbol ??8AttributeBuff@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class AttributeBuff const &) const;
    /**
     * @symbol ?setAmplificationAmount@AttributeBuff@@QEAAXHM@Z
     */
    MCAPI void setAmplificationAmount(int, float);
    /**
     * @symbol ?setId@AttributeBuff@@QEAAX_K@Z
     */
    MCAPI void setId(unsigned __int64);
    /**
     * @symbol ?setOperand@AttributeBuff@@QEAAXH@Z
     */
    MCAPI void setOperand(int);
    /**
     * @symbol ?setSource@AttributeBuff@@QEAAXPEAVActor@@@Z
     */
    MCAPI void setSource(class Actor *);
    /**
     * @symbol ?setValueAmplifier@AttributeBuff@@QEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
     */
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @symbol ?buffTypeToDamageCause@AttributeBuff@@SA?AW4ActorDamageCause@@W4AttributeBuffType@@@Z
     */
    MCAPI static enum ActorDamageCause buffTypeToDamageCause(enum AttributeBuffType);

//protected:
    /**
     * @symbol ??0AttributeBuff@@IEAA@MHW4AttributeBuffType@@@Z
     */
    MCAPI AttributeBuff(float, int, enum AttributeBuffType);

protected:

};