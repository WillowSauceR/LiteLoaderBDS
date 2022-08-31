/**
 * @file  SaveSurroundingChunksSystem.hpp
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
 * @brief MC class SaveSurroundingChunksSystem.
 *
 */
class SaveSurroundingChunksSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVESURROUNDINGCHUNKSSYSTEM
public:
    class SaveSurroundingChunksSystem& operator=(class SaveSurroundingChunksSystem const &) = delete;
    SaveSurroundingChunksSystem(class SaveSurroundingChunksSystem const &) = delete;
    SaveSurroundingChunksSystem() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~SaveSurroundingChunksSystem();
    /**
     * @vtable 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vtable 2
     * @symbol ?tick@SaveSurroundingChunksSystem@@UEAAXAEAVEntityRegistry@@@Z
     */
    virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SAVESURROUNDINGCHUNKSSYSTEM
#endif

//private:
    /**
     * @symbol ?_tickSaveSurroundingChunks@SaveSurroundingChunksSystem@@CAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UActorFlag@@@@V?$FlagComponent@USaveSurroundingChunksFlag@@@@@@@Z
     */
    MCAPI static void _tickSaveSurroundingChunks(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class FlagComponent<struct SaveSurroundingChunksFlag>> &);

private:

};