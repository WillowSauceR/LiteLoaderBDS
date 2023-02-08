/**
 * @file  StructureBlockUpdatePacket.hpp
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
 * @brief MC class StructureBlockUpdatePacket.
 *
 */
class StructureBlockUpdatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREBLOCKUPDATEPACKET
public:
    class StructureBlockUpdatePacket& operator=(class StructureBlockUpdatePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StructureBlockUpdatePacket();
    /**
     * @hash   -2001170429
     * @vftbl  1
     * @symbol  ?getId\@StructureBlockUpdatePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1790312784
     * @vftbl  2
     * @symbol  ?getName\@StructureBlockUpdatePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1156655975
     * @vftbl  3
     * @symbol  ?write\@StructureBlockUpdatePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   752377143
     * @vftbl  6
     * @symbol  ?_read\@StructureBlockUpdatePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -889538025
     * @symbol  ??0StructureBlockUpdatePacket\@\@QEAA\@XZ
     */
    MCAPI StructureBlockUpdatePacket();
    /**
     * @hash   -920064719
     * @symbol  ??0StructureBlockUpdatePacket\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI StructureBlockUpdatePacket(class StructureBlockUpdatePacket const &);

};