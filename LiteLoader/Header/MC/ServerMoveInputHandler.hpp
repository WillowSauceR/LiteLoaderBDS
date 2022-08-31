/**
 * @file  ServerMoveInputHandler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveInputHandler.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerMoveInputHandler.
 *
 */
class ServerMoveInputHandler : public MoveInputHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERMOVEINPUTHANDLER
public:
    class ServerMoveInputHandler& operator=(class ServerMoveInputHandler const &) = delete;
    ServerMoveInputHandler(class ServerMoveInputHandler const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~ServerMoveInputHandler();
    /**
     * @vtable 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vtable 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERMOVEINPUTHANDLER
    /**
     * @vtable -1
     * @symbol ?registerInputHandlers@ServerMoveInputHandler@@UEAAXAEAVInputHandler@@@Z
     */
    MCVAPI void registerInputHandlers(class InputHandler &);
#endif
    /**
     * @symbol ??0ServerMoveInputHandler@@QEAA@XZ
     */
    MCAPI ServerMoveInputHandler();
    /**
     * @symbol ?digestPlayerInputPacket@ServerMoveInputHandler@@QEAAXAEBVPlayerAuthInputPacket@@@Z
     */
    MCAPI void digestPlayerInputPacket(class PlayerAuthInputPacket const &);

};