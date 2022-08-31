/**
 * @file  LessonProgressPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LessonProgressPacket.
 *
 */
class LessonProgressPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LESSONPROGRESSPACKET
public:
    class LessonProgressPacket& operator=(class LessonProgressPacket const &) = delete;
    LessonProgressPacket(class LessonProgressPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~LessonProgressPacket();
    /**
     * @vtable 1
     * @symbol ?getId@LessonProgressPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@LessonProgressPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@LessonProgressPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@LessonProgressPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LESSONPROGRESSPACKET
#endif
    /**
     * @symbol ??0LessonProgressPacket@@QEAA@XZ
     */
    MCAPI LessonProgressPacket();
    /**
     * @symbol ??0LessonProgressPacket@@QEAA@W4LessonAction@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI LessonProgressPacket(enum LessonAction, int, std::string const &);

};