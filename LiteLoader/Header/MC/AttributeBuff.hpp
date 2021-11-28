// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/AttributeBuffAPI.hpp"
#undef EXTRA_INCLUDE_PART
class AttributeBuff {
#include "Extra/AttributeBuffAPI.hpp"
public:
    virtual ~AttributeBuff();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);

public:
    MCAPI float getAmount() const;
    MCAPI unsigned __int64 getId() const;
    MCAPI int getOperand() const;
    MCAPI enum AttributeBuffType getType() const;
    MCAPI void setAmplificationAmount(int, float);
    MCAPI void setId(unsigned __int64);
    MCAPI void setOperand(int);
    MCAPI void setSource(class Actor*);
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>);

    MCAPI static enum ActorDamageCause buffTypeToDamageCause(enum AttributeBuffType);
};