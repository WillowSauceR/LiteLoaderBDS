/**
 * @file  LootItemFunction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemFunction.
 *
 */
class LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMFUNCTION
public:
    class LootItemFunction& operator=(class LootItemFunction const &) = delete;
    LootItemFunction(class LootItemFunction const &) = delete;
    LootItemFunction() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~LootItemFunction();
    /**
     * @vtable 1
     * @symbol ?apply@SpecificEnchantFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &) = 0;
    /**
     * @vtable 2
     * @symbol ?apply@LootItemFunction@@UEAAHAEAVItemStack@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
     */
    virtual int apply(class ItemStack &, class Random &, struct Trade const &, class LootTableContext &);
    /**
     * @vtable 3
     * @symbol ?apply@SpecificEnchantFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &) = 0;
    /**
     * @vtable 4
     * @symbol ?apply@LootItemFunction@@UEAAHAEAVItemInstance@@AEAVRandom@@AEBUTrade@@AEAVLootTableContext@@@Z
     */
    virtual int apply(class ItemInstance &, class Random &, struct Trade const &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTITEMFUNCTION
#endif
    /**
     * @symbol ?getConditions@LootItemFunction@@QEBAAEBV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::unique_ptr<class LootItemCondition>> const & getConditions() const;
    /**
     * @symbol ?deserialize@LootItemFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@@Z
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value);

//private:

private:
MCAPI static class std::unordered_map<class HashedString, class std::function<std::unique_ptr<class LootItemFunction> (class Json::Value &, std::vector<std::unique_ptr<class LootItemCondition>> &)>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::function<std::unique_ptr<class LootItemFunction> (class Json::Value &, std::vector<std::unique_ptr<class LootItemCondition>> &)>>>> const mLootingFunctions;

};