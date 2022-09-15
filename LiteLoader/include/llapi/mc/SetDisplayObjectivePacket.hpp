/**
 * @file  SetDisplayObjectivePacket.hpp
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
 * @brief MC class SetDisplayObjectivePacket.
 *
 */
class SetDisplayObjectivePacket : public Packet {

#define AFTER_EXTRA
// Add Member There
    char filler[136];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETDISPLAYOBJECTIVEPACKET
public:
    class SetDisplayObjectivePacket& operator=(class SetDisplayObjectivePacket const &) = delete;
    SetDisplayObjectivePacket(class SetDisplayObjectivePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2085867953
     */
    virtual ~SetDisplayObjectivePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@SetDisplayObjectivePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -2036103043
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@SetDisplayObjectivePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   254762
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@SetDisplayObjectivePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   558456125
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@SetDisplayObjectivePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1410792323
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0SetDisplayObjectivePacket@@QEAA@XZ
     * @hash   -290040579
     */
    MCAPI SetDisplayObjectivePacket();
    /**
     * @symbol ??0SetDisplayObjectivePacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000W4ObjectiveSortOrder@@@Z
     * @hash   -824688895
     */
    MCAPI SetDisplayObjectivePacket(std::string const &, std::string const &, std::string const &, std::string const &, enum ObjectiveSortOrder);

};