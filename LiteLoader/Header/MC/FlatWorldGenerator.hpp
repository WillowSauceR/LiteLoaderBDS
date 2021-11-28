// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FlatWorldGeneratorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FlatWorldGenerator {
#include "Extra/FlatWorldGeneratorAPI.hpp"

public:
    MCAPI FlatWorldGenerator(class Dimension&, unsigned int, class Json::Value const&);


private:
    MCAPI void _generatePrototypeBlockValues(class FlatWorldGeneratorOptions const&, short);
};