/**
 * @file  DifficultyCommand.hpp
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
 * @brief MC class DifficultyCommand.
 *
 */
class DifficultyCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIFFICULTYCOMMAND
public:
    class DifficultyCommand& operator=(class DifficultyCommand const &) = delete;
    DifficultyCommand(class DifficultyCommand const &) = delete;
    DifficultyCommand() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~DifficultyCommand();
    /**
     * @vtable 1
     * @symbol ?execute@DifficultyCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIFFICULTYCOMMAND
#endif
    /**
     * @symbol ?setup@DifficultyCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};