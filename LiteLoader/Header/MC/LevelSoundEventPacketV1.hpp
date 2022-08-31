/**
 * @file  LevelSoundEventPacketV1.hpp
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
 * @brief MC class LevelSoundEventPacketV1.
 *
 */
class LevelSoundEventPacketV1 : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSOUNDEVENTPACKETV1
public:
    class LevelSoundEventPacketV1& operator=(class LevelSoundEventPacketV1 const &) = delete;
    LevelSoundEventPacketV1(class LevelSoundEventPacketV1 const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~LevelSoundEventPacketV1();
    /**
     * @vtable 1
     * @symbol ?getId@LevelSoundEventPacketV1@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@LevelSoundEventPacketV1@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@LevelSoundEventPacketV1@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@LevelSoundEventPacketV1@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELSOUNDEVENTPACKETV1
#endif
    /**
     * @symbol ??0LevelSoundEventPacketV1@@QEAA@XZ
     */
    MCAPI LevelSoundEventPacketV1();

};