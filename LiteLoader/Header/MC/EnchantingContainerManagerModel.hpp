// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/EnchantingContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART
class EnchantingContainerManagerModel : public ContainerManagerModel {
#include "Extra/EnchantingContainerManagerModelAPI.hpp"
public:
    virtual ~EnchantingContainerManagerModel();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual std::vector<class ItemStack> getItemCopies();
    virtual void setSlot(int, class ItemStack const&, bool);
    virtual class ItemStack const& getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual bool isValid(float);
    virtual class ContainerScreenContext _postInit();

public:
    MCAPI EnchantingContainerManagerModel(enum ContainerID, class Player&, class BlockPos const&);
    MCAPI std::vector<class ItemEnchantOption> const& getEnchantOptions() const;
    MCAPI void recalculateOptions();

    MCAPI static int const NUM_OPTIONS;
};