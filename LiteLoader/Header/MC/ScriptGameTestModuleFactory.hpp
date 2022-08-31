/**
 * @file  ScriptGameTestModuleFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Scripting.hpp"
#include "TextObjectText.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptGameTestModuleFactory.
 *
 */
class ScriptGameTestModuleFactory : public TextObjectText {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTGAMETESTMODULEFACTORY
public:
    class ScriptGameTestModuleFactory& operator=(class ScriptGameTestModuleFactory const &) = delete;
    ScriptGameTestModuleFactory(class ScriptGameTestModuleFactory const &) = delete;
    ScriptGameTestModuleFactory() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptGameTestModuleFactory();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTGAMETESTMODULEFACTORY
#endif
    /**
     * @symbol ??0ScriptGameTestModuleFactory@@QEAA@AEAVGameTestRegistry@gametest@@@Z
     */
    MCAPI ScriptGameTestModuleFactory(class gametest::GameTestRegistry &);
    /**
     * @symbol ?getModuleUUIDAsString@ScriptGameTestModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI static std::string getModuleUUIDAsString();

//private:
    /**
     * @symbol ?_addVersions@ScriptGameTestModuleFactory@@AEAAXXZ
     */
    MCAPI void _addVersions();
    /**
     * @symbol ?_generateBindings@ScriptGameTestModuleFactory@@AEAA?AUModuleBinding@Scripting@@AEBUVersion@3@_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI struct Scripting::ModuleBinding _generateBindings(struct Scripting::Version const &, bool, std::vector<std::string> const &);

private:
MCAPI static char const * ModuleName;
MCAPI static class mce::UUID ModuleUUID;

};