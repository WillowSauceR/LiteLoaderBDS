/**
 * @file  MobEquipmentPacket.hpp
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
 * @brief MC class MobEquipmentPacket.
 *
 */
class MobEquipmentPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEQUIPMENTPACKET
public:
    class MobEquipmentPacket& operator=(class MobEquipmentPacket const &) = delete;
    MobEquipmentPacket(class MobEquipmentPacket const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~MobEquipmentPacket();
    /**
     * @vtable 1
     * @symbol ?getId@MobEquipmentPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vtable 2
     * @symbol ?getName@MobEquipmentPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 3
     * @symbol ?write@MobEquipmentPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vtable 6
     * @symbol ?_read@MobEquipmentPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEQUIPMENTPACKET
#endif
    /**
     * @symbol ??0MobEquipmentPacket@@QEAA@XZ
     */
    MCAPI MobEquipmentPacket();
    /**
     * @symbol ??0MobEquipmentPacket@@QEAA@VActorRuntimeID@@AEBVNetworkItemStackDescriptor@@HHW4ContainerID@@@Z
     */
    MCAPI MobEquipmentPacket(class ActorRuntimeID, class NetworkItemStackDescriptor const &, int, int, enum ContainerID);
    /**
     * @symbol ??0MobEquipmentPacket@@QEAA@VActorRuntimeID@@AEBVItemStack@@HHW4ContainerID@@@Z
     */
    MCAPI MobEquipmentPacket(class ActorRuntimeID, class ItemStack const &, int, int, enum ContainerID);

};