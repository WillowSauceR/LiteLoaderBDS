/**
 * @file  SubChunkPacket.hpp
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
 * @brief MC class SubChunkPacket.
 *
 */
class SubChunkPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    struct SubChunkPacketData;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKPACKET
public:
    class SubChunkPacket& operator=(class SubChunkPacket const &) = delete;
    SubChunkPacket(class SubChunkPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~SubChunkPacket();
    /**
     * @vtable 1
     * @symbol ?getId@SubChunkPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@SubChunkPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@SubChunkPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@SubChunkPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUBCHUNKPACKET
#endif
    /**
     * @symbol ??0SubChunkPacket@@QEAA@XZ
     */
    MCAPI SubChunkPacket();
    /**
     * @symbol ??0SubChunkPacket@@QEAA@AEBV?$AutomaticID@VDimension@@H@@AEBVSubChunkPos@@_N@Z
     */
    MCAPI SubChunkPacket(class AutomaticID<class Dimension, int> const &, class SubChunkPos const &, bool);

};