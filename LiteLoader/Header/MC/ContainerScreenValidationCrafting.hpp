/**
 * @file  ContainerScreenValidationCrafting.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerScreenValidationCrafting.
 *
 */
class ContainerScreenValidationCrafting {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSCREENVALIDATIONCRAFTING
public:
    class ContainerScreenValidationCrafting& operator=(class ContainerScreenValidationCrafting const &) = delete;
    ContainerScreenValidationCrafting(class ContainerScreenValidationCrafting const &) = delete;
    ContainerScreenValidationCrafting() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~ContainerScreenValidationCrafting();
    /**
     * @vtable 1
     * @symbol ?tryCraft@ContainerScreenValidationCrafting@@UEAA?AUContainerValidationResult@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
     */
    virtual struct ContainerValidationResult tryCraft(std::unique_ptr<struct ContainerValidationCraftInputs>);
    /**
     * @vtable 2
     * @symbol ?getCraftResults@ContainerScreenValidationCrafting@@UEAA?AUContainerValidationCraftResult@@V?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@@Z
     */
    virtual struct ContainerValidationCraftResult getCraftResults(std::unique_ptr<struct ContainerValidationCraftInputs>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERSCREENVALIDATIONCRAFTING
#endif

//private:
    /**
     * @symbol ?_appendCraftResult@ContainerScreenValidationCrafting@@AEAAXAEAUContainerValidationCraftResult@@@Z
     */
    MCAPI void _appendCraftResult(struct ContainerValidationCraftResult &);

private:

};