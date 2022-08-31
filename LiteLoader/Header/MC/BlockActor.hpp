/**
 * @file  BlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class Block;
class Container;
class CompoundTag;
class BlockSource;

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockActor.
 *
 */
class BlockActor {

#define AFTER_EXTRA
    // Add new members to class
public:
    LIAPI bool refreshData();
    LIAPI bool refreshData(BlockSource* bs);
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    LIAPI bool setNbt(CompoundTag* nbt, BlockSource* bs);
    static unsigned int getBlockEntityType(Block* block);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKACTOR
public:
    class BlockActor& operator=(class BlockActor const &) = delete;
    BlockActor(class BlockActor const &) = delete;
    BlockActor() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockActor();
    /**
     * @vtable 1
     * @symbol ?load@BlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vtable 2
     * @symbol ?save@BlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vtable 3
     * @symbol ?saveItemInstanceData@BlockActor@@UEAA_NAEAVCompoundTag@@@Z
     */
    virtual bool saveItemInstanceData(class CompoundTag &);
    /**
     * @vtable 4
     * @symbol ?saveBlockData@BlockActor@@UEBAXAEAVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void saveBlockData(class CompoundTag &, class BlockSource &) const;
    /**
     * @vtable 5
     * @symbol ?loadBlockData@BlockActor@@UEAAXAEBVCompoundTag@@AEAVBlockSource@@AEAVDataLoadHelper@@@Z
     */
    virtual void loadBlockData(class CompoundTag const &, class BlockSource &, class DataLoadHelper &);
    /**
     * @vtable 6
     * @symbol ?onCustomTagLoadDone@BlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onCustomTagLoadDone(class BlockSource &);
    /**
     * @vtable 7
     * @symbol ?tick@BlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vtable 8
     * @symbol ?onChanged@BlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vtable 9
     * @symbol ?isMovable@BlockActor@@UEAA_NAEAVBlockSource@@@Z
     */
    virtual bool isMovable(class BlockSource &);
    /**
     * @vtable 10
     * @symbol ?isCustomNameSaved@BlockActor@@UEAA_NXZ
     */
    virtual bool isCustomNameSaved();
    /**
     * @vtable 11
     * @symbol ?onPlace@BlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onPlace(class BlockSource &);
    /**
     * @vtable 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vtable 13
     * @symbol ?onRemoved@BlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onRemoved(class BlockSource &);
    /**
     * @vtable 14
     * @symbol ?triggerEvent@BlockActor@@UEAAXHH@Z
     */
    virtual void triggerEvent(int, int);
    /**
     * @vtable 15
     * @symbol ?clearCache@BlockActor@@UEAAXXZ
     */
    virtual void clearCache();
    /**
     * @vtable 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vtable 17
     * @symbol ?getShadowRadius@BlockActor@@UEBAMAEAVBlockSource@@@Z
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @vtable 18
     * @symbol ?hasAlphaLayer@BlockActor@@UEBA_NXZ
     */
    virtual bool hasAlphaLayer() const;
    /**
     * @vtable 19
     * @symbol ?getCrackEntity@BlockActor@@UEAAPEAV1@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    /**
     * @vtable 20
     * @symbol ?getDebugText@BlockActor@@UEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVBlockPos@@@Z
     */
    virtual void getDebugText(std::vector<std::string> &, class BlockPos const &);
    /**
     * @vtable 21
     * @symbol ?getCustomName@BlockActor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getCustomName() const;
    /**
     * @vtable 22
     * @symbol ?getFilteredCustomName@BlockActor@@UEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUIProfanityContext@@@Z
     */
    virtual std::string const & getFilteredCustomName(class UIProfanityContext const &);
    /**
     * @vtable 23
     * @symbol ?getName@BlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @vtable 24
     * @symbol ?setCustomName@BlockActor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void setCustomName(std::string const &);
    /**
     * @vtable 25
     * @symbol ?getImmersiveReaderText@BlockActor@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
     */
    virtual std::string getImmersiveReaderText(class BlockSource &);
    /**
     * @vtable 26
     * @symbol ?getRepairCost@BlockActor@@UEBAHXZ
     */
    virtual int getRepairCost() const;
    /**
     * @vtable 27
     * @symbol ?getOwningPiston@BlockActor@@UEAAPEAVPistonBlockActor@@AEAVBlockSource@@@Z
     */
    virtual class PistonBlockActor * getOwningPiston(class BlockSource &);
    /**
     * @vtable 28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vtable 29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vtable 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vtable 31
     * @symbol ?getDeletionDelayTimeSeconds@BlockActor@@UEBAMXZ
     */
    virtual float getDeletionDelayTimeSeconds() const;
    /**
     * @vtable 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vtable 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vtable 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vtable 35
     * @symbol ?_getUpdatePacket@BlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vtable 36
     * @symbol ?_onUpdatePacket@BlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @vtable 37
     * @symbol ?_playerCanUpdate@BlockActor@@MEBA_NAEBVPlayer@@@Z
     */
    virtual bool _playerCanUpdate(class Player const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKACTOR
    /**
     * @vtable -1
     * @symbol ?eraseLootTable@BlockActor@@UEAAXXZ
     */
    MCVAPI void eraseLootTable();
    /**
     * @vtable -1
     * @symbol ?fixupOnLoad@BlockActor@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void fixupOnLoad(class LevelChunk &);
    /**
     * @vtable -1
     * @symbol ?getContainer@BlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @vtable -1
     * @symbol ?getContainer@BlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @vtable -1
     * @symbol ?onChunkLoaded@BlockActor@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkLoaded(class LevelChunk &);
    /**
     * @vtable -1
     * @symbol ?onChunkUnloaded@BlockActor@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkUnloaded(class LevelChunk &);
    /**
     * @vtable -1
     * @symbol ?onMove@BlockActor@@UEAAXXZ
     */
    MCVAPI void onMove();
    /**
     * @vtable -1
     * @symbol ?onNeighborChanged@BlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
#endif
    /**
     * @symbol ??0BlockActor@@QEAA@W4BlockActorType@@AEBVBlockPos@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI BlockActor(enum BlockActorType, class BlockPos const &, std::string const &);
    /**
     * @symbol ?assignBlockIfNotAssigned@BlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void assignBlockIfNotAssigned(class BlockSource &);
    /**
     * @symbol ?getAABB@BlockActor@@QEBAAEBVAABB@@XZ
     */
    MCAPI class AABB const & getAABB() const;
    /**
     * @symbol ?getBlock@BlockActor@@QEBAPEBVBlock@@XZ
     */
    MCAPI class Block const * getBlock() const;
    /**
     * @symbol ?getPosition@BlockActor@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @symbol ?getServerUpdatePacket@BlockActor@@QEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCAPI std::unique_ptr<class BlockActorDataPacket> getServerUpdatePacket(class BlockSource &);
    /**
     * @symbol ?getType@BlockActor@@QEBAAEBW4BlockActorType@@XZ
     */
    MCAPI enum BlockActorType const & getType() const;
    /**
     * @symbol ?ignoreLighting@BlockActor@@QEBA?B_NXZ
     */
    MCAPI bool const ignoreLighting() const;
    /**
     * @symbol ?isType@BlockActor@@QEBA_NW4BlockActorType@@@Z
     */
    MCAPI bool isType(enum BlockActorType) const;
    /**
     * @symbol ?moveTo@BlockActor@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void moveTo(class BlockPos const &);
    /**
     * @symbol ?onUpdatePacket@BlockActor@@QEAA_NAEBVCompoundTag@@AEAVBlockSource@@PEBVPlayer@@@Z
     */
    MCAPI bool onUpdatePacket(class CompoundTag const &, class BlockSource &, class Player const *);
    /**
     * @symbol ?setBB@BlockActor@@QEAAXVAABB@@@Z
     */
    MCAPI void setBB(class AABB);
    /**
     * @symbol ?setChanged@BlockActor@@QEAAXXZ
     */
    MCAPI void setChanged();
    /**
     * @symbol ?setCustomNameSaved@BlockActor@@QEAAX_N@Z
     */
    MCAPI void setCustomNameSaved(bool);
    /**
     * @symbol ?setIgnoreLighting@BlockActor@@QEAAX_N@Z
     */
    MCAPI void setIgnoreLighting(bool);
    /**
     * @symbol ?setMovable@BlockActor@@QEAAX_N@Z
     */
    MCAPI void setMovable(bool);
    /**
     * @symbol ?isType@BlockActor@@SA_NAEAV1@W4BlockActorType@@@Z
     */
    MCAPI static bool isType(class BlockActor &, enum BlockActorType);
    /**
     * @symbol ?loadStatic@BlockActor@@SA?AV?$shared_ptr@VBlockActor@@@std@@AEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI static class std::shared_ptr<class BlockActor> loadStatic(class Level &, class CompoundTag const &, class DataLoadHelper &);

//protected:
    /**
     * @symbol ?_resetAABB@BlockActor@@IEAAXXZ
     */
    MCAPI void _resetAABB();

//private:
    /**
     * @symbol ?_createIdClassMap@BlockActor@@CA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorType@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorType@@@std@@@2@@std@@XZ
     */
    MCAPI static class std::map<std::string, enum BlockActorType, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, enum BlockActorType>>> _createIdClassMap();

protected:

private:
MCAPI static class std::map<enum BlockActorType, std::string, struct std::less<enum BlockActorType>, class std::allocator<struct std::pair<enum BlockActorType const, std::string>>> const mClassIdMap;
MCAPI static class std::map<std::string, enum BlockActorType, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, enum BlockActorType>>> const mIdClassMap;

};