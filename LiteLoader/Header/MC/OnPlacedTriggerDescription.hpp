/**
 * @file  OnPlacedTriggerDescription.hpp
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
 * @brief MC class OnPlacedTriggerDescription.
 *
 */
class OnPlacedTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONPLACEDTRIGGERDESCRIPTION
public:
    class OnPlacedTriggerDescription& operator=(class OnPlacedTriggerDescription const &) = delete;
    OnPlacedTriggerDescription(class OnPlacedTriggerDescription const &) = delete;
    OnPlacedTriggerDescription() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~OnPlacedTriggerDescription();
    /**
     * @vtable 1
     * @symbol ?getName@OnPlacedTriggerDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONPLACEDTRIGGERDESCRIPTION
#endif
MCAPI static std::string const NameID;

};