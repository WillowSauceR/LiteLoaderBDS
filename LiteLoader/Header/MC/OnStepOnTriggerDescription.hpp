/**
 * @file  OnStepOnTriggerDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnStepOnTriggerDescription.
 *
 */
class OnStepOnTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONSTEPONTRIGGERDESCRIPTION
public:
    class OnStepOnTriggerDescription& operator=(class OnStepOnTriggerDescription const &) = delete;
    OnStepOnTriggerDescription(class OnStepOnTriggerDescription const &) = delete;
    OnStepOnTriggerDescription() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~OnStepOnTriggerDescription();
    /**
     * @vtable 1
     * @symbol ?getName@OnStepOnTriggerDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONSTEPONTRIGGERDESCRIPTION
#endif
MCAPI static std::string const NameID;

};