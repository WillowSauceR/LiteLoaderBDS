// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "TextObjectText.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

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
    /*0*/ virtual ~ScriptMinecraftModuleFactory();
    /*2*/ virtual class Json::Value asJsonValue() const;
    /*3*/ virtual class Json::Value resolve(struct ResolveData const &) const;
    MCAPI ScriptMinecraftModuleFactory(class ServerLevel *, class MinecraftCommands *, std::unique_ptr<class ScriptMinecraftCommonModuleFactory>);
    MCAPI static class std::unordered_map<std::string, std::unique_ptr<class IComponentFactory>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class IComponentFactory>>>> & getActorComponentFactoriesV1();
    MCAPI static std::string getModuleUUIDAsString();
    MCAPI static struct Scripting::ModuleDescriptor makeModuleDescriptorFor(struct Scripting::Version &&);

protected:

private:
    MCAPI static char const * ModuleName;
    MCAPI static class mce::UUID const ModuleUUID;

};