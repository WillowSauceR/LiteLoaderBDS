/**
 * @file  ContainerScreenValidatorBase.hpp
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
 * @brief MC class ContainerScreenValidatorBase.
 *
 */
class ContainerScreenValidatorBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENVALIDATORBASE
public:
    class ContainerScreenValidatorBase& operator=(class ContainerScreenValidatorBase const &) = delete;
    ContainerScreenValidatorBase(class ContainerScreenValidatorBase const &) = delete;
    ContainerScreenValidatorBase() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~ContainerScreenValidatorBase();
    /**
     * @vtable 1
     * @symbol ?postCommitItemRemoved@ContainerScreenValidatorBase@@UEAA?AV?$shared_ptr@VContainerValidationCommitObject@@@std@@W4ContainerEnumName@@HAEBVItemStack@@@Z
     */
    virtual class std::shared_ptr<class ContainerValidationCommitObject> postCommitItemRemoved(enum ContainerEnumName, int, class ItemStack const &);
    /**
     * @vtable 2
     * @symbol ?isCraftingImplemented@ContainerScreenValidatorBase@@UEAA_NXZ
     */
    virtual bool isCraftingImplemented();
    /**
     * @vtable 3
     * @symbol ?getCraftResult@ContainerScreenValidatorBase@@UEAA?AUContainerValidationCraftResult@@AEBVContainerScreenContext@@AEAVContainerScreenValidation@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
     */
    virtual struct ContainerValidationCraftResult getCraftResult(class ContainerScreenContext const &, class ContainerScreenValidation &, std::unique_ptr<struct ContainerValidationCraftInputs>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERSCREENVALIDATORBASE
#endif
    /**
     * @symbol ?isValidContainerForScreen@ContainerScreenValidatorBase@@QEBA_NW4ContainerEnumName@@@Z
     */
    MCAPI bool isValidContainerForScreen(enum ContainerEnumName) const;

};