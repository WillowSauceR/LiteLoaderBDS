/**
 * @file  OnFallOnTriggerDescription.hpp
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
 * @brief MC class OnFallOnTriggerDescription.
 *
 */
class OnFallOnTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFALLONTRIGGERDESCRIPTION
public:
    class OnFallOnTriggerDescription& operator=(class OnFallOnTriggerDescription const &) = delete;
    OnFallOnTriggerDescription(class OnFallOnTriggerDescription const &) = delete;
    OnFallOnTriggerDescription() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~OnFallOnTriggerDescription();
    /**
     * @vtable 1
     * @symbol ?getName@OnFallOnTriggerDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @vtable 2
     * @symbol ?initializeComponent@OnFallOnTriggerDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vtable 3
     * @symbol ?buildSchema@OnFallOnTriggerDescription@@UEBAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UBlockComponentGroupDescription@@@JsonUtil@@@std@@AEBVBlockComponentFactory@@@Z
     */
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONFALLONTRIGGERDESCRIPTION
#endif
MCAPI static std::string const NameID;

};