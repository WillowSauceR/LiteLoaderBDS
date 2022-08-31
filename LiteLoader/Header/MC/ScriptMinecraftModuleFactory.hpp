/**
 * @file  ScriptMinecraftModuleFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "ScriptModuleMinecraft.hpp"
#include "Scripting.hpp"
#include "TextObjectText.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptMinecraftModuleFactory.
 *
 */
class ScriptMinecraftModuleFactory : public TextObjectText {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTMODULEFACTORY
public:
    class ScriptMinecraftModuleFactory& operator=(class ScriptMinecraftModuleFactory const &) = delete;
    ScriptMinecraftModuleFactory(class ScriptMinecraftModuleFactory const &) = delete;
    ScriptMinecraftModuleFactory() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptMinecraftModuleFactory();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMINECRAFTMODULEFACTORY
#endif
    /**
     * @symbol ??0ScriptMinecraftModuleFactory@@QEAA@PEAVServerLevel@@@Z
     */
    MCAPI ScriptMinecraftModuleFactory(class ServerLevel *);
    /**
     * @symbol ?getActorComponentFactories@ScriptMinecraftModuleFactory@@SAAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIComponentFactory@ScriptModuleMinecraft@@U?$default_delete@VIComponentFactory@ScriptModuleMinecraft@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIComponentFactory@ScriptModuleMinecraft@@U?$default_delete@VIComponentFactory@ScriptModuleMinecraft@@@std@@@2@@std@@@2@@std@@XZ
     */
    MCAPI static class std::unordered_map<std::string, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>>>> & getActorComponentFactories();
    /**
     * @symbol ?getModuleUUIDAsString@ScriptMinecraftModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI static std::string getModuleUUIDAsString();
    /**
     * @symbol ?makeModuleDescriptorFor@ScriptMinecraftModuleFactory@@SA?AUModuleDescriptor@Scripting@@UVersion@3@@Z
     */
    MCAPI static struct Scripting::ModuleDescriptor makeModuleDescriptorFor(struct Scripting::Version);

//private:
    /**
     * @symbol ?_generateBindings@ScriptMinecraftModuleFactory@@AEAA?AUModuleBinding@Scripting@@AEBUVersion@3@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI struct Scripting::ModuleBinding _generateBindings(struct Scripting::Version const &, bool, std::vector<std::string> const &);

private:
MCAPI static char const * ModuleName;
MCAPI static class mce::UUID const ModuleUUID;

};