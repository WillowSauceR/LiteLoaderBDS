/**
 * @file  AddPaintingPacket.hpp
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
 * @brief MC class AddPaintingPacket.
 *
 */
class AddPaintingPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDPAINTINGPACKET
public:
    class AddPaintingPacket& operator=(class AddPaintingPacket const &) = delete;
    AddPaintingPacket(class AddPaintingPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -698898245
     */
    virtual ~AddPaintingPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@AddPaintingPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -697274767
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@AddPaintingPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   762005790
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@AddPaintingPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1806086281
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@AddPaintingPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -413043831
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0AddPaintingPacket@@QEAA@XZ
     * @hash   763415385
     */
    MCAPI AddPaintingPacket();
    /**
     * @symbol ??0AddPaintingPacket@@QEAA@AEBVPainting@@@Z
     * @hash   -2084533402
     */
    MCAPI AddPaintingPacket(class Painting const &);

};