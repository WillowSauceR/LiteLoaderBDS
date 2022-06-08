// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AdventureSettingsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADVENTURESETTINGSPACKET
public:
    class AdventureSettingsPacket& operator=(class AdventureSettingsPacket const &) = delete;
    AdventureSettingsPacket(class AdventureSettingsPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~AdventureSettingsPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*5*/ virtual bool disallowBatching() const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    MCAPI AdventureSettingsPacket(struct AdventureSettings const &, class Abilities const &, struct ActorUniqueID, bool);
    MCAPI AdventureSettingsPacket();
    MCAPI void fillIn(struct AdventureSettings &, class Abilities &) const;
    MCAPI bool isSet(enum AdventureSettingsPacket::Flags) const;
    MCAPI bool isSetPermissions(unsigned int const &, enum AdventureSettingsPacket::PermissionsFlags) const;

protected:

private:

};