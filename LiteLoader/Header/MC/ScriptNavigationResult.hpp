// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct ScriptNavigationResult {

#define AFTER_EXTRA
// Add Member There
public:
    bool mPathIsFull;
    std::vector<BlockPos> mPath;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTNAVIGATIONRESULT
public:
    struct ScriptNavigationResult& operator=(struct ScriptNavigationResult const &) = delete;
    ScriptNavigationResult(struct ScriptNavigationResult const &) = delete;
    ScriptNavigationResult() = delete;
#endif

public:
    MCAPI ~ScriptNavigationResult();

protected:

private:

};