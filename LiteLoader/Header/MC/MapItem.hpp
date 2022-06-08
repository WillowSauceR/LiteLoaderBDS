// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "MapItemSavedData.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MapItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPITEM
public:
    class MapItem& operator=(class MapItem const &) = delete;
    MapItem(class MapItem const &) = delete;
    MapItem() = delete;
#endif

public:
    /*0*/ virtual ~MapItem();
    /*2*/ virtual void tearDown();
    /*3*/ virtual int getMaxUseDuration(class ItemInstance const *) const;
    /*4*/ virtual int getMaxUseDuration(class ItemStack const *) const;
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual bool isArmor() const;
    /*9*/ virtual bool isBlockPlanterItem() const;
    /*10*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_12();
    /*14*/ virtual bool isDyeable() const;
    /*15*/ virtual bool isDye() const;
    /*16*/ virtual enum ItemColor getItemColor() const;
    /*17*/ virtual bool isFertilizer() const;
    /*18*/ virtual bool isFood() const;
    /*19*/ virtual bool isThrowable() const;
    /*20*/ virtual bool isUseable() const;
    /*21*/ virtual class ItemComponent * getComponent(class HashedString const &) const;
    /*24*/ virtual class FuelItemComponent const * getFuel() const;
    /*38*/ virtual enum BlockShape getBlockShape() const;
    /*40*/ virtual bool canDestroySpecial(class Block const &) const;
    /*41*/ virtual int getLevelDataForAuxValue(int) const;
    /*43*/ virtual short getMaxDamage() const;
    /*44*/ virtual int getAttackDamage() const;
    /*46*/ virtual bool isGlint(class ItemStackBase const &) const;
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual int getPatternIndex() const;
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual bool isWearableThroughLootTable(class CompoundTag const *) const;
    /*51*/ virtual bool canDestroyInCreative() const;
    /*52*/ virtual bool isDestructive(int) const;
    /*53*/ virtual bool isLiquidClipItem(int) const;
    /*54*/ virtual bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /*55*/ virtual bool requiresInteract() const;
    /*56*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*57*/ virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &, class BaseGameVersion const &) const;
    /*58*/ virtual int getEnchantSlot() const;
    /*59*/ virtual int getEnchantValue() const;
    /*60*/ virtual int getArmorValue() const;
    /*61*/ virtual int getToughnessValue() const;
    /*62*/ virtual void __unk_vfn_62();
    /*63*/ virtual bool isValidAuxValue(int) const;
    /*65*/ virtual float getViewDamping() const;
    /*66*/ virtual void __unk_vfn_66();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*69*/ virtual class mce::Color getColor(class CompoundTag const *, class ItemDescriptor const &) const;
    /*70*/ virtual bool hasCustomColor(class CompoundTag const *) const;
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void clearColor(class ItemStackBase &) const;
    /*73*/ virtual void clearColor(class CompoundTag *) const;
    /*74*/ virtual void setColor(class ItemStackBase &, class mce::Color const &) const;
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*79*/ virtual bool canUseOnSimTick() const;
    /*84*/ virtual float getDestroySpeed(class ItemStackBase const &, class Block const &) const;
    /*86*/ virtual void hitActor(class ItemStack &, class Actor &, class Mob &) const;
    /*87*/ virtual void hitBlock(class ItemStack &, class Block const &, class BlockPos const &, class Mob &) const;
    /*88*/ virtual bool mineBlock(class ItemInstance &, class Block const &, int, int, int, class Actor *) const;
    /*89*/ virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /*90*/ virtual std::string buildDescriptionName(class ItemStackBase const &) const;
    /*91*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*96*/ virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /*97*/ virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /*98*/ virtual void refreshedInContainer(class ItemStackBase const &, class Level &) const;
    /*102*/ virtual void fixupCommon(class ItemStackBase &, class Level &) const;
    /*105*/ virtual void __unk_vfn_105();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual bool validFishInteraction(int) const;
    /*108*/ virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /*110*/ virtual std::string getInteractText(class Player const &) const;
    /*111*/ virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /*113*/ virtual struct Brightness getLightEmission(int) const;
    /*114*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*115*/ virtual int getIconYOffset() const;
    /*116*/ virtual class Item & setIcon(std::string const &, int);
    /*119*/ virtual bool canBeCharged() const;
    /*120*/ virtual void playSoundIncrementally(class ItemInstance const &, class Mob &) const;
    /*121*/ virtual void playSoundIncrementally(class ItemStack const &, class Mob &) const;
    /*124*/ virtual std::string getAuxValuesDescription() const;
    /*126*/ virtual bool _calculatePlacePos(class ItemStackBase &, class Actor &, unsigned char &, class BlockPos &) const;
    /*128*/ virtual std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
    MCAPI MapItem(std::string const &, short);
    MCAPI void blockTick(class ItemStack &, class BlockSource &, class BlockPos const &) const;
    MCAPI void update(class Level &, class Actor &, class MapItemSavedData &) const;
    MCAPI static std::string const TAG_MAP_INIT;
    MCAPI static std::string const TAG_MAP_NAME_INDEX;
    MCAPI static std::string const TAG_MAP_PLAYER_DISPLAY;
    MCAPI static std::string const TAG_MAP_REGENERATE;
    MCAPI static std::string const TAG_MAP_SCALE;
    MCAPI static std::string const TAG_MAP_SCALING;
    MCAPI static std::string const TAG_MAP_UUID;
    MCAPI static bool doesDisplayPlayerMarkers(class ItemStack const &);
    MCAPI static struct ActorUniqueID getMapId(class CompoundTag const *);
    MCAPI static void markForRegeneration(class ItemInstance &);
    MCAPI static void renderBiomePreviewMap(class Dimension &, class MapItemSavedData &);
    MCAPI static void sampleMapData(class BlockSource &, int, class BlockPos const &, class BlockPos const &, int, int, std::vector<struct MapSample> *, class MapItemSavedData *, class MapItemTrackedActor *);
    MCAPI static void serializeMapData(std::vector<struct MapSample> const &, std::string &);
    MCAPI static void setItemInstanceInfo(class ItemInstance &, class MapItemSavedData &);
    MCAPI static void setItemInstanceInfo(class ItemStack &, class MapItemSavedData &);
    MCAPI static void setMapNameIndex(class ItemStack &, int);

protected:

private:
    MCAPI void _makeNewExplorationMap(class ItemStack &, class Level &, class Actor *, std::string &) const;
    MCAPI static void _scheduleMapChunkRendering(class Dimension &, class MapItemSavedData const &, struct MapItemSavedData::ChunkBounds, class std::shared_ptr<bool>);

};