/**
 * @file  ScriptPluginUtils.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptPluginUtils.
 *
 */
namespace ScriptPluginUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?CreateRuntimeByType@ScriptPluginUtils@@YA?AV?$unique_ptr@VIRuntime@Scripting@@U?$default_delete@VIRuntime@Scripting@@@std@@@std@@W4ScriptRuntimeType@@AEAVLifetimeRegistry@Scripting@@PEAVDependencyLocator@6@@Z
     * @hash   -1107786420
     */
    MCAPI std::unique_ptr<class Scripting::IRuntime> CreateRuntimeByType(enum ScriptRuntimeType, class Scripting::LifetimeRegistry &, class Scripting::DependencyLocator *);
    /**
     * @symbol ?GetRuntimeType@ScriptPluginUtils@@YA?AW4ScriptRuntimeType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -832862568
     */
    MCAPI enum ScriptRuntimeType GetRuntimeType(std::string const &);
    /**
     * @symbol ?GetRuntimeTypeFromFileExtension@ScriptPluginUtils@@YA?AW4ScriptRuntimeType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1981121244
     */
    MCAPI enum ScriptRuntimeType GetRuntimeTypeFromFileExtension(std::string const &);
    /**
     * @symbol ?INTERNAL_RELEASE@ScriptPluginUtils@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1632828223
     */
    MCAPI extern std::string const INTERNAL_RELEASE;
    /**
     * @symbol ?JAVA_SCRIPT_RUNTIME_EXTENSION@ScriptPluginUtils@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   753113983
     */
    MCAPI extern std::string const JAVA_SCRIPT_RUNTIME_EXTENSION;
    /**
     * @symbol ?JAVA_SCRIPT_RUNTIME_NAME@ScriptPluginUtils@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -145948671
     */
    MCAPI extern std::string const JAVA_SCRIPT_RUNTIME_NAME;
    /**
     * @symbol ?SanitizeRuntimeName@ScriptPluginUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     * @hash   724422454
     */
    MCAPI std::string SanitizeRuntimeName(std::string const &);

};