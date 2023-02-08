/**
 * @file  NameableDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NameableDefinition.
 *
 */
class NameableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAMEABLEDEFINITION
public:
    class NameableDefinition& operator=(class NameableDefinition const &) = delete;
    NameableDefinition(class NameableDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -1025181644
     * @symbol  ??0NameableDefinition\@\@QEAA\@XZ
     */
    MCAPI NameableDefinition();
    /**
     * @hash   -1052763616
     * @symbol  ?addNameAction\@NameableDefinition\@\@QEAAXAEBUNameAction\@\@\@Z
     */
    MCAPI void addNameAction(struct NameAction const &);
    /**
     * @hash   1699358515
     * @symbol  ?initialize\@NameableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVNameableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class NameableComponent &) const;
    /**
     * @hash   -662519694
     * @symbol  ??1NameableDefinition\@\@QEAA\@XZ
     */
    MCAPI ~NameableDefinition();
    /**
     * @hash   -1429309386
     * @symbol  ?buildSchema\@NameableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VNameableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NameableDefinition>> &);

};