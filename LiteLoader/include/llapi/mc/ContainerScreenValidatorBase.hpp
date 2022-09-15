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
     * @vftbl  0
     * @hash   387982656
     */
    virtual ~ContainerScreenValidatorBase();
    /**
     * @vftbl  1
     * @symbol ?postCommitItemRemoved@ContainerScreenValidatorBase@@UEAA?AV?$shared_ptr@VContainerValidationCommitObject@@@std@@W4ContainerEnumName@@HAEBVItemStack@@@Z
     * @hash   -1836202123
     */
    virtual class std::shared_ptr<class ContainerValidationCommitObject> postCommitItemRemoved(enum ContainerEnumName, int, class ItemStack const &);
    /**
     * @vftbl  2
     * @symbol ?isCraftingImplemented@ContainerScreenValidatorBase@@UEAA_NXZ
     * @hash   -975604999
     */
    virtual bool isCraftingImplemented();
    /**
     * @vftbl  3
     * @symbol ?getCraftResult@ContainerScreenValidatorBase@@UEAA?AUContainerValidationCraftResult@@AEBVContainerScreenContext@@AEAVContainerScreenValidation@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
     * @hash   -1988263019
     */
    virtual struct ContainerValidationCraftResult getCraftResult(class ContainerScreenContext const &, class ContainerScreenValidation &, std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @symbol ?isValidContainerForScreen@ContainerScreenValidatorBase@@QEBA_NW4ContainerEnumName@@@Z
     * @hash   662933023
     */
    MCAPI bool isValidContainerForScreen(enum ContainerEnumName) const;

};