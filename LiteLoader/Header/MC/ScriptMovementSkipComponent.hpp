// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MovementScriptActorComponent.hpp"
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptMovementSkipComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptMovementSkipComponent : public MovementScriptActorComponent {
#include "Extra/ScriptMovementSkipComponentAPI.hpp"
public:
    virtual ~ScriptMovementSkipComponent();

public:
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptMovementSkipComponent> bind(struct Scripting::Version);
};