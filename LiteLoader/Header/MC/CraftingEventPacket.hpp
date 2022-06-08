// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "NetworkItemStackDescriptor.hpp"
#include "Block.hpp"
static_assert(sizeof(NetworkItemStackDescriptor) == 152);

#undef BEFORE_EXTRA

class CraftingEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    unsigned char screenID;//48
    unsigned int craftingType;//52
    mce::UUID recipeUUID;//56
    std::vector<NetworkItemStackDescriptor> inputItems;//72
    std::vector<NetworkItemStackDescriptor> outputItems;//96

    inline std::string toDebugString() {
        auto str = fmt::format("{}: screenID: {}, craftingType: {}, recipeUUID: {}, input: [",
            __super::toDebugString(), (int)screenID, craftingType, recipeUUID.asString());
        bool first = true;
        for (auto& item : inputItems) {
            str += fmt::format("{}{}", first ? "" : ", ", item.mDescriptor.getFullName());
            first = false;
        }
        str += "], output: [";
        first = true;
        for (auto& item : outputItems) {
            str += fmt::format("{}{}", first ? "" : ", ", item.mDescriptor.getRawNameId());
            first = false;
        }
        str += "]";
        return str;
    }

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTINGEVENTPACKET
public:
    class CraftingEventPacket& operator=(class CraftingEventPacket const &) = delete;
    CraftingEventPacket(class CraftingEventPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~CraftingEventPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*5*/ virtual bool disallowBatching() const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    MCAPI CraftingEventPacket();

protected:

private:

};