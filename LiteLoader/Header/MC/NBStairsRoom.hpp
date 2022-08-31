/**
 * @file  NBStairsRoom.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NBStairsRoom.
 *
 */
class NBStairsRoom : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBSTAIRSROOM
public:
    class NBStairsRoom& operator=(class NBStairsRoom const &) = delete;
    NBStairsRoom(class NBStairsRoom const &) = delete;
    NBStairsRoom() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~NBStairsRoom();
    /**
     * @vtable 2
     * @symbol ?getType@NBStairsRoom@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @vtable 3
     * @symbol ?addChildren@NBStairsRoom@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @vtable 4
     * @symbol ?postProcess@NBStairsRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBSTAIRSROOM
#endif

};