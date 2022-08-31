/**
 * @file  ResourceUriCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourceUriCommand.
 *
 */
class ResourceUriCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEURICOMMAND
public:
    class ResourceUriCommand& operator=(class ResourceUriCommand const &) = delete;
    ResourceUriCommand(class ResourceUriCommand const &) = delete;
    ResourceUriCommand() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~ResourceUriCommand();
    /**
     * @vtable 1
     * @symbol ?execute@ResourceUriCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEURICOMMAND
#endif
    /**
     * @symbol ?setup@ResourceUriCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_executeClear@ResourceUriCommand@@AEBAXAEAVLevel@@PEAVPlayer@@AEAVCommandOutput@@@Z
     */
    MCAPI void _executeClear(class Level &, class Player *, class CommandOutput &) const;
    /**
     * @symbol ?_executeNamed@ResourceUriCommand@@AEBAXAEAVLevel@@PEAVPlayer@@AEAVCommandOutput@@@Z
     */
    MCAPI void _executeNamed(class Level &, class Player *, class CommandOutput &) const;
    /**
     * @symbol ?_executeUriOnly@ResourceUriCommand@@AEBAXAEAVLevel@@PEAVPlayer@@AEAVCommandOutput@@@Z
     */
    MCAPI void _executeUriOnly(class Level &, class Player *, class CommandOutput &) const;

private:

};