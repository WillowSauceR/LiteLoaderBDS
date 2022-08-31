/**
 * @file  BehaviorTreeDescription.hpp
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
 * @brief MC class BehaviorTreeDescription.
 *
 */
class BehaviorTreeDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORTREEDESCRIPTION
public:
    class BehaviorTreeDescription& operator=(class BehaviorTreeDescription const &) = delete;
    BehaviorTreeDescription(class BehaviorTreeDescription const &) = delete;
    BehaviorTreeDescription() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol ?getJsonName@BehaviorTreeDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vtable 1
     * @symbol __unk_destructor_1
     */
    virtual ~BehaviorTreeDescription();
    /**
     * @vtable 3
     * @symbol ?serializeData@BehaviorTreeDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEHAVIORTREEDESCRIPTION
#endif

};