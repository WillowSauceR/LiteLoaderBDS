// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptNavigationFlyComponentFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptNavigationFlyComponentFactory {
#include "Extra/ScriptNavigationFlyComponentFactoryAPI.hpp"
public:
    virtual ~ScriptNavigationFlyComponentFactory();
    virtual class Scripting::StrongObjectHandle createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
    virtual bool hasComponent(class WeakEntityRef);
};