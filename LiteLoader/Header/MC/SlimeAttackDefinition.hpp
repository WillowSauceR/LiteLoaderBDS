// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SlimeAttackDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SlimeAttackDefinition {
#include "Extra/SlimeAttackDefinitionAPI.hpp"
public:
    virtual ~SlimeAttackDefinition();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();

public:
    MCAPI SlimeAttackDefinition();
    MCAPI void initialize(class EntityContext&, class SlimeAttackGoal&);
};