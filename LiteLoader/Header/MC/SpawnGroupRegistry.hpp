/**
 * @file  SpawnGroupRegistry.hpp
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
 * @brief MC class SpawnGroupRegistry.
 *
 */
class SpawnGroupRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNGROUPREGISTRY
public:
    class SpawnGroupRegistry& operator=(class SpawnGroupRegistry const &) = delete;
    SpawnGroupRegistry(class SpawnGroupRegistry const &) = delete;
    SpawnGroupRegistry() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~SpawnGroupRegistry();
    /**
     * @vtable 1
     * @symbol ?getRootKey@SpawnGroupRegistry@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getRootKey();
    /**
     * @vtable 2
     * @symbol ?getFileType@SpawnGroupRegistry@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getFileType();
    /**
     * @vtable 3
     * @symbol ?processPopulationControl@SpawnGroupRegistry@@MEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@Json@@@Z
     */
    virtual bool processPopulationControl(std::string const &, class Json::Value &);
    /**
     * @vtable 4
     * @symbol ?readResourceFiles@SpawnGroupRegistry@@MEAAXAEAVResourcePackManager@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@@std@@@2@@std@@@Z
     */
    virtual void readResourceFiles(class ResourcePackManager &, class std::unordered_map<std::string, struct ActorSpawnRuleDefinition, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct ActorSpawnRuleDefinition>>> &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNGROUPREGISTRY
#endif
    /**
     * @symbol ??0SpawnGroupRegistry@@QEAA@AEAVResourcePackManager@@@Z
     */
    MCAPI SpawnGroupRegistry(class ResourcePackManager &);
    /**
     * @symbol ?getSpawnGroup@SpawnGroupRegistry@@QEBAPEBVSpawnGroupData@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class SpawnGroupData const * getSpawnGroup(std::string const &) const;

};