// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class Feature {
public:
    virtual ~Feature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&);
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

protected:
    MCAPI bool _placeBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    MCAPI void _setManuallyPlaced(class Actor*);
};