/**
 * @file  AutomationClientConnectPacket.hpp
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
 * @brief MC class AutomationClientConnectPacket.
 *
 */
class AutomationClientConnectPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTOMATIONCLIENTCONNECTPACKET
public:
    class AutomationClientConnectPacket& operator=(class AutomationClientConnectPacket const &) = delete;
    AutomationClientConnectPacket(class AutomationClientConnectPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~AutomationClientConnectPacket();
    /**
     * @vtable 1
     * @symbol ?getId@AutomationClientConnectPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@AutomationClientConnectPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@AutomationClientConnectPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@AutomationClientConnectPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AUTOMATIONCLIENTCONNECTPACKET
#endif
    /**
     * @symbol ??0AutomationClientConnectPacket@@QEAA@XZ
     */
    MCAPI AutomationClientConnectPacket();
    /**
     * @symbol ??0AutomationClientConnectPacket@@QEAA@UWebSocketPacketData@@@Z
     */
    MCAPI AutomationClientConnectPacket(struct WebSocketPacketData);

};