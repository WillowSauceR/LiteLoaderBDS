// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScoreboardIdAPI.hpp"
#undef EXTRA_INCLUDE_PART
struct ScoreboardId {
#include "Extra/ScoreboardIdAPI.hpp"

public:
    MCAPI class IdentityDefinition const& getIdentityDef() const;
    MCAPI bool operator!=(struct ScoreboardId const&);
    MCAPI bool operator==(struct ScoreboardId const&);
    MCAPI struct ScoreboardId& operator=(struct ScoreboardId const&);
    MCAPI ScoreboardId(__int64);
    MCAPI ScoreboardId();
    MCAPI ScoreboardId(struct ScoreboardId const&);
    MCAPI unsigned __int64 getHash() const;
    MCAPI bool isValid() const;

    MCAPI static struct ScoreboardId INVALID;
};