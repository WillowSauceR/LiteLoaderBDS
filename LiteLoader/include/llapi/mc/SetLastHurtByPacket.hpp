/**
 * @file  SetLastHurtByPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetLastHurtByPacket.
 *
 */
class SetLastHurtByPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETLASTHURTBYPACKET
public:
    class SetLastHurtByPacket& operator=(class SetLastHurtByPacket const &) = delete;
    SetLastHurtByPacket(class SetLastHurtByPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SetLastHurtByPacket();
    /**
     * @hash   1161821336
     * @vftbl  1
     * @symbol  ?getId\@SetLastHurtByPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1294448453
     * @vftbl  2
     * @symbol  ?getName\@SetLastHurtByPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1410149042
     * @vftbl  3
     * @symbol  ?write\@SetLastHurtByPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   306745794
     * @vftbl  6
     * @symbol  ?_read\@SetLastHurtByPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1953800270
     * @symbol  ??0SetLastHurtByPacket\@\@QEAA\@XZ
     */
    MCAPI SetLastHurtByPacket();
    /**
     * @hash   1975033947
     * @symbol  ??0SetLastHurtByPacket\@\@QEAA\@W4ActorType\@\@\@Z
     */
    MCAPI SetLastHurtByPacket(enum class ActorType);

};