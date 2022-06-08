// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerScreenValidatorBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EnchantingContainerScreenValidator : public ContainerScreenValidatorBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTINGCONTAINERSCREENVALIDATOR
public:
    class EnchantingContainerScreenValidator& operator=(class EnchantingContainerScreenValidator const &) = delete;
    EnchantingContainerScreenValidator(class EnchantingContainerScreenValidator const &) = delete;
#endif

public:
    /*0*/ virtual ~EnchantingContainerScreenValidator();
    /*1*/ virtual class std::shared_ptr<class ContainerValidationCommitObject> postCommitItemRemoved(enum ContainerEnumName, int, class ItemStack const &);
    /*2*/ virtual bool isCraftingImplemented();
    MCAPI EnchantingContainerScreenValidator();

protected:

private:

};