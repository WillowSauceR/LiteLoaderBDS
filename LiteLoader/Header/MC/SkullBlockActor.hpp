// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SkullBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There
public:
enum SkullType;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKULLBLOCKACTOR
public:
    class SkullBlockActor& operator=(class SkullBlockActor const &) = delete;
    SkullBlockActor(class SkullBlockActor const &) = delete;
    SkullBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~SkullBlockActor();
    /*1*/ virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /*2*/ virtual bool save(class CompoundTag &) const;
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void tick(class BlockSource &);
    /*8*/ virtual void onChanged(class BlockSource &);
    /*11*/ virtual void onPlace(class BlockSource &);
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual bool hasAlphaLayer() const;
    /*19*/ virtual class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    /*21*/ virtual std::string const & getCustomName() const;
    /*23*/ virtual std::string getName() const;
    /*25*/ virtual std::string getImmersiveReaderText(class BlockSource &);
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /*36*/ virtual bool _playerCanUpdate(class Player const &) const;
    MCAPI SkullBlockActor(class BlockPos const &);
    MCAPI enum SkullBlockActor::SkullType getSkullType() const;
    MCAPI void setRotation(float);
    MCAPI void setSkullType(int);

protected:

private:

};