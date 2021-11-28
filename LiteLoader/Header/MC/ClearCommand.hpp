// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ClearCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ClearCommand {
#include "Extra/ClearCommandAPI.hpp"
public:
    virtual ~ClearCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};