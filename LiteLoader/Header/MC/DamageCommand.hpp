/**
 * @file  DamageCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DamageCommand.
 *
 */
class DamageCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGECOMMAND
public:
    class DamageCommand& operator=(class DamageCommand const &) = delete;
    DamageCommand(class DamageCommand const &) = delete;
    DamageCommand() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~DamageCommand();
    /**
     * @vtable 1
     * @symbol ?execute@DamageCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DAMAGECOMMAND
#endif
    /**
     * @symbol ?setup@DamageCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_applyDamage@DamageCommand@@AEBAXAEAV?$CommandSelectorResults@VActor@@@@AEBVActorDamageSource@@AEAVCommandOutput@@@Z
     */
    MCAPI void _applyDamage(class CommandSelectorResults<class Actor> &, class ActorDamageSource const &, class CommandOutput &) const;

private:

};