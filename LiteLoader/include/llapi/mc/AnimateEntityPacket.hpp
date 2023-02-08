/**
 * @file  AnimateEntityPacket.hpp
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
 * @brief MC class AnimateEntityPacket.
 *
 */
class AnimateEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATEENTITYPACKET
public:
    class AnimateEntityPacket& operator=(class AnimateEntityPacket const &) = delete;
    AnimateEntityPacket(class AnimateEntityPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AnimateEntityPacket();
    /**
     * @hash   838641970
     * @vftbl  1
     * @symbol  ?getId\@AnimateEntityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1520393249
     * @vftbl  2
     * @symbol  ?getName\@AnimateEntityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1827330472
     * @vftbl  3
     * @symbol  ?write\@AnimateEntityPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1208939912
     * @vftbl  6
     * @symbol  ?_read\@AnimateEntityPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   958707864
     * @symbol  ??0AnimateEntityPacket\@\@QEAA\@XZ
     */
    MCAPI AnimateEntityPacket();
    /**
     * @hash   -1501037108
     * @symbol  ??0AnimateEntityPacket\@\@QEAA\@AEBV?$vector\@VActorRuntimeID\@\@V?$allocator\@VActorRuntimeID\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@1M1W4MolangVersion\@\@1\@Z
     */
    MCAPI AnimateEntityPacket(std::vector<class ActorRuntimeID> const &, std::string const &, std::string const &, float, std::string const &, enum class MolangVersion, std::string const &);

};