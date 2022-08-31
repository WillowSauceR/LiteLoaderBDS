/**
 * @file  ClientToServerHandshakePacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientToServerHandshakePacket.
 *
 */
class ClientToServerHandshakePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTTOSERVERHANDSHAKEPACKET
public:
    class ClientToServerHandshakePacket& operator=(class ClientToServerHandshakePacket const &) = delete;
    ClientToServerHandshakePacket(class ClientToServerHandshakePacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~ClientToServerHandshakePacket();
    /**
     * @vtable 1
     * @symbol ?getId@ClientToServerHandshakePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@ClientToServerHandshakePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@ClientToServerHandshakePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@ClientToServerHandshakePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLIENTTOSERVERHANDSHAKEPACKET
#endif
    /**
     * @symbol ??0ClientToServerHandshakePacket@@QEAA@XZ
     */
    MCAPI ClientToServerHandshakePacket();

};