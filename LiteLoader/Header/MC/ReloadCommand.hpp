// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ReloadCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ReloadCommand {
#include "Extra/ReloadCommandAPI.hpp"
public:
    virtual ~ReloadCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};