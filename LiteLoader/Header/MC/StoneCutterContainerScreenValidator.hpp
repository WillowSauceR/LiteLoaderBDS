/**
 * @file  StoneCutterContainerScreenValidator.hpp
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
 * @brief MC class StoneCutterContainerScreenValidator.
 *
 */
class StoneCutterContainerScreenValidator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STONECUTTERCONTAINERSCREENVALIDATOR
public:
    class StoneCutterContainerScreenValidator& operator=(class StoneCutterContainerScreenValidator const &) = delete;
    StoneCutterContainerScreenValidator(class StoneCutterContainerScreenValidator const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~StoneCutterContainerScreenValidator();
    /**
     * @vtable 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vtable 2
     * @symbol ?isCraftingImplemented@StoneCutterContainerScreenValidator@@UEAA_NXZ
     */
    virtual bool isCraftingImplemented();
    /**
     * @vtable 3
     * @symbol ?getCraftResult@StoneCutterContainerScreenValidator@@UEAA?AUContainerValidationCraftResult@@AEBVContainerScreenContext@@AEAVContainerScreenValidation@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
     */
    virtual struct ContainerValidationCraftResult getCraftResult(class ContainerScreenContext const &, class ContainerScreenValidation &, std::unique_ptr<struct ContainerValidationCraftInputs>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STONECUTTERCONTAINERSCREENVALIDATOR
#endif
    /**
     * @symbol ??0StoneCutterContainerScreenValidator@@QEAA@XZ
     */
    MCAPI StoneCutterContainerScreenValidator();

};